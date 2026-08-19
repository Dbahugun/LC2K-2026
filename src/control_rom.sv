//IP Core Generator snippet goes below. Allegedly I call this and never worry about it again, but there are errors?
//Currently Loaded with: fibonacci

//Copyright (C)2014-2026 Gowin Semiconductor Corporation.
//All rights reserved.
//File Title: IP file
//Tool Version: V1.9.12.02_SP2 (64-bit)
//IP Version: 1.0
//Part Number: GW2AR-LV18QN88PC8/I7
//Device: GW2AR-18
//Created Time: Sun Aug  9 15:55:46 2026

/*
module control_rom (dout, clk, oce, ce, reset, ad);

output [7:0] dout;
input clk;
input oce;
input ce;
input reset;
input [2:0] ad;

wire [23:0] prom_inst_0_dout_w;
wire gw_gnd;

assign gw_gnd = 1'b0;

pROM prom_inst_0 (
    .DO({prom_inst_0_dout_w[23:0],dout[7:0]}),
    .CLK(clk),
    .OCE(oce),
    .CE(ce),
    .RESET(reset),
    .AD({gw_gnd,gw_gnd,gw_gnd,gw_gnd,gw_gnd,gw_gnd,gw_gnd,gw_gnd,ad[2:0],gw_gnd,gw_gnd,gw_gnd})
);

defparam prom_inst_0.READ_MODE = 1'b0;
defparam prom_inst_0.BIT_WIDTH = 8;
defparam prom_inst_0.RESET_MODE = "ASYNC";
defparam prom_inst_0.INIT_RAM_00 = 256'h000000000000000000000000000000000000000000000000000030080312BCB8;

endmodule //control_rom
*/

//New controller with SSRAM
//Copyright (C)2014-2026 Gowin Semiconductor Corporation.
//All rights reserved.
//File Title: IP file
//Tool Version: V1.9.12.02_SP2 (64-bit)
//IP Version: 1.0
//Part Number: GW2AR-LV18QN88PC8/I7
//Device: GW2AR-18
//Created Time: Tue Aug 18 22:53:51 2026

module control_rom (dout, ad);

output [7:0] dout;
input [2:0] ad;

wire gw_gnd;

assign gw_gnd = 1'b0;

ROM16 rom16_inst_0 (
    .DO(dout[0]),
    .AD({gw_gnd,ad[2:0]})
);

defparam rom16_inst_0.INIT_0 = 16'h0008;

ROM16 rom16_inst_1 (
    .DO(dout[1]),
    .AD({gw_gnd,ad[2:0]})
);

defparam rom16_inst_1.INIT_0 = 16'h000C;

ROM16 rom16_inst_2 (
    .DO(dout[2]),
    .AD({gw_gnd,ad[2:0]})
);

defparam rom16_inst_2.INIT_0 = 16'h0002;

ROM16 rom16_inst_3 (
    .DO(dout[3]),
    .AD({gw_gnd,ad[2:0]})
);

defparam rom16_inst_3.INIT_0 = 16'h0013;

ROM16 rom16_inst_4 (
    .DO(dout[4]),
    .AD({gw_gnd,ad[2:0]})
);

defparam rom16_inst_4.INIT_0 = 16'h0027;

ROM16 rom16_inst_5 (
    .DO(dout[5]),
    .AD({gw_gnd,ad[2:0]})
);

defparam rom16_inst_5.INIT_0 = 16'h0023;

ROM16 rom16_inst_6 (
    .DO(dout[6]),
    .AD({gw_gnd,ad[2:0]})
);

defparam rom16_inst_6.INIT_0 = 16'h0000;

ROM16 rom16_inst_7 (
    .DO(dout[7]),
    .AD({gw_gnd,ad[2:0]})
);

defparam rom16_inst_7.INIT_0 = 16'h0003;

endmodule //control_prom
