//Should be really simple just takes the input and updates the PC after clock
module pc
    #(parameter S = 8)
    (
        input clk,
        input logic halt,
        input logic reset,
        input logic branch,
        input logic jump,
        input logic [S-1:0] beq,
        input logic [S-1:0] jalr,
        input logic [S-1:0] plusOne,
        output logic [S-1:0] PC
    );
    
    logic [S-1:0] newPC;

    //Initialize PC output to 0
    initial PC = 8'b0;

    always_comb begin
        if(reset) begin
            newPC = 0;
        end
        else if(branch) begin
            newPC = beq;
        end
        else if(jump) begin
            newPC = jalr;
        end
        else begin
            //computer PC + 1 in top.sv and then just send it here
            newPC = plusOne;
        end
    end

    always_ff @(posedge clk) begin
        if(!halt | reset) begin
            PC <= newPC;
        end
    end

endmodule
