//Copyright 1986-2021 Xilinx, Inc. All Rights Reserved.
//--------------------------------------------------------------------------------
//Tool Version: Vivado v.2021.1 (win64) Build 3247384 Thu Jun 10 19:36:33 MDT 2021
//Date        : Sun Jan 23 10:35:52 2022
//Host        : DESKTOP-Q4T850H running 64-bit major release  (build 9200)
//Command     : generate_target Convo_core_wrapper.bd
//Design      : Convo_core_wrapper
//Purpose     : IP block netlist
//--------------------------------------------------------------------------------
`timescale 1 ps / 1 ps

module Convo_core_wrapper
   (activate0_sim,
    activate1_sim,
    activate2_sim,
    addr_rst_0,
    channel_0,
    channel_end_out,
    clk_0,
    en_0,
    init_signal_0,
    out_psum0_0,
    out_psum1_0,
    out_psum2_0,
    out_psum3_0,
    out_psum_vld_0,
    rst_0,
    start_core_sim,
    stride_0,
    weight0_sim,
    weight1_sim,
    weight2_sim,
    weight3_sim,
    weight_done,
    width_0);
  output [23:0]activate0_sim;
  output [23:0]activate1_sim;
  output [23:0]activate2_sim;
  input addr_rst_0;
  input [11:0]channel_0;
  output channel_end_out;
  input clk_0;
  input en_0;
  input init_signal_0;
  output [7:0]out_psum0_0;
  output [7:0]out_psum1_0;
  output [7:0]out_psum2_0;
  output [7:0]out_psum3_0;
  output out_psum_vld_0;
  input rst_0;
  output start_core_sim;
  input [2:0]stride_0;
  output [71:0]weight0_sim;
  output [71:0]weight1_sim;
  output [71:0]weight2_sim;
  output [71:0]weight3_sim;
  output weight_done;
  input [11:0]width_0;

  wire [23:0]activate0_sim;
  wire [23:0]activate1_sim;
  wire [23:0]activate2_sim;
  wire addr_rst_0;
  wire [11:0]channel_0;
  wire channel_end_out;
  wire clk_0;
  wire en_0;
  wire init_signal_0;
  wire [7:0]out_psum0_0;
  wire [7:0]out_psum1_0;
  wire [7:0]out_psum2_0;
  wire [7:0]out_psum3_0;
  wire out_psum_vld_0;
  wire rst_0;
  wire start_core_sim;
  wire [2:0]stride_0;
  wire [71:0]weight0_sim;
  wire [71:0]weight1_sim;
  wire [71:0]weight2_sim;
  wire [71:0]weight3_sim;
  wire weight_done;
  wire [11:0]width_0;

  Convo_core Convo_core_i
       (.activate0_sim(activate0_sim),
        .activate1_sim(activate1_sim),
        .activate2_sim(activate2_sim),
        .addr_rst_0(addr_rst_0),
        .channel_0(channel_0),
        .channel_end_out(channel_end_out),
        .clk_0(clk_0),
        .en_0(en_0),
        .init_signal_0(init_signal_0),
        .out_psum0_0(out_psum0_0),
        .out_psum1_0(out_psum1_0),
        .out_psum2_0(out_psum2_0),
        .out_psum3_0(out_psum3_0),
        .out_psum_vld_0(out_psum_vld_0),
        .rst_0(rst_0),
        .start_core_sim(start_core_sim),
        .stride_0(stride_0),
        .weight0_sim(weight0_sim),
        .weight1_sim(weight1_sim),
        .weight2_sim(weight2_sim),
        .weight3_sim(weight3_sim),
        .weight_done(weight_done),
        .width_0(width_0));
endmodule
