//Data mem initialization goes as follows

//Copyright (C)2014-2026 Gowin Semiconductor Corporation.
//All rights reserved.
//File Title: Template file for instantiation
//Tool Version: V1.9.12.02_SP2 (64-bit)
//IP Version: 1.0
//Part Number: GW2AR-LV18QN88PC8/I7
//Device: GW2AR-18
//Created Time: Sat Jul 11 16:02:54 2026

//Change the instance name and port connections to the signal names
//--------Copy here to design--------

    /*data_mem your_instance_name(
        .douta(douta), //output [31:0] douta
        .doutb(doutb), //output [31:0] doutb
        .clka(clka), //input clka
        .ocea(ocea), //input ocea
        .cea(cea), //input cea
        .reseta(reseta), //input reseta
        .wrea(wrea), //input wrea 
        .clkb(clkb), //input clkb
        .oceb(oceb), //input oceb
        .ceb(ceb), //input ceb
        .resetb(resetb), //input resetb
        .wreb(wreb), //input wreb
        .ada(ada), //input [7:0] ada
        .dina(dina), //input [31:0] dina
        .adb(adb), //input [7:0] adb
        .dinb(dinb) //input [31:0] dinb
    );*/

//--------Copy end-------------------

//Control pROM initialization goes as follows

//Copyright (C)2014-2026 Gowin Semiconductor Corporation.
//All rights reserved.
//File Title: Template file for instantiation
//Tool Version: V1.9.12.02_SP2 (64-bit)
//IP Version: 1.0
//Part Number: GW2AR-LV18QN88PC8/I7
//Device: GW2AR-18
//Created Time: Sat Jul 11 17:24:21 2026

//Change the instance name and port connections to the signal names
//--------Copy here to design--------

    /*control_rom your_instance_name(
        .dout(dout), //output [7:0] dout
        .clk(clk), //input clk
        .oce(oce), //input oce
        .ce(ce), //input ce
        .reset(reset), //input reset
        .ad(ad) //input [2:0] ad
    );*/

//--------Copy end-------------------


//Start module here, figure out how to do regular SV arrays for testbench.
module top 
    #(parameter W = 32)(
        //output logic [W-1:0] placeholder
        input logic resetButton
    );


    //1. Need to check if this is fine. In theory, I believe top.sv is purely combinational and coordinates the rest of the modules itself.
    logic clk;
    logic [2:0] regA_loc;
    logic [2:0] regB_loc;
    logic [2:0] regDest_loc;
    logic [W-1:0] regA_val;
    logic [W-1:0] regB_val;
    logic [W-1:0] regDest_val;
    logic [2:0] opcode;
    logic [15:0] offset;
    logic reset;
    logic [7:0] PC;     //How do I tell R vs I vs J vs O type formatting? Do I just populate all fields and multiplex from there?
    logic [7:0] newPC;
    logic [7:0] plusOne;
    logic [7:0] beq;
    logic [7:0] jalr;
    logic branched;
    logic jumped;
    logic gw_gnd;    //Gowin IP alias for 1'b0;

    initial regA_loc = 3'b0;
    initial regB_loc = 3'b0;
    initial regDest_loc = 3'b0;
    initial regA_val = 32'b0;
    initial regB_val = 32'b0;
    initial regDest_val = 32'b0;
    initial opcode = 3'b0;
    initial offset = 16'b0;
    initial reset = 1'b0;
    initial PC = 8'b0;
    initial newPC = 8'b0;
    initial plusOne = 8'b0;
    initial beq = 8'b0;
    initial jalr = 8'b0;
    initial branched = 1'b0;
    initial jumped = 1'b0;

    //Truncated for my self imposed memory depth of 256 words
    assign plusOne = PC + 8'b1;
    assign beq = PC + offset[7:0] + 1;
    assign jalr = regA_val[7:0];
    assign gw_gnd = 1'b0;

    
    pc PC_File(
        .clk(clk),
        .reset(reset),
        .branch(branched),
        .jump(jumped),
        .beq(beq),
        .jalr(jalr),
        .plusOne(plusOne),
        .newPC(newPC)
    );
    logic [W-1:0] fullInstruction;
    //2. How do I get the PC to work before everything starts?


    //Here is my interpretation of the commands:
    //.dout: Simple the 32 bits out
    //.clk: just the clock
    //.oce: output clock, only needed if pipelining
    //.ce: input clock, only need if pipelining too I believe
    //.reset: simple, I tie to reset button
    //.ad: Mandatory reporting of whether the operation was successful, unneeded for single cycle

    instruction_mem instruction(
        .dout(fullInstruction), //output [31:0] dout
        .clk(clk), //input clk
        .oce(1'b1), //input oce
        .ce(1'b1), //input ce
        .reset(reset), //input reset
        .ad(PC) //input [7:0] ad
    );

    control_rom your_instance_name(
        .dout(dout), //output [7:0] dout
        .clk(clk), //input clk
        .oce(oce), //input oce
        .ce(ce), //input ce
        .reset(reset), //input reset
        .ad(ad) //input [2:0] ad
    );    

    always_comb begin
        
    end
    
    
    always_ff begin
        
    end
    
endmodule
