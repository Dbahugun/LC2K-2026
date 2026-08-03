/* verilator lint_off UNUSED */
//Sim versions of the files
module instruction_mem_sim (dout, clk, oce, ce, reset, ad);

output [31:0] dout;
input clk;
input oce;
input ce;
input reset;
input [7:0] ad;

logic [31:0] instructionSimMem [255:0];
initial $readmemh("/home/dbahugun/LC2K-2026/docs/fibonacciInstructionSim.mi", instructionSimMem);

assign dout = instructionSimMem[ad];

endmodule
