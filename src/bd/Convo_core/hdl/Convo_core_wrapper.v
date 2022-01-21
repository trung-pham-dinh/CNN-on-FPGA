//Copyright 1986-2021 Xilinx, Inc. All Rights Reserved.
//--------------------------------------------------------------------------------
//Tool Version: Vivado v.2021.1 (win64) Build 3247384 Thu Jun 10 19:36:33 MDT 2021
//Date        : Fri Jan 21 10:59:50 2022
//Host        : DESKTOP-Q4T850H running 64-bit major release  (build 9200)
//Command     : generate_target Convo_core_wrapper.bd
//Design      : Convo_core_wrapper
//Purpose     : IP block netlist
//--------------------------------------------------------------------------------
`timescale 1 ps / 1 ps

module Convo_core_wrapper
   (addr_rst_0,
    channel_0,
    clk_0,
    en_0,
    init_signal_0,
    load_weight_start,
    out_psum0_0,
    out_psum1_0,
    out_psum2_0,
    out_psum3_0,
    out_psum_vld_0,
    rst_0,
    stride_0,
    weight_done,
    width_0);
  input addr_rst_0;
  input [11:0]channel_0;
  input clk_0;
  input en_0;
  input init_signal_0;
  input load_weight_start;
  output [7:0]out_psum0_0;
  output [7:0]out_psum1_0;
  output [7:0]out_psum2_0;
  output [7:0]out_psum3_0;
  output out_psum_vld_0;
  input rst_0;
  input [2:0]stride_0;
  output weight_done;
  input [11:0]width_0;

  wire addr_rst_0;
  wire [11:0]channel_0;
  wire clk_0;
  wire en_0;
  wire init_signal_0;
  wire load_weight_start;
  wire [7:0]out_psum0_0;
  wire [7:0]out_psum1_0;
  wire [7:0]out_psum2_0;
  wire [7:0]out_psum3_0;
  wire out_psum_vld_0;
  wire rst_0;
  wire [2:0]stride_0;
  wire weight_done;
  wire [11:0]width_0;

  Convo_core Convo_core_i
       (.addr_rst_0(addr_rst_0),
        .channel_0(channel_0),
        .clk_0(clk_0),
        .en_0(en_0),
        .init_signal_0(init_signal_0),
        .load_weight_start(load_weight_start),
        .out_psum0_0(out_psum0_0),
        .out_psum1_0(out_psum1_0),
        .out_psum2_0(out_psum2_0),
        .out_psum3_0(out_psum3_0),
        .out_psum_vld_0(out_psum_vld_0),
        .rst_0(rst_0),
        .stride_0(stride_0),
        .weight_done(weight_done),
        .width_0(width_0));
endmodule
