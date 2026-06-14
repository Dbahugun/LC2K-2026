module blink (
    input  logic clk,
    input  logic rst_n,
    output logic led
);
    logic [23:0] counter;

    always_ff @(posedge clk) begin
        if (!rst_n) begin
            counter <= 24'h0;
            led     <= 1'b0;
        end else if (counter == 24'hFFFFFF) begin
            led     <= ~led;
            counter <= 24'h0;
        end else begin
            counter <= counter + 24'h1;
        end
    end

endmodule