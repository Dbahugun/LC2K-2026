#!/usr/bin/env bash
# sim.sh -- repeatable Verilator builds for LC2K-2026.
#
# Run from the directory holding the .sv files:
#     ./sim.sh datamem     unit test for the flip-flop data memory
#     ./sim.sh fiveloads   five-loads execution check (registers + PC)
#     ./sim.sh uart        full UART testbench, both runs, VCD
#
# Every invocation is recorded here rather than retyped, so a run that
# worked can be reproduced exactly.

set -euo pipefail

# The OSS-CAD-Suite environment exports VERILATOR_ROOT pointing somewhere
# Verilator disagrees with. Drop it for the duration of this script.
unset VERILATOR_ROOT

VFLAGS=(
    --binary
    --timing
    --timescale-override 1ns/1ps
    -Wno-DECLFILENAME
    -Wno-UNUSEDSIGNAL
)

# Core RTL shared by every full-processor target. data_mem.sv is the real
# hardware module, not a stub -- sim and silicon run the same source.
CORE=(
    alu.sv
    pc.sv
    register_file.sv
    uart.sv
    instruction_mem_sim.sv
    control_rom_sim.sv
    data_mem.sv
    top_sim_uart.sv
)

target="${1:-}"

case "$target" in
  datamem)
    SRC=(data_mem.sv tb_data_mem.sv)
    TOP=tb_data_mem
    OUT=simdm
    ;;
  fiveloads)
    SRC=("${CORE[@]}" fiveloads_tb.sv)
    TOP=fiveloads_tb
    OUT=simfive
    ;;
  uart)
    SRC=("${CORE[@]}" uart_tb.sv)
    TOP=uart_tb
    OUT=simuart
    mkdir -p sim
    ;;
  *)
    echo "usage: $0 {datamem|fiveloads|uart}" >&2
    exit 1
    ;;
esac

echo "=== building $TOP ==="
rm -rf obj_dir
verilator "${VFLAGS[@]}" "${SRC[@]}" -o "$OUT" --top-module "$TOP"

echo "=== running $OUT ==="
"./obj_dir/$OUT"
