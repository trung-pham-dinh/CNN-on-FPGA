`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date: 01/07/2022 05:54:33 PM
// Design Name: 
// Module Name: ConvoFIFO_pmul
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


module ConvoFIFO_pmul(
clk,rst,

ff_ren,
ff_wen,
ff_row_len,
ff_stride,
ff_din,
ff_out2,ff_out1,ff_out0,

ff_load_done,
ff_empty, ff_full, ff_cnt,

entry,
entry_vld
    );
    parameter FF_WIDTH = 8;
    parameter FF_ADDR_BIT = 10;
///////////////////////////////////////////////////////////////////////////////////////
    input                               clk,rst;
    input                               ff_ren,ff_wen;
    input [FF_ADDR_BIT:0]               ff_row_len;
    input [2:0]                         ff_stride;
    input   [FF_WIDTH-1:0]              ff_din;
    
    output  [3*FF_WIDTH-1:0]            ff_out2;
    output  [3*FF_WIDTH-1:0]            ff_out1;
    output  [3*FF_WIDTH-1:0]            ff_out0;
    output                              ff_load_done;
    output                              ff_empty;
    output                              ff_full;
    output [FF_ADDR_BIT:0]              ff_cnt;
    
    output [FF_WIDTH-1:0]               entry;
    output                              entry_vld;
///////////////////////////////////////////////////////////////////////////////////////   
    wire    [FF_WIDTH-1:0]              psum[0:2];
    wire    [2:0]                       psum_vld;
    reg                                 pmul_update;
///////////////////////////////////////////////////////////////////////////////////////  
    assign entry = psum[2] + psum[1] + psum[0];
    assign entry_vld = psum_vld[2] & psum_vld[1] & psum_vld[0];
///////////////////////////////////////////////////////////////////////////////////////  
    ConvoFIFO #(.WIDTH(FF_WIDTH), .ADDR_BIT(FF_ADDR_BIT))fifo(.clk(clk), .rst(rst), 
                   .ren(ff_ren), .wen(ff_wen), .in(ff_din), .row_len(ff_row_len), .stride(ff_stride), 
                   .out2(ff_out2), .out1(ff_out1), .out0(ff_out0), 
                   .load_done(ff_load_done), .empty(ff_empty), .full(ff_full), .cnt(ff_cnt));
         
                  
    pmul #(.WDITH(FF_WIDTH), .PIPELINE_STAGE(3))p2(.clk(clk), .rst(rst), 
         .in_update(pmul_update), 
         .in_data2(ff_out2[3*FF_WIDTH-1:2*FF_WIDTH]), .in_data1(ff_out2[2*FF_WIDTH-1:1*FF_WIDTH]), .in_data0(ff_out2[1*FF_WIDTH-1:0]), 
         .in_weight2(1), .in_weight1(2), .in_weight0(3), 
         .psum(psum[2]), .psum_vld(psum_vld[2]));
         
    pmul #(.WDITH(FF_WIDTH), .PIPELINE_STAGE(3))p1(.clk(clk), .rst(rst), 
         .in_update(pmul_update), 
         .in_data2(ff_out1[3*FF_WIDTH-1:2*FF_WIDTH]), .in_data1(ff_out1[2*FF_WIDTH-1:1*FF_WIDTH]), .in_data0(ff_out1[1*FF_WIDTH-1:0]), 
         .in_weight2(4), .in_weight1(5), .in_weight0(6), 
         .psum(psum[1]), .psum_vld(psum_vld[1]));
         
    pmul #(.WDITH(FF_WIDTH), .PIPELINE_STAGE(3))p0(.clk(clk), .rst(rst), 
         .in_update(pmul_update), 
         .in_data2(ff_out0[3*FF_WIDTH-1:2*FF_WIDTH]), .in_data1(ff_out0[2*FF_WIDTH-1:1*FF_WIDTH]), .in_data0(ff_out0[1*FF_WIDTH-1:0]), 
         .in_weight2(7), .in_weight1(8), .in_weight0(9), 
         .psum(psum[0]), .psum_vld(psum_vld[0]));
         
/////////////////////////////////////////////////////////////////////////////////////// 

    always@(posedge clk) begin
        if(rst) begin
            pmul_update <= 0;
        end
        else begin
            pmul_update <= ff_ren;
        end
    end
endmodule
