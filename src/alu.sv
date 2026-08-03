//ALU module
module alu
    #(parameter W = 32)             // Default bit width
    (
        //input clk,
        input logic [W-1:0] numberOne,
        input logic [W-1:0] numberTwo,
        input logic mode,
        output logic [W-1:0] result,
        output logic zeroFlag,
        output logic equalFlag,
        output logic overflow
    );

    //logic [W-1:0] resultBuff;
    logic sameMSB;
    always_comb
    begin
        case(mode)
            1'b0:
                result = numberOne + numberTwo;
            1'b1:
                result = ~(numberOne | numberTwo);
            //For some reason verilator wants this even though I'm never goign to use this.
            default: result = numberOne + numberTwo;
        endcase
        zeroFlag = ~|(result);
        equalFlag = (numberOne == numberTwo);
        //Need to fix this because I'm using a new structure and have to revisit how to calculate overflow without carry signals. Perhaps more parenthesis?
        sameMSB = numberOne[W-1] ~^ numberTwo[W-1];
        overflow = (result[W-1] ^ numberOne[W-1]) & sameMSB;
    end
    //Potentially need to get rid of this. I think for multi-cycle this is needed but in reality the ALU combinationally will be fast enough/needs to be fast enough.
    /*
    always_ff @(posedge clk) 
    begin
        result <= resultBuff[W-1:0];
    end
    */


endmodule
