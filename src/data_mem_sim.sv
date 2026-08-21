/* verilator lint_off UNUSED */
//Sim versions of the files, currently line 13 is fibonacci, 14 is bubble sort fast, 15 is 7 elt bubble sort fast, 16 is gcd
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
//initial $readmemh("/home/dbahugun/LC2K-2026/docs/fibonacciDataSim.mi", dataSimMem);
//initial $readmemh("/home/dbahugun/LC2K-2026/docs/bubbleSort8DataSim.mi", dataSimMem);
initial $readmemh("/home/dbahugun/LC2K-2026/docs/bubbleSort7FinalDataSim.mi", dataSimMem);
//initial $readmemh("/home/dbahugun/LC2K-2026/docs/gcdDataSim.mi", dataSimMem);
//initial $readmemh("/home/dbahugun/LC2K-2026/docs/fiveLoadsDataSim.mi", dataSimMem);

assign douta = dataSimMem[ada];
assign doutb = dataSimMem[adb];

always_ff @(posedge clka) begin
    //Forgot to incorporate reset, here it is
    if(reseta) begin
        //$readmemh("/home/dbahugun/LC2K-2026/docs/fibonacciDataSim.mi", dataSimMem);
        //$readmemh("/home/dbahugun/LC2K-2026/docs/bubbleSort8DataSim.mi", dataSimMem);
        $readmemh("/home/dbahugun/LC2K-2026/docs/bubbleSort7FinalDataSim.mi", dataSimMem);
        //$readmemh("/home/dbahugun/LC2K-2026/docs/gcdDataSim.mi", dataSimMem);
        //$readmemh("/home/dbahugun/LC2K-2026/docs/fiveLoadsDataSim.mi", dataSimMem);
    end
    else if(wrea) begin
        dataSimMem[ada] <= dina;
    end
end

endmodule
