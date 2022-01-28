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
//  wire channel_end_0;
//  reg [11:0]channel_input_img_0;
//  reg clk_0;
//  reg en_0;
//  reg init_signal_0;
//  wire [7:0]out_psum0_0;
//  wire [7:0]out_psum1_0;
//  wire [7:0]out_psum2_0;
//  wire [7:0]out_psum3_0;
//  reg rst_0;
//  reg [2:0]stride_0;
//  wire weight_end_0;
//  reg [31:0]weight_size_1_16_0;
//  reg [11:0]width_input_img_0;
//design_1_wrapper uut
//   (channel_end_0,
//    channel_input_img_0,
//    clk_0,
//    en_0,
//    init_signal_0,
//    out_psum0_0,
//    out_psum1_0,
//    out_psum2_0,
//    out_psum3_0,
//    rst_0,
//    stride_0,
//    weight_end_0,
//    weight_size_1_16_0,
//    width_input_img_0);

//    always #10 clk_0 = ~clk_0;
    
//    initial begin
//        clk_0 <= 0;
//        rst_0 <= 1;
//        en_0 <= 1;
//        channel_input_img_0 <= 2;
//        stride_0 <= 1;
//        width_input_img_0 <= 5;
//        init_signal_0 <= 0;
//        weight_size_1_16_0 <= 3*3*2;
//        #150;
//        rst_0 <= 0;
//    end
    
//    initial begin
//        #790;
//        init_signal_0 <= 1;
//        #20;
//        init_signal_0 <= 0;
//    end
reg BRAM_img_sel_0;
wire [31:0]BRAM_out_dout;
  wire channel_end_0;
  reg [11:0]channel_input_img_0;
  reg clk_0;
  reg en_0;
  reg [7:0]in_psum1_0;
  reg [7:0]in_psum2_0;
  reg [7:0]in_psum3_0;
  reg init_signal_0;
  reg [10:0]no_channel_0;
  reg [15:0]no_entry_0;
  wire [7:0]out_psum0_0;
  wire [7:0]out_psum1_0;
  wire [7:0]out_psum2_0;
  wire [7:0]out_psum3_0;
  reg rst_0;
  reg [2:0]stride_0;
  wire weight_end_0;
  reg [31:0]weight_size_1_16_0;
  reg [11:0]width_input_img_0;
  
  wire [31:0] addr_out;
  wire [31:0] out_din;

    Multi_convo_core_wrapper uut
   (BRAM_img_sel_0,
    BRAM_out_dout,
    addr_out,
    channel_end_0,
    channel_input_img_0,
    clk_0,
    en_0,
    in_psum1_0,
    in_psum2_0,
    in_psum3_0,
    init_signal_0,
    no_channel_0,
    no_entry_0,
    out_din,
    out_psum0_0,
    out_psum1_0,
    out_psum2_0,
    out_psum3_0,
    rst_0,
    stride_0,
    weight_end_0,
    weight_size_1_16_0,
    width_input_img_0);
  
    always #10 clk_0 = ~clk_0;
    
    initial begin
        clk_0 <= 0;
        rst_0 <= 1;
        en_0 <= 1;
        channel_input_img_0 <= 2;
        stride_0 <= 1;
        width_input_img_0 <= 5;
        init_signal_0 <= 0;
        weight_size_1_16_0 <= 3*3*2;
        in_psum1_0 <= 0;
        in_psum2_0 <= 0;
        in_psum3_0 <= 0;
        no_channel_0 <= 4;
        no_entry_0 <= 9;
        BRAM_img_sel_0 <= 0;
        #150;
        rst_0 <= 0;
    end
    
    initial begin
        #790;
        init_signal_0 <= 1;
        #20;
        init_signal_0 <= 0;
    end
endmodule
