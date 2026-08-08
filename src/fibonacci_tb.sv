//Fibonacci test, the big one. 
/* verilator lint_off UNUSED */

`timescale 1ns/1ps

module fibonacci_tb;

logic clk;
logic rst;
logic done;
logic ovf;

top_sim dut (
    .clk(clk),
    .resetButton(rst),
    .ovf(ovf),
    .done(done)
);

initial clk = 0;
always #25 clk <= ~clk;   // 50ns period

localparam int MAX_CYCLES = 2000; // short enough to stay readable in GTKWave

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
    rst = 0;                 // resetButton=0 -> reset=1, held in reset
    repeat(1) @(posedge clk);
    rst = 1;                 // resetButton=1 -> reset=0, released
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

initial begin
    $dumpfile("sim/fibonacci.vcd");
    $dumpvars(0, fibonacci_tb);

    // ---- Run 1 ----
    do_reset();
    run_until_halt(1);

    // Hold at halt for 5 extra cycles so it's visible in the waveform
    repeat(5) @(posedge clk);

    // ---- Run 2 ----
    do_reset();
    run_until_halt(2);

    $display("Both runs complete.");
    $finish;
end

endmodule
