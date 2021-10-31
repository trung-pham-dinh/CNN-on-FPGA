`timescale 1ns/10ps

// count in gray code on every posedge clock, synchronous reset
module gray_counter #(
    parameter NUM_BITS = 4  // width of FIFO address
) (
    input wire inc,
    input wire full,
    input wire empty,

    input wire clk,
    input wire rst,

    output logic [NUM_BITS-1 : 0] gray
);

    logic [NUM_BITS-1 : 0] binD;
    logic [NUM_BITS-1 : 0] binQ;
    
    // increment conditions
    assign binD = binQ + (inc && (!full || !empty));
    
    // binary counter
    initial binQ = '0;
    always @(posedge clk) begin
        if (!rst) binQ <= '0;
        else binQ <= binD;
    end
    
    // gray register
    initial gray = '0;
    always @(posedge clk) begin
        if (!rst) gray <= '0;
        else gray <= binD ^ {1'b0, binD[NUM_BITS-1 : 1]};   // binary-to-gray
    end
    
endmodule