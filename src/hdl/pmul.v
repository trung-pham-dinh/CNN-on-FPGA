`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date: 01/01/2022 03:51:09 PM
// Design Name: 
// Module Name: pmul
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


module pmul(
clk,rst,
in_update,

in_data2,
in_data1,
in_data0,

in_weight2,
in_weight1,
in_weight0,

psum,
psum_vld
    );
    parameter WIDTH = 8;
    
    input clk;
    input rst;
    
    input [WIDTH-1:0] in_data2;
    input [WIDTH-1:0] in_data1;
    input [WIDTH-1:0] in_data0;
    
    input [WIDTH-1:0] in_weight2;
    input [WIDTH-1:0] in_weight1;
    input [WIDTH-1:0] in_weight0;
    
    input wire        in_update;
    
    output [WIDTH-1:0]psum;
    output            psum_vld;
    
    wire [2:0] out_psum_vld;
    wire [WIDTH-1:0] out_psum [0:2];
    
    
    
    assign psum = out_psum[2] + out_psum[1] + out_psum[0];
    assign psum_vld = (out_psum_vld == 3'b111);
    
    pe pe2( .clk(clk), .rst(rst), 
            .in_data(in_data2), .in_weight(in_weight2), .in_psum(0), 
            .in_data_update(in_update), .in_weight_update(in_update), .in_psum_update(in_update), 
            .out_psum(out_psum[2]), .out_psum_vld(out_psum_vld[2]));
            
    pe pe1( .clk(clk), .rst(rst), 
            .in_data(in_data1), .in_weight(in_weight1), .in_psum(0), 
            .in_data_update(in_update), .in_weight_update(in_update), .in_psum_update(in_update), 
            .out_psum(out_psum[1]), .out_psum_vld(out_psum_vld[1]));
            
    pe pe0( .clk(clk), .rst(rst), 
            .in_data(in_data0), .in_weight(in_weight0), .in_psum(0), 
            .in_data_update(in_update), .in_weight_update(in_update), .in_psum_update(in_update), 
            .out_psum(out_psum[0]), .out_psum_vld(out_psum_vld[0]));
endmodule
