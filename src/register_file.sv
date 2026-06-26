module register_file
    #(parameter W = 32)
    (
        input clk,
        input reset,
        input logic [2:0] addressA,
        input logic [2:0] addressB,
        input logic [2:0] addressDest,
        input logic WrEn,
        input logic [W-1:0] dataIn,
        output logic [W-1:0] registerA,
        output logic [W-1:0] registerB
    );

    //Start writing implementation here for the actual register file. Should be an array of FFs, but how do I initialize them? Do I even need to?

    logic [7:0][W-1:0] registers;

    always_comb 
    begin
        registerA = registers[addressA];
        registerB = registers[addressB];
    end

    always_ff @( posedge clk ) 
    begin
        if(WrEn) begin
            registers[addressDest] <= dataIn;
        end
        else if (reset) begin
            for(int i = 0; i < 8; ++i) begin
                registers[i] <= 'b0;
            end
        end
    end
endmodule
