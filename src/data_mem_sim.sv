/* verilator lint_off UNUSED */
//Sim versions of the files
module data_mem_sim (douta, doutb, clka, ocea, cea, reseta, wrea, clkb, oceb, ceb, resetb, wreb, ada, dina, adb, dinb);

output [31:0] douta;
output [31:0] doutb;
input clka;
input ocea;
input cea;
input reseta;
input wrea;
input clkb;
input oceb;
input ceb;
input resetb;
input wreb;
input [7:0] ada;
input [31:0] dina;
input [7:0] adb;
input [31:0] dinb;

logic [31:0] dataSimMem [255:0];
initial $readmemh("/home/dbahugun/LC2K-2026/docs/fibonacciDataSim.mi", dataSimMem);

assign douta = dataSimMem[ada];
assign doutb = dataSimMem[adb];

always_ff @(posedge clka) begin
    if(wrea) begin
        dataSimMem[ada] <= dina;
    end
end

endmodule
