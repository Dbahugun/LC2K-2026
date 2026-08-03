/* verilator lint_off UNUSED */
//Top level coordination file: Sim version
module top_sim 
    #(parameter W = 32)(
        //output logic [W-1:0] placeholder
        input logic resetButton,
        input logic clk
    );
    
    //Assorted signals
    logic gw_gnd;    //Gowin IP alias for 1'b0;
    logic pcDisable;
    logic reset;
    logic [7:0] PC;
    logic [7:0] plusOne;
    logic [7:0] beq;
    logic [7:0] jalr;
    logic branched;
    logic jumped;

    //Instruction memory signals
    logic [W-1:0] fullInstruction;
    logic [2:0] regA_loc;
    logic [2:0] regB_loc;
    logic [2:0] regDest_loc;
    logic [2:0] opcode;
    logic [15:0] offsetRaw;
    logic [W-1:0] offsetExtended;

    //Control prom signals
    logic [7:0] controlSignal;
    logic regFileReadSel;
    logic [1:0] regDataInSel;
    logic regFileWrEn;
    logic aluSel;
    logic aluMode;
    logic dataMemEn;
    logic dataMemWrEn;

    //Register file signals
    logic [W-1:0] regA_val;
    logic [W-1:0] regB_val;
    logic [W-1:0] regDest_val;

    //ALU signals
    logic [W-1:0] aluResult;
    logic zeroFlag;
    logic equal;
    logic overflow;

    //Data memory signals
    logic [W-1:0] dataMemOut;
    //For extra port, for later
    logic [W-1:0] dOutExtra;

    //MUX wires, with the notable exception of the PC mux
    logic [2:0] regFileReadMux;
    logic [W-1:0] regFileWriteMux;
    logic [W-1:0] aluMux;

    //Initializing all FFs/registers/sequential components
    /*initial regA_loc = 3'b0;
    initial pcDisable = 1'b0;
    initial regB_loc = 3'b0;
    initial regDest_loc = 3'b0;
    initial regA_val = 32'b0;
    initial regB_val = 32'b0;
    initial regDest_val = 32'b0;
    initial opcode = 3'b0;
    initial offsetRaw = 16'b0;
    initial offsetExtended = 32'b0;
    initial reset = 1'b0;
    initial PC = 8'b0;
    initial newPC = 8'b0;
    initial plusOne = 8'b0;
    initial beq = 8'b0;
    initial jalr = 8'b0;
    initial branched = 1'b0;
    initial jumped = 1'b0;*/
    
    
    //Module instantiations
    pc PC_File(
        .clk(clk),
        .reset(reset),
        .branch(branched),
        .jump(jumped),
        .beq(beq),
        .jalr(jalr),
        .plusOne(plusOne),
        .halt(pcDisable),
        .PC(PC)
    );
    
    register_file reg_file(
        .clk(clk),
        .reset(reset),
        .addressA(regA_loc),
        .addressB(regB_loc),
        .addressDest(regFileReadMux),
        .WrEn(regFileWrEn),
        .dataIn(regFileWriteMux),
        .registerA(regA_val),
        .registerB(regB_val)
    );

    alu alu(
        .numberOne(regA_val),
        .numberTwo(aluMux),
        .mode(aluMode),
        .result(aluResult),
        .zeroFlag(zeroFlag),
        .equalFlag(equal),
        .overflow(overflow)
    );

    //Here is my interpretation of the default GOWIN commands:
    //.dout: Simple the 32 bits out
    //.clk: just the clock
    //.oce: output clock, only needed if pipelining
    //.ce: input clock, only need if pipelining too I believe
    //.reset: simple, I tie to reset button
    //.ad: Input to the BSRAM block

    instruction_mem_sim instruction(
        .dout(fullInstruction), //output [31:0] dout
        .clk(clk), //input clk
        .oce(1'b1), //input oce
        .ce(1'b1), //input ce
        .reset(reset), //input reset
        .ad(PC) //input [7:0] ad
    );

    control_rom_sim control_prom(
        .dout(controlSignal), //output [7:0] dout
        .clk(clk), //input clk
        .oce(1'b1), //input oce
        .ce(1'b1), //input ce
        .reset(reset), //input reset
        .ad(opcode) //input [2:0] ad
    );

    data_mem_sim data_memory(
        .douta(dataMemOut), //output [31:0] douta
        .doutb(dOutExtra), //output [31:0] doutb
        .clka(clk), //input clka
        .ocea(1'b1), //input ocea
        .cea(1'b1), //input cea
        .reseta(reset), //input reseta
        .wrea(dataMemEn & dataMemWrEn), //input wrea 
        .clkb(clk), //input clkb
        .oceb(1'b0), //input oceb
        .ceb(1'b0), //input ceb
        .resetb(reset), //input resetb
        .wreb(1'b0), //input wreb
        .ada(aluResult[7:0]), //input [7:0] ada
        .dina(regB_val), //input [31:0] dina
        .adb(8'b0), //input [7:0] adb
        .dinb(32'b0) //input [31:0] dinb
    );

    //Combinational work, truncated for my self imposed memory depth of 256 words
    assign plusOne = PC + 8'b1;
    assign beq = PC + offsetRaw[7:0] + 1;
    assign jalr = regA_val[7:0];
    assign gw_gnd = 1'b0;

    //Splitting 32 bit instruction into components
    assign opcode = fullInstruction[24:22];
    assign regA_loc = fullInstruction[21:19];
    assign regB_loc = fullInstruction[18:16];
    //Copying both values so that I can have all of the necessary data, and use the full instruction in different ways depending on opcode
    assign regDest_loc = fullInstruction[2:0];
    assign offsetRaw = fullInstruction[15:0];
    assign offsetExtended = {{16{offsetRaw[15]}}, offsetRaw};
    //TO-DO: Come back here and use the equal/not equal result of the ALU to set PC Mux

    //Splitting control_prom signals
    assign regFileReadSel = controlSignal[7];
    assign regDataInSel = controlSignal[6:5];
    assign regFileWrEn = controlSignal[4];
    assign aluSel = controlSignal[3];
    assign aluMode = controlSignal[2];
    assign dataMemEn = controlSignal[1];
    assign dataMemWrEn = controlSignal[0];
    
    //PC module signals
    assign pcDisable = opcode[2] & opcode[1] & !opcode[0];
    assign branched = opcode[2] & !opcode[1] & !opcode[0] & equal;
    assign jumped = opcode[2] & !opcode[1] & opcode[0] & !equal;

    //Reset
    assign reset = !resetButton;


    //MUXES
    //Note: I don't approve of this, but in the datapath the topmost path is 0, then 1, ..., even though I typically do it the other way around
    always_comb begin

        //Register file read address mux
        if(regFileReadSel) begin
            regFileReadMux = regDest_loc;
        end
        else begin
            regFileReadMux = regB_loc;
        end

        //Register file write value mux
        if(regDataInSel[1] & regDataInSel[0]) begin
            regFileWriteMux = aluResult;
        end
        else if(regDataInSel[1]) begin
            regFileWriteMux = {{24'b0}, plusOne};
        end
        else begin
            regFileWriteMux = dataMemOut;
        end

        //ALU Mux
        if(aluSel) begin
            aluMux = regB_val;
        end
        else begin
            aluMux = offsetExtended;
        end

    end

    
endmodule
