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
reg [ADDR_BIT:0] depth;
wire [WIDTH*3-1:0] out;
wire [WIDTH-1:0] out2;
wire [WIDTH-1:0] out1;
wire [WIDTH-1:0] out0;
wire empty;
wire full;
wire almost_full;
wire [ADDR_BIT:0] count;

    fifo #(.ADDR_BIT(ADDR_BIT), .WIDTH(WIDTH)) uut(clk, rst,
    ren,wen,
    in,depth,out[WIDTH*3-1:WIDTH*2],out[WIDTH*2-1:WIDTH*1],out[WIDTH-1:0],
    empty, full, almost_full, count);
    
    assign out2 = out[WIDTH*3-1:WIDTH*2];
    assign out1 = out[WIDTH*2-1:WIDTH*1];
    assign out0 = out[WIDTH*1-1:WIDTH*0];
    
    always #10 clk = ~clk;
    always@(posedge clk) begin
        if(wen) begin
            in <= in + 1;
        end
        else begin
            in <= 1;
        end
    end
    
    initial begin
        rst=1;
        depth = 8;
        clk = 0;
        
        wen = 0;
        ren = 0;
        in = 1;
        #20;
        rst = 0;
        wen = 1;
        #400;
        wen = 0;
        ren = 1;
        #400;
        
        
        ren = 0;
        wen = 1;
        #200;
        ren=1;
        #400;
        
        $finish;
    end
endmodule
