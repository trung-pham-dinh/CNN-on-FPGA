`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date: 01/12/2022 10:10:06 AM
// Design Name: 
// Module Name: computing_core
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


module computing_core(
clk,rst,

load_done,

activate0,
activate1,
activate2,

weight0,
weight1,
weight2,
weight3,

out_psum0,
out_psum1,
out_psum2,
out_psum3,
out_psum_vld

    );
///////////////////////////////////////////////////////////////////////////
    parameter WIDTH = 8;
///////////////////////////////////////////////////////////////////////////
    input  wire                 clk,rst,load_done;
    
    input  wire  [9*WIDTH-1:0]   weight0,weight1,weight2,weight3;
    
    input  wire [3*WIDTH-1:0]   activate0;
    input  wire [3*WIDTH-1:0]   activate1;
    input  wire [3*WIDTH-1:0]   activate2;

    output wire [WIDTH-1:0]     out_psum0;
    output wire [WIDTH-1:0]     out_psum1;
    output wire [WIDTH-1:0]     out_psum2;
    output wire [WIDTH-1:0]     out_psum3;
    output wire                 out_psum_vld;
///////////////////////////////////////////////////////////////////////////
    
    wire [3:0]      psum_vld;

    
///////////////////////////////////////////////////////////////////////////
    assign out_psum_vld = psum_vld[0] & psum_vld[1] & psum_vld[2] & psum_vld[3];
///////////////////////////////////////////////////////////////////////////
//  first core
    pcore #(.WIDTH(WIDTH))p0(.clk(clk), .rst(rst), .in_update(load_done),
            .activate2(activate0),
            .activate1(activate1),
            .activate0(activate2),
            .weight2({weight0[64+:8], weight0[56+:8], weight0[48+:8]}),
            .weight1({weight0[40+:8], weight0[32+:8], weight0[24+:8]}),
            .weight0({weight0[16+:8], weight0[8+:8],  weight0[0+:8]}),
            .out_psum(out_psum0), .out_psum_vld(psum_vld[0]));
            
    pcore #(.WIDTH(WIDTH))p1(.clk(clk), .rst(rst), .in_update(load_done),
            .activate2(activate0),
            .activate1(activate1),
            .activate0(activate2),
            .weight2({weight1[64+:8], weight1[56+:8], weight1[48+:8]}),
            .weight1({weight1[40+:8], weight1[32+:8], weight1[24+:8]}),
            .weight0({weight1[16+:8], weight1[8+:8] , weight1[0+:8]}),
            .out_psum(out_psum1), .out_psum_vld(psum_vld[1]));
            
    pcore #(.WIDTH(WIDTH))p2(.clk(clk), .rst(rst), .in_update(load_done),
            .activate2(activate0),
            .activate1(activate1),
            .activate0(activate2),
            .weight2({weight2[64+:8], weight2[56+:8], weight2[48+:8]}),
            .weight1({weight2[40+:8], weight2[32+:8], weight2[24+:8]}),
            .weight0({weight2[16+:8], weight2[8+:8] , weight2[0+:8]}),
            .out_psum(out_psum2), .out_psum_vld(psum_vld[2]));
            
    pcore #(.WIDTH(WIDTH))p3(.clk(clk), .rst(rst), .in_update(load_done),
            .activate2(activate0),
            .activate1(activate1),
            .activate0(activate2),
            .weight2({weight3[64+:8], weight3[56+:8], weight3[48+:8]}),
            .weight1({weight3[40+:8], weight3[32+:8], weight3[24+:8]}),
            .weight0({weight3[16+:8], weight3[8+:8] , weight3[0+:8]}),
            .out_psum(out_psum3), .out_psum_vld(psum_vld[3]));
///////////////////////////////////////////////////////////////////////////

endmodule