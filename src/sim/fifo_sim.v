`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date: 10/01/2021 04:00:59 PM
// Design Name: 
// Module Name: fifo_sim
// Project Name: 
// Target Devices: 
// Tool Versions: 
// Description: 
// 
// Dependencies: 
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
//////////////////////////////////////////////////////////////////////////////////


module fifo_sim(

    );
localparam WIDTH = 8;
localparam ADDR_BIT = 4;

localparam DEPTH = 2**ADDR_BIT;

reg  clk;
reg  rst;
reg  ren;
reg  wen;
reg [WIDTH-1:0] in;
wire [WIDTH-1:0] out;
wire empty;
wire full;
wire almost_full;
wire [ADDR_BIT:0] gray_count;
integer i;

    fifo #(.ADDR_BIT(ADDR_BIT), .WIDTH(WIDTH)) uut(clk, rst,
    ren,wen,
    in,out,
    empty, full, almost_full, gray_count);
    
    always #10 clk = ~clk; 
    initial begin   
        rst <= 0;
        #5
        rst<=1;
        
        clk <= 0;
        
        wen <= 0;
        ren <= 0;
        in <= 0;
        #20;
        rst <= 0;
        for(i = 1; i <= 20; i = i+ 1) begin
            in <= i;
            wen <= 1;
            #10;
            wen<= 0;
            #10;
        end
        for(i = 1; i <= 20; i = i+ 1) begin
            ren <= 1;
            #10;
            ren<= 10;
            #10;
        end
    end
endmodule
