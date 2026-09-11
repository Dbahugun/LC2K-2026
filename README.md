# LC2K-2026

**A single-cycle LC2K CPU, built from scratch and brought up on real hardware — Tang Nano 20K (Gowin GW2AR-18)**

Dhruv Bahuguna · Summer 2026 · RTL portfolio project

---

## Overview

LC2K-2026 is a from-scratch implementation of the LC2K instruction set architecture (from the University of Michigan's EECS 370) as a single-cycle processor, targeting the Tang Nano 20K FPGA. The project spans the full stack of a hardware build: RTL design, simulation/verification, synthesis and timing closure, physical bring-up, and a custom display/UART front end, built to be a portfolio piece for chip design and computer architecture roles.

## Status

| Stage | Status |
|---|---|
| RTL design (datapath, control, ALU, register file, UART) | ✅ Complete |
| Simulation & verification (Verilator, GTKWave) | ✅ Complete — full regression passing |
| Memory architecture migration (BSRAM → LUT-RAM) | ✅ Complete |
| Synthesis/timing closure (GOWIN EDA, STA, Fmax) | 🔄 In progress |
| FPGA bring-up (openFPGALoader flash & hardware verify) | 🔄 In progress — debugging flashed board |
| UART output | ✅ Implemented, pending post-migration hardware re-verify |
| MAX7219 / LCD display system | ⏳ Planned |
| Final assembly & enclosure | ⏳ Planned |

## Architecture

- **ISA:** LC2K, a 32-bit 8-instruction ISA, with an 8-bit word-addressed PC (increments by 1).
- **Datapath:** Fully combinational from register file output through to writeback; `always_ff` is used only at write points (PC and register file writes).
- **Register file:** Flip-flop array, synchronous write, combinational read. R0 is hardwired to zero and never written, synthesizes to 224 FFs rather than 256, which the Gowin toolchain correctly optimizes.
- **ALU:** Single `case`-based unit supporting `+` and `~(a|b)`; branch equality uses a dedicated comparator rather than reusing the ALU; supports debugging flags such as zero, equal, and overflow
- **Memory:** Originally implemented on hardened BSRAM primitives; migrated to SSRAM and LUT-based distributed RAM (ROM16 for instruction memory/control ROM, RAM16S for data memory) after discovering a vendor-primitive incompatibility with single-cycle execution (see [Key Finding](#key-finding-the-bsram-bug) below). This is the most likely source of the hardware errors and is being investigated currently.
- **Clock:** Targeting 27 MHz for margin; if static timing analysis shows negative slack post-migration, the design will fall back to a divided-down clock rather than compromising the single-cycle model. Currently, the projected Fmax is 76 MHz from GOWIN PNR and STA reports.
- **Assembler** Hand-wrote an LC2K assembler, verified it with public outputs for common programs such as Bubble sort, GCD, and Fibonacci, and used it to write data mem, instruction mem, and control pROM initialization files.
- **Demo** Assembly programs use delay loops to slow down the calculations so they can be captured at 115200 baud and shown live.

## Key Finding: The BSRAM Bug

One of the core engineering results of this project: Gowin's BSRAM and DPB primitives drive their output from an internal register (`bp_reg`) that is loaded from the underlying array on `posedge CLK`, even in "bypass" mode, which only bypasses a *second* register stage from the pipeline, whereas I needed a purely combinational read. There is no true zero-latency read path, which is fundamentally incompatible with a single-cycle datapath that assumes combinational memory reads, so I had to look for alternatives such as SSRAM and manual LUT instantiation, which are more inefficient.

This was traced directly to Gowin's `prim_sim.v` simulation model rather than inferred from symptoms, and explains several downstream bugs (PC/C0 off-by-one, register-destination shift, `.mi` file changes having no visible effect). The fix: migrating all three memories to SSRAM and LUT-based distributed RAM trades some timing margin (a longer combinational critical path) for correctness, with before/after Fmax numbers recorded as part of the story.

## Verification

All verification is done in simulation before any hardware flash, using Verilator with locked regression checkpoints:

- **Fibonacci:** R2 = 1,836,311,903, R6 = 46, R3 = 0xB11924E1
- **GCD:** R1 = 270, R2 = 192, R3 = 6
- **Bubble sort (7 elements):** R1–R7 fully sorted

Test programs include Fibonacci (fast & slow variants), bubble sort (fast, slow, 8-element, and 7-element variants), and GCD; 6 assembly programs in total, each with its own instruction/data memory pair.

## Repository Layout

```
LC2K-2026/
├── src/     # RTL source (SystemVerilog)
├── tb/      # Testbenches
├── sim/     # Simulation outputs / Verilator artifacts
├── docs/    # Design notes and documentation
└── build/   # Synthesis/bitstream build outputs
```

## Toolchain

- **Synthesis / P&R:** Gowin EDA Pro (Windows)
- **Simulation:** Verilator 5.049 + GTKWave, via OSS-CAD-Suite (WSL2)
- **Flashing:** openFPGALoader (`tangnano20k`)
- **Editor:** VS Code with Verilog-HDL and LC2K extensions
- **Assembler:** Custom two-pass C assembler, `$readmemh`-compatible output

## Hardware

- **FPGA:** Tang Nano 20K (Gowin GW2AR-LV18QN88PC8/I7)
- **UART:** Onboard BL616 USB-CDC bridge, 115200 baud, 8N1
- **Display (planned):** 2× MAX7219 8-digit modules (16 digits total) for decimal output via a double-dabble binary-to-decimal converter, plus a SparkFun SerLCD for streaming ASCII output

## Build Sequence (current plan)

1. ✅ Migrate all memories to ROM16/RAM16S
2. 🔄 Re-synthesize and record fresh STA/Fmax measurements
3. ⏳ Five-loads hardware test (T1=R1, T2=R1+R2, C0=PC=5)
4. ⏳ Full simulation regression re-confirmation
5. ⏳ Flash and verify UART on hardware
6. ⏳ Order MAX7219 display components
7. ⏳ Finalize `.mi` files for all 5 programs
8. ⏳ Implement MAX7219 SPI driver + double-dabble converter
9. ⏳ Final flash, verify, and physical assembly

## Extensions (future plan)
1. LCD display
2. Pipeline
3. Cache
4. Memory-mapped I/O

## Why This Project

This build is meant to demonstrate the full chip-design workflow end-to-end: RTL implementation, simulation verification, real hardware/vendor-primitive debugging, timing closure trade-offs, and a polished physical demo, so it is still very much in progress. The hardware flashing errors and BSRAM output-register discovery in particular, although very discouraging at first, taught me the importance of debugging at the vendor-primitive level rather than treating the FPGA toolchain as a black box that I can take for granted.

---

*Built as a portfolio project targeting chip design / computer architecture roles.*

*P.S. This is my first project of any kind, so please feel free to reach out with constructive criticism or tips for future projects!*
