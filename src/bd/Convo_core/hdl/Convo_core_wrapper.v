//Copyright 1986-2021 Xilinx, Inc. All Rights Reserved.
//--------------------------------------------------------------------------------
//Tool Version: Vivado v.2021.1 (win64) Build 3247384 Thu Jun 10 19:36:33 MDT 2021
//Date        : Thu Jan 13 16:16:43 2022
//Host        : DESKTOP-Q4T850H running 64-bit major release  (build 9200)
//Command     : generate_target Convo_core_wrapper.bd
//Design      : Convo_core_wrapper
//Purpose     : IP block netlist
//--------------------------------------------------------------------------------
`timescale 1 ps / 1 ps

module Convo_core_wrapper
   (activate0_0,
    activate1_0,
    activate2_0,
    activate_ready_0,
    addr_rst_0,
    clk_0,
    load_start_0,
    out_psum0_0,
    out_psum1_0,
    out_psum2_0,
    out_psum3_0,
    out_psum_vld_0,
    rst_0,
    weight_done);
  input [23:0]activate0_0;
  input [23:0]activate1_0;
  input [23:0]activate2_0;
  input activate_ready_0;
  input addr_rst_0;
  input clk_0;
  input load_start_0;
  output [7:0]out_psum0_0;
  output [7:0]out_psum1_0;
  output [7:0]out_psum2_0;
  output [7:0]out_psum3_0;
  output out_psum_vld_0;
  input rst_0;
  output weight_done;

  wire [23:0]activate0_0;
  wire [23:0]activate1_0;
  wire [23:0]activate2_0;
  wire activate_ready_0;
  wire addr_rst_0;
  wire clk_0;
  wire load_start_0;
  wire [7:0]out_psum0_0;
  wire [7:0]out_psum1_0;
  wire [7:0]out_psum2_0;
  wire [7:0]out_psum3_0;
  wire out_psum_vld_0;
  wire rst_0;
  wire weight_done;

  Convo_core Convo_core_i
       (.activate0_0(activate0_0),
        .activate1_0(activate1_0),
        .activate2_0(activate2_0),
        .activate_ready_0(activate_ready_0),
        .addr_rst_0(addr_rst_0),
        .clk_0(clk_0),
        .load_start_0(load_start_0),
        .out_psum0_0(out_psum0_0),
        .out_psum1_0(out_psum1_0),
        .out_psum2_0(out_psum2_0),
        .out_psum3_0(out_psum3_0),
        .out_psum_vld_0(out_psum_vld_0),
        .rst_0(rst_0),
        .weight_done(weight_done));
endmodule
