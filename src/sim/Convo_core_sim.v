`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date: 01/13/2022 04:09:50 PM
// Design Name: 
// Module Name: Convo_core_sim
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


module Convo_core_sim(

    );
  reg BRAM_img_sel;
  reg [15:0]WxW_out;
  wire [31:0]bram_dout_0;
  wire [31:0]bram_dout_1;
  wire [31:0]bram_dout_2;
  wire [31:0]bram_dout_3;
  reg [11:0]channel_input_img;
  reg clk;
  reg en;
  reg init_signal;
  reg [10:0]no_channel_out;
  reg rst;
  reg [2:0]stride;
  reg [31:0]weight_size_1_16;
  reg [11:0]width_input_img;
  
  wire [7:0]psum_0;
  wire [7:0]psum_1;
  wire [7:0]psum_2;
  wire [7:0]psum_3;
  
  wire [7:0]sum_psum_0;
  wire [7:0]sum_psum_1;
  wire [7:0]sum_psum_2;
  wire [7:0]sum_psum_3;
  wire [31:0]BRAM_addr_sim;
  
  wire weight_end;
  wire channel_end;
Multi_convo_core_wrapper uut
   (BRAM_addr_sim,
    BRAM_img_sel,
    WxW_out,
    bram_dout_0,
    bram_dout_1,
    bram_dout_2,
    bram_dout_3,
    channel_end,
    channel_input_img,
    clk,
    en,
    init_signal,
    no_channel_out,
    psum_0,
    psum_1,
    psum_2,
    psum_3,
    rst,
    stride,
    weight_end,
    weight_size_1_16,
    width_input_img);

assign sum_psum_0 = psum_0*4;
assign sum_psum_1 = psum_1*4;
assign sum_psum_2 = psum_2*4;
assign sum_psum_3 = psum_3*4;
  
    always #10 clk = ~clk;
    
    initial begin
        clk <= 0;
        rst <= 1;
        en <= 1;
        BRAM_img_sel <= 0;
        init_signal <= 0;
        // 1x5x5x8 X 4x3x3x8 -> 1x3x3x4
        channel_input_img <= 2; // (1/4) channels of  input img
        stride <= 1;
        width_input_img <= 5; // width of input img
        weight_size_1_16 <= 3*3*2; // (1/16 ) size of weight
        no_channel_out <= 1; // (1/4) of channels of output img
        WxW_out <= 9; // width x width of output img
        #150;
        rst <= 0;
    end
    
    initial begin
        #790;
        init_signal <= 1;
        #20;
        init_signal <= 0;
    end
endmodule
