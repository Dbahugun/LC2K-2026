/* verilator lint_off UNUSED */
//Sim versions of the files
module control_rom_sim (dout, clk, oce, ce, reset, ad);

output [7:0] dout;
input clk;
input oce;
input ce;
input reset;
input [2:0] ad;

logic [7:0] control_rom [7:0];
initial $readmemh("/home/dbahugun/LC2K-2026/docs/controlPromSim.mi", control_rom);

assign dout = control_rom[ad];

endmodule
