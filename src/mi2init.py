#!/usr/bin/env python3
"""
mi2init.py -- Gowin SSRAM memory-initialisation patcher.

The Gowin IP Core Generator refuses a .mi file for Shadow-Memory single-port
RAM (RAM16S), even though the underlying RAM16S4 primitive carries
INIT_0..INIT_3. When no .mi is supplied it emits no INIT defparams at all, so
this script can either rewrite existing defparams or insert missing ones.

It makes NO assumption about instance ordering. It traces the wrapper's own
MUX2 tree backwards from each dout bit, recording which address bits select
which branch, to determine exactly which 16-word group each primitive holds.

Usage:
    # verify a wrapper the tool filled in itself (ROM16 with a .mi loaded)
    python3 mi2init.py --mi data.mi --verify data_mem.v

    # fill in a RAM16S wrapper, with or without existing defparams
    python3 mi2init.py --mi data.mi --patch data_mem.v -o data_mem_init.v

    # print the derived instance -> (data bit, word group) mapping
    python3 mi2init.py --mi data.mi --map data_mem.v
"""

import argparse
import re
import sys

LEAF_PRIMS = ("ROM16", "RAM16S1", "RAM16S2", "RAM16S4")
PRIM_BITS = {"ROM16": 1, "RAM16S1": 1, "RAM16S2": 2, "RAM16S4": 4}
INTRA = 4  # each primitive spans 16 words, i.e. address bits [3:0]


def read_mi(path):
    depth = width = None
    fmt = "Hex"
    words = []
    with open(path) as f:
        for raw in f:
            line = raw.strip()
            if not line:
                continue
            if line.startswith("#"):
                key, _, val = line[1:].partition("=")
                key = key.strip().lower()
                if key == "address_depth":
                    depth = int(val)
                elif key == "data_width":
                    width = int(val)
                elif key == "file_format":
                    fmt = val.strip()
                continue
            words.append(int(line, 16 if fmt.lower() == "hex" else 2))
    if depth is None or width is None:
        sys.exit("error: .mi is missing #Address_depth or #Data_width")
    if len(words) < depth:
        words.extend([0] * (depth - len(words)))
    elif len(words) > depth:
        sys.exit(f"error: .mi declares depth {depth} but has {len(words)} data lines")
    return words, depth, width


INST_RE = re.compile(
    r"\b(" + "|".join(LEAF_PRIMS) + r")\s+(\w+)\s*\((.*?)\)\s*;", re.S)
MUX_RE = re.compile(r"\bMUX2\s+(\w+)\s*\((.*?)\)\s*;", re.S)
PORT_RE = re.compile(r"\.(\w+)\s*\(\s*([^()]*?)\s*\)")
BITSEL_RE = re.compile(r"^(\w+)\s*\[\s*(\d+)\s*(?::\s*(\d+)\s*)?\]$")


def strip_comments(src):
    src = re.sub(r"/\*.*?\*/", "", src, flags=re.S)
    return re.sub(r"//[^\n]*", "", src)


def parse_conn(text):
    text = text.strip()
    m = BITSEL_RE.match(text)
    if m:
        hi = int(m.group(2))
        lo = int(m.group(3)) if m.group(3) is not None else hi
        return m.group(1), hi, lo
    return text, None, None


def parse_wrapper(path):
    raw = open(path).read()
    src = strip_comments(raw)

    leaves = []
    net_driver = {}
    for m in INST_RE.finditer(src):
        prim, inst, body = m.group(1), m.group(2), m.group(3)
        ports = {p.group(1): p.group(2) for p in PORT_RE.finditer(body)}
        do = ports.get("DO")
        if do is None:
            continue
        idx = len(leaves)
        leaves.append((prim, inst))
        base, hi, lo = parse_conn(do)
        nbits = PRIM_BITS[prim]
        if hi is None:
            for b in range(nbits):
                net_driver[(base, b)] = ("leaf", idx, b)
        else:
            for local, b in enumerate(range(lo, hi + 1)):
                net_driver[(base, b)] = ("leaf", idx, local)

    muxes = []
    for m in MUX_RE.finditer(src):
        body = m.group(2)
        ports = {p.group(1): p.group(2) for p in PORT_RE.finditer(body)}
        if not {"O", "I0", "I1", "S0"} <= set(ports):
            continue
        idx = len(muxes)
        muxes.append((parse_conn(ports["I0"]), parse_conn(ports["I1"]),
                      parse_conn(ports["S0"])))
        ob, ohi, _ = parse_conn(ports["O"])
        net_driver[(ob, ohi if ohi is not None else 0)] = ("mux", idx, None)

    return raw, leaves, muxes, net_driver


def collect(net_driver, muxes, net, bit, sels, out, depth=0):
    if depth > 64:
        sys.exit("error: mux trace exceeded depth limit (combinational loop?)")
    drv = net_driver.get((net, bit if bit is not None else 0))
    if drv is None:
        return
    kind, idx, local = drv
    if kind == "leaf":
        out.append((idx, local, dict(sels)))
        return
    i0, i1, s0 = muxes[idx]
    sbase, sbit, _ = s0
    if sbit is None:
        sys.exit(f"error: mux select '{sbase}' is not a bit-select; cannot trace")
    collect(net_driver, muxes, i0[0], i0[1], {**sels, sbit: 0}, out, depth + 1)
    collect(net_driver, muxes, i1[0], i1[1], {**sels, sbit: 1}, out, depth + 1)


def build_map(leaves, muxes, net_driver, width, out_name="dout"):
    mapping = {}
    for b in range(width):
        hits = []
        collect(net_driver, muxes, out_name, b, {}, hits)
        if not hits:
            sys.exit(f"error: could not trace {out_name}[{b}] back to a primitive")
        for leaf_idx, local_bit, sels in hits:
            group = 0
            for abit, val in sels.items():
                group |= val << (abit - INTRA)
            mapping[(leaf_idx, local_bit)] = (b, group)
    return mapping


def init_value(words, bit, group):
    v = 0
    for w in range(16):
        idx = group * 16 + w
        if idx < len(words) and (words[idx] >> bit) & 1:
            v |= 1 << w
    return v


DEFPARAM = re.compile(
    r"^(\s*defparam\s+(\w+)\.(INIT_\d+)\s*=\s*)16'h([0-9A-Fa-f]{4})(\s*;.*)$")


def main():
    ap = argparse.ArgumentParser()
    ap.add_argument("--mi", required=True)
    ap.add_argument("--verify")
    ap.add_argument("--patch")
    ap.add_argument("--map", dest="mapfile")
    ap.add_argument("-o", "--out")
    args = ap.parse_args()

    src_path = args.verify or args.patch or args.mapfile
    if not src_path:
        sys.exit("error: give one of --verify, --patch, --map")

    words, depth, width = read_mi(args.mi)
    raw, leaves, muxes, net_driver = parse_wrapper(src_path)
    if not leaves:
        sys.exit("error: no ROM16/RAM16S primitives found in the wrapper")

    prim = leaves[0][0]
    mapping = build_map(leaves, muxes, net_driver, width)

    print(f"{args.mi}: depth={depth} width={width}")
    print(f"{src_path}: {len(leaves)} x {prim}, {len(muxes)} x MUX2, "
          f"{len(mapping)} bit-slices traced")

    expected = (depth + 15) // 16 * width
    if len(mapping) != expected:
        sys.exit(f"error: traced {len(mapping)} bit-slices but the .mi needs "
                 f"{expected}. Wrapper depth/width disagree with the .mi.")

    want = {(leaves[li][1], f"INIT_{lb}"): init_value(words, b, g)
            for (li, lb), (b, g) in mapping.items()}

    if args.mapfile:
        shown = 0
        for (li, lb) in sorted(mapping):
            b, g = mapping[(li, lb)]
            print(f"  {leaves[li][1]}.INIT_{lb}  ->  data bit {b:2d}, "
                  f"words {g*16}-{g*16+15}  =  16'h{init_value(words, b, g):04X}")
            shown += 1
            if shown >= 24:
                print(f"  ... {len(mapping)-24} more")
                break
        return

    lines = open(src_path).readlines()
    hits = []
    for i, line in enumerate(lines):
        m = DEFPARAM.match(line.rstrip("\n"))
        if m:
            hits.append((i, m.group(1), m.group(2), m.group(3),
                         m.group(4), m.group(5)))

    if args.verify:
        if len(hits) != len(want):
            sys.exit(f"error: {len(hits)} defparams present, {len(want)} expected")
        bad = 0
        for ln, _p, inst, param, old, _s in hits:
            exp = want.get((inst, param))
            if exp is None or int(old, 16) != exp:
                bad += 1
                if bad <= 10:
                    print(f"  MISMATCH line {ln+1}: {inst}.{param} = 16'h{old}"
                          + (f", expected 16'h{exp:04X}" if exp is not None
                             else " (not in traced map)"))
        if bad:
            print(f"FAIL: {bad} mismatched")
            sys.exit(1)
        print("PASS: every INIT value matches the .mi")
        return

    out_path = args.out or src_path

    if hits:
        changed = 0
        for ln, pfx, inst, param, _old, sfx in hits:
            exp = want.get((inst, param))
            if exp is None:
                continue
            new = f"{pfx}16'h{exp:04X}{sfx}\n"
            if lines[ln] != new:
                changed += 1
            lines[ln] = new
        open(out_path, "w").writelines(lines)
        print(f"rewrote {changed} existing INIT defparams -> {out_path}")
        return

    text = raw
    stripped = strip_comments(text)
    if len(stripped) != len(text):
        # keep offsets valid by working on a comment-blanked copy of equal length
        stripped = re.sub(r"/\*.*?\*/", lambda m: " " * len(m.group(0)), text, flags=re.S)
        stripped = re.sub(r"//[^\n]*", lambda m: " " * len(m.group(0)), stripped)

    inserted = 0
    for m in reversed(list(INST_RE.finditer(stripped))):
        inst = m.group(2)
        prim_i = m.group(1)
        block = []
        for n in range(PRIM_BITS[prim_i]):
            exp = want.get((inst, f"INIT_{n}"))
            if exp is None:
                continue
            block.append(f"defparam {inst}.INIT_{n} = 16'h{exp:04X};\n")
        if block:
            inserted += len(block)
            end = m.end()
            text = text[:end] + "\n\n" + "".join(block) + text[end:]
    open(out_path, "w").write(text)
    print(f"inserted {inserted} INIT defparams -> {out_path}")


if __name__ == "__main__":
    main()
