`timescale 1ns/1ps
//
// uart.sv -- single-shot post-halt register dump, 115200 baud 8N1.
//
// On the first halt after reset: freeze R0-R7 and PC, transmit 9 lines
// ("R0: XXXXXXXX\n" ... "R7: XXXXXXXX\n", "PC: XXXXXXXX\n"), then park
// in S_DONE until reset. One dump per reset, nothing else.
//
module uart(
    input  logic clk,
    input  logic halt,
    input  logic [7:0][31:0] allRegs,
    input  logic [7:0] PC,
    input  logic reset,
    output logic txOutHalt
);

    // Baud divisor: 27 MHz / 115200 baud = 234.375 -> 234 clocks per bit.
    localparam logic [7:0] BAUD_MAX = 8'd233;   // count 0..233 = 234 cycles

    // FSM
    localparam logic [1:0] S_INIT = 2'd0;
    localparam logic [1:0] S_TX   = 2'd1;
    localparam logic [1:0] S_DONE = 2'd2;
    logic [1:0] state;

    // Snapshot frozen at halt
    logic [7:0][31:0] allRegsFreeze;
    logic [7:0]       frozenPC;

    // Position counters
    logic [7:0] baudCounter;   // 0..233 within one bit
    logic [3:0] bitCounter;    // 0..9   within one frame (start,8 data,stop)
    logic [3:0] charCounter;   // 0..12  within one line (13 characters)
    logic [3:0] lineCounter;   // 0..8   (R0..R7 = 0..7, PC = 8)

    // Nibble -> ASCII hex LUT
    logic [7:0] ascii[0:15];
    initial begin
        ascii[0]  = 8'h30;  ascii[1]  = 8'h31;  ascii[2]  = 8'h32;  ascii[3]  = 8'h33;
        ascii[4]  = 8'h34;  ascii[5]  = 8'h35;  ascii[6]  = 8'h36;  ascii[7]  = 8'h37;
        ascii[8]  = 8'h38;  ascii[9]  = 8'h39;  ascii[10] = 8'h41;  ascii[11] = 8'h42;
        ascii[12] = 8'h43;  ascii[13] = 8'h44;  ascii[14] = 8'h45;  ascii[15] = 8'h46;
    end

    // Character selection (combinational)
    logic [31:0] displayVal;
    logic [7:0]  asciiByte;
    logic [9:0]  frame;

    always_comb begin
        displayVal = (lineCounter == 4'd8) ? {24'b0, frozenPC}
                                           : allRegsFreeze[lineCounter[2:0]];
        case (charCounter)
            4'd0:    asciiByte = (lineCounter == 4'd8) ? 8'h50 : 8'h52;  // 'P' / 'R'
            4'd1:    asciiByte = (lineCounter == 4'd8) ? 8'h43           // 'C'
                                 : (8'h30 + {4'b0, lineCounter});        // '0'-'7'
            4'd2:    asciiByte = 8'h3A;                                  // ':'
            4'd3:    asciiByte = 8'h20;                                  // ' '
            4'd4:    asciiByte = ascii[displayVal[31:28]];
            4'd5:    asciiByte = ascii[displayVal[27:24]];
            4'd6:    asciiByte = ascii[displayVal[23:20]];
            4'd7:    asciiByte = ascii[displayVal[19:16]];
            4'd8:    asciiByte = ascii[displayVal[15:12]];
            4'd9:    asciiByte = ascii[displayVal[11:8]];
            4'd10:   asciiByte = ascii[displayVal[7:4]];
            4'd11:   asciiByte = ascii[displayVal[3:0]];
            default: asciiByte = 8'h0A;                                  // '\n' (pos 12)
        endcase
        // frame[0]=start(0), frame[8:1]=data LSB-first, frame[9]=stop(1)
        frame = {1'b1, asciiByte, 1'b0};
    end

    // TX line: idle/park high, otherwise the current bit of the current frame.
    always_comb begin
        txOutHalt = (state == S_TX) ? frame[bitCounter] : 1'b1;
    end

    always_ff @(posedge clk) begin
        if (reset) begin
            state       <= S_INIT;
            baudCounter <= 8'd0;
            bitCounter  <= 4'd0;
            charCounter <= 4'd0;
            lineCounter <= 4'd0;
        end
        else begin
            case (state)

                S_INIT: begin
                    if (halt) begin
                        allRegsFreeze <= allRegs;
                        frozenPC      <= PC;
                        baudCounter   <= 8'd0;
                        bitCounter    <= 4'd0;
                        charCounter   <= 4'd0;
                        lineCounter   <= 4'd0;
                        state         <= S_TX;
                    end
                end

                S_TX: begin
                    if (baudCounter == BAUD_MAX) begin
                        baudCounter <= 8'd0;
                        if (bitCounter == 4'd9) begin
                            bitCounter <= 4'd0;
                            if (charCounter == 4'd12) begin
                                charCounter <= 4'd0;
                                if (lineCounter == 4'd8)
                                    state <= S_DONE;
                                else
                                    lineCounter <= lineCounter + 4'd1;
                            end
                            else charCounter <= charCounter + 4'd1;
                        end
                        else bitCounter <= bitCounter + 4'd1;
                    end
                    else baudCounter <= baudCounter + 8'd1;
                end

                S_DONE: begin
                    // one-shot: stay here until reset
                end

                default: state <= S_INIT;

            endcase
        end
    end

endmodule
