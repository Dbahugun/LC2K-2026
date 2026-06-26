module register_file
    #(parameter W = 32)
    (
        input logic [2:0] addressA,
        input logic [2:0] addressB,
        input logic [2:0] addressDest,
        input logic WrEn,
        input logic [W-1:0] dataIn,
        output logic [W-1:0] registerA,
        output logic [W-1:0] registerB
    );

    //Start writing implementation here for the actual register file. Should be an array of FFs, but how do I initialize them? Do I even need to?
    

endmodule
