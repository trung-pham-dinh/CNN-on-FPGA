`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date: 12/28/2021 08:34:23 AM
// Design Name: 
// Module Name: triple_fifo
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


module triple_fifo(
clk,
rst,
ren,
wen,
in,
depth,
empty,
full,
almost_full,
cnt,
out2,
out1,
out0,
    );
    parameter ADDR_BIT = 3;
    parameter WIDTH = 8;
    
    input wire                          clk;
    input wire                          rst;
    input wire                          ren;
    input wire                          wen;
    input wire [WIDTH-1:0]              in;
    input wire [ADDR_BIT:0]             depth;
    output wire [2:0]                   empty;
    output wire [2:0]                   full;
    output wire [2:0]                   almost_full;
    output wire [(ADDR_BIT+1)*3-1:0]    cnt;
    output wire [WIDTH*3-1:0]           out2;
    output wire [WIDTH*3-1:0]           out1;
    output wire [WIDTH*3-1:0]           out0;
    
wire ren2,wen2,ren1,wen1,ren0,wen0;
assign ren2 = ren;
assign wen2 = (ren|(wen&~almost_full[2]))&~empty[1];

assign ren1 = ren|(wen&~almost_full[2]);
assign wen1 = (ren|(wen&~almost_full[1]))&~empty[0];

assign ren0 = ren|(wen&~almost_full[1]);
assign wen0 = wen&~almost_full[0];


    fifo #(.ADDR_BIT(ADDR_BIT), .WIDTH(WIDTH)) f2(.clk(clk), .rst(rst),
                                                    .ren(ren2), .wen(wen2), .in(out1[WIDTH*3-1:WIDTH*2]), .depth(depth+1),
                                                    .out2(out2[WIDTH*3-1:WIDTH*2]), .out1(out2[WIDTH*2-1:WIDTH*1]), .out0(out2[WIDTH*1-1:WIDTH*0]),
                                                    .empty(empty[2]), .full(full[2]), .almost_full(almost_full[2]),
                                                    .cnt(cnt[ADDR_BIT*3+2:ADDR_BIT*2+2]));                                                  
    fifo #(.ADDR_BIT(ADDR_BIT), .WIDTH(WIDTH)) f1(.clk(clk), .rst(rst),
                                                    .ren(ren1), .wen(wen1), .in(out0[WIDTH*3-1:WIDTH*2]), .depth(depth+1),
                                                    .out2(out1[WIDTH*3-1:WIDTH*2]), .out1(out1[WIDTH*2-1:WIDTH*1]), .out0(out1[WIDTH*1-1:WIDTH*0]),
                                                    .empty(empty[1]), .full(full[1]), .almost_full(almost_full[1]),
                                                    .cnt(cnt[ADDR_BIT*2+1:ADDR_BIT*1+1])); 
    fifo #(.ADDR_BIT(ADDR_BIT), .WIDTH(WIDTH)) f0(.clk(clk), .rst(rst),
                                                    .ren(ren0), .wen(wen0), .in(in), .depth(depth+1),
                                                    .out2(out0[WIDTH*3-1:WIDTH*2]), .out1(out0[WIDTH*2-1:WIDTH*1]), .out0(out0[WIDTH*1-1:WIDTH*0]),
                                                    .empty(empty[0]), .full(full[0]), .almost_full(almost_full[0]),
                                                    .cnt(cnt[ADDR_BIT*1:0])); 
                                                  
    
endmodule
