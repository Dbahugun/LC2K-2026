//Bubble sort 7 fast test, the detailed one.
/* verilator lint_off UNUSED */

`timescale 1ns/1ps

module uart_tb;

logic clk;
logic rst;
logic ovf;
logic done;
logic txOut;
logic resetLEDBlank;

top_sim_uart dut (
    .clk(clk),
    .resetButton(rst),
    .txBit(txOut),
    .ovf(ovf),
    .done(done),
    .resetLED(resetLEDBlank)
);

initial clk = 0;
always #25 clk <= ~clk;   // 50ns period

localparam int MAX_CYCLES = 2000;
localparam int UART_PASS_CYCLES = 5*9 * 13 * 10 * 234;
localparam int UART_WAIT_CYCLES = UART_PASS_CYCLES + 27500;

task print_registers;
    $display("r0 = %0d (0x%08X)", dut.reg_file.registers[0], dut.reg_file.registers[0]);
    $display("r1 = %0d (0x%08X)", dut.reg_file.registers[1], dut.reg_file.registers[1]);
    $display("r2 = %0d (0x%08X)", dut.reg_file.registers[2], dut.reg_file.registers[2]);
    $display("r3 = %0d (0x%08X)", dut.reg_file.registers[3], dut.reg_file.registers[3]);
    $display("r4 = %0d (0x%08X)", dut.reg_file.registers[4], dut.reg_file.registers[4]);
    $display("r5 = %0d (0x%08X)", dut.reg_file.registers[5], dut.reg_file.registers[5]);
    $display("r6 = %0d (0x%08X)", dut.reg_file.registers[6], dut.reg_file.registers[6]);
    $display("r7 = %0d (0x%08X)", dut.reg_file.registers[7], dut.reg_file.registers[7]);
    $display("PC = %0d", dut.PC_File.PC);
endtask

task do_reset;
    rst = 0;
    repeat(1) @(posedge clk);
    rst = 1;
endtask

task run_until_halt(input int run_number);
    automatic int cycle_count;
    cycle_count = 0;
    while (!(rst && dut.pcDisable) && cycle_count < MAX_CYCLES) begin
        @(posedge clk);
        cycle_count++;
    end
    if (cycle_count >= MAX_CYCLES) begin
        $display("RUN %0d: TIMEOUT after %0d cycles, halt never fired", run_number, cycle_count);
    end else begin
        $display("RUN %0d: HALT detected at time %0t (cycle %0d)", run_number, $time, cycle_count);
    end
    print_registers();
endtask

task automatic uart_receive_byte(output [7:0] byte_out);
    integer i;
    @(negedge txOut);
    repeat (117) @(posedge clk);
    repeat (234) @(posedge clk);
    for (i = 0; i < 8; i++) begin
        byte_out[i] = txOut;
        repeat (234) @(posedge clk);
    end
endtask

logic [7:0] rx_byte;
integer byte_count;
integer line_count;
string line_buf = "";

initial begin
    byte_count = 0;
    line_count = 0;
    forever begin
        uart_receive_byte(rx_byte);
        if (rx_byte == 8'h0A) begin
            $display("[%0t ns] UART: %s", $time, line_buf);
            line_buf = "";
            line_count++;
        end
        else begin
            line_buf = {line_buf, string'(rx_byte)};
        end
        byte_count++;
    end
end

initial begin
    $dumpfile("sim/fibonacci_uart_latest.vcd");
    $dumpvars(0, uart_tb);

    do_reset();
    run_until_halt(1);

    $display("Waiting for run 1's UART pass to complete...");
    repeat(UART_WAIT_CYCLES) @(posedge clk);
    $display("Lines received so far: %0d (expect 9 for C0+R1-R7+PC)", line_count);

    do_reset();
    run_until_halt(2);

    $display("Waiting for run 2's UART pass to complete...");
    repeat(UART_WAIT_CYCLES) @(posedge clk);

    $display("Both runs complete. Total lines received: %0d", line_count);
    $finish;
end

endmodule
