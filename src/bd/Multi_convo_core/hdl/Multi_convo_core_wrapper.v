//Copyright 1986-2021 Xilinx, Inc. All Rights Reserved.
//--------------------------------------------------------------------------------
//Tool Version: Vivado v.2021.1 (win64) Build 3247384 Thu Jun 10 19:36:33 MDT 2021
//Date        : Fri Jan 28 09:37:49 2022
//Host        : DESKTOP-Q4T850H running 64-bit major release  (build 9200)
//Command     : generate_target Multi_convo_core_wrapper.bd
//Design      : Multi_convo_core_wrapper
//Purpose     : IP block netlist
//--------------------------------------------------------------------------------
`timescale 1 ps / 1 ps

module Multi_convo_core_wrapper
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
  input BRAM_img_sel_0;
  output [31:0]BRAM_out_dout;
  output [31:0]addr_out;
  output channel_end_0;
  input [11:0]channel_input_img_0;
  input clk_0;
  input en_0;
  input [7:0]in_psum1_0;
  input [7:0]in_psum2_0;
  input [7:0]in_psum3_0;
  input init_signal_0;
  input [10:0]no_channel_0;
  input [15:0]no_entry_0;
  output [31:0]out_din;
  output [7:0]out_psum0_0;
  output [7:0]out_psum1_0;
  output [7:0]out_psum2_0;
  output [7:0]out_psum3_0;
  input rst_0;
  input [2:0]stride_0;
  output weight_end_0;
  input [31:0]weight_size_1_16_0;
  input [11:0]width_input_img_0;

  wire BRAM_img_sel_0;
  wire [31:0]BRAM_out_dout;
  wire [31:0]addr_out;
  wire channel_end_0;
  wire [11:0]channel_input_img_0;
  wire clk_0;
  wire en_0;
  wire [7:0]in_psum1_0;
  wire [7:0]in_psum2_0;
  wire [7:0]in_psum3_0;
  wire init_signal_0;
  wire [10:0]no_channel_0;
  wire [15:0]no_entry_0;
  wire [31:0]out_din;
  wire [7:0]out_psum0_0;
  wire [7:0]out_psum1_0;
  wire [7:0]out_psum2_0;
  wire [7:0]out_psum3_0;
  wire rst_0;
  wire [2:0]stride_0;
  wire weight_end_0;
  wire [31:0]weight_size_1_16_0;
  wire [11:0]width_input_img_0;

  Multi_convo_core Multi_convo_core_i
       (.BRAM_img_sel_0(BRAM_img_sel_0),
        .BRAM_out_dout(BRAM_out_dout),
        .addr_out(addr_out),
        .channel_end_0(channel_end_0),
        .channel_input_img_0(channel_input_img_0),
        .clk_0(clk_0),
        .en_0(en_0),
        .in_psum1_0(in_psum1_0),
        .in_psum2_0(in_psum2_0),
        .in_psum3_0(in_psum3_0),
        .init_signal_0(init_signal_0),
        .no_channel_0(no_channel_0),
        .no_entry_0(no_entry_0),
        .out_din(out_din),
        .out_psum0_0(out_psum0_0),
        .out_psum1_0(out_psum1_0),
        .out_psum2_0(out_psum2_0),
        .out_psum3_0(out_psum3_0),
        .rst_0(rst_0),
        .stride_0(stride_0),
        .weight_end_0(weight_end_0),
        .weight_size_1_16_0(weight_size_1_16_0),
        .width_input_img_0(width_input_img_0));
endmodule
