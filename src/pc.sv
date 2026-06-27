//Should be really simple just takes the input and updates the PC after clock
module pc
    #(parameter W = 32)
    (
        input clk,
        input logic reset,
        input logic branch,
        input logic jump,
        input logic [W-1:0] beq,
        input logic [W-1:0] jalr,
        input logic [W-1:0] plusOne,
        output logic [W-1:0] newPC
    );
    
    logic [W-1:0] PC;
    always_comb begin
        if(reset) begin
            PC = 0;
        end
        else if(branch) begin
            PC = beq + 1;
        end
        else if(jump) begin
            PC = jalr;
        end
        else begin
            //computer PC + 1 in top.sv and then just send it here
            PC = plusOne;
        end
    end

    always_ff @(posedge clk) begin
        newPC <= PC;
    end

endmodule
