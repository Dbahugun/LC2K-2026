
module uart(
    input logic clk,
    input logic halt,
    input logic [7:0][31:0] allRegs,
    input logic reset, 
    output logic txOutHalt
    //output logic [7:0] outputByteCycle
);

//Params/States
localparam conversion = 8'd234;
localparam initState = 2'd0;
localparam dataTransmit = 2'd1;
localparam done = 2'd2;

//State register
logic [1:0] state;
initial state = initState;

//Registers to hold the already existing registers for the duration of the transmission
logic [7:0][31:0] allRegsFreeze;

//Counters
//Counts to 234 cycles
logic [7:0] cycleCounter;
//Counts to 8 registers
logic [3:0] registerCounter;
//Counts to 1 complete 10-bit message sent
logic [3:0] bitCounter;
//Counts to every 1 register message sent
logic [3:0] messageCounter;

initial cycleCounter = 8'b0;
initial registerCounter = 4'b0;
initial bitCounter = 4'b0;
initial messageCounter = 4'b0;

//Shift register
logic [9:0] shiftRegister;
logic [7:0] asciiByte;

//Declare 4-bit ASCII LUT here. I don't quite remember how to do it but I did it in 270. Then I use 2 for loops and parse 4 bits at a time I believe. 
logic [7:0] ascii[0:15];	   // TC4 to 7-segment magnitude Look-up Table
initial
begin
    ascii[0] = 8'h30;
    ascii[1] = 8'h31;
    ascii[2] = 8'h32;
    ascii[3] = 8'h33;
    ascii[4] = 8'h34;
    ascii[5] = 8'h35;
    ascii[6] = 8'h36;
    ascii[7] = 8'h37;
    ascii[8] = 8'h38;
    ascii[9] = 8'h39;
    ascii[10] = 8'h41;
    ascii[11] = 8'h42;
    ascii[12] = 8'h43;
    ascii[13] = 8'h44;
    ascii[14] = 8'h45;
    ascii[15] = 8'h46;
end

//Combinational logic
always_comb begin
    case(messageCounter)
        4'd0: asciiByte = 8'h52;
        4'd1: asciiByte = 8'h30 + {4'b0, registerCounter};
        4'd2: asciiByte = 8'h3A;
        4'd3: asciiByte = 8'h20;
        4'd4: asciiByte = ascii[allRegsFreeze[registerCounter][31:28]];
        4'd5: asciiByte = ascii[allRegsFreeze[registerCounter][27:24]];
        4'd6: asciiByte = ascii[allRegsFreeze[registerCounter][23:20]];
        4'd7: asciiByte = ascii[allRegsFreeze[registerCounter][19:16]];
        4'd8: asciiByte = ascii[allRegsFreeze[registerCounter][15:12]];
        4'd9: asciiByte = ascii[allRegsFreeze[registerCounter][11:8]];
        4'd10: asciiByte = ascii[allRegsFreeze[registerCounter][7:4]];
        4'd11: asciiByte = ascii[allRegsFreeze[registerCounter][3:0]];
        4'd12: asciiByte = 8'h0A;
        //Below are supposedly unused
        4'd13: asciiByte = 8'h0A;
        4'd14: asciiByte = 8'h0A;
        4'd15: asciiByte = 8'h0A;
    endcase
end

//Sequential timing logic and output
always_ff @(posedge clk)
begin
    if(halt & (state == initState)) begin
        allRegsFreeze <= allRegs;
        state <= dataTransmit;
    end
    if(state == dataTransmit) begin
        if(messageCounter == 4'd13) begin
            messageCounter <= 4'd0;
            registerCounter <= registerCounter + 1;
        end
        if(registerCounter == 4'd8) begin
            state <= done;
        end
        if(messageCounter == 4'd13 | registerCounter == 4'd8) begin
            // stall — a wraparound is committing this cycle, hold everything else frozen
        end
        else if(bitCounter == 4'd0 & cycleCounter == conversion) begin
            shiftRegister <= {1'b1, asciiByte, 1'b0};
            bitCounter <= bitCounter + 1;
            //Outputting the new start bit I believe
            txOutHalt <= {1'b1, asciiByte, 1'b0}[0];
            cycleCounter <= cycleCounter + 1;
        end
        else if(bitCounter == 4'd10) begin
            bitCounter <= 4'd0;
            messageCounter <= messageCounter + 1;
        end
        else if(cycleCounter == conversion) begin
            shiftRegister <= shiftRegister >> 1;
            bitCounter <= bitCounter + 1;
            cycleCounter <= 8'b0;
            //Grab the new 0 bit. There were syntax issues so I'm using this but the intent is the same
            txOutHalt <= shiftRegister[1];
        end
        else begin
            cycleCounter <= cycleCounter + 1;
        end
    end
    else if(state == initState | state == done) begin
        txOutHalt <= 1'b1;
    end

    if(reset) begin
        state <= initState;
        messageCounter <= 4'd0;
        registerCounter <= 4'd0;
        bitCounter <= 4'd0;
        cycleCounter <= 8'd0;
    end
    /*else if(txCycle) begin

    end*/
end

endmodule
