//Copyright 1986-2021 Xilinx, Inc. All Rights Reserved.
//--------------------------------------------------------------------------------
//Tool Version: Vivado v.2021.1 (win64) Build 3247384 Thu Jun 10 19:36:33 MDT 2021
//Date        : Mon Feb  7 16:35:08 2022
//Host        : DESKTOP-Q4T850H running 64-bit major release  (build 9200)
//Command     : generate_target Convo_core_inst_1_wrapper.bd
//Design      : Convo_core_inst_1_wrapper
//Purpose     : IP block netlist
//--------------------------------------------------------------------------------
`timescale 1 ps / 1 ps

module Convo_core_inst_1_wrapper
   (BRAM_img_AXI_addr,
    BRAM_img_AXI_din,
    BRAM_img_AXI_dout,
    BRAM_img_AXI_en,
    BRAM_img_AXI_rst,
    BRAM_img_AXI_wen,
    BRAM_img_sel,
    BRAM_weight_AXI_0_addr,
    BRAM_weight_AXI_0_clk,
    BRAM_weight_AXI_0_din,
    BRAM_weight_AXI_0_dout,
    BRAM_weight_AXI_0_en,
    BRAM_weight_AXI_0_rst,
    BRAM_weight_AXI_0_we,
    BRAM_weight_AXI_1_addr,
    BRAM_weight_AXI_1_clk,
    BRAM_weight_AXI_1_din,
    BRAM_weight_AXI_1_dout,
    BRAM_weight_AXI_1_en,
    BRAM_weight_AXI_1_rst,
    BRAM_weight_AXI_1_we,
    BRAM_weight_AXI_2_addr,
    BRAM_weight_AXI_2_clk,
    BRAM_weight_AXI_2_din,
    BRAM_weight_AXI_2_dout,
    BRAM_weight_AXI_2_en,
    BRAM_weight_AXI_2_rst,
    BRAM_weight_AXI_2_we,
    BRAM_weight_AXI_3_addr,
    BRAM_weight_AXI_3_clk,
    BRAM_weight_AXI_3_din,
    BRAM_weight_AXI_3_dout,
    BRAM_weight_AXI_3_en,
    BRAM_weight_AXI_3_rst,
    BRAM_weight_AXI_3_we,
    accum_done,
    channel_end,
    channel_input_img,
    clk,
    en,
    init_signal,
    out_psum0,
    out_psum1,
    out_psum2,
    out_psum3,
    out_psum_vld,
    rst,
    stride,
    weight_end,
    weight_size_1_16,
    width_input_img);
  input [31:0]BRAM_img_AXI_addr;
  input [31:0]BRAM_img_AXI_din;
  output [31:0]BRAM_img_AXI_dout;
  input BRAM_img_AXI_en;
  input BRAM_img_AXI_rst;
  input [3:0]BRAM_img_AXI_wen;
  input BRAM_img_sel;
  input BRAM_weight_AXI_0_addr;
  input BRAM_weight_AXI_0_clk;
  input BRAM_weight_AXI_0_din;
  output BRAM_weight_AXI_0_dout;
  input BRAM_weight_AXI_0_en;
  input BRAM_weight_AXI_0_rst;
  input BRAM_weight_AXI_0_we;
  input BRAM_weight_AXI_1_addr;
  input BRAM_weight_AXI_1_clk;
  input BRAM_weight_AXI_1_din;
  output BRAM_weight_AXI_1_dout;
  input BRAM_weight_AXI_1_en;
  input BRAM_weight_AXI_1_rst;
  input BRAM_weight_AXI_1_we;
  input BRAM_weight_AXI_2_addr;
  input BRAM_weight_AXI_2_clk;
  input BRAM_weight_AXI_2_din;
  output BRAM_weight_AXI_2_dout;
  input BRAM_weight_AXI_2_en;
  input BRAM_weight_AXI_2_rst;
  input BRAM_weight_AXI_2_we;
  input BRAM_weight_AXI_3_addr;
  input BRAM_weight_AXI_3_clk;
  input BRAM_weight_AXI_3_din;
  output BRAM_weight_AXI_3_dout;
  input BRAM_weight_AXI_3_en;
  input BRAM_weight_AXI_3_rst;
  input BRAM_weight_AXI_3_we;
  input accum_done;
  output channel_end;
  input [11:0]channel_input_img;
  input clk;
  input en;
  input init_signal;
  output [7:0]out_psum0;
  output [7:0]out_psum1;
  output [7:0]out_psum2;
  output [7:0]out_psum3;
  output out_psum_vld;
  input rst;
  input [2:0]stride;
  output weight_end;
  input [31:0]weight_size_1_16;
  input [11:0]width_input_img;

  wire [31:0]BRAM_img_AXI_addr;
  wire [31:0]BRAM_img_AXI_din;
  wire [31:0]BRAM_img_AXI_dout;
  wire BRAM_img_AXI_en;
  wire BRAM_img_AXI_rst;
  wire [3:0]BRAM_img_AXI_wen;
  wire BRAM_img_sel;
  wire BRAM_weight_AXI_0_addr;
  wire BRAM_weight_AXI_0_clk;
  wire BRAM_weight_AXI_0_din;
  wire BRAM_weight_AXI_0_dout;
  wire BRAM_weight_AXI_0_en;
  wire BRAM_weight_AXI_0_rst;
  wire BRAM_weight_AXI_0_we;
  wire BRAM_weight_AXI_1_addr;
  wire BRAM_weight_AXI_1_clk;
  wire BRAM_weight_AXI_1_din;
  wire BRAM_weight_AXI_1_dout;
  wire BRAM_weight_AXI_1_en;
  wire BRAM_weight_AXI_1_rst;
  wire BRAM_weight_AXI_1_we;
  wire BRAM_weight_AXI_2_addr;
  wire BRAM_weight_AXI_2_clk;
  wire BRAM_weight_AXI_2_din;
  wire BRAM_weight_AXI_2_dout;
  wire BRAM_weight_AXI_2_en;
  wire BRAM_weight_AXI_2_rst;
  wire BRAM_weight_AXI_2_we;
  wire BRAM_weight_AXI_3_addr;
  wire BRAM_weight_AXI_3_clk;
  wire BRAM_weight_AXI_3_din;
  wire BRAM_weight_AXI_3_dout;
  wire BRAM_weight_AXI_3_en;
  wire BRAM_weight_AXI_3_rst;
  wire BRAM_weight_AXI_3_we;
  wire accum_done;
  wire channel_end;
  wire [11:0]channel_input_img;
  wire clk;
  wire en;
  wire init_signal;
  wire [7:0]out_psum0;
  wire [7:0]out_psum1;
  wire [7:0]out_psum2;
  wire [7:0]out_psum3;
  wire out_psum_vld;
  wire rst;
  wire [2:0]stride;
  wire weight_end;
  wire [31:0]weight_size_1_16;
  wire [11:0]width_input_img;

  Convo_core_inst_1 Convo_core_inst_1_i
       (.BRAM_img_AXI_addr(BRAM_img_AXI_addr),
        .BRAM_img_AXI_din(BRAM_img_AXI_din),
        .BRAM_img_AXI_dout(BRAM_img_AXI_dout),
        .BRAM_img_AXI_en(BRAM_img_AXI_en),
        .BRAM_img_AXI_rst(BRAM_img_AXI_rst),
        .BRAM_img_AXI_wen(BRAM_img_AXI_wen),
        .BRAM_img_sel(BRAM_img_sel),
        .BRAM_weight_AXI_0_addr(BRAM_weight_AXI_0_addr),
        .BRAM_weight_AXI_0_clk(BRAM_weight_AXI_0_clk),
        .BRAM_weight_AXI_0_din(BRAM_weight_AXI_0_din),
        .BRAM_weight_AXI_0_dout(BRAM_weight_AXI_0_dout),
        .BRAM_weight_AXI_0_en(BRAM_weight_AXI_0_en),
        .BRAM_weight_AXI_0_rst(BRAM_weight_AXI_0_rst),
        .BRAM_weight_AXI_0_we(BRAM_weight_AXI_0_we),
        .BRAM_weight_AXI_1_addr(BRAM_weight_AXI_1_addr),
        .BRAM_weight_AXI_1_clk(BRAM_weight_AXI_1_clk),
        .BRAM_weight_AXI_1_din(BRAM_weight_AXI_1_din),
        .BRAM_weight_AXI_1_dout(BRAM_weight_AXI_1_dout),
        .BRAM_weight_AXI_1_en(BRAM_weight_AXI_1_en),
        .BRAM_weight_AXI_1_rst(BRAM_weight_AXI_1_rst),
        .BRAM_weight_AXI_1_we(BRAM_weight_AXI_1_we),
        .BRAM_weight_AXI_2_addr(BRAM_weight_AXI_2_addr),
        .BRAM_weight_AXI_2_clk(BRAM_weight_AXI_2_clk),
        .BRAM_weight_AXI_2_din(BRAM_weight_AXI_2_din),
        .BRAM_weight_AXI_2_dout(BRAM_weight_AXI_2_dout),
        .BRAM_weight_AXI_2_en(BRAM_weight_AXI_2_en),
        .BRAM_weight_AXI_2_rst(BRAM_weight_AXI_2_rst),
        .BRAM_weight_AXI_2_we(BRAM_weight_AXI_2_we),
        .BRAM_weight_AXI_3_addr(BRAM_weight_AXI_3_addr),
        .BRAM_weight_AXI_3_clk(BRAM_weight_AXI_3_clk),
        .BRAM_weight_AXI_3_din(BRAM_weight_AXI_3_din),
        .BRAM_weight_AXI_3_dout(BRAM_weight_AXI_3_dout),
        .BRAM_weight_AXI_3_en(BRAM_weight_AXI_3_en),
        .BRAM_weight_AXI_3_rst(BRAM_weight_AXI_3_rst),
        .BRAM_weight_AXI_3_we(BRAM_weight_AXI_3_we),
        .accum_done(accum_done),
        .channel_end(channel_end),
        .channel_input_img(channel_input_img),
        .clk(clk),
        .en(en),
        .init_signal(init_signal),
        .out_psum0(out_psum0),
        .out_psum1(out_psum1),
        .out_psum2(out_psum2),
        .out_psum3(out_psum3),
        .out_psum_vld(out_psum_vld),
        .rst(rst),
        .stride(stride),
        .weight_end(weight_end),
        .weight_size_1_16(weight_size_1_16),
        .width_input_img(width_input_img));
endmodule
