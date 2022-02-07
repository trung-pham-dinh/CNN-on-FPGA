//Copyright 1986-2021 Xilinx, Inc. All Rights Reserved.
//--------------------------------------------------------------------------------
//Tool Version: Vivado v.2021.1 (win64) Build 3247384 Thu Jun 10 19:36:33 MDT 2021
//Date        : Mon Feb  7 16:35:04 2022
//Host        : DESKTOP-Q4T850H running 64-bit major release  (build 9200)
//Command     : generate_target Multi_convo_core_wrapper.bd
//Design      : Multi_convo_core_wrapper
//Purpose     : IP block netlist
//--------------------------------------------------------------------------------
`timescale 1 ps / 1 ps

module Multi_convo_core_wrapper
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
  output [31:0]BRAM_addr_sim;
  input BRAM_img_sel;
  input [15:0]WxW_out;
  output [31:0]bram_dout_0;
  output [31:0]bram_dout_1;
  output [31:0]bram_dout_2;
  output [31:0]bram_dout_3;
  output channel_end;
  input [11:0]channel_input_img;
  input clk;
  input en;
  input init_signal;
  input [10:0]no_channel_out;
  output [7:0]psum_0;
  output [7:0]psum_1;
  output [7:0]psum_2;
  output [7:0]psum_3;
  input rst;
  input [2:0]stride;
  output weight_end;
  input [31:0]weight_size_1_16;
  input [11:0]width_input_img;

  wire [31:0]BRAM_addr_sim;
  wire BRAM_img_sel;
  wire [15:0]WxW_out;
  wire [31:0]bram_dout_0;
  wire [31:0]bram_dout_1;
  wire [31:0]bram_dout_2;
  wire [31:0]bram_dout_3;
  wire channel_end;
  wire [11:0]channel_input_img;
  wire clk;
  wire en;
  wire init_signal;
  wire [10:0]no_channel_out;
  wire [7:0]psum_0;
  wire [7:0]psum_1;
  wire [7:0]psum_2;
  wire [7:0]psum_3;
  wire rst;
  wire [2:0]stride;
  wire weight_end;
  wire [31:0]weight_size_1_16;
  wire [11:0]width_input_img;

  Multi_convo_core Multi_convo_core_i
       (.BRAM_addr_sim(BRAM_addr_sim),
        .BRAM_img_sel(BRAM_img_sel),
        .WxW_out(WxW_out),
        .bram_dout_0(bram_dout_0),
        .bram_dout_1(bram_dout_1),
        .bram_dout_2(bram_dout_2),
        .bram_dout_3(bram_dout_3),
        .channel_end(channel_end),
        .channel_input_img(channel_input_img),
        .clk(clk),
        .en(en),
        .init_signal(init_signal),
        .no_channel_out(no_channel_out),
        .psum_0(psum_0),
        .psum_1(psum_1),
        .psum_2(psum_2),
        .psum_3(psum_3),
        .rst(rst),
        .stride(stride),
        .weight_end(weight_end),
        .weight_size_1_16(weight_size_1_16),
        .width_input_img(width_input_img));
endmodule
