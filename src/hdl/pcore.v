`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date: 01/12/2022 08:24:31 AM
// Design Name: 
// Module Name: pcore
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


module pcore(
    clk,rst,
    
    in_update, // connected to fifo_ren
    
    activate2,
    activate1,
    activate0,
    
    weight2,
    weight1,
    weight0,
    
    out_psum,
    out_psum_vld,
    );
///////////////////////////////////////////////////////////////////////////////////
    parameter WIDTH = 8;
///////////////////////////////////////////////////////////////////////////////////
    input wire                      clk,rst,in_update;
    
    input  wire [3*WIDTH-1:0]       activate2;
    input  wire [3*WIDTH-1:0]       activate1;
    input  wire [3*WIDTH-1:0]       activate0;
    input  wire [3*WIDTH-1:0]       weight2;
    input  wire [3*WIDTH-1:0]       weight1;
    input  wire [3*WIDTH-1:0]       weight0;
    
    output wire [WIDTH-1:0]         out_psum;
    output wire                     out_psum_vld;
///////////////////////////////////////////////////////////////////////////////////
    wire        [WIDTH-1:0]         psum[0:2];
    wire        [2:0]               psum_vld;
//    reg                             pmul_update;
/////////////////////////////////////////////////////////////////////////////////// 
    assign out_psum = psum[2] + psum[1] + psum[0];
    assign out_psum_vld = psum_vld[2] & psum_vld[1] & psum_vld[0];
/////////////////////////////////////////////////////////////////////////////////// 
    pmul #(.WIDTH(WIDTH))p2(.clk(clk), .rst(rst), 
         .in_update(in_update), 
         .in_data2(activate2[3*WIDTH-1:2*WIDTH]), .in_data1(activate2[2*WIDTH-1:1*WIDTH]), .in_data0(activate2[1*WIDTH-1:0]), 
         .in_weight2(weight2[3*WIDTH-1:2*WIDTH]), .in_weight1(weight2[2*WIDTH-1:1*WIDTH]), .in_weight0(weight2[1*WIDTH-1:0]), 
         .psum(psum[2]), .psum_vld(psum_vld[2]));
         
    pmul #(.WIDTH(WIDTH))p1(.clk(clk), .rst(rst), 
         .in_update(in_update), 
         .in_data2(activate1[3*WIDTH-1:2*WIDTH]), .in_data1(activate1[2*WIDTH-1:1*WIDTH]), .in_data0(activate1[1*WIDTH-1:0]), 
         .in_weight2(weight1[3*WIDTH-1:2*WIDTH]), .in_weight1(weight1[2*WIDTH-1:1*WIDTH]), .in_weight0(weight1[1*WIDTH-1:0]), 
         .psum(psum[1]), .psum_vld(psum_vld[1]));
         
    pmul #(.WIDTH(WIDTH))p0(.clk(clk), .rst(rst), 
         .in_update(in_update), 
         .in_data2(activate0[3*WIDTH-1:2*WIDTH]), .in_data1(activate0[2*WIDTH-1:1*WIDTH]), .in_data0(activate0[1*WIDTH-1:0]), 
         .in_weight2(weight0[3*WIDTH-1:2*WIDTH]), .in_weight1(weight0[2*WIDTH-1:1*WIDTH]), .in_weight0(weight0[1*WIDTH-1:0]), 
         .psum(psum[0]), .psum_vld(psum_vld[0]));
    
//    always@(posedge clk) begin
//        if(rst) begin
//            pmul_update <= 0;
//        end
//        else begin
//            pmul_update <= in_update;
//        end
//    end
endmodule
