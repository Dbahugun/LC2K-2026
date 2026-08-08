//Testbench for the entire LC2K processor. Utilizes a version of top.sv that uses simulated data memory instead of the gowin stubs, since those don't compile. This one just spams reset
/* verilator lint_off UNUSED */

`timescale 1us/1ns

module top_tb;

logic clk;
logic rst;
logic ovf;
logic done;

top_sim dut (
    .clk(clk),
    .resetButton(rst),
    .ovf(ovf),
    .done(done)
);

initial clk = 0;
always #5 clk <= ~clk;

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

initial begin
    $dumpfile("sim/top.vcd");
    $dumpvars(0, top_tb);

    rst = 0;                        // resetButton=0 → reset=1, processor held in reset
    repeat(4) @(posedge clk);
    rst = 1;                        // resetButton=1 → reset=0, processor released

    repeat(50000) @(posedge clk);
    $display("TIMEOUT: halt never fired after 50000 cycles");
    print_registers();
    $finish;
end

always @(posedge clk) begin
    if (rst && dut.pcDisable) begin  // rst=1 means we're out of reset
        $display("HALT detected at time %0t", $time);
        print_registers();
        $finish;
    end
end

endmodule
