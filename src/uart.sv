/* verilator lint_off UNUSED */

/*module uart(
    input logic clk,
    input logic halt,
    input logic [7:0][31:0] allRegs,
    input logic [7:0] PC,
    input logic reset, 
    output logic txOutHalt,
    //output logic [7:0] outputByteCycle
    //For debugging only
    input logic [31:0] haltCycleCount
);

//Params/States
localparam conversion = 8'd234;
localparam initState = 2'd0;
localparam dataTransmitCycle = 2'd1;
localparam dataTransmitDisable = 2'd2;
localparam done = 2'd3;

//State register
logic [1:0] state;
initial state = initState;

//Registers to hold the already existing registers for the duration of the transmission
logic [7:0][31:0] allRegsFreeze;
//For debugging cycle counter
logic [31:0] frozenCycleCount;
logic [31:0] displayVal;
logic [7:0] frozenPC;

//Counters
//Counts to 234 cycles
logic [7:0] cycleCounter;
//Counts to 8 registers
logic [3:0] registerCounter;
//Counts to 1 complete 10-bit message sent
logic [3:0] bitCounter;
//Counts to every 1 register message sent
logic [3:0] messageCounter;
//For cycling

initial cycleCounter = 8'b0;
initial registerCounter = 4'b0;
initial bitCounter = 4'b0;
initial messageCounter = 4'b0;

//Shift register
logic [9:0] shiftRegister;
logic [7:0] asciiByte;

//Halt sticky bit
logic halt_latched;

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
    //For debugging only
    displayVal = (registerCounter == 4'd0) ? frozenCycleCount : ((registerCounter == 4'd8) ? {24'b0, frozenPC} : allRegsFreeze[registerCounter]);

    case(messageCounter)
        4'd0: 
            if(registerCounter == 4'd0) begin
                asciiByte = 8'h43;
            end
            else if(registerCounter == 4'd8) begin
                asciiByte = 8'h50;
            end
            else begin
                asciiByte = 8'h52;
            end
        4'd1: 
            if(registerCounter == 4'd8) begin
                asciiByte = 8'h43;
            end
            else begin
                asciiByte = 8'h30 + {4'b0, registerCounter};
            end
        4'd2: asciiByte = 8'h3A;
        4'd3: asciiByte = 8'h20;
        4'd4: asciiByte = ascii[displayVal[31:28]];
        4'd5: asciiByte = ascii[displayVal[27:24]];
        4'd6: asciiByte = ascii[displayVal[23:20]];
        4'd7: asciiByte = ascii[displayVal[19:16]];
        4'd8: asciiByte = ascii[displayVal[15:12]];
        4'd9: asciiByte = ascii[displayVal[11:8]];
        4'd10: asciiByte = ascii[displayVal[7:4]];
        4'd11: asciiByte = ascii[displayVal[3:0]];
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
    if(!halt_latched & halt & (state == initState)) begin
        frozenPC <= PC;
        allRegsFreeze <= allRegs;
        frozenCycleCount <= haltCycleCount;
        state <= dataTransmitDisable;
    end
    else if (halt_latched & state == initState) begin
        state <= dataTransmitCycle;
        registerCounter <= 4'd0;
        messageCounter <= 4'd0;
        bitCounter <= 4'd0;
        cycleCounter <= 8'd0;
    end    
    if(state == dataTransmitDisable | state == dataTransmitCycle) begin
        if(messageCounter == 4'd13) begin
            messageCounter <= 4'd0;
            registerCounter <= registerCounter + 4'b1;
        end
        if(registerCounter == 4'd9) begin
            state <= done;
        end
        if(messageCounter == 4'd13 | registerCounter == 4'd9) begin
            //stall
        end
        else if(bitCounter == 4'd0 & cycleCounter == conversion) begin
            shiftRegister <= {1'b1, asciiByte, 1'b0};
            bitCounter <= bitCounter + 4'b1;
            //Outputting the new start bit I believe
            txOutHalt <= {1'b1, asciiByte, 1'b0}[0];
            cycleCounter <= 8'd0;
        end
        else if(bitCounter == 4'd10) begin
            bitCounter <= 4'd0;
            messageCounter <= messageCounter + 4'b1;
        end
        else if(cycleCounter == conversion) begin
            shiftRegister <= shiftRegister >> 1;
            bitCounter <= bitCounter + 4'b1;
            cycleCounter <= 8'b0;
            //Grab the new 0 bit. There were syntax issues so I'm using this but the intent is the same
            txOutHalt <= shiftRegister[1];
        end
        else begin
            cycleCounter <= cycleCounter + 8'b1;
        end
    end
    if(state == initState) begin
        txOutHalt <= 1'b1;
    end
    else if(state == done) begin
        state <= initState;
        txOutHalt <= 1'b1;
    end
    if(reset) begin
        state <= initState;
        messageCounter <= 4'd0;
        registerCounter <= 4'd0;
        bitCounter <= 4'd0;
        cycleCounter <= 8'd0;
        frozenCycleCount <= 32'b0;
        halt_latched <= 1'b0;
    end
    else if(halt) begin
        halt_latched <= 1'b1;
    end
    //else if(txCycle) begin

    //end
end

endmodule

*/
//Claudes attempt so I know if I'm crazy or not


/* verilator lint_off UNUSED */
// Case-statement restructured version of uart.sv.
// Same functional behavior as the original four-if version:
//   - capture register snapshot once on first halt
//   - transmit C0/R1-R7/PC (9 lines) over UART
//   - cycle forever replaying the same snapshot until reset
// The ONLY thing changed here is HOW the FSM is coded: everything that
// depends on `state` now lives in a single case(state) block instead of
// being scattered across four separate top-level if-statements. This is
// a controlled experiment - if hardware behavior changes with this
// version, that's evidence the original scattered-if coding style was
// part of the problem (or at least sensitive to how the tool resolves it).
//
// Also: dataTransmitDisable and dataTransmitCycle were functionally
// identical in the original (every line in the transmit block was gated
// by state==dataTransmitDisable | state==dataTransmitCycle, with nothing
// ever distinguishing them - a leftover from before the old delay-counter
// logic was removed). Merged into one state here; this changes nothing
// about timing or behavior, just removes a vestigial state.
/* 
module uart(
    input logic clk,
    input logic halt,
    input logic [7:0][31:0] allRegs,
    input logic [7:0] PC,
    input logic reset,
    output logic txOutHalt,
    input logic [31:0] haltCycleCount
);
 
//Params/States - 3 real states now instead of 4
localparam conversion = 8'd234;
localparam initState = 2'd0;
localparam transmitting = 2'd1;
localparam done = 2'd2;
 
logic [1:0] state;
initial state = initState;
 
logic [7:0][31:0] allRegsFreeze;
logic [31:0] frozenCycleCount;
logic [31:0] displayVal;
logic [7:0] frozenPC;
 
logic [7:0] cycleCounter;
logic [3:0] registerCounter;
logic [3:0] bitCounter;
logic [3:0] messageCounter;
 
initial cycleCounter = 8'b0;
initial registerCounter = 4'b0;
initial bitCounter = 4'b0;
initial messageCounter = 4'b0;
 
logic [9:0] shiftRegister;
logic [7:0] asciiByte;
 
logic halt_latched;
initial halt_latched = 1'b0;
 
logic [7:0] ascii[0:15];
initial begin
    ascii[0] = 8'h30;  ascii[1] = 8'h31;  ascii[2] = 8'h32;  ascii[3] = 8'h33;
    ascii[4] = 8'h34;  ascii[5] = 8'h35;  ascii[6] = 8'h36;  ascii[7] = 8'h37;
    ascii[8] = 8'h38;  ascii[9] = 8'h39;  ascii[10] = 8'h41; ascii[11] = 8'h42;
    ascii[12] = 8'h43; ascii[13] = 8'h44; ascii[14] = 8'h45; ascii[15] = 8'h46;
end
 
//Combinational logic - unchanged from original
always_comb begin
    displayVal = (registerCounter == 4'd0) ? frozenCycleCount :
                 (registerCounter == 4'd8) ? {24'b0, frozenPC} :
                 allRegsFreeze[registerCounter];
 
    case(messageCounter)
        4'd0:
            if(registerCounter == 4'd0) asciiByte = 8'h43;      // 'C'
            else if(registerCounter == 4'd8) asciiByte = 8'h50; // 'P'
            else asciiByte = 8'h52;                              // 'R'
        4'd1:
            if(registerCounter == 4'd8) asciiByte = 8'h43;      // 'C' -> "PC:"
            else asciiByte = 8'h30 + {4'b0, registerCounter};
        4'd2: asciiByte = 8'h3A;
        4'd3: asciiByte = 8'h20;
        4'd4: asciiByte = ascii[displayVal[31:28]];
        4'd5: asciiByte = ascii[displayVal[27:24]];
        4'd6: asciiByte = ascii[displayVal[23:20]];
        4'd7: asciiByte = ascii[displayVal[19:16]];
        4'd8: asciiByte = ascii[displayVal[15:12]];
        4'd9: asciiByte = ascii[displayVal[11:8]];
        4'd10: asciiByte = ascii[displayVal[7:4]];
        4'd11: asciiByte = ascii[displayVal[3:0]];
        4'd12: asciiByte = 8'h0A;
        4'd13: asciiByte = 8'h0A;
        4'd14: asciiByte = 8'h0A;
        4'd15: asciiByte = 8'h0A;
    endcase
end
 
//Sequential logic - single case(state), reset as a clean top-level override
always_ff @(posedge clk) begin
    if(reset) begin
        state <= initState;
        messageCounter <= 4'd0;
        registerCounter <= 4'd0;
        bitCounter <= 4'd0;
        cycleCounter <= 8'd0;
        frozenCycleCount <= 32'b0;
        halt_latched <= 1'b0;
        txOutHalt <= 1'b1;
    end
    else begin
        case(state)
 
            initState: begin
                txOutHalt <= 1'b1;
                if(!halt_latched & halt) begin
                    //first halt since last reset - capture and go
                    frozenPC <= PC;
                    allRegsFreeze <= allRegs;
                    frozenCycleCount <= haltCycleCount;
                    halt_latched <= 1'b1;
                    registerCounter <= 4'd0;
                    messageCounter <= 4'd0;
                    bitCounter <= 4'd0;
                    cycleCounter <= 8'd0;
                    state <= transmitting;
                end
                else if(halt_latched) begin
                    //already have a frozen snapshot - replay it
                    registerCounter <= 4'd0;
                    messageCounter <= 4'd0;
                    bitCounter <= 4'd0;
                    cycleCounter <= 8'd0;
                    state <= transmitting;
                end
                //else: not halted yet, keep waiting
            end
 
            transmitting: begin
                if(messageCounter == 4'd13) begin
                    messageCounter <= 4'd0;
                    registerCounter <= registerCounter + 4'b1;
                end
                if(registerCounter == 4'd9) begin
                    state <= done;
                end
                if(messageCounter == 4'd13 | registerCounter == 4'd9) begin
                    //stall - between-line handoff or end-of-message, handled above
                end
                else if(bitCounter == 4'd0 & cycleCounter == conversion) begin
                    shiftRegister <= {1'b1, asciiByte, 1'b0};
                    bitCounter <= bitCounter + 4'b1;
                    txOutHalt <= {1'b1, asciiByte, 1'b0}[0];
                    cycleCounter <= 8'd0;
                end
                else if(bitCounter == 4'd10) begin
                    bitCounter <= 4'd0;
                    messageCounter <= messageCounter + 4'b1;
                end
                else if(cycleCounter == conversion) begin
                    shiftRegister <= shiftRegister >> 1;
                    bitCounter <= bitCounter + 4'b1;
                    cycleCounter <= 8'b0;
                    txOutHalt <= shiftRegister[1];
                end
                else begin
                    cycleCounter <= cycleCounter + 8'b1;
                end
            end
 
            done: begin
                txOutHalt <= 1'b1;
                state <= initState;
            end
 
            default: begin
                state <= initState;
            end
 
        endcase
    end
end
 
endmodule
*/

//Claudes "uart_trace"

/* verilator lint_off UNUSED */
/* verilator lint_off UNUSED */
// Trace-buffer UART, case-statement version. Same interface and same
// trace-capture behavior as the earlier draft, but restructured to match
// uart_case.sv's single case(state) FSM style, for the same reason:
// so the trace-buffer experiment isn't itself confounded by the
// scattered-if coding pattern being tested separately.
//
// Continuously records PC + allRegs every cycle before halt (up to
// TRACE_DEPTH entries), freezes naturally when halt asserts, then
// transmits each captured entry as its own 9-line labeled block
// (Tn/R1-R7/PC) after halt, replaying the whole trace forever.

module uart(
    input logic clk,
    input logic halt,
    input logic [7:0][31:0] allRegs,
    input logic [7:0] PC,
    input logic reset,
    output logic txOutHalt,
    input logic [31:0] haltCycleCount   // kept for interface compatibility, unused here
);

localparam TRACE_DEPTH = 6;
localparam conversion = 8'd234;
localparam initState = 2'd0;
localparam transmitting = 2'd1;
localparam done = 2'd2;

logic [1:0] state;
initial state = initState;

//---------------------------------------------------------------
// Trace capture: runs continuously pre-halt, freezes itself at halt
//---------------------------------------------------------------
logic [7:0] tracePC [0:TRACE_DEPTH-1];
logic [7:0][31:0] traceRegs [0:TRACE_DEPTH-1];
logic [4:0] traceWriteIndex;
initial traceWriteIndex = 5'd0;

always_ff @(posedge clk) begin
    if(reset) begin
        traceWriteIndex <= 5'd0;
    end
    else if(!halt && traceWriteIndex < TRACE_DEPTH[4:0]) begin
        tracePC[traceWriteIndex[2:0]] <= PC;
        traceRegs[traceWriteIndex[2:0]] <= allRegs;
        traceWriteIndex <= traceWriteIndex + 5'b1;
    end
end

//---------------------------------------------------------------
// Which trace entry is currently being transmitted
//---------------------------------------------------------------
logic [4:0] traceIndex;
initial traceIndex = 5'd0;
logic [4:0] traceCountFrozen;
initial traceCountFrozen = 5'd0;

logic [31:0] displayVal;

logic [7:0] cycleCounter;
logic [3:0] registerCounter;
logic [3:0] bitCounter;
logic [3:0] messageCounter;

initial cycleCounter = 8'b0;
initial registerCounter = 4'b0;
initial bitCounter = 4'b0;
initial messageCounter = 4'b0;

logic [9:0] shiftRegister;
logic [7:0] asciiByte;

logic halt_latched;
initial halt_latched = 1'b0;

logic [7:0] ascii[0:15];
initial begin
    ascii[0] = 8'h30;  ascii[1] = 8'h31;  ascii[2] = 8'h32;  ascii[3] = 8'h33;
    ascii[4] = 8'h34;  ascii[5] = 8'h35;  ascii[6] = 8'h36;  ascii[7] = 8'h37;
    ascii[8] = 8'h38;  ascii[9] = 8'h39;  ascii[10] = 8'h41; ascii[11] = 8'h42;
    ascii[12] = 8'h43; ascii[13] = 8'h44; ascii[14] = 8'h45; ascii[15] = 8'h46;
end

always_comb begin
    displayVal = (registerCounter == 4'd0) ? {27'b0, traceIndex} :
                 (registerCounter == 4'd8) ? {24'b0, tracePC[traceIndex[2:0]]} :
                 traceRegs[traceIndex[2:0]][registerCounter];

    case(messageCounter)
        4'd0:
            if(registerCounter == 4'd0) asciiByte = 8'h54;      // 'T'
            else if(registerCounter == 4'd8) asciiByte = 8'h50; // 'P'
            else asciiByte = 8'h52;                              // 'R'
        4'd1:
            if(registerCounter == 4'd0) asciiByte = ascii[traceIndex[3:0]]; // entry number (0-F), not registerCounter
            else if(registerCounter == 4'd8) asciiByte = 8'h43;      // 'C' -> "PC:"
            else asciiByte = 8'h30 + {4'b0, registerCounter};
        4'd2: asciiByte = 8'h3A;
        4'd3: asciiByte = 8'h20;
        4'd4: asciiByte = ascii[displayVal[31:28]];
        4'd5: asciiByte = ascii[displayVal[27:24]];
        4'd6: asciiByte = ascii[displayVal[23:20]];
        4'd7: asciiByte = ascii[displayVal[19:16]];
        4'd8: asciiByte = ascii[displayVal[15:12]];
        4'd9: asciiByte = ascii[displayVal[11:8]];
        4'd10: asciiByte = ascii[displayVal[7:4]];
        4'd11: asciiByte = ascii[displayVal[3:0]];
        4'd12: asciiByte = 8'h0A;
        4'd13: asciiByte = 8'h0A;
        4'd14: asciiByte = 8'h0A;
        4'd15: asciiByte = 8'h0A;
    endcase
end

always_ff @(posedge clk) begin
    if(reset) begin
        state <= initState;
        messageCounter <= 4'd0;
        registerCounter <= 4'd0;
        bitCounter <= 4'd0;
        cycleCounter <= 8'd0;
        traceIndex <= 5'd0;
        traceCountFrozen <= 5'd0;
        halt_latched <= 1'b0;
        txOutHalt <= 1'b1;
    end
    else begin
        case(state)

            initState: begin
                txOutHalt <= 1'b1;
                if(!halt_latched & halt) begin
                    traceCountFrozen <= traceWriteIndex;
                    traceIndex <= 5'd0;
                    halt_latched <= 1'b1;
                    registerCounter <= 4'd0;
                    messageCounter <= 4'd0;
                    bitCounter <= 4'd0;
                    cycleCounter <= 8'd0;
                    state <= transmitting;
                end
                else if(halt_latched) begin
                    traceIndex <= 5'd0;
                    registerCounter <= 4'd0;
                    messageCounter <= 4'd0;
                    bitCounter <= 4'd0;
                    cycleCounter <= 8'd0;
                    state <= transmitting;
                end
            end

            transmitting: begin
                if(messageCounter == 4'd13) begin
                    messageCounter <= 4'd0;
                    registerCounter <= registerCounter + 4'b1;
                end
                if(registerCounter == 4'd9) begin
                    if(traceIndex + 5'b1 < traceCountFrozen) begin
                        traceIndex <= traceIndex + 5'b1;
                        registerCounter <= 4'd0;
                        messageCounter <= 4'd0;
                    end
                    else begin
                        state <= done;
                    end
                end
                if(messageCounter == 4'd13 | registerCounter == 4'd9) begin
                    //stall - handled above
                end
                else if(bitCounter == 4'd0 & cycleCounter == conversion) begin
                    shiftRegister <= {1'b1, asciiByte, 1'b0};
                    bitCounter <= bitCounter + 4'b1;
                    txOutHalt <= {1'b1, asciiByte, 1'b0}[0];
                    cycleCounter <= 8'd0;
                end
                else if(bitCounter == 4'd10) begin
                    bitCounter <= 4'd0;
                    messageCounter <= messageCounter + 4'b1;
                end
                else if(cycleCounter == conversion) begin
                    shiftRegister <= shiftRegister >> 1;
                    bitCounter <= bitCounter + 4'b1;
                    cycleCounter <= 8'b0;
                    txOutHalt <= shiftRegister[1];
                end
                else begin
                    cycleCounter <= cycleCounter + 8'b1;
                end
            end

            done: begin
                txOutHalt <= 1'b1;
                state <= initState;
            end

            default: begin
                state <= initState;
            end

        endcase
    end
end

endmodule
