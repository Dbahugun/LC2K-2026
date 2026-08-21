`timescale 1ns/1ps
/* verilator lint_off UNUSED */
//
// fiveloads_tb.sv -- minimal execution check for the five-loads program.
//
// Purpose: answer one question, does the datapath execute correctly in
// simulation. No UART decode, no VCD, no second run. If this passes and the
// board still says nothing, the fault is outside the datapath.
//
// Expected result for fiveLoads:
//     R1 = 0x11111111   (T1 = R1)
//     R2 = 0x33333333   (T2 = R1 + R2)
//     PC = 5
//
// Reset polarity note: top_sim_uart does `assign reset = !resetButton`, so
// rst=0 asserts reset and rst=1 releases it. That inversion is the thing
// under suspicion on hardware; this bench drives the sim wrapper as written.
//
// Build (single line, from src/):
//   $ verilator --binary --timing --timescale-override 1ns/1ps
//     -Wno-DECLFILENAME -Wno-UNUSEDSIGNAL alu.sv pc.sv register_file.sv
//     uart.sv instruction_mem_sim.sv control_rom_sim.sv data_mem.sv
//     top_sim_uart.sv fiveloads_tb.sv -o simfive --top-module fiveloads_tb

module fiveloads_tb;

    localparam int MAX_CYCLES = 2000;

    logic clk = 1'b0;
    logic rst;
    logic ovf, done, txOut, resetLEDBlank;

    top_sim_uart dut (
        .clk         (clk),
        .resetButton (rst),
        .txBit       (txOut),
        .ovf         (ovf),
        .done        (done),
        .resetLED    (resetLEDBlank)
    );

    always #25 clk = ~clk;   // 50 ns period

    int    cycles = 0;
    int    errs   = 0;
    logic  halted = 1'b0;

    task automatic expect32(input string name,
                            input logic [31:0] got,
                            input logic [31:0] want);
        if (got === want)
            $display("  PASS  %-3s = 0x%08X", name, got);
        else begin
            $display("  FAIL  %-3s = 0x%08X   expected 0x%08X", name, got, want);
            errs++;
        end
    endtask

    initial begin
        $display("=== fiveloads_tb ===");

        // hold reset, then release
        rst = 1'b0;
        repeat (4) @(posedge clk);
        rst = 1'b1;
        $display("reset released at %0t", $time);

        // run until halt or timeout
        while (!dut.pcDisable && cycles < MAX_CYCLES) begin
            @(posedge clk);
            cycles++;
        end
        halted = dut.pcDisable;

        if (!halted)
            $display("TIMEOUT: halt never asserted after %0d cycles", MAX_CYCLES);
        else
            $display("HALT at cycle %0d (t=%0t)", cycles, $time);

        // state dump
        $display("");
        $display("--- register file ---");
        for (int i = 0; i < 8; i++)
            $display("  R%0d = 0x%08X  (%0d)", i,
                     dut.reg_file.registers[i],
                     $signed(dut.reg_file.registers[i]));
        $display("  PC = %0d", dut.PC_File.PC);
        $display("  pcDisable = %0b", dut.pcDisable);
        $display("  overflow  = %0b", dut.overflow);

        // checks
        $display("");
        $display("--- five-loads expectations ---");
        expect32("R1", dut.reg_file.registers[1], 32'h11111111);
        expect32("R2", dut.reg_file.registers[2], 32'h33333333);
        if (dut.PC_File.PC === 8'd5)
            $display("  PASS  PC  = %0d", dut.PC_File.PC);
        else begin
            $display("  FAIL  PC  = %0d   expected 5", dut.PC_File.PC);
            errs++;
        end
        if (!halted) errs++;

        $display("");
        if (errs == 0)
            $display("RESULT: PASS");
        else
            $display("RESULT: FAIL - %0d problem(s)", errs);
        $finish;
    end

endmodule
