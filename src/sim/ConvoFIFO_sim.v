`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date: 12/31/2021 06:25:33 PM
// Design Name: 
// Module Name: ConvoFIFO_sim
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


module ConvoFIFO_sim(

    );
localparam WIDTH = 8;
localparam ADDR_BIT = 5;

localparam DEPTH = 2**ADDR_BIT;

reg                    clk;
reg                    rst;
reg                    ren;
reg                    wen;
reg    [WIDTH-1:0]     in;
reg    [ADDR_BIT-1:0]  row_len;
wire   [3*WIDTH-1:0]   out2;
wire   [3*WIDTH-1:0]   out1;
wire   [3*WIDTH-1:0]   out0;
wire                   load_done;
wire                   empty;
wire                   full;
wire   [ADDR_BIT:0]    cnt;

wire [WIDTH-1:0] out22;
wire [WIDTH-1:0] out21;
wire [WIDTH-1:0] out20;
wire [WIDTH-1:0] out12;
wire [WIDTH-1:0] out11;
wire [WIDTH-1:0] out10;
wire [WIDTH-1:0] out02;
wire [WIDTH-1:0] out01;
wire [WIDTH-1:0] out00;

assign out22 = out2[3*WIDTH-1:2*WIDTH];
assign out21 = out2[2*WIDTH-1:1*WIDTH];
assign out20 = out2[1*WIDTH-1:0*WIDTH];

assign out12 = out1[3*WIDTH-1:2*WIDTH];
assign out11 = out1[2*WIDTH-1:1*WIDTH];
assign out10 = out1[1*WIDTH-1:0*WIDTH];

assign out02 = out0[3*WIDTH-1:2*WIDTH];
assign out01 = out0[2*WIDTH-1:1*WIDTH];
assign out00 = out0[1*WIDTH-1:0*WIDTH];

ConvoFIFO #(.WIDTH(8), .ADDR_BIT(5))uut(
    clk,
    rst,
    ren,
    wen,
    in,
    row_len,
    out2,
    out1,
    out0,
    load_done,
    empty,
    full,
    cnt
    );
    
    always #10 clk = ~clk;
    always@(posedge clk) begin
        in <= in+1;
    end
    
    initial begin
        clk = 0;
        ren = 0;
        wen = 0;
        in = 0;
        row_len = 8;
        rst <= 1;
        #10;
        rst <= 0;
        wen <= 1;
//        #480;
//        wen <= 0;
//        ren <= 1;
    end
endmodule
