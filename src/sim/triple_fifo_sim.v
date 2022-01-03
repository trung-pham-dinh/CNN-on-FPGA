`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date: 12/28/2021 09:07:32 AM
// Design Name: 
// Module Name: triple_fifo_sim
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


module triple_fifo_sim(

    );
    parameter ADDR_BIT = 3;
    parameter WIDTH = 8;
    
    reg                          clk;
    reg                          rst;
    reg                          ren;
    reg                          wen;
    reg [WIDTH-1:0]              in;
    reg [ADDR_BIT:0]             depth;
    wire [2:0]                   empty;
    wire [2:0]                   full;
    wire [2:0]                   almost_full;
    wire [(ADDR_BIT+1)*3-1:0]    cnt;
    wire [WIDTH*3-1:0]           out2;
    wire [WIDTH*3-1:0]           out1;
    wire [WIDTH*3-1:0]           out0;
    
    wire [WIDTH-1:0]           out22;
    wire [WIDTH-1:0]           out21;
    wire [WIDTH-1:0]           out20;
    wire [WIDTH-1:0]           out12;
    wire [WIDTH-1:0]           out11;
    wire [WIDTH-1:0]           out10;
    wire [WIDTH-1:0]           out02;
    wire [WIDTH-1:0]           out01;
    wire [WIDTH-1:0]           out00;
    
    wire [ADDR_BIT:0]          cnt2;
    wire [ADDR_BIT:0]          cnt1;
    wire [ADDR_BIT:0]          cnt0;
    
    assign out22 = out2[WIDTH*3-1:WIDTH*2];
    assign out21 = out2[WIDTH*2-1:WIDTH*1];
    assign out20 = out2[WIDTH*1-1:WIDTH*0];
    
    assign out12 = out1[WIDTH*3-1:WIDTH*2];
    assign out11 = out1[WIDTH*2-1:WIDTH*1];
    assign out10 = out1[WIDTH*1-1:WIDTH*0];
    
    assign out02 = out0[WIDTH*3-1:WIDTH*2];
    assign out01 = out0[WIDTH*2-1:WIDTH*1];
    assign out00 = out0[WIDTH*1-1:WIDTH*0];
    
    assign cnt2 = cnt[ADDR_BIT*3+2:ADDR_BIT*2+2];
    assign cnt1 = cnt[ADDR_BIT*2+1:ADDR_BIT+1];
    assign cnt0 = cnt[ADDR_BIT:0];
    
    
    triple_fifo #(.ADDR_BIT(ADDR_BIT), .WIDTH(WIDTH))uut(.clk(clk), .rst(rst), .ren(ren), .wen(wen), .in(in), .depth(depth),
                .empty(empty), .full(full), .almost_full(almost_full),
                .cnt(cnt), .out2(out2), .out1(out1), .out0(out0));
    
    always #10 clk = ~clk;
    
    always@(posedge clk) begin
        in <= in+1;
    end
    initial begin
        clk <= 0;
        rst <= 1;
        ren <= 0;
        wen <= 0;
        in <= 0;
        depth <= 8;
        #20;
        rst <= 0;
        wen <= 1;
        
        #550;
        
//        wen <= 0;
//        #10;
        ren <= 1;
        #200;
        wen <= 0;
    end
endmodule
