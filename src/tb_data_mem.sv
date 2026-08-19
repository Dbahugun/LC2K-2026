/* verilator lint_off UNUSED */

// tb_data_mem.sv -- unit test for the flip-flop data memory.
//
// Checks the four properties the module exists to provide:
//   1. initial contents present after reset
//   2. read is asynchronous (dout tracks ad with no clock edge)
//   3. write is synchronous and lands on the clock edge
//   4. reset restores initial contents over anything written
//
// Run:
//   $ verilator --binary --timing -Wno-DECLFILENAME -Wno-UNUSEDSIGNAL
//     src/data_mem.sv tb/tb_data_mem.sv -o simdm --top-module tb_data_mem
//   ./obj_dir/simdm

module tb_data_mem;

    localparam int DEPTH     = 256;
    localparam int WIDTH     = 32;
    localparam int ADDR_BITS = $clog2(DEPTH);

    logic                 clk = 1'b0;
    logic                 reset = 1'b1;
    logic                 wre = 1'b0;
    logic [ADDR_BITS-1:0] ad = '0;
    logic [WIDTH-1:0]     di = '0;
    logic [WIDTH-1:0]     dout;

    int errs = 0;
    int checks = 0;

    data_mem #(.DEPTH(DEPTH), .WIDTH(WIDTH)) dut (
        .clk   (clk),
        .reset (reset),
        .wre   (wre),
        .ad    (ad),
        .di    (di),
        .dout  (dout)
    );

    always #5 clk <= ~clk;

    // Read address a combinationally and compare against expected.
    task automatic chk(input int a, input logic [WIDTH-1:0] want, input string tag);
        ad = ADDR_BITS'(a);
        #1;
        checks++;
        if (dout !== want) begin
            $display("  FAIL [%s] mem[%0d] = %08x, expected %08x", tag, a, dout, want);
            errs++;
        end
    endtask

    task automatic do_reset();
        @(negedge clk);
        reset = 1'b1;
        @(posedge clk);
        #1;
        reset = 1'b0;
        #1;
    endtask

    task automatic write(input int a, input logic [WIDTH-1:0] d);
        @(negedge clk);
        ad  = ADDR_BITS'(a);
        di  = d;
        wre = 1'b1;
        @(posedge clk);
        #1;
        wre = 1'b0;
    endtask

    initial begin
        $display("tb_data_mem: DEPTH=%0d WIDTH=%0d", DEPTH, WIDTH);

        // ---- 1. initial contents after reset ----------------------------
        do_reset();
        chk(10, 32'h11111111, "init");
        chk(11, 32'h22222222, "init");
        chk(12, 32'h33333333, "init");
        chk(13, 32'h44444444, "init");
        chk(14, 32'h55555555, "init");
        chk(0,  32'h00000000, "init zero");
        chk(9,  32'h00000000, "init zero");
        chk(15, 32'h00000000, "init zero");
        chk(DEPTH-1, 32'h00000000, "init zero");

        // ---- 2. asynchronous read ---------------------------------------
        // Sweep the address with the clock held low. If any of these need a
        // clock edge to appear, the read path has a register in it and
        // single-cycle execution is broken.
        @(negedge clk);
        chk(10, 32'h11111111, "async");
        chk(14, 32'h55555555, "async");
        chk(12, 32'h33333333, "async");
        if (clk !== 1'b0) begin
            $display("  FAIL [async] clock moved during read sweep");
            errs++;
        end

        // ---- 3. synchronous write ---------------------------------------
        write(20, 32'hDEADBEEF);
        chk(20, 32'hDEADBEEF, "write");
        chk(10, 32'h11111111, "write left neighbours alone");
        chk(21, 32'h00000000, "write left neighbours alone");

        write(10, 32'hCAFEF00D);
        chk(10, 32'hCAFEF00D, "overwrite init word");

        // write must not take effect while wre is low
        @(negedge clk);
        ad = ADDR_BITS'(30);
        di = 32'hFFFFFFFF;
        wre = 1'b0;
        @(posedge clk);
        #1;
        chk(30, 32'h00000000, "no write when wre low");

        // ---- 4. reset restores initial contents -------------------------
        do_reset();
        chk(20, 32'h00000000, "reset restores");
        chk(10, 32'h11111111, "reset restores");
        chk(14, 32'h55555555, "reset restores");

        // ---- result ------------------------------------------------------
        $display("");
        if (errs == 0)
            $display("RESULT: PASS - %0d checks", checks);
        else
            $display("RESULT: FAIL - %0d errors in %0d checks", errs, checks);
        $finish;
    end

endmodule
