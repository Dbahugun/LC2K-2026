//IP Core Generator snippet goes below. Allegedly I call this and never worry about it again, but there are errors?
//Currently Loaded with: bubbleSort7Final top, fibonacci bottom

//Copyright (C)2014-2026 Gowin Semiconductor Corporation.
//All rights reserved.
//File Title: IP file
//Tool Version: V1.9.12.02_SP2 (64-bit)
//IP Version: 1.0
//Part Number: GW2AR-LV18QN88PC8/I7
//Device: GW2AR-18
//Created Time: Sat Aug  8 20:17:42 2026

/*module instruction_mem (dout, clk, oce, ce, reset, ad);

output [31:0] dout;
input clk;
input oce;
input ce;
input reset;
input [7:0] ad;

wire gw_gnd;

assign gw_gnd = 1'b0;

pROM prom_inst_0 (
    .DO(dout[31:0]),
    .CLK(clk),
    .OCE(oce),
    .CE(ce),
    .RESET(reset),
    .AD({gw_gnd,ad[7:0],gw_gnd,gw_gnd,gw_gnd,gw_gnd,gw_gnd})
);

defparam prom_inst_0.READ_MODE = 1'b0;
defparam prom_inst_0.BIT_WIDTH = 32;
defparam prom_inst_0.RESET_MODE = "SYNC";
defparam prom_inst_0.INIT_RAM_00 = 256'h00520004008B0001008A0000010E000C00810024008600230087002200850021;
defparam prom_inst_0.INIT_RAM_01 = 256'h000D000100CA000100CB0000012000020067000400640004001C000400250004;
defparam prom_inst_0.INIT_RAM_02 = 256'h008100250100FFEC0120000100C4001F00220004008200200084001F0100FFF3;
defparam prom_inst_0.INIT_RAM_03 = 256'h00000006018000000087002B0086002A00850029008400280083002700820026;
defparam prom_inst_0.INIT_RAM_04 = 256'h0000000CFFFFFFFB0000002D000000250000002B7FFFFFFF00000001FFFFFFFF;
defparam prom_inst_0.INIT_RAM_05 = 256'h00000000000000000000000000000000FFFFFFF80000004C0000000300000059;

endmodule //instruction_mem
*/

//Copyright (C)2014-2026 Gowin Semiconductor Corporation.
//All rights reserved.
//File Title: IP file
//Tool Version: V1.9.12.02_SP2 (64-bit)
//IP Version: 1.0
//Part Number: GW2AR-LV18QN88PC8/I7
//Device: GW2AR-18
//Created Time: Sun Aug  9 15:56:50 2026

module instruction_mem (dout, clk, oce, ce, reset, ad);

output [31:0] dout;
input clk;
input oce;
input ce;
input reset;
input [7:0] ad;

wire gw_gnd;

assign gw_gnd = 1'b0;

pROM prom_inst_0 (
    .DO(dout[31:0]),
    .CLK(clk),
    .OCE(oce),
    .CE(ce),
    .RESET(reset),
    .AD({gw_gnd,ad[7:0],gw_gnd,gw_gnd,gw_gnd,gw_gnd,gw_gnd})
);

defparam prom_inst_0.READ_MODE = 1'b0;
defparam prom_inst_0.BIT_WIDTH = 32;
defparam prom_inst_0.RESET_MODE = "ASYNC";
defparam prom_inst_0.INIT_RAM_00 = 256'h007C0007005B0007000A00030005000600050002000000010085000F0084000E;
defparam prom_inst_0.INIT_RAM_01 = 256'h000000017FFFFFFF0100FFF70035000600180002001000010180000001380001;

endmodule //instruction_mem




