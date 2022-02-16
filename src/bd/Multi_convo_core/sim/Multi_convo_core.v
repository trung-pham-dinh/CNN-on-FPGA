//Copyright 1986-2021 Xilinx, Inc. All Rights Reserved.
//--------------------------------------------------------------------------------
//Tool Version: Vivado v.2021.1 (win64) Build 3247384 Thu Jun 10 19:36:33 MDT 2021
//Date        : Tue Feb 15 08:36:32 2022
//Host        : DESKTOP-Q4T850H running 64-bit major release  (build 9200)
//Command     : generate_target Multi_convo_core.bd
//Design      : Multi_convo_core
//Purpose     : IP block netlist
//--------------------------------------------------------------------------------
`timescale 1 ps / 1 ps

module Core_imp_2O5QCR
   (BRAM_img_addr_0,
    BRAM_img_addr_1,
    BRAM_img_addr_2,
    BRAM_img_addr_3,
    BRAM_img_din_0,
    BRAM_img_din_1,
    BRAM_img_din_2,
    BRAM_img_din_3,
    BRAM_img_dout_0,
    BRAM_img_dout_1,
    BRAM_img_dout_2,
    BRAM_img_dout_3,
    BRAM_img_en_0,
    BRAM_img_en_1,
    BRAM_img_en_2,
    BRAM_img_en_3,
    BRAM_img_rst_0,
    BRAM_img_rst_1,
    BRAM_img_rst_2,
    BRAM_img_rst_3,
    BRAM_img_sel,
    BRAM_img_wen_0,
    BRAM_img_wen_1,
    BRAM_img_wen_2,
    BRAM_img_wen_3,
    BRAM_out_0_addr,
    BRAM_out_0_clk,
    BRAM_out_0_din,
    BRAM_out_0_dout,
    BRAM_out_0_en,
    BRAM_out_0_rst,
    BRAM_out_0_we,
    BRAM_out_1_addr,
    BRAM_out_1_clk,
    BRAM_out_1_din,
    BRAM_out_1_dout,
    BRAM_out_1_en,
    BRAM_out_1_rst,
    BRAM_out_1_we,
    BRAM_out_2_addr,
    BRAM_out_2_clk,
    BRAM_out_2_din,
    BRAM_out_2_dout,
    BRAM_out_2_en,
    BRAM_out_2_rst,
    BRAM_out_2_we,
    BRAM_out_3_addr,
    BRAM_out_3_clk,
    BRAM_out_3_din,
    BRAM_out_3_dout,
    BRAM_out_3_en,
    BRAM_out_3_rst,
    BRAM_out_3_we,
    BRAM_weight_0_0_addr,
    BRAM_weight_0_0_clk,
    BRAM_weight_0_0_din,
    BRAM_weight_0_0_dout,
    BRAM_weight_0_0_en,
    BRAM_weight_0_0_rst,
    BRAM_weight_0_0_we,
    BRAM_weight_0_1_addr,
    BRAM_weight_0_1_clk,
    BRAM_weight_0_1_din,
    BRAM_weight_0_1_dout,
    BRAM_weight_0_1_en,
    BRAM_weight_0_1_rst,
    BRAM_weight_0_1_we,
    BRAM_weight_0_2_addr,
    BRAM_weight_0_2_clk,
    BRAM_weight_0_2_din,
    BRAM_weight_0_2_dout,
    BRAM_weight_0_2_en,
    BRAM_weight_0_2_rst,
    BRAM_weight_0_2_we,
    BRAM_weight_0_3_addr,
    BRAM_weight_0_3_clk,
    BRAM_weight_0_3_din,
    BRAM_weight_0_3_dout,
    BRAM_weight_0_3_en,
    BRAM_weight_0_3_rst,
    BRAM_weight_0_3_we,
    BRAM_weight_1_0_addr,
    BRAM_weight_1_0_clk,
    BRAM_weight_1_0_din,
    BRAM_weight_1_0_dout,
    BRAM_weight_1_0_en,
    BRAM_weight_1_0_rst,
    BRAM_weight_1_0_we,
    BRAM_weight_1_1_addr,
    BRAM_weight_1_1_clk,
    BRAM_weight_1_1_din,
    BRAM_weight_1_1_dout,
    BRAM_weight_1_1_en,
    BRAM_weight_1_1_rst,
    BRAM_weight_1_1_we,
    BRAM_weight_1_2_addr,
    BRAM_weight_1_2_clk,
    BRAM_weight_1_2_din,
    BRAM_weight_1_2_dout,
    BRAM_weight_1_2_en,
    BRAM_weight_1_2_rst,
    BRAM_weight_1_2_we,
    BRAM_weight_1_3_addr,
    BRAM_weight_1_3_clk,
    BRAM_weight_1_3_din,
    BRAM_weight_1_3_dout,
    BRAM_weight_1_3_en,
    BRAM_weight_1_3_rst,
    BRAM_weight_1_3_we,
    BRAM_weight_2_0_addr,
    BRAM_weight_2_0_clk,
    BRAM_weight_2_0_din,
    BRAM_weight_2_0_dout,
    BRAM_weight_2_0_en,
    BRAM_weight_2_0_rst,
    BRAM_weight_2_0_we,
    BRAM_weight_2_1_addr,
    BRAM_weight_2_1_clk,
    BRAM_weight_2_1_din,
    BRAM_weight_2_1_dout,
    BRAM_weight_2_1_en,
    BRAM_weight_2_1_rst,
    BRAM_weight_2_1_we,
    BRAM_weight_2_2_addr,
    BRAM_weight_2_2_clk,
    BRAM_weight_2_2_din,
    BRAM_weight_2_2_dout,
    BRAM_weight_2_2_en,
    BRAM_weight_2_2_rst,
    BRAM_weight_2_2_we,
    BRAM_weight_2_3_addr,
    BRAM_weight_2_3_clk,
    BRAM_weight_2_3_din,
    BRAM_weight_2_3_dout,
    BRAM_weight_2_3_en,
    BRAM_weight_2_3_rst,
    BRAM_weight_2_3_we,
    BRAM_weight_3_0_addr,
    BRAM_weight_3_0_clk,
    BRAM_weight_3_0_din,
    BRAM_weight_3_0_dout,
    BRAM_weight_3_0_en,
    BRAM_weight_3_0_rst,
    BRAM_weight_3_0_we,
    BRAM_weight_3_1_addr,
    BRAM_weight_3_1_clk,
    BRAM_weight_3_1_din,
    BRAM_weight_3_1_dout,
    BRAM_weight_3_1_en,
    BRAM_weight_3_1_rst,
    BRAM_weight_3_1_we,
    BRAM_weight_3_2_addr,
    BRAM_weight_3_2_clk,
    BRAM_weight_3_2_din,
    BRAM_weight_3_2_dout,
    BRAM_weight_3_2_en,
    BRAM_weight_3_2_rst,
    BRAM_weight_3_2_we,
    BRAM_weight_3_3_addr,
    BRAM_weight_3_3_clk,
    BRAM_weight_3_3_din,
    BRAM_weight_3_3_dout,
    BRAM_weight_3_3_en,
    BRAM_weight_3_3_rst,
    BRAM_weight_3_3_we,
    WxW_out,
    channel_input_img,
    clk,
    end_core_out,
    no_channel_out,
    rst,
    start_core_in,
    stride,
    weight_size_1_16,
    width_input_img);
  input [11:0]BRAM_img_addr_0;
  input [11:0]BRAM_img_addr_1;
  input [11:0]BRAM_img_addr_2;
  input [11:0]BRAM_img_addr_3;
  input [31:0]BRAM_img_din_0;
  input [31:0]BRAM_img_din_1;
  input [31:0]BRAM_img_din_2;
  input [31:0]BRAM_img_din_3;
  output [31:0]BRAM_img_dout_0;
  output [31:0]BRAM_img_dout_1;
  output [31:0]BRAM_img_dout_2;
  output [31:0]BRAM_img_dout_3;
  input BRAM_img_en_0;
  input BRAM_img_en_1;
  input BRAM_img_en_2;
  input BRAM_img_en_3;
  input BRAM_img_rst_0;
  input BRAM_img_rst_1;
  input BRAM_img_rst_2;
  input BRAM_img_rst_3;
  input BRAM_img_sel;
  input [3:0]BRAM_img_wen_0;
  input [3:0]BRAM_img_wen_1;
  input [3:0]BRAM_img_wen_2;
  input [3:0]BRAM_img_wen_3;
  input [11:0]BRAM_out_0_addr;
  input BRAM_out_0_clk;
  input [31:0]BRAM_out_0_din;
  output [31:0]BRAM_out_0_dout;
  input BRAM_out_0_en;
  input BRAM_out_0_rst;
  input [3:0]BRAM_out_0_we;
  input [11:0]BRAM_out_1_addr;
  input BRAM_out_1_clk;
  input [31:0]BRAM_out_1_din;
  output [31:0]BRAM_out_1_dout;
  input BRAM_out_1_en;
  input BRAM_out_1_rst;
  input [3:0]BRAM_out_1_we;
  input [11:0]BRAM_out_2_addr;
  input BRAM_out_2_clk;
  input [31:0]BRAM_out_2_din;
  output [31:0]BRAM_out_2_dout;
  input BRAM_out_2_en;
  input BRAM_out_2_rst;
  input [3:0]BRAM_out_2_we;
  input [11:0]BRAM_out_3_addr;
  input BRAM_out_3_clk;
  input [31:0]BRAM_out_3_din;
  output [31:0]BRAM_out_3_dout;
  input BRAM_out_3_en;
  input BRAM_out_3_rst;
  input [3:0]BRAM_out_3_we;
  input [11:0]BRAM_weight_0_0_addr;
  input BRAM_weight_0_0_clk;
  input [31:0]BRAM_weight_0_0_din;
  output [31:0]BRAM_weight_0_0_dout;
  input BRAM_weight_0_0_en;
  input BRAM_weight_0_0_rst;
  input [3:0]BRAM_weight_0_0_we;
  input [11:0]BRAM_weight_0_1_addr;
  input BRAM_weight_0_1_clk;
  input [31:0]BRAM_weight_0_1_din;
  output [31:0]BRAM_weight_0_1_dout;
  input BRAM_weight_0_1_en;
  input BRAM_weight_0_1_rst;
  input [3:0]BRAM_weight_0_1_we;
  input [11:0]BRAM_weight_0_2_addr;
  input BRAM_weight_0_2_clk;
  input [31:0]BRAM_weight_0_2_din;
  output [31:0]BRAM_weight_0_2_dout;
  input BRAM_weight_0_2_en;
  input BRAM_weight_0_2_rst;
  input [3:0]BRAM_weight_0_2_we;
  input [11:0]BRAM_weight_0_3_addr;
  input BRAM_weight_0_3_clk;
  input [31:0]BRAM_weight_0_3_din;
  output [31:0]BRAM_weight_0_3_dout;
  input BRAM_weight_0_3_en;
  input BRAM_weight_0_3_rst;
  input [3:0]BRAM_weight_0_3_we;
  input [11:0]BRAM_weight_1_0_addr;
  input BRAM_weight_1_0_clk;
  input [31:0]BRAM_weight_1_0_din;
  output [31:0]BRAM_weight_1_0_dout;
  input BRAM_weight_1_0_en;
  input BRAM_weight_1_0_rst;
  input [3:0]BRAM_weight_1_0_we;
  input [11:0]BRAM_weight_1_1_addr;
  input BRAM_weight_1_1_clk;
  input [31:0]BRAM_weight_1_1_din;
  output [31:0]BRAM_weight_1_1_dout;
  input BRAM_weight_1_1_en;
  input BRAM_weight_1_1_rst;
  input [3:0]BRAM_weight_1_1_we;
  input [11:0]BRAM_weight_1_2_addr;
  input BRAM_weight_1_2_clk;
  input [31:0]BRAM_weight_1_2_din;
  output [31:0]BRAM_weight_1_2_dout;
  input BRAM_weight_1_2_en;
  input BRAM_weight_1_2_rst;
  input [3:0]BRAM_weight_1_2_we;
  input [11:0]BRAM_weight_1_3_addr;
  input BRAM_weight_1_3_clk;
  input [31:0]BRAM_weight_1_3_din;
  output [31:0]BRAM_weight_1_3_dout;
  input BRAM_weight_1_3_en;
  input BRAM_weight_1_3_rst;
  input [3:0]BRAM_weight_1_3_we;
  input [11:0]BRAM_weight_2_0_addr;
  input BRAM_weight_2_0_clk;
  input [31:0]BRAM_weight_2_0_din;
  output [31:0]BRAM_weight_2_0_dout;
  input BRAM_weight_2_0_en;
  input BRAM_weight_2_0_rst;
  input [3:0]BRAM_weight_2_0_we;
  input [11:0]BRAM_weight_2_1_addr;
  input BRAM_weight_2_1_clk;
  input [31:0]BRAM_weight_2_1_din;
  output [31:0]BRAM_weight_2_1_dout;
  input BRAM_weight_2_1_en;
  input BRAM_weight_2_1_rst;
  input [3:0]BRAM_weight_2_1_we;
  input [11:0]BRAM_weight_2_2_addr;
  input BRAM_weight_2_2_clk;
  input [31:0]BRAM_weight_2_2_din;
  output [31:0]BRAM_weight_2_2_dout;
  input BRAM_weight_2_2_en;
  input BRAM_weight_2_2_rst;
  input [3:0]BRAM_weight_2_2_we;
  input [11:0]BRAM_weight_2_3_addr;
  input BRAM_weight_2_3_clk;
  input [31:0]BRAM_weight_2_3_din;
  output [31:0]BRAM_weight_2_3_dout;
  input BRAM_weight_2_3_en;
  input BRAM_weight_2_3_rst;
  input [3:0]BRAM_weight_2_3_we;
  input [11:0]BRAM_weight_3_0_addr;
  input BRAM_weight_3_0_clk;
  input [31:0]BRAM_weight_3_0_din;
  output [31:0]BRAM_weight_3_0_dout;
  input BRAM_weight_3_0_en;
  input BRAM_weight_3_0_rst;
  input [3:0]BRAM_weight_3_0_we;
  input [11:0]BRAM_weight_3_1_addr;
  input BRAM_weight_3_1_clk;
  input [31:0]BRAM_weight_3_1_din;
  output [31:0]BRAM_weight_3_1_dout;
  input BRAM_weight_3_1_en;
  input BRAM_weight_3_1_rst;
  input [3:0]BRAM_weight_3_1_we;
  input [11:0]BRAM_weight_3_2_addr;
  input BRAM_weight_3_2_clk;
  input [31:0]BRAM_weight_3_2_din;
  output [31:0]BRAM_weight_3_2_dout;
  input BRAM_weight_3_2_en;
  input BRAM_weight_3_2_rst;
  input [3:0]BRAM_weight_3_2_we;
  input [11:0]BRAM_weight_3_3_addr;
  input BRAM_weight_3_3_clk;
  input [31:0]BRAM_weight_3_3_din;
  output [31:0]BRAM_weight_3_3_dout;
  input BRAM_weight_3_3_en;
  input BRAM_weight_3_3_rst;
  input [3:0]BRAM_weight_3_3_we;
  input [15:0]WxW_out;
  input [11:0]channel_input_img;
  input clk;
  output end_core_out;
  input [10:0]no_channel_out;
  input rst;
  input start_core_in;
  input [2:0]stride;
  input [31:0]weight_size_1_16;
  input [11:0]width_input_img;

  wire [11:0]BRAM_img_AXI_addr_0_1;
  wire [11:0]BRAM_img_AXI_addr_0_2;
  wire [11:0]BRAM_img_AXI_addr_0_3;
  wire [11:0]BRAM_img_AXI_addr_0_4;
  wire [31:0]BRAM_img_AXI_din_0_1;
  wire [31:0]BRAM_img_AXI_din_0_2;
  wire [31:0]BRAM_img_AXI_din_0_3;
  wire [31:0]BRAM_img_AXI_din_0_4;
  wire BRAM_img_AXI_en_0_1;
  wire BRAM_img_AXI_en_0_2;
  wire BRAM_img_AXI_en_0_3;
  wire BRAM_img_AXI_en_0_4;
  wire BRAM_img_AXI_rst_0_1;
  wire BRAM_img_AXI_rst_0_2;
  wire BRAM_img_AXI_rst_0_3;
  wire BRAM_img_AXI_rst_0_4;
  wire [3:0]BRAM_img_AXI_wen_0_1;
  wire [3:0]BRAM_img_AXI_wen_0_2;
  wire [3:0]BRAM_img_AXI_wen_0_3;
  wire [3:0]BRAM_img_AXI_wen_0_4;
  wire BRAM_img_sel_0_1;
  wire [11:0]BRAM_out_AXI_0_0_1_ADDR;
  wire BRAM_out_AXI_0_0_1_CLK;
  wire [31:0]BRAM_out_AXI_0_0_1_DIN;
  wire [31:0]BRAM_out_AXI_0_0_1_DOUT;
  wire BRAM_out_AXI_0_0_1_EN;
  wire BRAM_out_AXI_0_0_1_RST;
  wire [3:0]BRAM_out_AXI_0_0_1_WE;
  wire [11:0]BRAM_out_AXI_1_0_1_ADDR;
  wire BRAM_out_AXI_1_0_1_CLK;
  wire [31:0]BRAM_out_AXI_1_0_1_DIN;
  wire [31:0]BRAM_out_AXI_1_0_1_DOUT;
  wire BRAM_out_AXI_1_0_1_EN;
  wire BRAM_out_AXI_1_0_1_RST;
  wire [3:0]BRAM_out_AXI_1_0_1_WE;
  wire [11:0]BRAM_out_AXI_2_0_1_ADDR;
  wire BRAM_out_AXI_2_0_1_CLK;
  wire [31:0]BRAM_out_AXI_2_0_1_DIN;
  wire [31:0]BRAM_out_AXI_2_0_1_DOUT;
  wire BRAM_out_AXI_2_0_1_EN;
  wire BRAM_out_AXI_2_0_1_RST;
  wire [3:0]BRAM_out_AXI_2_0_1_WE;
  wire [11:0]BRAM_out_AXI_3_0_1_ADDR;
  wire BRAM_out_AXI_3_0_1_CLK;
  wire [31:0]BRAM_out_AXI_3_0_1_DIN;
  wire [31:0]BRAM_out_AXI_3_0_1_DOUT;
  wire BRAM_out_AXI_3_0_1_EN;
  wire BRAM_out_AXI_3_0_1_RST;
  wire [3:0]BRAM_out_AXI_3_0_1_WE;
  wire [11:0]BRAM_weight_AXI_0_0_1_ADDR;
  wire BRAM_weight_AXI_0_0_1_CLK;
  wire [31:0]BRAM_weight_AXI_0_0_1_DIN;
  wire [31:0]BRAM_weight_AXI_0_0_1_DOUT;
  wire BRAM_weight_AXI_0_0_1_EN;
  wire BRAM_weight_AXI_0_0_1_RST;
  wire [3:0]BRAM_weight_AXI_0_0_1_WE;
  wire [11:0]BRAM_weight_AXI_0_1_1_ADDR;
  wire BRAM_weight_AXI_0_1_1_CLK;
  wire [31:0]BRAM_weight_AXI_0_1_1_DIN;
  wire [31:0]BRAM_weight_AXI_0_1_1_DOUT;
  wire BRAM_weight_AXI_0_1_1_EN;
  wire BRAM_weight_AXI_0_1_1_RST;
  wire [3:0]BRAM_weight_AXI_0_1_1_WE;
  wire [11:0]BRAM_weight_AXI_0_2_1_ADDR;
  wire BRAM_weight_AXI_0_2_1_CLK;
  wire [31:0]BRAM_weight_AXI_0_2_1_DIN;
  wire [31:0]BRAM_weight_AXI_0_2_1_DOUT;
  wire BRAM_weight_AXI_0_2_1_EN;
  wire BRAM_weight_AXI_0_2_1_RST;
  wire [3:0]BRAM_weight_AXI_0_2_1_WE;
  wire [11:0]BRAM_weight_AXI_0_3_1_ADDR;
  wire BRAM_weight_AXI_0_3_1_CLK;
  wire [31:0]BRAM_weight_AXI_0_3_1_DIN;
  wire [31:0]BRAM_weight_AXI_0_3_1_DOUT;
  wire BRAM_weight_AXI_0_3_1_EN;
  wire BRAM_weight_AXI_0_3_1_RST;
  wire [3:0]BRAM_weight_AXI_0_3_1_WE;
  wire [11:0]BRAM_weight_AXI_1_0_1_ADDR;
  wire BRAM_weight_AXI_1_0_1_CLK;
  wire [31:0]BRAM_weight_AXI_1_0_1_DIN;
  wire [31:0]BRAM_weight_AXI_1_0_1_DOUT;
  wire BRAM_weight_AXI_1_0_1_EN;
  wire BRAM_weight_AXI_1_0_1_RST;
  wire [3:0]BRAM_weight_AXI_1_0_1_WE;
  wire [11:0]BRAM_weight_AXI_1_1_1_ADDR;
  wire BRAM_weight_AXI_1_1_1_CLK;
  wire [31:0]BRAM_weight_AXI_1_1_1_DIN;
  wire [31:0]BRAM_weight_AXI_1_1_1_DOUT;
  wire BRAM_weight_AXI_1_1_1_EN;
  wire BRAM_weight_AXI_1_1_1_RST;
  wire [3:0]BRAM_weight_AXI_1_1_1_WE;
  wire [11:0]BRAM_weight_AXI_1_2_1_ADDR;
  wire BRAM_weight_AXI_1_2_1_CLK;
  wire [31:0]BRAM_weight_AXI_1_2_1_DIN;
  wire [31:0]BRAM_weight_AXI_1_2_1_DOUT;
  wire BRAM_weight_AXI_1_2_1_EN;
  wire BRAM_weight_AXI_1_2_1_RST;
  wire [3:0]BRAM_weight_AXI_1_2_1_WE;
  wire [11:0]BRAM_weight_AXI_1_3_1_ADDR;
  wire BRAM_weight_AXI_1_3_1_CLK;
  wire [31:0]BRAM_weight_AXI_1_3_1_DIN;
  wire [31:0]BRAM_weight_AXI_1_3_1_DOUT;
  wire BRAM_weight_AXI_1_3_1_EN;
  wire BRAM_weight_AXI_1_3_1_RST;
  wire [3:0]BRAM_weight_AXI_1_3_1_WE;
  wire [11:0]BRAM_weight_AXI_2_0_1_ADDR;
  wire BRAM_weight_AXI_2_0_1_CLK;
  wire [31:0]BRAM_weight_AXI_2_0_1_DIN;
  wire [31:0]BRAM_weight_AXI_2_0_1_DOUT;
  wire BRAM_weight_AXI_2_0_1_EN;
  wire BRAM_weight_AXI_2_0_1_RST;
  wire [3:0]BRAM_weight_AXI_2_0_1_WE;
  wire [11:0]BRAM_weight_AXI_2_1_1_ADDR;
  wire BRAM_weight_AXI_2_1_1_CLK;
  wire [31:0]BRAM_weight_AXI_2_1_1_DIN;
  wire [31:0]BRAM_weight_AXI_2_1_1_DOUT;
  wire BRAM_weight_AXI_2_1_1_EN;
  wire BRAM_weight_AXI_2_1_1_RST;
  wire [3:0]BRAM_weight_AXI_2_1_1_WE;
  wire [11:0]BRAM_weight_AXI_2_2_1_ADDR;
  wire BRAM_weight_AXI_2_2_1_CLK;
  wire [31:0]BRAM_weight_AXI_2_2_1_DIN;
  wire [31:0]BRAM_weight_AXI_2_2_1_DOUT;
  wire BRAM_weight_AXI_2_2_1_EN;
  wire BRAM_weight_AXI_2_2_1_RST;
  wire [3:0]BRAM_weight_AXI_2_2_1_WE;
  wire [11:0]BRAM_weight_AXI_2_3_1_ADDR;
  wire BRAM_weight_AXI_2_3_1_CLK;
  wire [31:0]BRAM_weight_AXI_2_3_1_DIN;
  wire [31:0]BRAM_weight_AXI_2_3_1_DOUT;
  wire BRAM_weight_AXI_2_3_1_EN;
  wire BRAM_weight_AXI_2_3_1_RST;
  wire [3:0]BRAM_weight_AXI_2_3_1_WE;
  wire [11:0]BRAM_weight_AXI_3_0_1_ADDR;
  wire BRAM_weight_AXI_3_0_1_CLK;
  wire [31:0]BRAM_weight_AXI_3_0_1_DIN;
  wire [31:0]BRAM_weight_AXI_3_0_1_DOUT;
  wire BRAM_weight_AXI_3_0_1_EN;
  wire BRAM_weight_AXI_3_0_1_RST;
  wire [3:0]BRAM_weight_AXI_3_0_1_WE;
  wire [11:0]BRAM_weight_AXI_3_1_1_ADDR;
  wire BRAM_weight_AXI_3_1_1_CLK;
  wire [31:0]BRAM_weight_AXI_3_1_1_DIN;
  wire [31:0]BRAM_weight_AXI_3_1_1_DOUT;
  wire BRAM_weight_AXI_3_1_1_EN;
  wire BRAM_weight_AXI_3_1_1_RST;
  wire [3:0]BRAM_weight_AXI_3_1_1_WE;
  wire [11:0]BRAM_weight_AXI_3_2_1_ADDR;
  wire BRAM_weight_AXI_3_2_1_CLK;
  wire [31:0]BRAM_weight_AXI_3_2_1_DIN;
  wire [31:0]BRAM_weight_AXI_3_2_1_DOUT;
  wire BRAM_weight_AXI_3_2_1_EN;
  wire BRAM_weight_AXI_3_2_1_RST;
  wire [3:0]BRAM_weight_AXI_3_2_1_WE;
  wire [11:0]BRAM_weight_AXI_3_3_1_ADDR;
  wire BRAM_weight_AXI_3_3_1_CLK;
  wire [31:0]BRAM_weight_AXI_3_3_1_DIN;
  wire [31:0]BRAM_weight_AXI_3_3_1_DOUT;
  wire BRAM_weight_AXI_3_3_1_EN;
  wire BRAM_weight_AXI_3_3_1_RST;
  wire [3:0]BRAM_weight_AXI_3_3_1_WE;
  wire [31:0]Convo_core_0_BRAM_img_AXI_dout;
  wire [7:0]Convo_core_0_out_psum0;
  wire [7:0]Convo_core_0_out_psum1;
  wire [7:0]Convo_core_0_out_psum2;
  wire [7:0]Convo_core_0_out_psum3;
  wire [31:0]Convo_core_1_BRAM_img_AXI_dout;
  wire [7:0]Convo_core_1_out_psum0;
  wire [7:0]Convo_core_1_out_psum1;
  wire [7:0]Convo_core_1_out_psum2;
  wire [7:0]Convo_core_1_out_psum3;
  wire [31:0]Convo_core_2_BRAM_img_AXI_dout;
  wire [7:0]Convo_core_2_out_psum0;
  wire [7:0]Convo_core_2_out_psum1;
  wire [7:0]Convo_core_2_out_psum2;
  wire [7:0]Convo_core_2_out_psum3;
  wire Convo_core_2_out_psum_vld;
  wire [31:0]Convo_core_3_BRAM_img_AXI_dout;
  wire Convo_core_3_img_end_0;
  wire [7:0]Convo_core_3_out_psum0;
  wire [7:0]Convo_core_3_out_psum1;
  wire [7:0]Convo_core_3_out_psum2;
  wire [7:0]Convo_core_3_out_psum3;
  wire Convo_core_3_weight_end;
  wire Multi_accumulator_0_accum_done;
  wire [15:0]WxW_out_0_1;
  wire [11:0]channel_input_img_0_1;
  wire clk_0_1;
  wire controller_0_end_core_out;
  wire en_0_1;
  wire init_signal_0_1;
  wire mac_done_0_1;
  wire mac_done_1_1;
  wire mac_done_3_1;
  wire [10:0]no_channel_out_0_1;
  wire rst_0_1;
  wire start_core_in_0_1;
  wire [2:0]stride_0_1;
  wire [31:0]weight_size_1_16_0_1;
  wire [11:0]width_input_img_0_1;

  assign BRAM_img_AXI_addr_0_1 = BRAM_img_addr_0[11:0];
  assign BRAM_img_AXI_addr_0_2 = BRAM_img_addr_1[11:0];
  assign BRAM_img_AXI_addr_0_3 = BRAM_img_addr_2[11:0];
  assign BRAM_img_AXI_addr_0_4 = BRAM_img_addr_3[11:0];
  assign BRAM_img_AXI_din_0_1 = BRAM_img_din_0[31:0];
  assign BRAM_img_AXI_din_0_2 = BRAM_img_din_1[31:0];
  assign BRAM_img_AXI_din_0_3 = BRAM_img_din_2[31:0];
  assign BRAM_img_AXI_din_0_4 = BRAM_img_din_3[31:0];
  assign BRAM_img_AXI_en_0_1 = BRAM_img_en_0;
  assign BRAM_img_AXI_en_0_2 = BRAM_img_en_1;
  assign BRAM_img_AXI_en_0_3 = BRAM_img_en_2;
  assign BRAM_img_AXI_en_0_4 = BRAM_img_en_3;
  assign BRAM_img_AXI_rst_0_1 = BRAM_img_rst_0;
  assign BRAM_img_AXI_rst_0_2 = BRAM_img_rst_1;
  assign BRAM_img_AXI_rst_0_3 = BRAM_img_rst_2;
  assign BRAM_img_AXI_rst_0_4 = BRAM_img_rst_3;
  assign BRAM_img_AXI_wen_0_1 = BRAM_img_wen_0[3:0];
  assign BRAM_img_AXI_wen_0_2 = BRAM_img_wen_1[3:0];
  assign BRAM_img_AXI_wen_0_3 = BRAM_img_wen_2[3:0];
  assign BRAM_img_AXI_wen_0_4 = BRAM_img_wen_3[3:0];
  assign BRAM_img_dout_0[31:0] = Convo_core_0_BRAM_img_AXI_dout;
  assign BRAM_img_dout_1[31:0] = Convo_core_1_BRAM_img_AXI_dout;
  assign BRAM_img_dout_2[31:0] = Convo_core_2_BRAM_img_AXI_dout;
  assign BRAM_img_dout_3[31:0] = Convo_core_3_BRAM_img_AXI_dout;
  assign BRAM_img_sel_0_1 = BRAM_img_sel;
  assign BRAM_out_0_dout[31:0] = BRAM_out_AXI_0_0_1_DOUT;
  assign BRAM_out_1_dout[31:0] = BRAM_out_AXI_1_0_1_DOUT;
  assign BRAM_out_2_dout[31:0] = BRAM_out_AXI_2_0_1_DOUT;
  assign BRAM_out_3_dout[31:0] = BRAM_out_AXI_3_0_1_DOUT;
  assign BRAM_out_AXI_0_0_1_ADDR = BRAM_out_0_addr[11:0];
  assign BRAM_out_AXI_0_0_1_CLK = BRAM_out_0_clk;
  assign BRAM_out_AXI_0_0_1_DIN = BRAM_out_0_din[31:0];
  assign BRAM_out_AXI_0_0_1_EN = BRAM_out_0_en;
  assign BRAM_out_AXI_0_0_1_RST = BRAM_out_0_rst;
  assign BRAM_out_AXI_0_0_1_WE = BRAM_out_0_we[3:0];
  assign BRAM_out_AXI_1_0_1_ADDR = BRAM_out_1_addr[11:0];
  assign BRAM_out_AXI_1_0_1_CLK = BRAM_out_1_clk;
  assign BRAM_out_AXI_1_0_1_DIN = BRAM_out_1_din[31:0];
  assign BRAM_out_AXI_1_0_1_EN = BRAM_out_1_en;
  assign BRAM_out_AXI_1_0_1_RST = BRAM_out_1_rst;
  assign BRAM_out_AXI_1_0_1_WE = BRAM_out_1_we[3:0];
  assign BRAM_out_AXI_2_0_1_ADDR = BRAM_out_2_addr[11:0];
  assign BRAM_out_AXI_2_0_1_CLK = BRAM_out_2_clk;
  assign BRAM_out_AXI_2_0_1_DIN = BRAM_out_2_din[31:0];
  assign BRAM_out_AXI_2_0_1_EN = BRAM_out_2_en;
  assign BRAM_out_AXI_2_0_1_RST = BRAM_out_2_rst;
  assign BRAM_out_AXI_2_0_1_WE = BRAM_out_2_we[3:0];
  assign BRAM_out_AXI_3_0_1_ADDR = BRAM_out_3_addr[11:0];
  assign BRAM_out_AXI_3_0_1_CLK = BRAM_out_3_clk;
  assign BRAM_out_AXI_3_0_1_DIN = BRAM_out_3_din[31:0];
  assign BRAM_out_AXI_3_0_1_EN = BRAM_out_3_en;
  assign BRAM_out_AXI_3_0_1_RST = BRAM_out_3_rst;
  assign BRAM_out_AXI_3_0_1_WE = BRAM_out_3_we[3:0];
  assign BRAM_weight_0_0_dout[31:0] = BRAM_weight_AXI_0_0_1_DOUT;
  assign BRAM_weight_0_1_dout[31:0] = BRAM_weight_AXI_1_0_1_DOUT;
  assign BRAM_weight_0_2_dout[31:0] = BRAM_weight_AXI_2_2_1_DOUT;
  assign BRAM_weight_0_3_dout[31:0] = BRAM_weight_AXI_3_2_1_DOUT;
  assign BRAM_weight_1_0_dout[31:0] = BRAM_weight_AXI_0_3_1_DOUT;
  assign BRAM_weight_1_1_dout[31:0] = BRAM_weight_AXI_1_3_1_DOUT;
  assign BRAM_weight_1_2_dout[31:0] = BRAM_weight_AXI_2_1_1_DOUT;
  assign BRAM_weight_1_3_dout[31:0] = BRAM_weight_AXI_3_1_1_DOUT;
  assign BRAM_weight_2_0_dout[31:0] = BRAM_weight_AXI_0_2_1_DOUT;
  assign BRAM_weight_2_1_dout[31:0] = BRAM_weight_AXI_1_2_1_DOUT;
  assign BRAM_weight_2_2_dout[31:0] = BRAM_weight_AXI_2_0_1_DOUT;
  assign BRAM_weight_2_3_dout[31:0] = BRAM_weight_AXI_3_0_1_DOUT;
  assign BRAM_weight_3_0_dout[31:0] = BRAM_weight_AXI_0_1_1_DOUT;
  assign BRAM_weight_3_1_dout[31:0] = BRAM_weight_AXI_1_1_1_DOUT;
  assign BRAM_weight_3_2_dout[31:0] = BRAM_weight_AXI_2_3_1_DOUT;
  assign BRAM_weight_3_3_dout[31:0] = BRAM_weight_AXI_3_3_1_DOUT;
  assign BRAM_weight_AXI_0_0_1_ADDR = BRAM_weight_0_0_addr[11:0];
  assign BRAM_weight_AXI_0_0_1_CLK = BRAM_weight_0_0_clk;
  assign BRAM_weight_AXI_0_0_1_DIN = BRAM_weight_0_0_din[31:0];
  assign BRAM_weight_AXI_0_0_1_EN = BRAM_weight_0_0_en;
  assign BRAM_weight_AXI_0_0_1_RST = BRAM_weight_0_0_rst;
  assign BRAM_weight_AXI_0_0_1_WE = BRAM_weight_0_0_we[3:0];
  assign BRAM_weight_AXI_0_1_1_ADDR = BRAM_weight_3_0_addr[11:0];
  assign BRAM_weight_AXI_0_1_1_CLK = BRAM_weight_3_0_clk;
  assign BRAM_weight_AXI_0_1_1_DIN = BRAM_weight_3_0_din[31:0];
  assign BRAM_weight_AXI_0_1_1_EN = BRAM_weight_3_0_en;
  assign BRAM_weight_AXI_0_1_1_RST = BRAM_weight_3_0_rst;
  assign BRAM_weight_AXI_0_1_1_WE = BRAM_weight_3_0_we[3:0];
  assign BRAM_weight_AXI_0_2_1_ADDR = BRAM_weight_2_0_addr[11:0];
  assign BRAM_weight_AXI_0_2_1_CLK = BRAM_weight_2_0_clk;
  assign BRAM_weight_AXI_0_2_1_DIN = BRAM_weight_2_0_din[31:0];
  assign BRAM_weight_AXI_0_2_1_EN = BRAM_weight_2_0_en;
  assign BRAM_weight_AXI_0_2_1_RST = BRAM_weight_2_0_rst;
  assign BRAM_weight_AXI_0_2_1_WE = BRAM_weight_2_0_we[3:0];
  assign BRAM_weight_AXI_0_3_1_ADDR = BRAM_weight_1_0_addr[11:0];
  assign BRAM_weight_AXI_0_3_1_CLK = BRAM_weight_1_0_clk;
  assign BRAM_weight_AXI_0_3_1_DIN = BRAM_weight_1_0_din[31:0];
  assign BRAM_weight_AXI_0_3_1_EN = BRAM_weight_1_0_en;
  assign BRAM_weight_AXI_0_3_1_RST = BRAM_weight_1_0_rst;
  assign BRAM_weight_AXI_0_3_1_WE = BRAM_weight_1_0_we[3:0];
  assign BRAM_weight_AXI_1_0_1_ADDR = BRAM_weight_0_1_addr[11:0];
  assign BRAM_weight_AXI_1_0_1_CLK = BRAM_weight_0_1_clk;
  assign BRAM_weight_AXI_1_0_1_DIN = BRAM_weight_0_1_din[31:0];
  assign BRAM_weight_AXI_1_0_1_EN = BRAM_weight_0_1_en;
  assign BRAM_weight_AXI_1_0_1_RST = BRAM_weight_0_1_rst;
  assign BRAM_weight_AXI_1_0_1_WE = BRAM_weight_0_1_we[3:0];
  assign BRAM_weight_AXI_1_1_1_ADDR = BRAM_weight_3_1_addr[11:0];
  assign BRAM_weight_AXI_1_1_1_CLK = BRAM_weight_3_1_clk;
  assign BRAM_weight_AXI_1_1_1_DIN = BRAM_weight_3_1_din[31:0];
  assign BRAM_weight_AXI_1_1_1_EN = BRAM_weight_3_1_en;
  assign BRAM_weight_AXI_1_1_1_RST = BRAM_weight_3_1_rst;
  assign BRAM_weight_AXI_1_1_1_WE = BRAM_weight_3_1_we[3:0];
  assign BRAM_weight_AXI_1_2_1_ADDR = BRAM_weight_2_1_addr[11:0];
  assign BRAM_weight_AXI_1_2_1_CLK = BRAM_weight_2_1_clk;
  assign BRAM_weight_AXI_1_2_1_DIN = BRAM_weight_2_1_din[31:0];
  assign BRAM_weight_AXI_1_2_1_EN = BRAM_weight_2_1_en;
  assign BRAM_weight_AXI_1_2_1_RST = BRAM_weight_2_1_rst;
  assign BRAM_weight_AXI_1_2_1_WE = BRAM_weight_2_1_we[3:0];
  assign BRAM_weight_AXI_1_3_1_ADDR = BRAM_weight_1_1_addr[11:0];
  assign BRAM_weight_AXI_1_3_1_CLK = BRAM_weight_1_1_clk;
  assign BRAM_weight_AXI_1_3_1_DIN = BRAM_weight_1_1_din[31:0];
  assign BRAM_weight_AXI_1_3_1_EN = BRAM_weight_1_1_en;
  assign BRAM_weight_AXI_1_3_1_RST = BRAM_weight_1_1_rst;
  assign BRAM_weight_AXI_1_3_1_WE = BRAM_weight_1_1_we[3:0];
  assign BRAM_weight_AXI_2_0_1_ADDR = BRAM_weight_2_2_addr[11:0];
  assign BRAM_weight_AXI_2_0_1_CLK = BRAM_weight_2_2_clk;
  assign BRAM_weight_AXI_2_0_1_DIN = BRAM_weight_2_2_din[31:0];
  assign BRAM_weight_AXI_2_0_1_EN = BRAM_weight_2_2_en;
  assign BRAM_weight_AXI_2_0_1_RST = BRAM_weight_2_2_rst;
  assign BRAM_weight_AXI_2_0_1_WE = BRAM_weight_2_2_we[3:0];
  assign BRAM_weight_AXI_2_1_1_ADDR = BRAM_weight_1_2_addr[11:0];
  assign BRAM_weight_AXI_2_1_1_CLK = BRAM_weight_1_2_clk;
  assign BRAM_weight_AXI_2_1_1_DIN = BRAM_weight_1_2_din[31:0];
  assign BRAM_weight_AXI_2_1_1_EN = BRAM_weight_1_2_en;
  assign BRAM_weight_AXI_2_1_1_RST = BRAM_weight_1_2_rst;
  assign BRAM_weight_AXI_2_1_1_WE = BRAM_weight_1_2_we[3:0];
  assign BRAM_weight_AXI_2_2_1_ADDR = BRAM_weight_0_2_addr[11:0];
  assign BRAM_weight_AXI_2_2_1_CLK = BRAM_weight_0_2_clk;
  assign BRAM_weight_AXI_2_2_1_DIN = BRAM_weight_0_2_din[31:0];
  assign BRAM_weight_AXI_2_2_1_EN = BRAM_weight_0_2_en;
  assign BRAM_weight_AXI_2_2_1_RST = BRAM_weight_0_2_rst;
  assign BRAM_weight_AXI_2_2_1_WE = BRAM_weight_0_2_we[3:0];
  assign BRAM_weight_AXI_2_3_1_ADDR = BRAM_weight_3_2_addr[11:0];
  assign BRAM_weight_AXI_2_3_1_CLK = BRAM_weight_3_2_clk;
  assign BRAM_weight_AXI_2_3_1_DIN = BRAM_weight_3_2_din[31:0];
  assign BRAM_weight_AXI_2_3_1_EN = BRAM_weight_3_2_en;
  assign BRAM_weight_AXI_2_3_1_RST = BRAM_weight_3_2_rst;
  assign BRAM_weight_AXI_2_3_1_WE = BRAM_weight_3_2_we[3:0];
  assign BRAM_weight_AXI_3_0_1_ADDR = BRAM_weight_2_3_addr[11:0];
  assign BRAM_weight_AXI_3_0_1_CLK = BRAM_weight_2_3_clk;
  assign BRAM_weight_AXI_3_0_1_DIN = BRAM_weight_2_3_din[31:0];
  assign BRAM_weight_AXI_3_0_1_EN = BRAM_weight_2_3_en;
  assign BRAM_weight_AXI_3_0_1_RST = BRAM_weight_2_3_rst;
  assign BRAM_weight_AXI_3_0_1_WE = BRAM_weight_2_3_we[3:0];
  assign BRAM_weight_AXI_3_1_1_ADDR = BRAM_weight_1_3_addr[11:0];
  assign BRAM_weight_AXI_3_1_1_CLK = BRAM_weight_1_3_clk;
  assign BRAM_weight_AXI_3_1_1_DIN = BRAM_weight_1_3_din[31:0];
  assign BRAM_weight_AXI_3_1_1_EN = BRAM_weight_1_3_en;
  assign BRAM_weight_AXI_3_1_1_RST = BRAM_weight_1_3_rst;
  assign BRAM_weight_AXI_3_1_1_WE = BRAM_weight_1_3_we[3:0];
  assign BRAM_weight_AXI_3_2_1_ADDR = BRAM_weight_0_3_addr[11:0];
  assign BRAM_weight_AXI_3_2_1_CLK = BRAM_weight_0_3_clk;
  assign BRAM_weight_AXI_3_2_1_DIN = BRAM_weight_0_3_din[31:0];
  assign BRAM_weight_AXI_3_2_1_EN = BRAM_weight_0_3_en;
  assign BRAM_weight_AXI_3_2_1_RST = BRAM_weight_0_3_rst;
  assign BRAM_weight_AXI_3_2_1_WE = BRAM_weight_0_3_we[3:0];
  assign BRAM_weight_AXI_3_3_1_ADDR = BRAM_weight_3_3_addr[11:0];
  assign BRAM_weight_AXI_3_3_1_CLK = BRAM_weight_3_3_clk;
  assign BRAM_weight_AXI_3_3_1_DIN = BRAM_weight_3_3_din[31:0];
  assign BRAM_weight_AXI_3_3_1_EN = BRAM_weight_3_3_en;
  assign BRAM_weight_AXI_3_3_1_RST = BRAM_weight_3_3_rst;
  assign BRAM_weight_AXI_3_3_1_WE = BRAM_weight_3_3_we[3:0];
  assign WxW_out_0_1 = WxW_out[15:0];
  assign channel_input_img_0_1 = channel_input_img[11:0];
  assign clk_0_1 = clk;
  assign end_core_out = controller_0_end_core_out;
  assign no_channel_out_0_1 = no_channel_out[10:0];
  assign rst_0_1 = rst;
  assign start_core_in_0_1 = start_core_in;
  assign stride_0_1 = stride[2:0];
  assign weight_size_1_16_0_1 = weight_size_1_16[31:0];
  assign width_input_img_0_1 = width_input_img[11:0];
  Convo_core_inst_0 Convo_core_0
       (.BRAM_img_AXI_addr(BRAM_img_AXI_addr_0_1),
        .BRAM_img_AXI_din(BRAM_img_AXI_din_0_1),
        .BRAM_img_AXI_dout(Convo_core_0_BRAM_img_AXI_dout),
        .BRAM_img_AXI_en(BRAM_img_AXI_en_0_1),
        .BRAM_img_AXI_rst(BRAM_img_AXI_rst_0_1),
        .BRAM_img_AXI_wen(BRAM_img_AXI_wen_0_1),
        .BRAM_img_sel(BRAM_img_sel_0_1),
        .BRAM_weight_AXI_0_addr(BRAM_weight_AXI_0_0_1_ADDR),
        .BRAM_weight_AXI_0_clk(BRAM_weight_AXI_0_0_1_CLK),
        .BRAM_weight_AXI_0_din(BRAM_weight_AXI_0_0_1_DIN),
        .BRAM_weight_AXI_0_dout(BRAM_weight_AXI_0_0_1_DOUT),
        .BRAM_weight_AXI_0_en(BRAM_weight_AXI_0_0_1_EN),
        .BRAM_weight_AXI_0_rst(BRAM_weight_AXI_0_0_1_RST),
        .BRAM_weight_AXI_0_we(BRAM_weight_AXI_0_0_1_WE),
        .BRAM_weight_AXI_1_addr(BRAM_weight_AXI_1_0_1_ADDR),
        .BRAM_weight_AXI_1_clk(BRAM_weight_AXI_1_0_1_CLK),
        .BRAM_weight_AXI_1_din(BRAM_weight_AXI_1_0_1_DIN),
        .BRAM_weight_AXI_1_dout(BRAM_weight_AXI_1_0_1_DOUT),
        .BRAM_weight_AXI_1_en(BRAM_weight_AXI_1_0_1_EN),
        .BRAM_weight_AXI_1_rst(BRAM_weight_AXI_1_0_1_RST),
        .BRAM_weight_AXI_1_we(BRAM_weight_AXI_1_0_1_WE),
        .BRAM_weight_AXI_2_addr(BRAM_weight_AXI_2_2_1_ADDR),
        .BRAM_weight_AXI_2_clk(BRAM_weight_AXI_2_2_1_CLK),
        .BRAM_weight_AXI_2_din(BRAM_weight_AXI_2_2_1_DIN),
        .BRAM_weight_AXI_2_dout(BRAM_weight_AXI_2_2_1_DOUT),
        .BRAM_weight_AXI_2_en(BRAM_weight_AXI_2_2_1_EN),
        .BRAM_weight_AXI_2_rst(BRAM_weight_AXI_2_2_1_RST),
        .BRAM_weight_AXI_2_we(BRAM_weight_AXI_2_2_1_WE),
        .BRAM_weight_AXI_3_addr(BRAM_weight_AXI_3_2_1_ADDR),
        .BRAM_weight_AXI_3_clk(BRAM_weight_AXI_3_2_1_CLK),
        .BRAM_weight_AXI_3_din(BRAM_weight_AXI_3_2_1_DIN),
        .BRAM_weight_AXI_3_dout(BRAM_weight_AXI_3_2_1_DOUT),
        .BRAM_weight_AXI_3_en(BRAM_weight_AXI_3_2_1_EN),
        .BRAM_weight_AXI_3_rst(BRAM_weight_AXI_3_2_1_RST),
        .BRAM_weight_AXI_3_we(BRAM_weight_AXI_3_2_1_WE),
        .accum_done(Multi_accumulator_0_accum_done),
        .channel_input_img(channel_input_img_0_1),
        .clk(clk_0_1),
        .en(en_0_1),
        .init_signal(init_signal_0_1),
        .out_psum0(Convo_core_0_out_psum0),
        .out_psum1(Convo_core_0_out_psum1),
        .out_psum2(Convo_core_0_out_psum2),
        .out_psum3(Convo_core_0_out_psum3),
        .out_psum_vld(mac_done_0_1),
        .rst(rst_0_1),
        .stride(stride_0_1),
        .weight_size_1_16(weight_size_1_16_0_1),
        .width_input_img(width_input_img_0_1));
  Convo_core_inst_1 Convo_core_1
       (.BRAM_img_AXI_addr(BRAM_img_AXI_addr_0_2),
        .BRAM_img_AXI_din(BRAM_img_AXI_din_0_2),
        .BRAM_img_AXI_dout(Convo_core_1_BRAM_img_AXI_dout),
        .BRAM_img_AXI_en(BRAM_img_AXI_en_0_2),
        .BRAM_img_AXI_rst(BRAM_img_AXI_rst_0_2),
        .BRAM_img_AXI_wen(BRAM_img_AXI_wen_0_2),
        .BRAM_img_sel(BRAM_img_sel_0_1),
        .BRAM_weight_AXI_0_addr(BRAM_weight_AXI_0_3_1_ADDR),
        .BRAM_weight_AXI_0_clk(BRAM_weight_AXI_0_3_1_CLK),
        .BRAM_weight_AXI_0_din(BRAM_weight_AXI_0_3_1_DIN),
        .BRAM_weight_AXI_0_dout(BRAM_weight_AXI_0_3_1_DOUT),
        .BRAM_weight_AXI_0_en(BRAM_weight_AXI_0_3_1_EN),
        .BRAM_weight_AXI_0_rst(BRAM_weight_AXI_0_3_1_RST),
        .BRAM_weight_AXI_0_we(BRAM_weight_AXI_0_3_1_WE),
        .BRAM_weight_AXI_1_addr(BRAM_weight_AXI_1_3_1_ADDR),
        .BRAM_weight_AXI_1_clk(BRAM_weight_AXI_1_3_1_CLK),
        .BRAM_weight_AXI_1_din(BRAM_weight_AXI_1_3_1_DIN),
        .BRAM_weight_AXI_1_dout(BRAM_weight_AXI_1_3_1_DOUT),
        .BRAM_weight_AXI_1_en(BRAM_weight_AXI_1_3_1_EN),
        .BRAM_weight_AXI_1_rst(BRAM_weight_AXI_1_3_1_RST),
        .BRAM_weight_AXI_1_we(BRAM_weight_AXI_1_3_1_WE),
        .BRAM_weight_AXI_2_addr(BRAM_weight_AXI_2_1_1_ADDR),
        .BRAM_weight_AXI_2_clk(BRAM_weight_AXI_2_1_1_CLK),
        .BRAM_weight_AXI_2_din(BRAM_weight_AXI_2_1_1_DIN),
        .BRAM_weight_AXI_2_dout(BRAM_weight_AXI_2_1_1_DOUT),
        .BRAM_weight_AXI_2_en(BRAM_weight_AXI_2_1_1_EN),
        .BRAM_weight_AXI_2_rst(BRAM_weight_AXI_2_1_1_RST),
        .BRAM_weight_AXI_2_we(BRAM_weight_AXI_2_1_1_WE),
        .BRAM_weight_AXI_3_addr(BRAM_weight_AXI_3_1_1_ADDR),
        .BRAM_weight_AXI_3_clk(BRAM_weight_AXI_3_1_1_CLK),
        .BRAM_weight_AXI_3_din(BRAM_weight_AXI_3_1_1_DIN),
        .BRAM_weight_AXI_3_dout(BRAM_weight_AXI_3_1_1_DOUT),
        .BRAM_weight_AXI_3_en(BRAM_weight_AXI_3_1_1_EN),
        .BRAM_weight_AXI_3_rst(BRAM_weight_AXI_3_1_1_RST),
        .BRAM_weight_AXI_3_we(BRAM_weight_AXI_3_1_1_WE),
        .accum_done(Multi_accumulator_0_accum_done),
        .channel_input_img(channel_input_img_0_1),
        .clk(clk_0_1),
        .en(en_0_1),
        .init_signal(init_signal_0_1),
        .out_psum0(Convo_core_1_out_psum0),
        .out_psum1(Convo_core_1_out_psum1),
        .out_psum2(Convo_core_1_out_psum2),
        .out_psum3(Convo_core_1_out_psum3),
        .out_psum_vld(mac_done_1_1),
        .rst(rst_0_1),
        .stride(stride_0_1),
        .weight_size_1_16(weight_size_1_16_0_1),
        .width_input_img(width_input_img_0_1));
  Convo_core_inst_2 Convo_core_2
       (.BRAM_img_AXI_addr(BRAM_img_AXI_addr_0_3),
        .BRAM_img_AXI_din(BRAM_img_AXI_din_0_3),
        .BRAM_img_AXI_dout(Convo_core_2_BRAM_img_AXI_dout),
        .BRAM_img_AXI_en(BRAM_img_AXI_en_0_3),
        .BRAM_img_AXI_rst(BRAM_img_AXI_rst_0_3),
        .BRAM_img_AXI_wen(BRAM_img_AXI_wen_0_3),
        .BRAM_img_sel(BRAM_img_sel_0_1),
        .BRAM_weight_AXI_0_addr(BRAM_weight_AXI_0_2_1_ADDR),
        .BRAM_weight_AXI_0_clk(BRAM_weight_AXI_0_2_1_CLK),
        .BRAM_weight_AXI_0_din(BRAM_weight_AXI_0_2_1_DIN),
        .BRAM_weight_AXI_0_dout(BRAM_weight_AXI_0_2_1_DOUT),
        .BRAM_weight_AXI_0_en(BRAM_weight_AXI_0_2_1_EN),
        .BRAM_weight_AXI_0_rst(BRAM_weight_AXI_0_2_1_RST),
        .BRAM_weight_AXI_0_we(BRAM_weight_AXI_0_2_1_WE),
        .BRAM_weight_AXI_1_addr(BRAM_weight_AXI_1_2_1_ADDR),
        .BRAM_weight_AXI_1_clk(BRAM_weight_AXI_1_2_1_CLK),
        .BRAM_weight_AXI_1_din(BRAM_weight_AXI_1_2_1_DIN),
        .BRAM_weight_AXI_1_dout(BRAM_weight_AXI_1_2_1_DOUT),
        .BRAM_weight_AXI_1_en(BRAM_weight_AXI_1_2_1_EN),
        .BRAM_weight_AXI_1_rst(BRAM_weight_AXI_1_2_1_RST),
        .BRAM_weight_AXI_1_we(BRAM_weight_AXI_1_2_1_WE),
        .BRAM_weight_AXI_2_addr(BRAM_weight_AXI_2_0_1_ADDR),
        .BRAM_weight_AXI_2_clk(BRAM_weight_AXI_2_0_1_CLK),
        .BRAM_weight_AXI_2_din(BRAM_weight_AXI_2_0_1_DIN),
        .BRAM_weight_AXI_2_dout(BRAM_weight_AXI_2_0_1_DOUT),
        .BRAM_weight_AXI_2_en(BRAM_weight_AXI_2_0_1_EN),
        .BRAM_weight_AXI_2_rst(BRAM_weight_AXI_2_0_1_RST),
        .BRAM_weight_AXI_2_we(BRAM_weight_AXI_2_0_1_WE),
        .BRAM_weight_AXI_3_addr(BRAM_weight_AXI_3_0_1_ADDR),
        .BRAM_weight_AXI_3_clk(BRAM_weight_AXI_3_0_1_CLK),
        .BRAM_weight_AXI_3_din(BRAM_weight_AXI_3_0_1_DIN),
        .BRAM_weight_AXI_3_dout(BRAM_weight_AXI_3_0_1_DOUT),
        .BRAM_weight_AXI_3_en(BRAM_weight_AXI_3_0_1_EN),
        .BRAM_weight_AXI_3_rst(BRAM_weight_AXI_3_0_1_RST),
        .BRAM_weight_AXI_3_we(BRAM_weight_AXI_3_0_1_WE),
        .accum_done(Multi_accumulator_0_accum_done),
        .channel_input_img(channel_input_img_0_1),
        .clk(clk_0_1),
        .en(en_0_1),
        .init_signal(init_signal_0_1),
        .out_psum0(Convo_core_2_out_psum0),
        .out_psum1(Convo_core_2_out_psum1),
        .out_psum2(Convo_core_2_out_psum2),
        .out_psum3(Convo_core_2_out_psum3),
        .out_psum_vld(Convo_core_2_out_psum_vld),
        .rst(rst_0_1),
        .stride(stride_0_1),
        .weight_size_1_16(weight_size_1_16_0_1),
        .width_input_img(width_input_img_0_1));
  Convo_core_inst_3 Convo_core_3
       (.BRAM_img_AXI_addr(BRAM_img_AXI_addr_0_4),
        .BRAM_img_AXI_din(BRAM_img_AXI_din_0_4),
        .BRAM_img_AXI_dout(Convo_core_3_BRAM_img_AXI_dout),
        .BRAM_img_AXI_en(BRAM_img_AXI_en_0_4),
        .BRAM_img_AXI_rst(BRAM_img_AXI_rst_0_4),
        .BRAM_img_AXI_wen(BRAM_img_AXI_wen_0_4),
        .BRAM_img_sel(BRAM_img_sel_0_1),
        .BRAM_weight_AXI_0_addr(BRAM_weight_AXI_0_1_1_ADDR),
        .BRAM_weight_AXI_0_clk(BRAM_weight_AXI_0_1_1_CLK),
        .BRAM_weight_AXI_0_din(BRAM_weight_AXI_0_1_1_DIN),
        .BRAM_weight_AXI_0_dout(BRAM_weight_AXI_0_1_1_DOUT),
        .BRAM_weight_AXI_0_en(BRAM_weight_AXI_0_1_1_EN),
        .BRAM_weight_AXI_0_rst(BRAM_weight_AXI_0_1_1_RST),
        .BRAM_weight_AXI_0_we(BRAM_weight_AXI_0_1_1_WE),
        .BRAM_weight_AXI_1_addr(BRAM_weight_AXI_1_1_1_ADDR),
        .BRAM_weight_AXI_1_clk(BRAM_weight_AXI_1_1_1_CLK),
        .BRAM_weight_AXI_1_din(BRAM_weight_AXI_1_1_1_DIN),
        .BRAM_weight_AXI_1_dout(BRAM_weight_AXI_1_1_1_DOUT),
        .BRAM_weight_AXI_1_en(BRAM_weight_AXI_1_1_1_EN),
        .BRAM_weight_AXI_1_rst(BRAM_weight_AXI_1_1_1_RST),
        .BRAM_weight_AXI_1_we(BRAM_weight_AXI_1_1_1_WE),
        .BRAM_weight_AXI_2_addr(BRAM_weight_AXI_2_3_1_ADDR),
        .BRAM_weight_AXI_2_clk(BRAM_weight_AXI_2_3_1_CLK),
        .BRAM_weight_AXI_2_din(BRAM_weight_AXI_2_3_1_DIN),
        .BRAM_weight_AXI_2_dout(BRAM_weight_AXI_2_3_1_DOUT),
        .BRAM_weight_AXI_2_en(BRAM_weight_AXI_2_3_1_EN),
        .BRAM_weight_AXI_2_rst(BRAM_weight_AXI_2_3_1_RST),
        .BRAM_weight_AXI_2_we(BRAM_weight_AXI_2_3_1_WE),
        .BRAM_weight_AXI_3_addr(BRAM_weight_AXI_3_3_1_ADDR),
        .BRAM_weight_AXI_3_clk(BRAM_weight_AXI_3_3_1_CLK),
        .BRAM_weight_AXI_3_din(BRAM_weight_AXI_3_3_1_DIN),
        .BRAM_weight_AXI_3_dout(BRAM_weight_AXI_3_3_1_DOUT),
        .BRAM_weight_AXI_3_en(BRAM_weight_AXI_3_3_1_EN),
        .BRAM_weight_AXI_3_rst(BRAM_weight_AXI_3_3_1_RST),
        .BRAM_weight_AXI_3_we(BRAM_weight_AXI_3_3_1_WE),
        .accum_done(Multi_accumulator_0_accum_done),
        .channel_input_img(channel_input_img_0_1),
        .clk(clk_0_1),
        .en(en_0_1),
        .img_end_0(Convo_core_3_img_end_0),
        .init_signal(init_signal_0_1),
        .out_psum0(Convo_core_3_out_psum0),
        .out_psum1(Convo_core_3_out_psum1),
        .out_psum2(Convo_core_3_out_psum2),
        .out_psum3(Convo_core_3_out_psum3),
        .out_psum_vld(mac_done_3_1),
        .rst(rst_0_1),
        .stride(stride_0_1),
        .weight_end(Convo_core_3_weight_end),
        .weight_size_1_16(weight_size_1_16_0_1),
        .width_input_img(width_input_img_0_1));
  Multi_accumulator_inst_0 Multi_accumulator_0
       (.BRAM_out_AXI_0_addr(BRAM_out_AXI_0_0_1_ADDR),
        .BRAM_out_AXI_0_clk(BRAM_out_AXI_0_0_1_CLK),
        .BRAM_out_AXI_0_din(BRAM_out_AXI_0_0_1_DIN),
        .BRAM_out_AXI_0_dout(BRAM_out_AXI_0_0_1_DOUT),
        .BRAM_out_AXI_0_en(BRAM_out_AXI_0_0_1_EN),
        .BRAM_out_AXI_0_rst(BRAM_out_AXI_0_0_1_RST),
        .BRAM_out_AXI_0_we(BRAM_out_AXI_0_0_1_WE),
        .BRAM_out_AXI_1_addr(BRAM_out_AXI_1_0_1_ADDR),
        .BRAM_out_AXI_1_clk(BRAM_out_AXI_1_0_1_CLK),
        .BRAM_out_AXI_1_din(BRAM_out_AXI_1_0_1_DIN),
        .BRAM_out_AXI_1_dout(BRAM_out_AXI_1_0_1_DOUT),
        .BRAM_out_AXI_1_en(BRAM_out_AXI_1_0_1_EN),
        .BRAM_out_AXI_1_rst(BRAM_out_AXI_1_0_1_RST),
        .BRAM_out_AXI_1_we(BRAM_out_AXI_1_0_1_WE),
        .BRAM_out_AXI_2_addr(BRAM_out_AXI_2_0_1_ADDR),
        .BRAM_out_AXI_2_clk(BRAM_out_AXI_2_0_1_CLK),
        .BRAM_out_AXI_2_din(BRAM_out_AXI_2_0_1_DIN),
        .BRAM_out_AXI_2_dout(BRAM_out_AXI_2_0_1_DOUT),
        .BRAM_out_AXI_2_en(BRAM_out_AXI_2_0_1_EN),
        .BRAM_out_AXI_2_rst(BRAM_out_AXI_2_0_1_RST),
        .BRAM_out_AXI_2_we(BRAM_out_AXI_2_0_1_WE),
        .BRAM_out_AXI_3_addr(BRAM_out_AXI_3_0_1_ADDR),
        .BRAM_out_AXI_3_clk(BRAM_out_AXI_3_0_1_CLK),
        .BRAM_out_AXI_3_din(BRAM_out_AXI_3_0_1_DIN),
        .BRAM_out_AXI_3_dout(BRAM_out_AXI_3_0_1_DOUT),
        .BRAM_out_AXI_3_en(BRAM_out_AXI_3_0_1_EN),
        .BRAM_out_AXI_3_rst(BRAM_out_AXI_3_0_1_RST),
        .BRAM_out_AXI_3_we(BRAM_out_AXI_3_0_1_WE),
        .WxW_out(WxW_out_0_1),
        .accum_done(Multi_accumulator_0_accum_done),
        .clk(clk_0_1),
        .mac_done_0(mac_done_0_1),
        .mac_done_1(mac_done_1_1),
        .mac_done_2(Convo_core_2_out_psum_vld),
        .mac_done_3(mac_done_3_1),
        .no_channel_out(no_channel_out_0_1),
        .psum0_0(Convo_core_0_out_psum0),
        .psum0_1(Convo_core_1_out_psum0),
        .psum0_2(Convo_core_2_out_psum0),
        .psum0_3(Convo_core_3_out_psum0),
        .psum1_0(Convo_core_0_out_psum1),
        .psum1_1(Convo_core_1_out_psum1),
        .psum1_2(Convo_core_2_out_psum1),
        .psum1_3(Convo_core_3_out_psum1),
        .psum2_0(Convo_core_0_out_psum2),
        .psum2_1(Convo_core_1_out_psum2),
        .psum2_2(Convo_core_2_out_psum2),
        .psum2_3(Convo_core_3_out_psum2),
        .psum3_0(Convo_core_0_out_psum3),
        .psum3_1(Convo_core_1_out_psum3),
        .psum3_2(Convo_core_2_out_psum3),
        .psum3_3(Convo_core_3_out_psum3),
        .rst(rst_0_1));
  Multi_convo_core_controller_0_0 controller_0
       (.clk(clk_0_1),
        .en_core_out(en_0_1),
        .end_core_out(controller_0_end_core_out),
        .img_end_in(Convo_core_3_img_end_0),
        .rst(rst_0_1),
        .start_core_in(start_core_in_0_1),
        .start_core_out(init_signal_0_1),
        .weight_end_in(Convo_core_3_weight_end));
endmodule

(* CORE_GENERATION_INFO = "Multi_convo_core,IP_Integrator,{x_ipVendor=xilinx.com,x_ipLibrary=BlockDiagram,x_ipName=Multi_convo_core,x_ipVersion=1.00.a,x_ipLanguage=VERILOG,numBlks=96,numReposBlks=86,numNonXlnxBlks=0,numHierBlks=10,maxHierDepth=2,numSysgenBlks=0,numHlsBlks=0,numHdlrefBlks=32,numPkgbdBlks=5,bdsource=USER,da_axi4_cnt=31,da_clkrst_cnt=1,da_ps7_cnt=1,synth_mode=Global}" *) (* HW_HANDOFF = "Multi_convo_core.hwdef" *) 
module Multi_convo_core
   (DDR_addr,
    DDR_ba,
    DDR_cas_n,
    DDR_ck_n,
    DDR_ck_p,
    DDR_cke,
    DDR_cs_n,
    DDR_dm,
    DDR_dq,
    DDR_dqs_n,
    DDR_dqs_p,
    DDR_odt,
    DDR_ras_n,
    DDR_reset_n,
    DDR_we_n,
    FIXED_IO_ddr_vrn,
    FIXED_IO_ddr_vrp,
    FIXED_IO_mio,
    FIXED_IO_ps_clk,
    FIXED_IO_ps_porb,
    FIXED_IO_ps_srstb);
  (* X_INTERFACE_INFO = "xilinx.com:interface:ddrx:1.0 DDR ADDR" *) (* X_INTERFACE_PARAMETER = "XIL_INTERFACENAME DDR, AXI_ARBITRATION_SCHEME TDM, BURST_LENGTH 8, CAN_DEBUG false, CAS_LATENCY 11, CAS_WRITE_LATENCY 11, CS_ENABLED true, DATA_MASK_ENABLED true, DATA_WIDTH 8, MEMORY_TYPE COMPONENTS, MEM_ADDR_MAP ROW_COLUMN_BANK, SLOT Single, TIMEPERIOD_PS 1250" *) inout [14:0]DDR_addr;
  (* X_INTERFACE_INFO = "xilinx.com:interface:ddrx:1.0 DDR BA" *) inout [2:0]DDR_ba;
  (* X_INTERFACE_INFO = "xilinx.com:interface:ddrx:1.0 DDR CAS_N" *) inout DDR_cas_n;
  (* X_INTERFACE_INFO = "xilinx.com:interface:ddrx:1.0 DDR CK_N" *) inout DDR_ck_n;
  (* X_INTERFACE_INFO = "xilinx.com:interface:ddrx:1.0 DDR CK_P" *) inout DDR_ck_p;
  (* X_INTERFACE_INFO = "xilinx.com:interface:ddrx:1.0 DDR CKE" *) inout DDR_cke;
  (* X_INTERFACE_INFO = "xilinx.com:interface:ddrx:1.0 DDR CS_N" *) inout DDR_cs_n;
  (* X_INTERFACE_INFO = "xilinx.com:interface:ddrx:1.0 DDR DM" *) inout [3:0]DDR_dm;
  (* X_INTERFACE_INFO = "xilinx.com:interface:ddrx:1.0 DDR DQ" *) inout [31:0]DDR_dq;
  (* X_INTERFACE_INFO = "xilinx.com:interface:ddrx:1.0 DDR DQS_N" *) inout [3:0]DDR_dqs_n;
  (* X_INTERFACE_INFO = "xilinx.com:interface:ddrx:1.0 DDR DQS_P" *) inout [3:0]DDR_dqs_p;
  (* X_INTERFACE_INFO = "xilinx.com:interface:ddrx:1.0 DDR ODT" *) inout DDR_odt;
  (* X_INTERFACE_INFO = "xilinx.com:interface:ddrx:1.0 DDR RAS_N" *) inout DDR_ras_n;
  (* X_INTERFACE_INFO = "xilinx.com:interface:ddrx:1.0 DDR RESET_N" *) inout DDR_reset_n;
  (* X_INTERFACE_INFO = "xilinx.com:interface:ddrx:1.0 DDR WE_N" *) inout DDR_we_n;
  (* X_INTERFACE_INFO = "xilinx.com:display_processing_system7:fixedio:1.0 FIXED_IO DDR_VRN" *) (* X_INTERFACE_PARAMETER = "XIL_INTERFACENAME FIXED_IO, CAN_DEBUG false" *) inout FIXED_IO_ddr_vrn;
  (* X_INTERFACE_INFO = "xilinx.com:display_processing_system7:fixedio:1.0 FIXED_IO DDR_VRP" *) inout FIXED_IO_ddr_vrp;
  (* X_INTERFACE_INFO = "xilinx.com:display_processing_system7:fixedio:1.0 FIXED_IO MIO" *) inout [53:0]FIXED_IO_mio;
  (* X_INTERFACE_INFO = "xilinx.com:display_processing_system7:fixedio:1.0 FIXED_IO PS_CLK" *) inout FIXED_IO_ps_clk;
  (* X_INTERFACE_INFO = "xilinx.com:display_processing_system7:fixedio:1.0 FIXED_IO PS_PORB" *) inout FIXED_IO_ps_porb;
  (* X_INTERFACE_INFO = "xilinx.com:display_processing_system7:fixedio:1.0 FIXED_IO PS_SRSTB" *) inout FIXED_IO_ps_srstb;

  wire [11:0]BRAM_img_addr_0_1;
  wire [31:0]BRAM_img_din_0_1;
  wire [31:0]BRAM_img_din_1_1;
  wire BRAM_img_en_1_1;
  wire BRAM_img_rst_1_1;
  wire [3:0]BRAM_img_wen_0_1;
  wire [3:0]BRAM_img_wen_1_1;
  wire [11:0]BRAM_out_0_1_ADDR;
  wire BRAM_out_0_1_CLK;
  wire [31:0]BRAM_out_0_1_DIN;
  wire [31:0]BRAM_out_0_1_DOUT;
  wire BRAM_out_0_1_EN;
  wire BRAM_out_0_1_RST;
  wire [3:0]BRAM_out_0_1_WE;
  wire [11:0]BRAM_weight_0_1_1_ADDR;
  wire BRAM_weight_0_1_1_CLK;
  wire [31:0]BRAM_weight_0_1_1_DIN;
  wire [31:0]BRAM_weight_0_1_1_DOUT;
  wire BRAM_weight_0_1_1_EN;
  wire BRAM_weight_0_1_1_RST;
  wire [3:0]BRAM_weight_0_1_1_WE;
  wire [11:0]BRAM_weight_0_2_1_ADDR;
  wire BRAM_weight_0_2_1_CLK;
  wire [31:0]BRAM_weight_0_2_1_DIN;
  wire [31:0]BRAM_weight_0_2_1_DOUT;
  wire BRAM_weight_0_2_1_EN;
  wire BRAM_weight_0_2_1_RST;
  wire [3:0]BRAM_weight_0_2_1_WE;
  wire [31:0]Core_BRAM_img_dout_0;
  wire [31:0]Core_BRAM_img_dout_1;
  wire [31:0]Core_BRAM_img_dout_2;
  wire [31:0]Core_BRAM_img_dout_3;
  wire Core_end_core_out;
  wire [15:0]WxW_out_1;
  wire [11:0]axi_bram_ctrl_10_BRAM_PORTA_ADDR;
  wire axi_bram_ctrl_10_BRAM_PORTA_CLK;
  wire [31:0]axi_bram_ctrl_10_BRAM_PORTA_DIN;
  wire [31:0]axi_bram_ctrl_10_BRAM_PORTA_DOUT;
  wire axi_bram_ctrl_10_BRAM_PORTA_EN;
  wire axi_bram_ctrl_10_BRAM_PORTA_RST;
  wire [3:0]axi_bram_ctrl_10_BRAM_PORTA_WE;
  wire [11:0]axi_bram_ctrl_11_BRAM_PORTA_ADDR;
  wire axi_bram_ctrl_11_BRAM_PORTA_CLK;
  wire [31:0]axi_bram_ctrl_11_BRAM_PORTA_DIN;
  wire [31:0]axi_bram_ctrl_11_BRAM_PORTA_DOUT;
  wire axi_bram_ctrl_11_BRAM_PORTA_EN;
  wire axi_bram_ctrl_11_BRAM_PORTA_RST;
  wire [3:0]axi_bram_ctrl_11_BRAM_PORTA_WE;
  wire [11:0]axi_bram_ctrl_12_BRAM_PORTA_ADDR;
  wire axi_bram_ctrl_12_BRAM_PORTA_CLK;
  wire [31:0]axi_bram_ctrl_12_BRAM_PORTA_DIN;
  wire [31:0]axi_bram_ctrl_12_BRAM_PORTA_DOUT;
  wire axi_bram_ctrl_12_BRAM_PORTA_EN;
  wire axi_bram_ctrl_12_BRAM_PORTA_RST;
  wire [3:0]axi_bram_ctrl_12_BRAM_PORTA_WE;
  wire [11:0]axi_bram_ctrl_13_BRAM_PORTA_ADDR;
  wire axi_bram_ctrl_13_BRAM_PORTA_CLK;
  wire [31:0]axi_bram_ctrl_13_BRAM_PORTA_DIN;
  wire [31:0]axi_bram_ctrl_13_BRAM_PORTA_DOUT;
  wire axi_bram_ctrl_13_BRAM_PORTA_EN;
  wire axi_bram_ctrl_13_BRAM_PORTA_RST;
  wire [3:0]axi_bram_ctrl_13_BRAM_PORTA_WE;
  wire [11:0]axi_bram_ctrl_14_BRAM_PORTA_ADDR;
  wire axi_bram_ctrl_14_BRAM_PORTA_CLK;
  wire [31:0]axi_bram_ctrl_14_BRAM_PORTA_DIN;
  wire [31:0]axi_bram_ctrl_14_BRAM_PORTA_DOUT;
  wire axi_bram_ctrl_14_BRAM_PORTA_EN;
  wire axi_bram_ctrl_14_BRAM_PORTA_RST;
  wire [3:0]axi_bram_ctrl_14_BRAM_PORTA_WE;
  wire [11:0]axi_bram_ctrl_15_BRAM_PORTA_ADDR;
  wire axi_bram_ctrl_15_BRAM_PORTA_CLK;
  wire [31:0]axi_bram_ctrl_15_BRAM_PORTA_DIN;
  wire [31:0]axi_bram_ctrl_15_BRAM_PORTA_DOUT;
  wire axi_bram_ctrl_15_BRAM_PORTA_EN;
  wire axi_bram_ctrl_15_BRAM_PORTA_RST;
  wire [3:0]axi_bram_ctrl_15_BRAM_PORTA_WE;
  wire [11:0]axi_bram_ctrl_16_BRAM_PORTA_ADDR;
  wire axi_bram_ctrl_16_BRAM_PORTA_CLK;
  wire [31:0]axi_bram_ctrl_16_BRAM_PORTA_DIN;
  wire [31:0]axi_bram_ctrl_16_BRAM_PORTA_DOUT;
  wire axi_bram_ctrl_16_BRAM_PORTA_EN;
  wire axi_bram_ctrl_16_BRAM_PORTA_RST;
  wire [3:0]axi_bram_ctrl_16_BRAM_PORTA_WE;
  wire [11:0]axi_bram_ctrl_17_BRAM_PORTA_ADDR;
  wire axi_bram_ctrl_17_BRAM_PORTA_CLK;
  wire [31:0]axi_bram_ctrl_17_BRAM_PORTA_DIN;
  wire [31:0]axi_bram_ctrl_17_BRAM_PORTA_DOUT;
  wire axi_bram_ctrl_17_BRAM_PORTA_EN;
  wire axi_bram_ctrl_17_BRAM_PORTA_RST;
  wire [3:0]axi_bram_ctrl_17_BRAM_PORTA_WE;
  wire [11:0]axi_bram_ctrl_18_BRAM_PORTA_ADDR;
  wire axi_bram_ctrl_18_BRAM_PORTA_CLK;
  wire [31:0]axi_bram_ctrl_18_BRAM_PORTA_DIN;
  wire [31:0]axi_bram_ctrl_18_BRAM_PORTA_DOUT;
  wire axi_bram_ctrl_18_BRAM_PORTA_EN;
  wire axi_bram_ctrl_18_BRAM_PORTA_RST;
  wire [3:0]axi_bram_ctrl_18_BRAM_PORTA_WE;
  wire [11:0]axi_bram_ctrl_19_BRAM_PORTA_ADDR;
  wire axi_bram_ctrl_19_BRAM_PORTA_CLK;
  wire [31:0]axi_bram_ctrl_19_BRAM_PORTA_DIN;
  wire [31:0]axi_bram_ctrl_19_BRAM_PORTA_DOUT;
  wire axi_bram_ctrl_19_BRAM_PORTA_EN;
  wire axi_bram_ctrl_19_BRAM_PORTA_RST;
  wire [3:0]axi_bram_ctrl_19_BRAM_PORTA_WE;
  wire [11:0]axi_bram_ctrl_1_BRAM_PORTA_ADDR;
  wire axi_bram_ctrl_1_BRAM_PORTA_CLK;
  wire [31:0]axi_bram_ctrl_1_BRAM_PORTA_DIN;
  wire [31:0]axi_bram_ctrl_1_BRAM_PORTA_DOUT;
  wire axi_bram_ctrl_1_BRAM_PORTA_EN;
  wire axi_bram_ctrl_1_BRAM_PORTA_RST;
  wire [3:0]axi_bram_ctrl_1_BRAM_PORTA_WE;
  wire axi_bram_ctrl_20_bram_en_a;
  wire axi_bram_ctrl_20_bram_rst_a;
  wire [11:0]axi_bram_ctrl_21_bram_addr_a;
  wire [11:0]axi_bram_ctrl_22_bram_addr_a;
  wire axi_bram_ctrl_22_bram_en_a;
  wire axi_bram_ctrl_22_bram_rst_a;
  wire [3:0]axi_bram_ctrl_22_bram_we_a;
  wire [31:0]axi_bram_ctrl_22_bram_wrdata_a;
  wire [11:0]axi_bram_ctrl_23_bram_addr_a;
  wire axi_bram_ctrl_23_bram_en_a;
  wire axi_bram_ctrl_23_bram_rst_a;
  wire [3:0]axi_bram_ctrl_23_bram_we_a;
  wire [31:0]axi_bram_ctrl_23_bram_wrdata_a;
  wire [11:0]axi_bram_ctrl_2_BRAM_PORTA_ADDR;
  wire axi_bram_ctrl_2_BRAM_PORTA_CLK;
  wire [31:0]axi_bram_ctrl_2_BRAM_PORTA_DIN;
  wire [31:0]axi_bram_ctrl_2_BRAM_PORTA_DOUT;
  wire axi_bram_ctrl_2_BRAM_PORTA_EN;
  wire axi_bram_ctrl_2_BRAM_PORTA_RST;
  wire [3:0]axi_bram_ctrl_2_BRAM_PORTA_WE;
  wire [11:0]axi_bram_ctrl_3_BRAM_PORTA_ADDR;
  wire axi_bram_ctrl_3_BRAM_PORTA_CLK;
  wire [31:0]axi_bram_ctrl_3_BRAM_PORTA_DIN;
  wire [31:0]axi_bram_ctrl_3_BRAM_PORTA_DOUT;
  wire axi_bram_ctrl_3_BRAM_PORTA_EN;
  wire axi_bram_ctrl_3_BRAM_PORTA_RST;
  wire [3:0]axi_bram_ctrl_3_BRAM_PORTA_WE;
  wire [11:0]axi_bram_ctrl_4_BRAM_PORTA_ADDR;
  wire axi_bram_ctrl_4_BRAM_PORTA_CLK;
  wire [31:0]axi_bram_ctrl_4_BRAM_PORTA_DIN;
  wire [31:0]axi_bram_ctrl_4_BRAM_PORTA_DOUT;
  wire axi_bram_ctrl_4_BRAM_PORTA_EN;
  wire axi_bram_ctrl_4_BRAM_PORTA_RST;
  wire [3:0]axi_bram_ctrl_4_BRAM_PORTA_WE;
  wire [11:0]axi_bram_ctrl_7_BRAM_PORTA_ADDR;
  wire axi_bram_ctrl_7_BRAM_PORTA_CLK;
  wire [31:0]axi_bram_ctrl_7_BRAM_PORTA_DIN;
  wire [31:0]axi_bram_ctrl_7_BRAM_PORTA_DOUT;
  wire axi_bram_ctrl_7_BRAM_PORTA_EN;
  wire axi_bram_ctrl_7_BRAM_PORTA_RST;
  wire [3:0]axi_bram_ctrl_7_BRAM_PORTA_WE;
  wire [11:0]axi_bram_ctrl_8_BRAM_PORTA_ADDR;
  wire axi_bram_ctrl_8_BRAM_PORTA_CLK;
  wire [31:0]axi_bram_ctrl_8_BRAM_PORTA_DIN;
  wire [31:0]axi_bram_ctrl_8_BRAM_PORTA_DOUT;
  wire axi_bram_ctrl_8_BRAM_PORTA_EN;
  wire axi_bram_ctrl_8_BRAM_PORTA_RST;
  wire [3:0]axi_bram_ctrl_8_BRAM_PORTA_WE;
  wire [11:0]axi_bram_ctrl_9_BRAM_PORTA_ADDR;
  wire axi_bram_ctrl_9_BRAM_PORTA_CLK;
  wire [31:0]axi_bram_ctrl_9_BRAM_PORTA_DIN;
  wire [31:0]axi_bram_ctrl_9_BRAM_PORTA_DOUT;
  wire axi_bram_ctrl_9_BRAM_PORTA_EN;
  wire axi_bram_ctrl_9_BRAM_PORTA_RST;
  wire [3:0]axi_bram_ctrl_9_BRAM_PORTA_WE;
  wire [31:0]axi_cdma_0_M_AXI_ARADDR;
  wire [1:0]axi_cdma_0_M_AXI_ARBURST;
  wire [3:0]axi_cdma_0_M_AXI_ARCACHE;
  wire [7:0]axi_cdma_0_M_AXI_ARLEN;
  wire [2:0]axi_cdma_0_M_AXI_ARPROT;
  wire axi_cdma_0_M_AXI_ARREADY;
  wire [2:0]axi_cdma_0_M_AXI_ARSIZE;
  wire axi_cdma_0_M_AXI_ARVALID;
  wire [31:0]axi_cdma_0_M_AXI_AWADDR;
  wire [1:0]axi_cdma_0_M_AXI_AWBURST;
  wire [3:0]axi_cdma_0_M_AXI_AWCACHE;
  wire [7:0]axi_cdma_0_M_AXI_AWLEN;
  wire [2:0]axi_cdma_0_M_AXI_AWPROT;
  wire axi_cdma_0_M_AXI_AWREADY;
  wire [2:0]axi_cdma_0_M_AXI_AWSIZE;
  wire axi_cdma_0_M_AXI_AWVALID;
  wire axi_cdma_0_M_AXI_BREADY;
  wire [1:0]axi_cdma_0_M_AXI_BRESP;
  wire axi_cdma_0_M_AXI_BVALID;
  wire [31:0]axi_cdma_0_M_AXI_RDATA;
  wire axi_cdma_0_M_AXI_RLAST;
  wire axi_cdma_0_M_AXI_RREADY;
  wire [1:0]axi_cdma_0_M_AXI_RRESP;
  wire axi_cdma_0_M_AXI_RVALID;
  wire [31:0]axi_cdma_0_M_AXI_WDATA;
  wire axi_cdma_0_M_AXI_WLAST;
  wire axi_cdma_0_M_AXI_WREADY;
  wire [3:0]axi_cdma_0_M_AXI_WSTRB;
  wire axi_cdma_0_M_AXI_WVALID;
  wire [14:0]processing_system7_0_DDR_ADDR;
  wire [2:0]processing_system7_0_DDR_BA;
  wire processing_system7_0_DDR_CAS_N;
  wire processing_system7_0_DDR_CKE;
  wire processing_system7_0_DDR_CK_N;
  wire processing_system7_0_DDR_CK_P;
  wire processing_system7_0_DDR_CS_N;
  wire [3:0]processing_system7_0_DDR_DM;
  wire [31:0]processing_system7_0_DDR_DQ;
  wire [3:0]processing_system7_0_DDR_DQS_N;
  wire [3:0]processing_system7_0_DDR_DQS_P;
  wire processing_system7_0_DDR_ODT;
  wire processing_system7_0_DDR_RAS_N;
  wire processing_system7_0_DDR_RESET_N;
  wire processing_system7_0_DDR_WE_N;
  wire processing_system7_0_FCLK_CLK0;
  wire processing_system7_0_FCLK_RESET0_N;
  wire processing_system7_0_FIXED_IO_DDR_VRN;
  wire processing_system7_0_FIXED_IO_DDR_VRP;
  wire [53:0]processing_system7_0_FIXED_IO_MIO;
  wire processing_system7_0_FIXED_IO_PS_CLK;
  wire processing_system7_0_FIXED_IO_PS_PORB;
  wire processing_system7_0_FIXED_IO_PS_SRSTB;
  wire [31:0]processing_system7_0_M_AXI_GP0_ARADDR;
  wire [1:0]processing_system7_0_M_AXI_GP0_ARBURST;
  wire [3:0]processing_system7_0_M_AXI_GP0_ARCACHE;
  wire [11:0]processing_system7_0_M_AXI_GP0_ARID;
  wire [3:0]processing_system7_0_M_AXI_GP0_ARLEN;
  wire [1:0]processing_system7_0_M_AXI_GP0_ARLOCK;
  wire [2:0]processing_system7_0_M_AXI_GP0_ARPROT;
  wire [3:0]processing_system7_0_M_AXI_GP0_ARQOS;
  wire processing_system7_0_M_AXI_GP0_ARREADY;
  wire [2:0]processing_system7_0_M_AXI_GP0_ARSIZE;
  wire processing_system7_0_M_AXI_GP0_ARVALID;
  wire [31:0]processing_system7_0_M_AXI_GP0_AWADDR;
  wire [1:0]processing_system7_0_M_AXI_GP0_AWBURST;
  wire [3:0]processing_system7_0_M_AXI_GP0_AWCACHE;
  wire [11:0]processing_system7_0_M_AXI_GP0_AWID;
  wire [3:0]processing_system7_0_M_AXI_GP0_AWLEN;
  wire [1:0]processing_system7_0_M_AXI_GP0_AWLOCK;
  wire [2:0]processing_system7_0_M_AXI_GP0_AWPROT;
  wire [3:0]processing_system7_0_M_AXI_GP0_AWQOS;
  wire processing_system7_0_M_AXI_GP0_AWREADY;
  wire [2:0]processing_system7_0_M_AXI_GP0_AWSIZE;
  wire processing_system7_0_M_AXI_GP0_AWVALID;
  wire [11:0]processing_system7_0_M_AXI_GP0_BID;
  wire processing_system7_0_M_AXI_GP0_BREADY;
  wire [1:0]processing_system7_0_M_AXI_GP0_BRESP;
  wire processing_system7_0_M_AXI_GP0_BVALID;
  wire [31:0]processing_system7_0_M_AXI_GP0_RDATA;
  wire [11:0]processing_system7_0_M_AXI_GP0_RID;
  wire processing_system7_0_M_AXI_GP0_RLAST;
  wire processing_system7_0_M_AXI_GP0_RREADY;
  wire [1:0]processing_system7_0_M_AXI_GP0_RRESP;
  wire processing_system7_0_M_AXI_GP0_RVALID;
  wire [31:0]processing_system7_0_M_AXI_GP0_WDATA;
  wire [11:0]processing_system7_0_M_AXI_GP0_WID;
  wire processing_system7_0_M_AXI_GP0_WLAST;
  wire processing_system7_0_M_AXI_GP0_WREADY;
  wire [3:0]processing_system7_0_M_AXI_GP0_WSTRB;
  wire processing_system7_0_M_AXI_GP0_WVALID;
  wire [31:0]ps7_0_axi_periph_M00_AXI_ARADDR;
  wire ps7_0_axi_periph_M00_AXI_ARREADY;
  wire [0:0]ps7_0_axi_periph_M00_AXI_ARVALID;
  wire [31:0]ps7_0_axi_periph_M00_AXI_AWADDR;
  wire ps7_0_axi_periph_M00_AXI_AWREADY;
  wire [0:0]ps7_0_axi_periph_M00_AXI_AWVALID;
  wire [0:0]ps7_0_axi_periph_M00_AXI_BREADY;
  wire [1:0]ps7_0_axi_periph_M00_AXI_BRESP;
  wire ps7_0_axi_periph_M00_AXI_BVALID;
  wire [31:0]ps7_0_axi_periph_M00_AXI_RDATA;
  wire [0:0]ps7_0_axi_periph_M00_AXI_RREADY;
  wire [1:0]ps7_0_axi_periph_M00_AXI_RRESP;
  wire ps7_0_axi_periph_M00_AXI_RVALID;
  wire [31:0]ps7_0_axi_periph_M00_AXI_WDATA;
  wire ps7_0_axi_periph_M00_AXI_WREADY;
  wire [0:0]ps7_0_axi_periph_M00_AXI_WVALID;
  wire [31:0]ps7_0_axi_periph_M01_AXI_ARADDR;
  wire [2:0]ps7_0_axi_periph_M01_AXI_ARPROT;
  wire ps7_0_axi_periph_M01_AXI_ARREADY;
  wire ps7_0_axi_periph_M01_AXI_ARVALID;
  wire [31:0]ps7_0_axi_periph_M01_AXI_AWADDR;
  wire [2:0]ps7_0_axi_periph_M01_AXI_AWPROT;
  wire ps7_0_axi_periph_M01_AXI_AWREADY;
  wire ps7_0_axi_periph_M01_AXI_AWVALID;
  wire ps7_0_axi_periph_M01_AXI_BREADY;
  wire [1:0]ps7_0_axi_periph_M01_AXI_BRESP;
  wire ps7_0_axi_periph_M01_AXI_BVALID;
  wire [31:0]ps7_0_axi_periph_M01_AXI_RDATA;
  wire ps7_0_axi_periph_M01_AXI_RREADY;
  wire [1:0]ps7_0_axi_periph_M01_AXI_RRESP;
  wire ps7_0_axi_periph_M01_AXI_RVALID;
  wire [31:0]ps7_0_axi_periph_M01_AXI_WDATA;
  wire ps7_0_axi_periph_M01_AXI_WREADY;
  wire [3:0]ps7_0_axi_periph_M01_AXI_WSTRB;
  wire ps7_0_axi_periph_M01_AXI_WVALID;
  wire regs_file_0_BRAM_img_sel;
  wire [11:0]regs_file_0_channel_input_img;
  wire [10:0]regs_file_0_no_channel_out;
  wire [2:0]regs_file_0_stride;
  wire rst_1;
  wire [0:0]rst_ps7_0_100M_peripheral_aresetn;
  wire [11:0]smartconnect_0_M00_AXI_ARADDR;
  wire [1:0]smartconnect_0_M00_AXI_ARBURST;
  wire [3:0]smartconnect_0_M00_AXI_ARCACHE;
  wire [7:0]smartconnect_0_M00_AXI_ARLEN;
  wire [0:0]smartconnect_0_M00_AXI_ARLOCK;
  wire [2:0]smartconnect_0_M00_AXI_ARPROT;
  wire smartconnect_0_M00_AXI_ARREADY;
  wire [2:0]smartconnect_0_M00_AXI_ARSIZE;
  wire smartconnect_0_M00_AXI_ARVALID;
  wire [11:0]smartconnect_0_M00_AXI_AWADDR;
  wire [1:0]smartconnect_0_M00_AXI_AWBURST;
  wire [3:0]smartconnect_0_M00_AXI_AWCACHE;
  wire [7:0]smartconnect_0_M00_AXI_AWLEN;
  wire [0:0]smartconnect_0_M00_AXI_AWLOCK;
  wire [2:0]smartconnect_0_M00_AXI_AWPROT;
  wire smartconnect_0_M00_AXI_AWREADY;
  wire [2:0]smartconnect_0_M00_AXI_AWSIZE;
  wire smartconnect_0_M00_AXI_AWVALID;
  wire smartconnect_0_M00_AXI_BREADY;
  wire [1:0]smartconnect_0_M00_AXI_BRESP;
  wire smartconnect_0_M00_AXI_BVALID;
  wire [31:0]smartconnect_0_M00_AXI_RDATA;
  wire smartconnect_0_M00_AXI_RLAST;
  wire smartconnect_0_M00_AXI_RREADY;
  wire [1:0]smartconnect_0_M00_AXI_RRESP;
  wire smartconnect_0_M00_AXI_RVALID;
  wire [31:0]smartconnect_0_M00_AXI_WDATA;
  wire smartconnect_0_M00_AXI_WLAST;
  wire smartconnect_0_M00_AXI_WREADY;
  wire [3:0]smartconnect_0_M00_AXI_WSTRB;
  wire smartconnect_0_M00_AXI_WVALID;
  wire [11:0]smartconnect_0_M01_AXI_ARADDR;
  wire [1:0]smartconnect_0_M01_AXI_ARBURST;
  wire [3:0]smartconnect_0_M01_AXI_ARCACHE;
  wire [7:0]smartconnect_0_M01_AXI_ARLEN;
  wire [0:0]smartconnect_0_M01_AXI_ARLOCK;
  wire [2:0]smartconnect_0_M01_AXI_ARPROT;
  wire smartconnect_0_M01_AXI_ARREADY;
  wire [2:0]smartconnect_0_M01_AXI_ARSIZE;
  wire smartconnect_0_M01_AXI_ARVALID;
  wire [11:0]smartconnect_0_M01_AXI_AWADDR;
  wire [1:0]smartconnect_0_M01_AXI_AWBURST;
  wire [3:0]smartconnect_0_M01_AXI_AWCACHE;
  wire [7:0]smartconnect_0_M01_AXI_AWLEN;
  wire [0:0]smartconnect_0_M01_AXI_AWLOCK;
  wire [2:0]smartconnect_0_M01_AXI_AWPROT;
  wire smartconnect_0_M01_AXI_AWREADY;
  wire [2:0]smartconnect_0_M01_AXI_AWSIZE;
  wire smartconnect_0_M01_AXI_AWVALID;
  wire smartconnect_0_M01_AXI_BREADY;
  wire [1:0]smartconnect_0_M01_AXI_BRESP;
  wire smartconnect_0_M01_AXI_BVALID;
  wire [31:0]smartconnect_0_M01_AXI_RDATA;
  wire smartconnect_0_M01_AXI_RLAST;
  wire smartconnect_0_M01_AXI_RREADY;
  wire [1:0]smartconnect_0_M01_AXI_RRESP;
  wire smartconnect_0_M01_AXI_RVALID;
  wire [31:0]smartconnect_0_M01_AXI_WDATA;
  wire smartconnect_0_M01_AXI_WLAST;
  wire smartconnect_0_M01_AXI_WREADY;
  wire [3:0]smartconnect_0_M01_AXI_WSTRB;
  wire smartconnect_0_M01_AXI_WVALID;
  wire [11:0]smartconnect_0_M02_AXI_ARADDR;
  wire [1:0]smartconnect_0_M02_AXI_ARBURST;
  wire [3:0]smartconnect_0_M02_AXI_ARCACHE;
  wire [7:0]smartconnect_0_M02_AXI_ARLEN;
  wire [0:0]smartconnect_0_M02_AXI_ARLOCK;
  wire [2:0]smartconnect_0_M02_AXI_ARPROT;
  wire smartconnect_0_M02_AXI_ARREADY;
  wire [2:0]smartconnect_0_M02_AXI_ARSIZE;
  wire smartconnect_0_M02_AXI_ARVALID;
  wire [11:0]smartconnect_0_M02_AXI_AWADDR;
  wire [1:0]smartconnect_0_M02_AXI_AWBURST;
  wire [3:0]smartconnect_0_M02_AXI_AWCACHE;
  wire [7:0]smartconnect_0_M02_AXI_AWLEN;
  wire [0:0]smartconnect_0_M02_AXI_AWLOCK;
  wire [2:0]smartconnect_0_M02_AXI_AWPROT;
  wire smartconnect_0_M02_AXI_AWREADY;
  wire [2:0]smartconnect_0_M02_AXI_AWSIZE;
  wire smartconnect_0_M02_AXI_AWVALID;
  wire smartconnect_0_M02_AXI_BREADY;
  wire [1:0]smartconnect_0_M02_AXI_BRESP;
  wire smartconnect_0_M02_AXI_BVALID;
  wire [31:0]smartconnect_0_M02_AXI_RDATA;
  wire smartconnect_0_M02_AXI_RLAST;
  wire smartconnect_0_M02_AXI_RREADY;
  wire [1:0]smartconnect_0_M02_AXI_RRESP;
  wire smartconnect_0_M02_AXI_RVALID;
  wire [31:0]smartconnect_0_M02_AXI_WDATA;
  wire smartconnect_0_M02_AXI_WLAST;
  wire smartconnect_0_M02_AXI_WREADY;
  wire [3:0]smartconnect_0_M02_AXI_WSTRB;
  wire smartconnect_0_M02_AXI_WVALID;
  wire [11:0]smartconnect_0_M03_AXI_ARADDR;
  wire [1:0]smartconnect_0_M03_AXI_ARBURST;
  wire [3:0]smartconnect_0_M03_AXI_ARCACHE;
  wire [7:0]smartconnect_0_M03_AXI_ARLEN;
  wire [0:0]smartconnect_0_M03_AXI_ARLOCK;
  wire [2:0]smartconnect_0_M03_AXI_ARPROT;
  wire smartconnect_0_M03_AXI_ARREADY;
  wire [2:0]smartconnect_0_M03_AXI_ARSIZE;
  wire smartconnect_0_M03_AXI_ARVALID;
  wire [11:0]smartconnect_0_M03_AXI_AWADDR;
  wire [1:0]smartconnect_0_M03_AXI_AWBURST;
  wire [3:0]smartconnect_0_M03_AXI_AWCACHE;
  wire [7:0]smartconnect_0_M03_AXI_AWLEN;
  wire [0:0]smartconnect_0_M03_AXI_AWLOCK;
  wire [2:0]smartconnect_0_M03_AXI_AWPROT;
  wire smartconnect_0_M03_AXI_AWREADY;
  wire [2:0]smartconnect_0_M03_AXI_AWSIZE;
  wire smartconnect_0_M03_AXI_AWVALID;
  wire smartconnect_0_M03_AXI_BREADY;
  wire [1:0]smartconnect_0_M03_AXI_BRESP;
  wire smartconnect_0_M03_AXI_BVALID;
  wire [31:0]smartconnect_0_M03_AXI_RDATA;
  wire smartconnect_0_M03_AXI_RLAST;
  wire smartconnect_0_M03_AXI_RREADY;
  wire [1:0]smartconnect_0_M03_AXI_RRESP;
  wire smartconnect_0_M03_AXI_RVALID;
  wire [31:0]smartconnect_0_M03_AXI_WDATA;
  wire smartconnect_0_M03_AXI_WLAST;
  wire smartconnect_0_M03_AXI_WREADY;
  wire [3:0]smartconnect_0_M03_AXI_WSTRB;
  wire smartconnect_0_M03_AXI_WVALID;
  wire [11:0]smartconnect_0_M04_AXI_ARADDR;
  wire [1:0]smartconnect_0_M04_AXI_ARBURST;
  wire [3:0]smartconnect_0_M04_AXI_ARCACHE;
  wire [7:0]smartconnect_0_M04_AXI_ARLEN;
  wire [0:0]smartconnect_0_M04_AXI_ARLOCK;
  wire [2:0]smartconnect_0_M04_AXI_ARPROT;
  wire smartconnect_0_M04_AXI_ARREADY;
  wire [2:0]smartconnect_0_M04_AXI_ARSIZE;
  wire smartconnect_0_M04_AXI_ARVALID;
  wire [11:0]smartconnect_0_M04_AXI_AWADDR;
  wire [1:0]smartconnect_0_M04_AXI_AWBURST;
  wire [3:0]smartconnect_0_M04_AXI_AWCACHE;
  wire [7:0]smartconnect_0_M04_AXI_AWLEN;
  wire [0:0]smartconnect_0_M04_AXI_AWLOCK;
  wire [2:0]smartconnect_0_M04_AXI_AWPROT;
  wire smartconnect_0_M04_AXI_AWREADY;
  wire [2:0]smartconnect_0_M04_AXI_AWSIZE;
  wire smartconnect_0_M04_AXI_AWVALID;
  wire smartconnect_0_M04_AXI_BREADY;
  wire [1:0]smartconnect_0_M04_AXI_BRESP;
  wire smartconnect_0_M04_AXI_BVALID;
  wire [31:0]smartconnect_0_M04_AXI_RDATA;
  wire smartconnect_0_M04_AXI_RLAST;
  wire smartconnect_0_M04_AXI_RREADY;
  wire [1:0]smartconnect_0_M04_AXI_RRESP;
  wire smartconnect_0_M04_AXI_RVALID;
  wire [31:0]smartconnect_0_M04_AXI_WDATA;
  wire smartconnect_0_M04_AXI_WLAST;
  wire smartconnect_0_M04_AXI_WREADY;
  wire [3:0]smartconnect_0_M04_AXI_WSTRB;
  wire smartconnect_0_M04_AXI_WVALID;
  wire [11:0]smartconnect_0_M05_AXI_ARADDR;
  wire [1:0]smartconnect_0_M05_AXI_ARBURST;
  wire [3:0]smartconnect_0_M05_AXI_ARCACHE;
  wire [7:0]smartconnect_0_M05_AXI_ARLEN;
  wire [0:0]smartconnect_0_M05_AXI_ARLOCK;
  wire [2:0]smartconnect_0_M05_AXI_ARPROT;
  wire smartconnect_0_M05_AXI_ARREADY;
  wire [2:0]smartconnect_0_M05_AXI_ARSIZE;
  wire smartconnect_0_M05_AXI_ARVALID;
  wire [11:0]smartconnect_0_M05_AXI_AWADDR;
  wire [1:0]smartconnect_0_M05_AXI_AWBURST;
  wire [3:0]smartconnect_0_M05_AXI_AWCACHE;
  wire [7:0]smartconnect_0_M05_AXI_AWLEN;
  wire [0:0]smartconnect_0_M05_AXI_AWLOCK;
  wire [2:0]smartconnect_0_M05_AXI_AWPROT;
  wire smartconnect_0_M05_AXI_AWREADY;
  wire [2:0]smartconnect_0_M05_AXI_AWSIZE;
  wire smartconnect_0_M05_AXI_AWVALID;
  wire smartconnect_0_M05_AXI_BREADY;
  wire [1:0]smartconnect_0_M05_AXI_BRESP;
  wire smartconnect_0_M05_AXI_BVALID;
  wire [31:0]smartconnect_0_M05_AXI_RDATA;
  wire smartconnect_0_M05_AXI_RLAST;
  wire smartconnect_0_M05_AXI_RREADY;
  wire [1:0]smartconnect_0_M05_AXI_RRESP;
  wire smartconnect_0_M05_AXI_RVALID;
  wire [31:0]smartconnect_0_M05_AXI_WDATA;
  wire smartconnect_0_M05_AXI_WLAST;
  wire smartconnect_0_M05_AXI_WREADY;
  wire [3:0]smartconnect_0_M05_AXI_WSTRB;
  wire smartconnect_0_M05_AXI_WVALID;
  wire [11:0]smartconnect_0_M06_AXI_ARADDR;
  wire [1:0]smartconnect_0_M06_AXI_ARBURST;
  wire [3:0]smartconnect_0_M06_AXI_ARCACHE;
  wire [7:0]smartconnect_0_M06_AXI_ARLEN;
  wire [0:0]smartconnect_0_M06_AXI_ARLOCK;
  wire [2:0]smartconnect_0_M06_AXI_ARPROT;
  wire smartconnect_0_M06_AXI_ARREADY;
  wire [2:0]smartconnect_0_M06_AXI_ARSIZE;
  wire smartconnect_0_M06_AXI_ARVALID;
  wire [11:0]smartconnect_0_M06_AXI_AWADDR;
  wire [1:0]smartconnect_0_M06_AXI_AWBURST;
  wire [3:0]smartconnect_0_M06_AXI_AWCACHE;
  wire [7:0]smartconnect_0_M06_AXI_AWLEN;
  wire [0:0]smartconnect_0_M06_AXI_AWLOCK;
  wire [2:0]smartconnect_0_M06_AXI_AWPROT;
  wire smartconnect_0_M06_AXI_AWREADY;
  wire [2:0]smartconnect_0_M06_AXI_AWSIZE;
  wire smartconnect_0_M06_AXI_AWVALID;
  wire smartconnect_0_M06_AXI_BREADY;
  wire [1:0]smartconnect_0_M06_AXI_BRESP;
  wire smartconnect_0_M06_AXI_BVALID;
  wire [31:0]smartconnect_0_M06_AXI_RDATA;
  wire smartconnect_0_M06_AXI_RLAST;
  wire smartconnect_0_M06_AXI_RREADY;
  wire [1:0]smartconnect_0_M06_AXI_RRESP;
  wire smartconnect_0_M06_AXI_RVALID;
  wire [31:0]smartconnect_0_M06_AXI_WDATA;
  wire smartconnect_0_M06_AXI_WLAST;
  wire smartconnect_0_M06_AXI_WREADY;
  wire [3:0]smartconnect_0_M06_AXI_WSTRB;
  wire smartconnect_0_M06_AXI_WVALID;
  wire [11:0]smartconnect_0_M07_AXI_ARADDR;
  wire [1:0]smartconnect_0_M07_AXI_ARBURST;
  wire [3:0]smartconnect_0_M07_AXI_ARCACHE;
  wire [7:0]smartconnect_0_M07_AXI_ARLEN;
  wire [0:0]smartconnect_0_M07_AXI_ARLOCK;
  wire [2:0]smartconnect_0_M07_AXI_ARPROT;
  wire smartconnect_0_M07_AXI_ARREADY;
  wire [2:0]smartconnect_0_M07_AXI_ARSIZE;
  wire smartconnect_0_M07_AXI_ARVALID;
  wire [11:0]smartconnect_0_M07_AXI_AWADDR;
  wire [1:0]smartconnect_0_M07_AXI_AWBURST;
  wire [3:0]smartconnect_0_M07_AXI_AWCACHE;
  wire [7:0]smartconnect_0_M07_AXI_AWLEN;
  wire [0:0]smartconnect_0_M07_AXI_AWLOCK;
  wire [2:0]smartconnect_0_M07_AXI_AWPROT;
  wire smartconnect_0_M07_AXI_AWREADY;
  wire [2:0]smartconnect_0_M07_AXI_AWSIZE;
  wire smartconnect_0_M07_AXI_AWVALID;
  wire smartconnect_0_M07_AXI_BREADY;
  wire [1:0]smartconnect_0_M07_AXI_BRESP;
  wire smartconnect_0_M07_AXI_BVALID;
  wire [31:0]smartconnect_0_M07_AXI_RDATA;
  wire smartconnect_0_M07_AXI_RLAST;
  wire smartconnect_0_M07_AXI_RREADY;
  wire [1:0]smartconnect_0_M07_AXI_RRESP;
  wire smartconnect_0_M07_AXI_RVALID;
  wire [31:0]smartconnect_0_M07_AXI_WDATA;
  wire smartconnect_0_M07_AXI_WLAST;
  wire smartconnect_0_M07_AXI_WREADY;
  wire [3:0]smartconnect_0_M07_AXI_WSTRB;
  wire smartconnect_0_M07_AXI_WVALID;
  wire [11:0]smartconnect_0_M08_AXI_ARADDR;
  wire [1:0]smartconnect_0_M08_AXI_ARBURST;
  wire [3:0]smartconnect_0_M08_AXI_ARCACHE;
  wire [7:0]smartconnect_0_M08_AXI_ARLEN;
  wire [0:0]smartconnect_0_M08_AXI_ARLOCK;
  wire [2:0]smartconnect_0_M08_AXI_ARPROT;
  wire smartconnect_0_M08_AXI_ARREADY;
  wire [2:0]smartconnect_0_M08_AXI_ARSIZE;
  wire smartconnect_0_M08_AXI_ARVALID;
  wire [11:0]smartconnect_0_M08_AXI_AWADDR;
  wire [1:0]smartconnect_0_M08_AXI_AWBURST;
  wire [3:0]smartconnect_0_M08_AXI_AWCACHE;
  wire [7:0]smartconnect_0_M08_AXI_AWLEN;
  wire [0:0]smartconnect_0_M08_AXI_AWLOCK;
  wire [2:0]smartconnect_0_M08_AXI_AWPROT;
  wire smartconnect_0_M08_AXI_AWREADY;
  wire [2:0]smartconnect_0_M08_AXI_AWSIZE;
  wire smartconnect_0_M08_AXI_AWVALID;
  wire smartconnect_0_M08_AXI_BREADY;
  wire [1:0]smartconnect_0_M08_AXI_BRESP;
  wire smartconnect_0_M08_AXI_BVALID;
  wire [31:0]smartconnect_0_M08_AXI_RDATA;
  wire smartconnect_0_M08_AXI_RLAST;
  wire smartconnect_0_M08_AXI_RREADY;
  wire [1:0]smartconnect_0_M08_AXI_RRESP;
  wire smartconnect_0_M08_AXI_RVALID;
  wire [31:0]smartconnect_0_M08_AXI_WDATA;
  wire smartconnect_0_M08_AXI_WLAST;
  wire smartconnect_0_M08_AXI_WREADY;
  wire [3:0]smartconnect_0_M08_AXI_WSTRB;
  wire smartconnect_0_M08_AXI_WVALID;
  wire [11:0]smartconnect_0_M09_AXI_ARADDR;
  wire [1:0]smartconnect_0_M09_AXI_ARBURST;
  wire [3:0]smartconnect_0_M09_AXI_ARCACHE;
  wire [7:0]smartconnect_0_M09_AXI_ARLEN;
  wire [0:0]smartconnect_0_M09_AXI_ARLOCK;
  wire [2:0]smartconnect_0_M09_AXI_ARPROT;
  wire smartconnect_0_M09_AXI_ARREADY;
  wire [2:0]smartconnect_0_M09_AXI_ARSIZE;
  wire smartconnect_0_M09_AXI_ARVALID;
  wire [11:0]smartconnect_0_M09_AXI_AWADDR;
  wire [1:0]smartconnect_0_M09_AXI_AWBURST;
  wire [3:0]smartconnect_0_M09_AXI_AWCACHE;
  wire [7:0]smartconnect_0_M09_AXI_AWLEN;
  wire [0:0]smartconnect_0_M09_AXI_AWLOCK;
  wire [2:0]smartconnect_0_M09_AXI_AWPROT;
  wire smartconnect_0_M09_AXI_AWREADY;
  wire [2:0]smartconnect_0_M09_AXI_AWSIZE;
  wire smartconnect_0_M09_AXI_AWVALID;
  wire smartconnect_0_M09_AXI_BREADY;
  wire [1:0]smartconnect_0_M09_AXI_BRESP;
  wire smartconnect_0_M09_AXI_BVALID;
  wire [31:0]smartconnect_0_M09_AXI_RDATA;
  wire smartconnect_0_M09_AXI_RLAST;
  wire smartconnect_0_M09_AXI_RREADY;
  wire [1:0]smartconnect_0_M09_AXI_RRESP;
  wire smartconnect_0_M09_AXI_RVALID;
  wire [31:0]smartconnect_0_M09_AXI_WDATA;
  wire smartconnect_0_M09_AXI_WLAST;
  wire smartconnect_0_M09_AXI_WREADY;
  wire [3:0]smartconnect_0_M09_AXI_WSTRB;
  wire smartconnect_0_M09_AXI_WVALID;
  wire [11:0]smartconnect_0_M10_AXI_ARADDR;
  wire [1:0]smartconnect_0_M10_AXI_ARBURST;
  wire [3:0]smartconnect_0_M10_AXI_ARCACHE;
  wire [7:0]smartconnect_0_M10_AXI_ARLEN;
  wire [0:0]smartconnect_0_M10_AXI_ARLOCK;
  wire [2:0]smartconnect_0_M10_AXI_ARPROT;
  wire smartconnect_0_M10_AXI_ARREADY;
  wire [2:0]smartconnect_0_M10_AXI_ARSIZE;
  wire smartconnect_0_M10_AXI_ARVALID;
  wire [11:0]smartconnect_0_M10_AXI_AWADDR;
  wire [1:0]smartconnect_0_M10_AXI_AWBURST;
  wire [3:0]smartconnect_0_M10_AXI_AWCACHE;
  wire [7:0]smartconnect_0_M10_AXI_AWLEN;
  wire [0:0]smartconnect_0_M10_AXI_AWLOCK;
  wire [2:0]smartconnect_0_M10_AXI_AWPROT;
  wire smartconnect_0_M10_AXI_AWREADY;
  wire [2:0]smartconnect_0_M10_AXI_AWSIZE;
  wire smartconnect_0_M10_AXI_AWVALID;
  wire smartconnect_0_M10_AXI_BREADY;
  wire [1:0]smartconnect_0_M10_AXI_BRESP;
  wire smartconnect_0_M10_AXI_BVALID;
  wire [31:0]smartconnect_0_M10_AXI_RDATA;
  wire smartconnect_0_M10_AXI_RLAST;
  wire smartconnect_0_M10_AXI_RREADY;
  wire [1:0]smartconnect_0_M10_AXI_RRESP;
  wire smartconnect_0_M10_AXI_RVALID;
  wire [31:0]smartconnect_0_M10_AXI_WDATA;
  wire smartconnect_0_M10_AXI_WLAST;
  wire smartconnect_0_M10_AXI_WREADY;
  wire [3:0]smartconnect_0_M10_AXI_WSTRB;
  wire smartconnect_0_M10_AXI_WVALID;
  wire [11:0]smartconnect_0_M11_AXI_ARADDR;
  wire [1:0]smartconnect_0_M11_AXI_ARBURST;
  wire [3:0]smartconnect_0_M11_AXI_ARCACHE;
  wire [7:0]smartconnect_0_M11_AXI_ARLEN;
  wire [0:0]smartconnect_0_M11_AXI_ARLOCK;
  wire [2:0]smartconnect_0_M11_AXI_ARPROT;
  wire smartconnect_0_M11_AXI_ARREADY;
  wire [2:0]smartconnect_0_M11_AXI_ARSIZE;
  wire smartconnect_0_M11_AXI_ARVALID;
  wire [11:0]smartconnect_0_M11_AXI_AWADDR;
  wire [1:0]smartconnect_0_M11_AXI_AWBURST;
  wire [3:0]smartconnect_0_M11_AXI_AWCACHE;
  wire [7:0]smartconnect_0_M11_AXI_AWLEN;
  wire [0:0]smartconnect_0_M11_AXI_AWLOCK;
  wire [2:0]smartconnect_0_M11_AXI_AWPROT;
  wire smartconnect_0_M11_AXI_AWREADY;
  wire [2:0]smartconnect_0_M11_AXI_AWSIZE;
  wire smartconnect_0_M11_AXI_AWVALID;
  wire smartconnect_0_M11_AXI_BREADY;
  wire [1:0]smartconnect_0_M11_AXI_BRESP;
  wire smartconnect_0_M11_AXI_BVALID;
  wire [31:0]smartconnect_0_M11_AXI_RDATA;
  wire smartconnect_0_M11_AXI_RLAST;
  wire smartconnect_0_M11_AXI_RREADY;
  wire [1:0]smartconnect_0_M11_AXI_RRESP;
  wire smartconnect_0_M11_AXI_RVALID;
  wire [31:0]smartconnect_0_M11_AXI_WDATA;
  wire smartconnect_0_M11_AXI_WLAST;
  wire smartconnect_0_M11_AXI_WREADY;
  wire [3:0]smartconnect_0_M11_AXI_WSTRB;
  wire smartconnect_0_M11_AXI_WVALID;
  wire [11:0]smartconnect_0_M12_AXI_ARADDR;
  wire [1:0]smartconnect_0_M12_AXI_ARBURST;
  wire [3:0]smartconnect_0_M12_AXI_ARCACHE;
  wire [7:0]smartconnect_0_M12_AXI_ARLEN;
  wire [0:0]smartconnect_0_M12_AXI_ARLOCK;
  wire [2:0]smartconnect_0_M12_AXI_ARPROT;
  wire smartconnect_0_M12_AXI_ARREADY;
  wire [2:0]smartconnect_0_M12_AXI_ARSIZE;
  wire smartconnect_0_M12_AXI_ARVALID;
  wire [11:0]smartconnect_0_M12_AXI_AWADDR;
  wire [1:0]smartconnect_0_M12_AXI_AWBURST;
  wire [3:0]smartconnect_0_M12_AXI_AWCACHE;
  wire [7:0]smartconnect_0_M12_AXI_AWLEN;
  wire [0:0]smartconnect_0_M12_AXI_AWLOCK;
  wire [2:0]smartconnect_0_M12_AXI_AWPROT;
  wire smartconnect_0_M12_AXI_AWREADY;
  wire [2:0]smartconnect_0_M12_AXI_AWSIZE;
  wire smartconnect_0_M12_AXI_AWVALID;
  wire smartconnect_0_M12_AXI_BREADY;
  wire [1:0]smartconnect_0_M12_AXI_BRESP;
  wire smartconnect_0_M12_AXI_BVALID;
  wire [31:0]smartconnect_0_M12_AXI_RDATA;
  wire smartconnect_0_M12_AXI_RLAST;
  wire smartconnect_0_M12_AXI_RREADY;
  wire [1:0]smartconnect_0_M12_AXI_RRESP;
  wire smartconnect_0_M12_AXI_RVALID;
  wire [31:0]smartconnect_0_M12_AXI_WDATA;
  wire smartconnect_0_M12_AXI_WLAST;
  wire smartconnect_0_M12_AXI_WREADY;
  wire [3:0]smartconnect_0_M12_AXI_WSTRB;
  wire smartconnect_0_M12_AXI_WVALID;
  wire [11:0]smartconnect_0_M13_AXI_ARADDR;
  wire [1:0]smartconnect_0_M13_AXI_ARBURST;
  wire [3:0]smartconnect_0_M13_AXI_ARCACHE;
  wire [7:0]smartconnect_0_M13_AXI_ARLEN;
  wire [0:0]smartconnect_0_M13_AXI_ARLOCK;
  wire [2:0]smartconnect_0_M13_AXI_ARPROT;
  wire smartconnect_0_M13_AXI_ARREADY;
  wire [2:0]smartconnect_0_M13_AXI_ARSIZE;
  wire smartconnect_0_M13_AXI_ARVALID;
  wire [11:0]smartconnect_0_M13_AXI_AWADDR;
  wire [1:0]smartconnect_0_M13_AXI_AWBURST;
  wire [3:0]smartconnect_0_M13_AXI_AWCACHE;
  wire [7:0]smartconnect_0_M13_AXI_AWLEN;
  wire [0:0]smartconnect_0_M13_AXI_AWLOCK;
  wire [2:0]smartconnect_0_M13_AXI_AWPROT;
  wire smartconnect_0_M13_AXI_AWREADY;
  wire [2:0]smartconnect_0_M13_AXI_AWSIZE;
  wire smartconnect_0_M13_AXI_AWVALID;
  wire smartconnect_0_M13_AXI_BREADY;
  wire [1:0]smartconnect_0_M13_AXI_BRESP;
  wire smartconnect_0_M13_AXI_BVALID;
  wire [31:0]smartconnect_0_M13_AXI_RDATA;
  wire smartconnect_0_M13_AXI_RLAST;
  wire smartconnect_0_M13_AXI_RREADY;
  wire [1:0]smartconnect_0_M13_AXI_RRESP;
  wire smartconnect_0_M13_AXI_RVALID;
  wire [31:0]smartconnect_0_M13_AXI_WDATA;
  wire smartconnect_0_M13_AXI_WLAST;
  wire smartconnect_0_M13_AXI_WREADY;
  wire [3:0]smartconnect_0_M13_AXI_WSTRB;
  wire smartconnect_0_M13_AXI_WVALID;
  wire [11:0]smartconnect_0_M14_AXI_ARADDR;
  wire [1:0]smartconnect_0_M14_AXI_ARBURST;
  wire [3:0]smartconnect_0_M14_AXI_ARCACHE;
  wire [7:0]smartconnect_0_M14_AXI_ARLEN;
  wire [0:0]smartconnect_0_M14_AXI_ARLOCK;
  wire [2:0]smartconnect_0_M14_AXI_ARPROT;
  wire smartconnect_0_M14_AXI_ARREADY;
  wire [2:0]smartconnect_0_M14_AXI_ARSIZE;
  wire smartconnect_0_M14_AXI_ARVALID;
  wire [11:0]smartconnect_0_M14_AXI_AWADDR;
  wire [1:0]smartconnect_0_M14_AXI_AWBURST;
  wire [3:0]smartconnect_0_M14_AXI_AWCACHE;
  wire [7:0]smartconnect_0_M14_AXI_AWLEN;
  wire [0:0]smartconnect_0_M14_AXI_AWLOCK;
  wire [2:0]smartconnect_0_M14_AXI_AWPROT;
  wire smartconnect_0_M14_AXI_AWREADY;
  wire [2:0]smartconnect_0_M14_AXI_AWSIZE;
  wire smartconnect_0_M14_AXI_AWVALID;
  wire smartconnect_0_M14_AXI_BREADY;
  wire [1:0]smartconnect_0_M14_AXI_BRESP;
  wire smartconnect_0_M14_AXI_BVALID;
  wire [31:0]smartconnect_0_M14_AXI_RDATA;
  wire smartconnect_0_M14_AXI_RLAST;
  wire smartconnect_0_M14_AXI_RREADY;
  wire [1:0]smartconnect_0_M14_AXI_RRESP;
  wire smartconnect_0_M14_AXI_RVALID;
  wire [31:0]smartconnect_0_M14_AXI_WDATA;
  wire smartconnect_0_M14_AXI_WLAST;
  wire smartconnect_0_M14_AXI_WREADY;
  wire [3:0]smartconnect_0_M14_AXI_WSTRB;
  wire smartconnect_0_M14_AXI_WVALID;
  wire [11:0]smartconnect_0_M15_AXI_ARADDR;
  wire [1:0]smartconnect_0_M15_AXI_ARBURST;
  wire [3:0]smartconnect_0_M15_AXI_ARCACHE;
  wire [7:0]smartconnect_0_M15_AXI_ARLEN;
  wire [0:0]smartconnect_0_M15_AXI_ARLOCK;
  wire [2:0]smartconnect_0_M15_AXI_ARPROT;
  wire smartconnect_0_M15_AXI_ARREADY;
  wire [2:0]smartconnect_0_M15_AXI_ARSIZE;
  wire smartconnect_0_M15_AXI_ARVALID;
  wire [11:0]smartconnect_0_M15_AXI_AWADDR;
  wire [1:0]smartconnect_0_M15_AXI_AWBURST;
  wire [3:0]smartconnect_0_M15_AXI_AWCACHE;
  wire [7:0]smartconnect_0_M15_AXI_AWLEN;
  wire [0:0]smartconnect_0_M15_AXI_AWLOCK;
  wire [2:0]smartconnect_0_M15_AXI_AWPROT;
  wire smartconnect_0_M15_AXI_AWREADY;
  wire [2:0]smartconnect_0_M15_AXI_AWSIZE;
  wire smartconnect_0_M15_AXI_AWVALID;
  wire smartconnect_0_M15_AXI_BREADY;
  wire [1:0]smartconnect_0_M15_AXI_BRESP;
  wire smartconnect_0_M15_AXI_BVALID;
  wire [31:0]smartconnect_0_M15_AXI_RDATA;
  wire smartconnect_0_M15_AXI_RLAST;
  wire smartconnect_0_M15_AXI_RREADY;
  wire [1:0]smartconnect_0_M15_AXI_RRESP;
  wire smartconnect_0_M15_AXI_RVALID;
  wire [31:0]smartconnect_0_M15_AXI_WDATA;
  wire smartconnect_0_M15_AXI_WLAST;
  wire smartconnect_0_M15_AXI_WREADY;
  wire [3:0]smartconnect_0_M15_AXI_WSTRB;
  wire smartconnect_0_M15_AXI_WVALID;
  wire [11:0]smartconnect_0_M16_AXI_ARADDR;
  wire [1:0]smartconnect_0_M16_AXI_ARBURST;
  wire [3:0]smartconnect_0_M16_AXI_ARCACHE;
  wire [7:0]smartconnect_0_M16_AXI_ARLEN;
  wire [0:0]smartconnect_0_M16_AXI_ARLOCK;
  wire [2:0]smartconnect_0_M16_AXI_ARPROT;
  wire smartconnect_0_M16_AXI_ARREADY;
  wire [2:0]smartconnect_0_M16_AXI_ARSIZE;
  wire smartconnect_0_M16_AXI_ARVALID;
  wire [11:0]smartconnect_0_M16_AXI_AWADDR;
  wire [1:0]smartconnect_0_M16_AXI_AWBURST;
  wire [3:0]smartconnect_0_M16_AXI_AWCACHE;
  wire [7:0]smartconnect_0_M16_AXI_AWLEN;
  wire [0:0]smartconnect_0_M16_AXI_AWLOCK;
  wire [2:0]smartconnect_0_M16_AXI_AWPROT;
  wire smartconnect_0_M16_AXI_AWREADY;
  wire [2:0]smartconnect_0_M16_AXI_AWSIZE;
  wire smartconnect_0_M16_AXI_AWVALID;
  wire smartconnect_0_M16_AXI_BREADY;
  wire [1:0]smartconnect_0_M16_AXI_BRESP;
  wire smartconnect_0_M16_AXI_BVALID;
  wire [31:0]smartconnect_0_M16_AXI_RDATA;
  wire smartconnect_0_M16_AXI_RLAST;
  wire smartconnect_0_M16_AXI_RREADY;
  wire [1:0]smartconnect_0_M16_AXI_RRESP;
  wire smartconnect_0_M16_AXI_RVALID;
  wire [31:0]smartconnect_0_M16_AXI_WDATA;
  wire smartconnect_0_M16_AXI_WLAST;
  wire smartconnect_0_M16_AXI_WREADY;
  wire [3:0]smartconnect_0_M16_AXI_WSTRB;
  wire smartconnect_0_M16_AXI_WVALID;
  wire [11:0]smartconnect_0_M17_AXI_ARADDR;
  wire [1:0]smartconnect_0_M17_AXI_ARBURST;
  wire [3:0]smartconnect_0_M17_AXI_ARCACHE;
  wire [7:0]smartconnect_0_M17_AXI_ARLEN;
  wire [0:0]smartconnect_0_M17_AXI_ARLOCK;
  wire [2:0]smartconnect_0_M17_AXI_ARPROT;
  wire smartconnect_0_M17_AXI_ARREADY;
  wire [2:0]smartconnect_0_M17_AXI_ARSIZE;
  wire smartconnect_0_M17_AXI_ARVALID;
  wire [11:0]smartconnect_0_M17_AXI_AWADDR;
  wire [1:0]smartconnect_0_M17_AXI_AWBURST;
  wire [3:0]smartconnect_0_M17_AXI_AWCACHE;
  wire [7:0]smartconnect_0_M17_AXI_AWLEN;
  wire [0:0]smartconnect_0_M17_AXI_AWLOCK;
  wire [2:0]smartconnect_0_M17_AXI_AWPROT;
  wire smartconnect_0_M17_AXI_AWREADY;
  wire [2:0]smartconnect_0_M17_AXI_AWSIZE;
  wire smartconnect_0_M17_AXI_AWVALID;
  wire smartconnect_0_M17_AXI_BREADY;
  wire [1:0]smartconnect_0_M17_AXI_BRESP;
  wire smartconnect_0_M17_AXI_BVALID;
  wire [31:0]smartconnect_0_M17_AXI_RDATA;
  wire smartconnect_0_M17_AXI_RLAST;
  wire smartconnect_0_M17_AXI_RREADY;
  wire [1:0]smartconnect_0_M17_AXI_RRESP;
  wire smartconnect_0_M17_AXI_RVALID;
  wire [31:0]smartconnect_0_M17_AXI_WDATA;
  wire smartconnect_0_M17_AXI_WLAST;
  wire smartconnect_0_M17_AXI_WREADY;
  wire [3:0]smartconnect_0_M17_AXI_WSTRB;
  wire smartconnect_0_M17_AXI_WVALID;
  wire [11:0]smartconnect_0_M18_AXI_ARADDR;
  wire [1:0]smartconnect_0_M18_AXI_ARBURST;
  wire [3:0]smartconnect_0_M18_AXI_ARCACHE;
  wire [7:0]smartconnect_0_M18_AXI_ARLEN;
  wire [0:0]smartconnect_0_M18_AXI_ARLOCK;
  wire [2:0]smartconnect_0_M18_AXI_ARPROT;
  wire smartconnect_0_M18_AXI_ARREADY;
  wire [2:0]smartconnect_0_M18_AXI_ARSIZE;
  wire smartconnect_0_M18_AXI_ARVALID;
  wire [11:0]smartconnect_0_M18_AXI_AWADDR;
  wire [1:0]smartconnect_0_M18_AXI_AWBURST;
  wire [3:0]smartconnect_0_M18_AXI_AWCACHE;
  wire [7:0]smartconnect_0_M18_AXI_AWLEN;
  wire [0:0]smartconnect_0_M18_AXI_AWLOCK;
  wire [2:0]smartconnect_0_M18_AXI_AWPROT;
  wire smartconnect_0_M18_AXI_AWREADY;
  wire [2:0]smartconnect_0_M18_AXI_AWSIZE;
  wire smartconnect_0_M18_AXI_AWVALID;
  wire smartconnect_0_M18_AXI_BREADY;
  wire [1:0]smartconnect_0_M18_AXI_BRESP;
  wire smartconnect_0_M18_AXI_BVALID;
  wire [31:0]smartconnect_0_M18_AXI_RDATA;
  wire smartconnect_0_M18_AXI_RLAST;
  wire smartconnect_0_M18_AXI_RREADY;
  wire [1:0]smartconnect_0_M18_AXI_RRESP;
  wire smartconnect_0_M18_AXI_RVALID;
  wire [31:0]smartconnect_0_M18_AXI_WDATA;
  wire smartconnect_0_M18_AXI_WLAST;
  wire smartconnect_0_M18_AXI_WREADY;
  wire [3:0]smartconnect_0_M18_AXI_WSTRB;
  wire smartconnect_0_M18_AXI_WVALID;
  wire [11:0]smartconnect_0_M19_AXI_ARADDR;
  wire [1:0]smartconnect_0_M19_AXI_ARBURST;
  wire [3:0]smartconnect_0_M19_AXI_ARCACHE;
  wire [7:0]smartconnect_0_M19_AXI_ARLEN;
  wire [0:0]smartconnect_0_M19_AXI_ARLOCK;
  wire [2:0]smartconnect_0_M19_AXI_ARPROT;
  wire smartconnect_0_M19_AXI_ARREADY;
  wire [2:0]smartconnect_0_M19_AXI_ARSIZE;
  wire smartconnect_0_M19_AXI_ARVALID;
  wire [11:0]smartconnect_0_M19_AXI_AWADDR;
  wire [1:0]smartconnect_0_M19_AXI_AWBURST;
  wire [3:0]smartconnect_0_M19_AXI_AWCACHE;
  wire [7:0]smartconnect_0_M19_AXI_AWLEN;
  wire [0:0]smartconnect_0_M19_AXI_AWLOCK;
  wire [2:0]smartconnect_0_M19_AXI_AWPROT;
  wire smartconnect_0_M19_AXI_AWREADY;
  wire [2:0]smartconnect_0_M19_AXI_AWSIZE;
  wire smartconnect_0_M19_AXI_AWVALID;
  wire smartconnect_0_M19_AXI_BREADY;
  wire [1:0]smartconnect_0_M19_AXI_BRESP;
  wire smartconnect_0_M19_AXI_BVALID;
  wire [31:0]smartconnect_0_M19_AXI_RDATA;
  wire smartconnect_0_M19_AXI_RLAST;
  wire smartconnect_0_M19_AXI_RREADY;
  wire [1:0]smartconnect_0_M19_AXI_RRESP;
  wire smartconnect_0_M19_AXI_RVALID;
  wire [31:0]smartconnect_0_M19_AXI_WDATA;
  wire smartconnect_0_M19_AXI_WLAST;
  wire smartconnect_0_M19_AXI_WREADY;
  wire [3:0]smartconnect_0_M19_AXI_WSTRB;
  wire smartconnect_0_M19_AXI_WVALID;
  wire [11:0]smartconnect_0_M20_AXI_ARADDR;
  wire [1:0]smartconnect_0_M20_AXI_ARBURST;
  wire [3:0]smartconnect_0_M20_AXI_ARCACHE;
  wire [7:0]smartconnect_0_M20_AXI_ARLEN;
  wire [0:0]smartconnect_0_M20_AXI_ARLOCK;
  wire [2:0]smartconnect_0_M20_AXI_ARPROT;
  wire smartconnect_0_M20_AXI_ARREADY;
  wire [2:0]smartconnect_0_M20_AXI_ARSIZE;
  wire smartconnect_0_M20_AXI_ARVALID;
  wire [11:0]smartconnect_0_M20_AXI_AWADDR;
  wire [1:0]smartconnect_0_M20_AXI_AWBURST;
  wire [3:0]smartconnect_0_M20_AXI_AWCACHE;
  wire [7:0]smartconnect_0_M20_AXI_AWLEN;
  wire [0:0]smartconnect_0_M20_AXI_AWLOCK;
  wire [2:0]smartconnect_0_M20_AXI_AWPROT;
  wire smartconnect_0_M20_AXI_AWREADY;
  wire [2:0]smartconnect_0_M20_AXI_AWSIZE;
  wire smartconnect_0_M20_AXI_AWVALID;
  wire smartconnect_0_M20_AXI_BREADY;
  wire [1:0]smartconnect_0_M20_AXI_BRESP;
  wire smartconnect_0_M20_AXI_BVALID;
  wire [31:0]smartconnect_0_M20_AXI_RDATA;
  wire smartconnect_0_M20_AXI_RLAST;
  wire smartconnect_0_M20_AXI_RREADY;
  wire [1:0]smartconnect_0_M20_AXI_RRESP;
  wire smartconnect_0_M20_AXI_RVALID;
  wire [31:0]smartconnect_0_M20_AXI_WDATA;
  wire smartconnect_0_M20_AXI_WLAST;
  wire smartconnect_0_M20_AXI_WREADY;
  wire [3:0]smartconnect_0_M20_AXI_WSTRB;
  wire smartconnect_0_M20_AXI_WVALID;
  wire [11:0]smartconnect_0_M21_AXI_ARADDR;
  wire [1:0]smartconnect_0_M21_AXI_ARBURST;
  wire [3:0]smartconnect_0_M21_AXI_ARCACHE;
  wire [7:0]smartconnect_0_M21_AXI_ARLEN;
  wire [0:0]smartconnect_0_M21_AXI_ARLOCK;
  wire [2:0]smartconnect_0_M21_AXI_ARPROT;
  wire smartconnect_0_M21_AXI_ARREADY;
  wire [2:0]smartconnect_0_M21_AXI_ARSIZE;
  wire smartconnect_0_M21_AXI_ARVALID;
  wire [11:0]smartconnect_0_M21_AXI_AWADDR;
  wire [1:0]smartconnect_0_M21_AXI_AWBURST;
  wire [3:0]smartconnect_0_M21_AXI_AWCACHE;
  wire [7:0]smartconnect_0_M21_AXI_AWLEN;
  wire [0:0]smartconnect_0_M21_AXI_AWLOCK;
  wire [2:0]smartconnect_0_M21_AXI_AWPROT;
  wire smartconnect_0_M21_AXI_AWREADY;
  wire [2:0]smartconnect_0_M21_AXI_AWSIZE;
  wire smartconnect_0_M21_AXI_AWVALID;
  wire smartconnect_0_M21_AXI_BREADY;
  wire [1:0]smartconnect_0_M21_AXI_BRESP;
  wire smartconnect_0_M21_AXI_BVALID;
  wire [31:0]smartconnect_0_M21_AXI_RDATA;
  wire smartconnect_0_M21_AXI_RLAST;
  wire smartconnect_0_M21_AXI_RREADY;
  wire [1:0]smartconnect_0_M21_AXI_RRESP;
  wire smartconnect_0_M21_AXI_RVALID;
  wire [31:0]smartconnect_0_M21_AXI_WDATA;
  wire smartconnect_0_M21_AXI_WLAST;
  wire smartconnect_0_M21_AXI_WREADY;
  wire [3:0]smartconnect_0_M21_AXI_WSTRB;
  wire smartconnect_0_M21_AXI_WVALID;
  wire [11:0]smartconnect_0_M22_AXI_ARADDR;
  wire [1:0]smartconnect_0_M22_AXI_ARBURST;
  wire [3:0]smartconnect_0_M22_AXI_ARCACHE;
  wire [7:0]smartconnect_0_M22_AXI_ARLEN;
  wire [0:0]smartconnect_0_M22_AXI_ARLOCK;
  wire [2:0]smartconnect_0_M22_AXI_ARPROT;
  wire smartconnect_0_M22_AXI_ARREADY;
  wire [2:0]smartconnect_0_M22_AXI_ARSIZE;
  wire smartconnect_0_M22_AXI_ARVALID;
  wire [11:0]smartconnect_0_M22_AXI_AWADDR;
  wire [1:0]smartconnect_0_M22_AXI_AWBURST;
  wire [3:0]smartconnect_0_M22_AXI_AWCACHE;
  wire [7:0]smartconnect_0_M22_AXI_AWLEN;
  wire [0:0]smartconnect_0_M22_AXI_AWLOCK;
  wire [2:0]smartconnect_0_M22_AXI_AWPROT;
  wire smartconnect_0_M22_AXI_AWREADY;
  wire [2:0]smartconnect_0_M22_AXI_AWSIZE;
  wire smartconnect_0_M22_AXI_AWVALID;
  wire smartconnect_0_M22_AXI_BREADY;
  wire [1:0]smartconnect_0_M22_AXI_BRESP;
  wire smartconnect_0_M22_AXI_BVALID;
  wire [31:0]smartconnect_0_M22_AXI_RDATA;
  wire smartconnect_0_M22_AXI_RLAST;
  wire smartconnect_0_M22_AXI_RREADY;
  wire [1:0]smartconnect_0_M22_AXI_RRESP;
  wire smartconnect_0_M22_AXI_RVALID;
  wire [31:0]smartconnect_0_M22_AXI_WDATA;
  wire smartconnect_0_M22_AXI_WLAST;
  wire smartconnect_0_M22_AXI_WREADY;
  wire [3:0]smartconnect_0_M22_AXI_WSTRB;
  wire smartconnect_0_M22_AXI_WVALID;
  wire [11:0]smartconnect_0_M23_AXI_ARADDR;
  wire [1:0]smartconnect_0_M23_AXI_ARBURST;
  wire [3:0]smartconnect_0_M23_AXI_ARCACHE;
  wire [7:0]smartconnect_0_M23_AXI_ARLEN;
  wire [0:0]smartconnect_0_M23_AXI_ARLOCK;
  wire [2:0]smartconnect_0_M23_AXI_ARPROT;
  wire smartconnect_0_M23_AXI_ARREADY;
  wire [2:0]smartconnect_0_M23_AXI_ARSIZE;
  wire smartconnect_0_M23_AXI_ARVALID;
  wire [11:0]smartconnect_0_M23_AXI_AWADDR;
  wire [1:0]smartconnect_0_M23_AXI_AWBURST;
  wire [3:0]smartconnect_0_M23_AXI_AWCACHE;
  wire [7:0]smartconnect_0_M23_AXI_AWLEN;
  wire [0:0]smartconnect_0_M23_AXI_AWLOCK;
  wire [2:0]smartconnect_0_M23_AXI_AWPROT;
  wire smartconnect_0_M23_AXI_AWREADY;
  wire [2:0]smartconnect_0_M23_AXI_AWSIZE;
  wire smartconnect_0_M23_AXI_AWVALID;
  wire smartconnect_0_M23_AXI_BREADY;
  wire [1:0]smartconnect_0_M23_AXI_BRESP;
  wire smartconnect_0_M23_AXI_BVALID;
  wire [31:0]smartconnect_0_M23_AXI_RDATA;
  wire smartconnect_0_M23_AXI_RLAST;
  wire smartconnect_0_M23_AXI_RREADY;
  wire [1:0]smartconnect_0_M23_AXI_RRESP;
  wire smartconnect_0_M23_AXI_RVALID;
  wire [31:0]smartconnect_0_M23_AXI_WDATA;
  wire smartconnect_0_M23_AXI_WLAST;
  wire smartconnect_0_M23_AXI_WREADY;
  wire [3:0]smartconnect_0_M23_AXI_WSTRB;
  wire smartconnect_0_M23_AXI_WVALID;
  wire start_core_in_1;
  wire [31:0]weight_size_1_16_1;
  wire [11:0]width_input_img_1;

  Core_imp_2O5QCR Core
       (.BRAM_img_addr_0(BRAM_img_addr_0_1),
        .BRAM_img_addr_1(axi_bram_ctrl_21_bram_addr_a),
        .BRAM_img_addr_2(axi_bram_ctrl_22_bram_addr_a),
        .BRAM_img_addr_3(axi_bram_ctrl_23_bram_addr_a),
        .BRAM_img_din_0(BRAM_img_din_0_1),
        .BRAM_img_din_1(BRAM_img_din_1_1),
        .BRAM_img_din_2(axi_bram_ctrl_22_bram_wrdata_a),
        .BRAM_img_din_3(axi_bram_ctrl_23_bram_wrdata_a),
        .BRAM_img_dout_0(Core_BRAM_img_dout_0),
        .BRAM_img_dout_1(Core_BRAM_img_dout_1),
        .BRAM_img_dout_2(Core_BRAM_img_dout_2),
        .BRAM_img_dout_3(Core_BRAM_img_dout_3),
        .BRAM_img_en_0(axi_bram_ctrl_20_bram_en_a),
        .BRAM_img_en_1(BRAM_img_en_1_1),
        .BRAM_img_en_2(axi_bram_ctrl_22_bram_en_a),
        .BRAM_img_en_3(axi_bram_ctrl_23_bram_en_a),
        .BRAM_img_rst_0(axi_bram_ctrl_20_bram_rst_a),
        .BRAM_img_rst_1(BRAM_img_rst_1_1),
        .BRAM_img_rst_2(axi_bram_ctrl_22_bram_rst_a),
        .BRAM_img_rst_3(axi_bram_ctrl_23_bram_rst_a),
        .BRAM_img_sel(regs_file_0_BRAM_img_sel),
        .BRAM_img_wen_0(BRAM_img_wen_0_1),
        .BRAM_img_wen_1(BRAM_img_wen_1_1),
        .BRAM_img_wen_2(axi_bram_ctrl_22_bram_we_a),
        .BRAM_img_wen_3(axi_bram_ctrl_23_bram_we_a),
        .BRAM_out_0_addr(BRAM_out_0_1_ADDR),
        .BRAM_out_0_clk(BRAM_out_0_1_CLK),
        .BRAM_out_0_din(BRAM_out_0_1_DIN),
        .BRAM_out_0_dout(BRAM_out_0_1_DOUT),
        .BRAM_out_0_en(BRAM_out_0_1_EN),
        .BRAM_out_0_rst(BRAM_out_0_1_RST),
        .BRAM_out_0_we(BRAM_out_0_1_WE),
        .BRAM_out_1_addr(axi_bram_ctrl_1_BRAM_PORTA_ADDR),
        .BRAM_out_1_clk(axi_bram_ctrl_1_BRAM_PORTA_CLK),
        .BRAM_out_1_din(axi_bram_ctrl_1_BRAM_PORTA_DIN),
        .BRAM_out_1_dout(axi_bram_ctrl_1_BRAM_PORTA_DOUT),
        .BRAM_out_1_en(axi_bram_ctrl_1_BRAM_PORTA_EN),
        .BRAM_out_1_rst(axi_bram_ctrl_1_BRAM_PORTA_RST),
        .BRAM_out_1_we(axi_bram_ctrl_1_BRAM_PORTA_WE),
        .BRAM_out_2_addr(axi_bram_ctrl_2_BRAM_PORTA_ADDR),
        .BRAM_out_2_clk(axi_bram_ctrl_2_BRAM_PORTA_CLK),
        .BRAM_out_2_din(axi_bram_ctrl_2_BRAM_PORTA_DIN),
        .BRAM_out_2_dout(axi_bram_ctrl_2_BRAM_PORTA_DOUT),
        .BRAM_out_2_en(axi_bram_ctrl_2_BRAM_PORTA_EN),
        .BRAM_out_2_rst(axi_bram_ctrl_2_BRAM_PORTA_RST),
        .BRAM_out_2_we(axi_bram_ctrl_2_BRAM_PORTA_WE),
        .BRAM_out_3_addr(axi_bram_ctrl_3_BRAM_PORTA_ADDR),
        .BRAM_out_3_clk(axi_bram_ctrl_3_BRAM_PORTA_CLK),
        .BRAM_out_3_din(axi_bram_ctrl_3_BRAM_PORTA_DIN),
        .BRAM_out_3_dout(axi_bram_ctrl_3_BRAM_PORTA_DOUT),
        .BRAM_out_3_en(axi_bram_ctrl_3_BRAM_PORTA_EN),
        .BRAM_out_3_rst(axi_bram_ctrl_3_BRAM_PORTA_RST),
        .BRAM_out_3_we(axi_bram_ctrl_3_BRAM_PORTA_WE),
        .BRAM_weight_0_0_addr(axi_bram_ctrl_4_BRAM_PORTA_ADDR),
        .BRAM_weight_0_0_clk(axi_bram_ctrl_4_BRAM_PORTA_CLK),
        .BRAM_weight_0_0_din(axi_bram_ctrl_4_BRAM_PORTA_DIN),
        .BRAM_weight_0_0_dout(axi_bram_ctrl_4_BRAM_PORTA_DOUT),
        .BRAM_weight_0_0_en(axi_bram_ctrl_4_BRAM_PORTA_EN),
        .BRAM_weight_0_0_rst(axi_bram_ctrl_4_BRAM_PORTA_RST),
        .BRAM_weight_0_0_we(axi_bram_ctrl_4_BRAM_PORTA_WE),
        .BRAM_weight_0_1_addr(BRAM_weight_0_1_1_ADDR),
        .BRAM_weight_0_1_clk(BRAM_weight_0_1_1_CLK),
        .BRAM_weight_0_1_din(BRAM_weight_0_1_1_DIN),
        .BRAM_weight_0_1_dout(BRAM_weight_0_1_1_DOUT),
        .BRAM_weight_0_1_en(BRAM_weight_0_1_1_EN),
        .BRAM_weight_0_1_rst(BRAM_weight_0_1_1_RST),
        .BRAM_weight_0_1_we(BRAM_weight_0_1_1_WE),
        .BRAM_weight_0_2_addr(BRAM_weight_0_2_1_ADDR),
        .BRAM_weight_0_2_clk(BRAM_weight_0_2_1_CLK),
        .BRAM_weight_0_2_din(BRAM_weight_0_2_1_DIN),
        .BRAM_weight_0_2_dout(BRAM_weight_0_2_1_DOUT),
        .BRAM_weight_0_2_en(BRAM_weight_0_2_1_EN),
        .BRAM_weight_0_2_rst(BRAM_weight_0_2_1_RST),
        .BRAM_weight_0_2_we(BRAM_weight_0_2_1_WE),
        .BRAM_weight_0_3_addr(axi_bram_ctrl_7_BRAM_PORTA_ADDR),
        .BRAM_weight_0_3_clk(axi_bram_ctrl_7_BRAM_PORTA_CLK),
        .BRAM_weight_0_3_din(axi_bram_ctrl_7_BRAM_PORTA_DIN),
        .BRAM_weight_0_3_dout(axi_bram_ctrl_7_BRAM_PORTA_DOUT),
        .BRAM_weight_0_3_en(axi_bram_ctrl_7_BRAM_PORTA_EN),
        .BRAM_weight_0_3_rst(axi_bram_ctrl_7_BRAM_PORTA_RST),
        .BRAM_weight_0_3_we(axi_bram_ctrl_7_BRAM_PORTA_WE),
        .BRAM_weight_1_0_addr(axi_bram_ctrl_8_BRAM_PORTA_ADDR),
        .BRAM_weight_1_0_clk(axi_bram_ctrl_8_BRAM_PORTA_CLK),
        .BRAM_weight_1_0_din(axi_bram_ctrl_8_BRAM_PORTA_DIN),
        .BRAM_weight_1_0_dout(axi_bram_ctrl_8_BRAM_PORTA_DOUT),
        .BRAM_weight_1_0_en(axi_bram_ctrl_8_BRAM_PORTA_EN),
        .BRAM_weight_1_0_rst(axi_bram_ctrl_8_BRAM_PORTA_RST),
        .BRAM_weight_1_0_we(axi_bram_ctrl_8_BRAM_PORTA_WE),
        .BRAM_weight_1_1_addr(axi_bram_ctrl_9_BRAM_PORTA_ADDR),
        .BRAM_weight_1_1_clk(axi_bram_ctrl_9_BRAM_PORTA_CLK),
        .BRAM_weight_1_1_din(axi_bram_ctrl_9_BRAM_PORTA_DIN),
        .BRAM_weight_1_1_dout(axi_bram_ctrl_9_BRAM_PORTA_DOUT),
        .BRAM_weight_1_1_en(axi_bram_ctrl_9_BRAM_PORTA_EN),
        .BRAM_weight_1_1_rst(axi_bram_ctrl_9_BRAM_PORTA_RST),
        .BRAM_weight_1_1_we(axi_bram_ctrl_9_BRAM_PORTA_WE),
        .BRAM_weight_1_2_addr(axi_bram_ctrl_10_BRAM_PORTA_ADDR),
        .BRAM_weight_1_2_clk(axi_bram_ctrl_10_BRAM_PORTA_CLK),
        .BRAM_weight_1_2_din(axi_bram_ctrl_10_BRAM_PORTA_DIN),
        .BRAM_weight_1_2_dout(axi_bram_ctrl_10_BRAM_PORTA_DOUT),
        .BRAM_weight_1_2_en(axi_bram_ctrl_10_BRAM_PORTA_EN),
        .BRAM_weight_1_2_rst(axi_bram_ctrl_10_BRAM_PORTA_RST),
        .BRAM_weight_1_2_we(axi_bram_ctrl_10_BRAM_PORTA_WE),
        .BRAM_weight_1_3_addr(axi_bram_ctrl_11_BRAM_PORTA_ADDR),
        .BRAM_weight_1_3_clk(axi_bram_ctrl_11_BRAM_PORTA_CLK),
        .BRAM_weight_1_3_din(axi_bram_ctrl_11_BRAM_PORTA_DIN),
        .BRAM_weight_1_3_dout(axi_bram_ctrl_11_BRAM_PORTA_DOUT),
        .BRAM_weight_1_3_en(axi_bram_ctrl_11_BRAM_PORTA_EN),
        .BRAM_weight_1_3_rst(axi_bram_ctrl_11_BRAM_PORTA_RST),
        .BRAM_weight_1_3_we(axi_bram_ctrl_11_BRAM_PORTA_WE),
        .BRAM_weight_2_0_addr(axi_bram_ctrl_12_BRAM_PORTA_ADDR),
        .BRAM_weight_2_0_clk(axi_bram_ctrl_12_BRAM_PORTA_CLK),
        .BRAM_weight_2_0_din(axi_bram_ctrl_12_BRAM_PORTA_DIN),
        .BRAM_weight_2_0_dout(axi_bram_ctrl_12_BRAM_PORTA_DOUT),
        .BRAM_weight_2_0_en(axi_bram_ctrl_12_BRAM_PORTA_EN),
        .BRAM_weight_2_0_rst(axi_bram_ctrl_12_BRAM_PORTA_RST),
        .BRAM_weight_2_0_we(axi_bram_ctrl_12_BRAM_PORTA_WE),
        .BRAM_weight_2_1_addr(axi_bram_ctrl_13_BRAM_PORTA_ADDR),
        .BRAM_weight_2_1_clk(axi_bram_ctrl_13_BRAM_PORTA_CLK),
        .BRAM_weight_2_1_din(axi_bram_ctrl_13_BRAM_PORTA_DIN),
        .BRAM_weight_2_1_dout(axi_bram_ctrl_13_BRAM_PORTA_DOUT),
        .BRAM_weight_2_1_en(axi_bram_ctrl_13_BRAM_PORTA_EN),
        .BRAM_weight_2_1_rst(axi_bram_ctrl_13_BRAM_PORTA_RST),
        .BRAM_weight_2_1_we(axi_bram_ctrl_13_BRAM_PORTA_WE),
        .BRAM_weight_2_2_addr(axi_bram_ctrl_14_BRAM_PORTA_ADDR),
        .BRAM_weight_2_2_clk(axi_bram_ctrl_14_BRAM_PORTA_CLK),
        .BRAM_weight_2_2_din(axi_bram_ctrl_14_BRAM_PORTA_DIN),
        .BRAM_weight_2_2_dout(axi_bram_ctrl_14_BRAM_PORTA_DOUT),
        .BRAM_weight_2_2_en(axi_bram_ctrl_14_BRAM_PORTA_EN),
        .BRAM_weight_2_2_rst(axi_bram_ctrl_14_BRAM_PORTA_RST),
        .BRAM_weight_2_2_we(axi_bram_ctrl_14_BRAM_PORTA_WE),
        .BRAM_weight_2_3_addr(axi_bram_ctrl_15_BRAM_PORTA_ADDR),
        .BRAM_weight_2_3_clk(axi_bram_ctrl_15_BRAM_PORTA_CLK),
        .BRAM_weight_2_3_din(axi_bram_ctrl_15_BRAM_PORTA_DIN),
        .BRAM_weight_2_3_dout(axi_bram_ctrl_15_BRAM_PORTA_DOUT),
        .BRAM_weight_2_3_en(axi_bram_ctrl_15_BRAM_PORTA_EN),
        .BRAM_weight_2_3_rst(axi_bram_ctrl_15_BRAM_PORTA_RST),
        .BRAM_weight_2_3_we(axi_bram_ctrl_15_BRAM_PORTA_WE),
        .BRAM_weight_3_0_addr(axi_bram_ctrl_16_BRAM_PORTA_ADDR),
        .BRAM_weight_3_0_clk(axi_bram_ctrl_16_BRAM_PORTA_CLK),
        .BRAM_weight_3_0_din(axi_bram_ctrl_16_BRAM_PORTA_DIN),
        .BRAM_weight_3_0_dout(axi_bram_ctrl_16_BRAM_PORTA_DOUT),
        .BRAM_weight_3_0_en(axi_bram_ctrl_16_BRAM_PORTA_EN),
        .BRAM_weight_3_0_rst(axi_bram_ctrl_16_BRAM_PORTA_RST),
        .BRAM_weight_3_0_we(axi_bram_ctrl_16_BRAM_PORTA_WE),
        .BRAM_weight_3_1_addr(axi_bram_ctrl_17_BRAM_PORTA_ADDR),
        .BRAM_weight_3_1_clk(axi_bram_ctrl_17_BRAM_PORTA_CLK),
        .BRAM_weight_3_1_din(axi_bram_ctrl_17_BRAM_PORTA_DIN),
        .BRAM_weight_3_1_dout(axi_bram_ctrl_17_BRAM_PORTA_DOUT),
        .BRAM_weight_3_1_en(axi_bram_ctrl_17_BRAM_PORTA_EN),
        .BRAM_weight_3_1_rst(axi_bram_ctrl_17_BRAM_PORTA_RST),
        .BRAM_weight_3_1_we(axi_bram_ctrl_17_BRAM_PORTA_WE),
        .BRAM_weight_3_2_addr(axi_bram_ctrl_18_BRAM_PORTA_ADDR),
        .BRAM_weight_3_2_clk(axi_bram_ctrl_18_BRAM_PORTA_CLK),
        .BRAM_weight_3_2_din(axi_bram_ctrl_18_BRAM_PORTA_DIN),
        .BRAM_weight_3_2_dout(axi_bram_ctrl_18_BRAM_PORTA_DOUT),
        .BRAM_weight_3_2_en(axi_bram_ctrl_18_BRAM_PORTA_EN),
        .BRAM_weight_3_2_rst(axi_bram_ctrl_18_BRAM_PORTA_RST),
        .BRAM_weight_3_2_we(axi_bram_ctrl_18_BRAM_PORTA_WE),
        .BRAM_weight_3_3_addr(axi_bram_ctrl_19_BRAM_PORTA_ADDR),
        .BRAM_weight_3_3_clk(axi_bram_ctrl_19_BRAM_PORTA_CLK),
        .BRAM_weight_3_3_din(axi_bram_ctrl_19_BRAM_PORTA_DIN),
        .BRAM_weight_3_3_dout(axi_bram_ctrl_19_BRAM_PORTA_DOUT),
        .BRAM_weight_3_3_en(axi_bram_ctrl_19_BRAM_PORTA_EN),
        .BRAM_weight_3_3_rst(axi_bram_ctrl_19_BRAM_PORTA_RST),
        .BRAM_weight_3_3_we(axi_bram_ctrl_19_BRAM_PORTA_WE),
        .WxW_out(WxW_out_1),
        .channel_input_img(regs_file_0_channel_input_img),
        .clk(processing_system7_0_FCLK_CLK0),
        .end_core_out(Core_end_core_out),
        .no_channel_out(regs_file_0_no_channel_out),
        .rst(rst_1),
        .start_core_in(start_core_in_1),
        .stride(regs_file_0_stride),
        .weight_size_1_16(weight_size_1_16_1),
        .width_input_img(width_input_img_1));
  Multi_convo_core_axi_bram_ctrl_19_0 axi_bram_ctrl_img_0
       (.bram_addr_a(BRAM_img_addr_0_1),
        .bram_en_a(axi_bram_ctrl_20_bram_en_a),
        .bram_rddata_a(Core_BRAM_img_dout_0),
        .bram_rst_a(axi_bram_ctrl_20_bram_rst_a),
        .bram_we_a(BRAM_img_wen_0_1),
        .bram_wrdata_a(BRAM_img_din_0_1),
        .s_axi_aclk(processing_system7_0_FCLK_CLK0),
        .s_axi_araddr(smartconnect_0_M20_AXI_ARADDR),
        .s_axi_arburst(smartconnect_0_M20_AXI_ARBURST),
        .s_axi_arcache(smartconnect_0_M20_AXI_ARCACHE),
        .s_axi_aresetn(rst_ps7_0_100M_peripheral_aresetn),
        .s_axi_arlen(smartconnect_0_M20_AXI_ARLEN),
        .s_axi_arlock(smartconnect_0_M20_AXI_ARLOCK),
        .s_axi_arprot(smartconnect_0_M20_AXI_ARPROT),
        .s_axi_arready(smartconnect_0_M20_AXI_ARREADY),
        .s_axi_arsize(smartconnect_0_M20_AXI_ARSIZE),
        .s_axi_arvalid(smartconnect_0_M20_AXI_ARVALID),
        .s_axi_awaddr(smartconnect_0_M20_AXI_AWADDR),
        .s_axi_awburst(smartconnect_0_M20_AXI_AWBURST),
        .s_axi_awcache(smartconnect_0_M20_AXI_AWCACHE),
        .s_axi_awlen(smartconnect_0_M20_AXI_AWLEN),
        .s_axi_awlock(smartconnect_0_M20_AXI_AWLOCK),
        .s_axi_awprot(smartconnect_0_M20_AXI_AWPROT),
        .s_axi_awready(smartconnect_0_M20_AXI_AWREADY),
        .s_axi_awsize(smartconnect_0_M20_AXI_AWSIZE),
        .s_axi_awvalid(smartconnect_0_M20_AXI_AWVALID),
        .s_axi_bready(smartconnect_0_M20_AXI_BREADY),
        .s_axi_bresp(smartconnect_0_M20_AXI_BRESP),
        .s_axi_bvalid(smartconnect_0_M20_AXI_BVALID),
        .s_axi_rdata(smartconnect_0_M20_AXI_RDATA),
        .s_axi_rlast(smartconnect_0_M20_AXI_RLAST),
        .s_axi_rready(smartconnect_0_M20_AXI_RREADY),
        .s_axi_rresp(smartconnect_0_M20_AXI_RRESP),
        .s_axi_rvalid(smartconnect_0_M20_AXI_RVALID),
        .s_axi_wdata(smartconnect_0_M20_AXI_WDATA),
        .s_axi_wlast(smartconnect_0_M20_AXI_WLAST),
        .s_axi_wready(smartconnect_0_M20_AXI_WREADY),
        .s_axi_wstrb(smartconnect_0_M20_AXI_WSTRB),
        .s_axi_wvalid(smartconnect_0_M20_AXI_WVALID));
  Multi_convo_core_axi_bram_ctrl_20_0 axi_bram_ctrl_img_1
       (.bram_addr_a(axi_bram_ctrl_21_bram_addr_a),
        .bram_en_a(BRAM_img_en_1_1),
        .bram_rddata_a(Core_BRAM_img_dout_1),
        .bram_rst_a(BRAM_img_rst_1_1),
        .bram_we_a(BRAM_img_wen_1_1),
        .bram_wrdata_a(BRAM_img_din_1_1),
        .s_axi_aclk(processing_system7_0_FCLK_CLK0),
        .s_axi_araddr(smartconnect_0_M21_AXI_ARADDR),
        .s_axi_arburst(smartconnect_0_M21_AXI_ARBURST),
        .s_axi_arcache(smartconnect_0_M21_AXI_ARCACHE),
        .s_axi_aresetn(rst_ps7_0_100M_peripheral_aresetn),
        .s_axi_arlen(smartconnect_0_M21_AXI_ARLEN),
        .s_axi_arlock(smartconnect_0_M21_AXI_ARLOCK),
        .s_axi_arprot(smartconnect_0_M21_AXI_ARPROT),
        .s_axi_arready(smartconnect_0_M21_AXI_ARREADY),
        .s_axi_arsize(smartconnect_0_M21_AXI_ARSIZE),
        .s_axi_arvalid(smartconnect_0_M21_AXI_ARVALID),
        .s_axi_awaddr(smartconnect_0_M21_AXI_AWADDR),
        .s_axi_awburst(smartconnect_0_M21_AXI_AWBURST),
        .s_axi_awcache(smartconnect_0_M21_AXI_AWCACHE),
        .s_axi_awlen(smartconnect_0_M21_AXI_AWLEN),
        .s_axi_awlock(smartconnect_0_M21_AXI_AWLOCK),
        .s_axi_awprot(smartconnect_0_M21_AXI_AWPROT),
        .s_axi_awready(smartconnect_0_M21_AXI_AWREADY),
        .s_axi_awsize(smartconnect_0_M21_AXI_AWSIZE),
        .s_axi_awvalid(smartconnect_0_M21_AXI_AWVALID),
        .s_axi_bready(smartconnect_0_M21_AXI_BREADY),
        .s_axi_bresp(smartconnect_0_M21_AXI_BRESP),
        .s_axi_bvalid(smartconnect_0_M21_AXI_BVALID),
        .s_axi_rdata(smartconnect_0_M21_AXI_RDATA),
        .s_axi_rlast(smartconnect_0_M21_AXI_RLAST),
        .s_axi_rready(smartconnect_0_M21_AXI_RREADY),
        .s_axi_rresp(smartconnect_0_M21_AXI_RRESP),
        .s_axi_rvalid(smartconnect_0_M21_AXI_RVALID),
        .s_axi_wdata(smartconnect_0_M21_AXI_WDATA),
        .s_axi_wlast(smartconnect_0_M21_AXI_WLAST),
        .s_axi_wready(smartconnect_0_M21_AXI_WREADY),
        .s_axi_wstrb(smartconnect_0_M21_AXI_WSTRB),
        .s_axi_wvalid(smartconnect_0_M21_AXI_WVALID));
  Multi_convo_core_axi_bram_ctrl_21_0 axi_bram_ctrl_img_2
       (.bram_addr_a(axi_bram_ctrl_22_bram_addr_a),
        .bram_en_a(axi_bram_ctrl_22_bram_en_a),
        .bram_rddata_a(Core_BRAM_img_dout_2),
        .bram_rst_a(axi_bram_ctrl_22_bram_rst_a),
        .bram_we_a(axi_bram_ctrl_22_bram_we_a),
        .bram_wrdata_a(axi_bram_ctrl_22_bram_wrdata_a),
        .s_axi_aclk(processing_system7_0_FCLK_CLK0),
        .s_axi_araddr(smartconnect_0_M22_AXI_ARADDR),
        .s_axi_arburst(smartconnect_0_M22_AXI_ARBURST),
        .s_axi_arcache(smartconnect_0_M22_AXI_ARCACHE),
        .s_axi_aresetn(rst_ps7_0_100M_peripheral_aresetn),
        .s_axi_arlen(smartconnect_0_M22_AXI_ARLEN),
        .s_axi_arlock(smartconnect_0_M22_AXI_ARLOCK),
        .s_axi_arprot(smartconnect_0_M22_AXI_ARPROT),
        .s_axi_arready(smartconnect_0_M22_AXI_ARREADY),
        .s_axi_arsize(smartconnect_0_M22_AXI_ARSIZE),
        .s_axi_arvalid(smartconnect_0_M22_AXI_ARVALID),
        .s_axi_awaddr(smartconnect_0_M22_AXI_AWADDR),
        .s_axi_awburst(smartconnect_0_M22_AXI_AWBURST),
        .s_axi_awcache(smartconnect_0_M22_AXI_AWCACHE),
        .s_axi_awlen(smartconnect_0_M22_AXI_AWLEN),
        .s_axi_awlock(smartconnect_0_M22_AXI_AWLOCK),
        .s_axi_awprot(smartconnect_0_M22_AXI_AWPROT),
        .s_axi_awready(smartconnect_0_M22_AXI_AWREADY),
        .s_axi_awsize(smartconnect_0_M22_AXI_AWSIZE),
        .s_axi_awvalid(smartconnect_0_M22_AXI_AWVALID),
        .s_axi_bready(smartconnect_0_M22_AXI_BREADY),
        .s_axi_bresp(smartconnect_0_M22_AXI_BRESP),
        .s_axi_bvalid(smartconnect_0_M22_AXI_BVALID),
        .s_axi_rdata(smartconnect_0_M22_AXI_RDATA),
        .s_axi_rlast(smartconnect_0_M22_AXI_RLAST),
        .s_axi_rready(smartconnect_0_M22_AXI_RREADY),
        .s_axi_rresp(smartconnect_0_M22_AXI_RRESP),
        .s_axi_rvalid(smartconnect_0_M22_AXI_RVALID),
        .s_axi_wdata(smartconnect_0_M22_AXI_WDATA),
        .s_axi_wlast(smartconnect_0_M22_AXI_WLAST),
        .s_axi_wready(smartconnect_0_M22_AXI_WREADY),
        .s_axi_wstrb(smartconnect_0_M22_AXI_WSTRB),
        .s_axi_wvalid(smartconnect_0_M22_AXI_WVALID));
  Multi_convo_core_axi_bram_ctrl_22_0 axi_bram_ctrl_img_3
       (.bram_addr_a(axi_bram_ctrl_23_bram_addr_a),
        .bram_en_a(axi_bram_ctrl_23_bram_en_a),
        .bram_rddata_a(Core_BRAM_img_dout_3),
        .bram_rst_a(axi_bram_ctrl_23_bram_rst_a),
        .bram_we_a(axi_bram_ctrl_23_bram_we_a),
        .bram_wrdata_a(axi_bram_ctrl_23_bram_wrdata_a),
        .s_axi_aclk(processing_system7_0_FCLK_CLK0),
        .s_axi_araddr(smartconnect_0_M23_AXI_ARADDR),
        .s_axi_arburst(smartconnect_0_M23_AXI_ARBURST),
        .s_axi_arcache(smartconnect_0_M23_AXI_ARCACHE),
        .s_axi_aresetn(rst_ps7_0_100M_peripheral_aresetn),
        .s_axi_arlen(smartconnect_0_M23_AXI_ARLEN),
        .s_axi_arlock(smartconnect_0_M23_AXI_ARLOCK),
        .s_axi_arprot(smartconnect_0_M23_AXI_ARPROT),
        .s_axi_arready(smartconnect_0_M23_AXI_ARREADY),
        .s_axi_arsize(smartconnect_0_M23_AXI_ARSIZE),
        .s_axi_arvalid(smartconnect_0_M23_AXI_ARVALID),
        .s_axi_awaddr(smartconnect_0_M23_AXI_AWADDR),
        .s_axi_awburst(smartconnect_0_M23_AXI_AWBURST),
        .s_axi_awcache(smartconnect_0_M23_AXI_AWCACHE),
        .s_axi_awlen(smartconnect_0_M23_AXI_AWLEN),
        .s_axi_awlock(smartconnect_0_M23_AXI_AWLOCK),
        .s_axi_awprot(smartconnect_0_M23_AXI_AWPROT),
        .s_axi_awready(smartconnect_0_M23_AXI_AWREADY),
        .s_axi_awsize(smartconnect_0_M23_AXI_AWSIZE),
        .s_axi_awvalid(smartconnect_0_M23_AXI_AWVALID),
        .s_axi_bready(smartconnect_0_M23_AXI_BREADY),
        .s_axi_bresp(smartconnect_0_M23_AXI_BRESP),
        .s_axi_bvalid(smartconnect_0_M23_AXI_BVALID),
        .s_axi_rdata(smartconnect_0_M23_AXI_RDATA),
        .s_axi_rlast(smartconnect_0_M23_AXI_RLAST),
        .s_axi_rready(smartconnect_0_M23_AXI_RREADY),
        .s_axi_rresp(smartconnect_0_M23_AXI_RRESP),
        .s_axi_rvalid(smartconnect_0_M23_AXI_RVALID),
        .s_axi_wdata(smartconnect_0_M23_AXI_WDATA),
        .s_axi_wlast(smartconnect_0_M23_AXI_WLAST),
        .s_axi_wready(smartconnect_0_M23_AXI_WREADY),
        .s_axi_wstrb(smartconnect_0_M23_AXI_WSTRB),
        .s_axi_wvalid(smartconnect_0_M23_AXI_WVALID));
  Multi_convo_core_axi_bram_ctrl_0_0 axi_bram_ctrl_out_0
       (.bram_addr_a(BRAM_out_0_1_ADDR),
        .bram_clk_a(BRAM_out_0_1_CLK),
        .bram_en_a(BRAM_out_0_1_EN),
        .bram_rddata_a(BRAM_out_0_1_DOUT),
        .bram_rst_a(BRAM_out_0_1_RST),
        .bram_we_a(BRAM_out_0_1_WE),
        .bram_wrdata_a(BRAM_out_0_1_DIN),
        .s_axi_aclk(processing_system7_0_FCLK_CLK0),
        .s_axi_araddr(smartconnect_0_M00_AXI_ARADDR),
        .s_axi_arburst(smartconnect_0_M00_AXI_ARBURST),
        .s_axi_arcache(smartconnect_0_M00_AXI_ARCACHE),
        .s_axi_aresetn(rst_ps7_0_100M_peripheral_aresetn),
        .s_axi_arlen(smartconnect_0_M00_AXI_ARLEN),
        .s_axi_arlock(smartconnect_0_M00_AXI_ARLOCK),
        .s_axi_arprot(smartconnect_0_M00_AXI_ARPROT),
        .s_axi_arready(smartconnect_0_M00_AXI_ARREADY),
        .s_axi_arsize(smartconnect_0_M00_AXI_ARSIZE),
        .s_axi_arvalid(smartconnect_0_M00_AXI_ARVALID),
        .s_axi_awaddr(smartconnect_0_M00_AXI_AWADDR),
        .s_axi_awburst(smartconnect_0_M00_AXI_AWBURST),
        .s_axi_awcache(smartconnect_0_M00_AXI_AWCACHE),
        .s_axi_awlen(smartconnect_0_M00_AXI_AWLEN),
        .s_axi_awlock(smartconnect_0_M00_AXI_AWLOCK),
        .s_axi_awprot(smartconnect_0_M00_AXI_AWPROT),
        .s_axi_awready(smartconnect_0_M00_AXI_AWREADY),
        .s_axi_awsize(smartconnect_0_M00_AXI_AWSIZE),
        .s_axi_awvalid(smartconnect_0_M00_AXI_AWVALID),
        .s_axi_bready(smartconnect_0_M00_AXI_BREADY),
        .s_axi_bresp(smartconnect_0_M00_AXI_BRESP),
        .s_axi_bvalid(smartconnect_0_M00_AXI_BVALID),
        .s_axi_rdata(smartconnect_0_M00_AXI_RDATA),
        .s_axi_rlast(smartconnect_0_M00_AXI_RLAST),
        .s_axi_rready(smartconnect_0_M00_AXI_RREADY),
        .s_axi_rresp(smartconnect_0_M00_AXI_RRESP),
        .s_axi_rvalid(smartconnect_0_M00_AXI_RVALID),
        .s_axi_wdata(smartconnect_0_M00_AXI_WDATA),
        .s_axi_wlast(smartconnect_0_M00_AXI_WLAST),
        .s_axi_wready(smartconnect_0_M00_AXI_WREADY),
        .s_axi_wstrb(smartconnect_0_M00_AXI_WSTRB),
        .s_axi_wvalid(smartconnect_0_M00_AXI_WVALID));
  Multi_convo_core_axi_bram_ctrl_1_0 axi_bram_ctrl_out_1
       (.bram_addr_a(axi_bram_ctrl_1_BRAM_PORTA_ADDR),
        .bram_clk_a(axi_bram_ctrl_1_BRAM_PORTA_CLK),
        .bram_en_a(axi_bram_ctrl_1_BRAM_PORTA_EN),
        .bram_rddata_a(axi_bram_ctrl_1_BRAM_PORTA_DOUT),
        .bram_rst_a(axi_bram_ctrl_1_BRAM_PORTA_RST),
        .bram_we_a(axi_bram_ctrl_1_BRAM_PORTA_WE),
        .bram_wrdata_a(axi_bram_ctrl_1_BRAM_PORTA_DIN),
        .s_axi_aclk(processing_system7_0_FCLK_CLK0),
        .s_axi_araddr(smartconnect_0_M01_AXI_ARADDR),
        .s_axi_arburst(smartconnect_0_M01_AXI_ARBURST),
        .s_axi_arcache(smartconnect_0_M01_AXI_ARCACHE),
        .s_axi_aresetn(rst_ps7_0_100M_peripheral_aresetn),
        .s_axi_arlen(smartconnect_0_M01_AXI_ARLEN),
        .s_axi_arlock(smartconnect_0_M01_AXI_ARLOCK),
        .s_axi_arprot(smartconnect_0_M01_AXI_ARPROT),
        .s_axi_arready(smartconnect_0_M01_AXI_ARREADY),
        .s_axi_arsize(smartconnect_0_M01_AXI_ARSIZE),
        .s_axi_arvalid(smartconnect_0_M01_AXI_ARVALID),
        .s_axi_awaddr(smartconnect_0_M01_AXI_AWADDR),
        .s_axi_awburst(smartconnect_0_M01_AXI_AWBURST),
        .s_axi_awcache(smartconnect_0_M01_AXI_AWCACHE),
        .s_axi_awlen(smartconnect_0_M01_AXI_AWLEN),
        .s_axi_awlock(smartconnect_0_M01_AXI_AWLOCK),
        .s_axi_awprot(smartconnect_0_M01_AXI_AWPROT),
        .s_axi_awready(smartconnect_0_M01_AXI_AWREADY),
        .s_axi_awsize(smartconnect_0_M01_AXI_AWSIZE),
        .s_axi_awvalid(smartconnect_0_M01_AXI_AWVALID),
        .s_axi_bready(smartconnect_0_M01_AXI_BREADY),
        .s_axi_bresp(smartconnect_0_M01_AXI_BRESP),
        .s_axi_bvalid(smartconnect_0_M01_AXI_BVALID),
        .s_axi_rdata(smartconnect_0_M01_AXI_RDATA),
        .s_axi_rlast(smartconnect_0_M01_AXI_RLAST),
        .s_axi_rready(smartconnect_0_M01_AXI_RREADY),
        .s_axi_rresp(smartconnect_0_M01_AXI_RRESP),
        .s_axi_rvalid(smartconnect_0_M01_AXI_RVALID),
        .s_axi_wdata(smartconnect_0_M01_AXI_WDATA),
        .s_axi_wlast(smartconnect_0_M01_AXI_WLAST),
        .s_axi_wready(smartconnect_0_M01_AXI_WREADY),
        .s_axi_wstrb(smartconnect_0_M01_AXI_WSTRB),
        .s_axi_wvalid(smartconnect_0_M01_AXI_WVALID));
  Multi_convo_core_axi_bram_ctrl_1_2 axi_bram_ctrl_out_2
       (.bram_addr_a(axi_bram_ctrl_2_BRAM_PORTA_ADDR),
        .bram_clk_a(axi_bram_ctrl_2_BRAM_PORTA_CLK),
        .bram_en_a(axi_bram_ctrl_2_BRAM_PORTA_EN),
        .bram_rddata_a(axi_bram_ctrl_2_BRAM_PORTA_DOUT),
        .bram_rst_a(axi_bram_ctrl_2_BRAM_PORTA_RST),
        .bram_we_a(axi_bram_ctrl_2_BRAM_PORTA_WE),
        .bram_wrdata_a(axi_bram_ctrl_2_BRAM_PORTA_DIN),
        .s_axi_aclk(processing_system7_0_FCLK_CLK0),
        .s_axi_araddr(smartconnect_0_M02_AXI_ARADDR),
        .s_axi_arburst(smartconnect_0_M02_AXI_ARBURST),
        .s_axi_arcache(smartconnect_0_M02_AXI_ARCACHE),
        .s_axi_aresetn(rst_ps7_0_100M_peripheral_aresetn),
        .s_axi_arlen(smartconnect_0_M02_AXI_ARLEN),
        .s_axi_arlock(smartconnect_0_M02_AXI_ARLOCK),
        .s_axi_arprot(smartconnect_0_M02_AXI_ARPROT),
        .s_axi_arready(smartconnect_0_M02_AXI_ARREADY),
        .s_axi_arsize(smartconnect_0_M02_AXI_ARSIZE),
        .s_axi_arvalid(smartconnect_0_M02_AXI_ARVALID),
        .s_axi_awaddr(smartconnect_0_M02_AXI_AWADDR),
        .s_axi_awburst(smartconnect_0_M02_AXI_AWBURST),
        .s_axi_awcache(smartconnect_0_M02_AXI_AWCACHE),
        .s_axi_awlen(smartconnect_0_M02_AXI_AWLEN),
        .s_axi_awlock(smartconnect_0_M02_AXI_AWLOCK),
        .s_axi_awprot(smartconnect_0_M02_AXI_AWPROT),
        .s_axi_awready(smartconnect_0_M02_AXI_AWREADY),
        .s_axi_awsize(smartconnect_0_M02_AXI_AWSIZE),
        .s_axi_awvalid(smartconnect_0_M02_AXI_AWVALID),
        .s_axi_bready(smartconnect_0_M02_AXI_BREADY),
        .s_axi_bresp(smartconnect_0_M02_AXI_BRESP),
        .s_axi_bvalid(smartconnect_0_M02_AXI_BVALID),
        .s_axi_rdata(smartconnect_0_M02_AXI_RDATA),
        .s_axi_rlast(smartconnect_0_M02_AXI_RLAST),
        .s_axi_rready(smartconnect_0_M02_AXI_RREADY),
        .s_axi_rresp(smartconnect_0_M02_AXI_RRESP),
        .s_axi_rvalid(smartconnect_0_M02_AXI_RVALID),
        .s_axi_wdata(smartconnect_0_M02_AXI_WDATA),
        .s_axi_wlast(smartconnect_0_M02_AXI_WLAST),
        .s_axi_wready(smartconnect_0_M02_AXI_WREADY),
        .s_axi_wstrb(smartconnect_0_M02_AXI_WSTRB),
        .s_axi_wvalid(smartconnect_0_M02_AXI_WVALID));
  Multi_convo_core_axi_bram_ctrl_1_3 axi_bram_ctrl_out_3
       (.bram_addr_a(axi_bram_ctrl_3_BRAM_PORTA_ADDR),
        .bram_clk_a(axi_bram_ctrl_3_BRAM_PORTA_CLK),
        .bram_en_a(axi_bram_ctrl_3_BRAM_PORTA_EN),
        .bram_rddata_a(axi_bram_ctrl_3_BRAM_PORTA_DOUT),
        .bram_rst_a(axi_bram_ctrl_3_BRAM_PORTA_RST),
        .bram_we_a(axi_bram_ctrl_3_BRAM_PORTA_WE),
        .bram_wrdata_a(axi_bram_ctrl_3_BRAM_PORTA_DIN),
        .s_axi_aclk(processing_system7_0_FCLK_CLK0),
        .s_axi_araddr(smartconnect_0_M03_AXI_ARADDR),
        .s_axi_arburst(smartconnect_0_M03_AXI_ARBURST),
        .s_axi_arcache(smartconnect_0_M03_AXI_ARCACHE),
        .s_axi_aresetn(rst_ps7_0_100M_peripheral_aresetn),
        .s_axi_arlen(smartconnect_0_M03_AXI_ARLEN),
        .s_axi_arlock(smartconnect_0_M03_AXI_ARLOCK),
        .s_axi_arprot(smartconnect_0_M03_AXI_ARPROT),
        .s_axi_arready(smartconnect_0_M03_AXI_ARREADY),
        .s_axi_arsize(smartconnect_0_M03_AXI_ARSIZE),
        .s_axi_arvalid(smartconnect_0_M03_AXI_ARVALID),
        .s_axi_awaddr(smartconnect_0_M03_AXI_AWADDR),
        .s_axi_awburst(smartconnect_0_M03_AXI_AWBURST),
        .s_axi_awcache(smartconnect_0_M03_AXI_AWCACHE),
        .s_axi_awlen(smartconnect_0_M03_AXI_AWLEN),
        .s_axi_awlock(smartconnect_0_M03_AXI_AWLOCK),
        .s_axi_awprot(smartconnect_0_M03_AXI_AWPROT),
        .s_axi_awready(smartconnect_0_M03_AXI_AWREADY),
        .s_axi_awsize(smartconnect_0_M03_AXI_AWSIZE),
        .s_axi_awvalid(smartconnect_0_M03_AXI_AWVALID),
        .s_axi_bready(smartconnect_0_M03_AXI_BREADY),
        .s_axi_bresp(smartconnect_0_M03_AXI_BRESP),
        .s_axi_bvalid(smartconnect_0_M03_AXI_BVALID),
        .s_axi_rdata(smartconnect_0_M03_AXI_RDATA),
        .s_axi_rlast(smartconnect_0_M03_AXI_RLAST),
        .s_axi_rready(smartconnect_0_M03_AXI_RREADY),
        .s_axi_rresp(smartconnect_0_M03_AXI_RRESP),
        .s_axi_rvalid(smartconnect_0_M03_AXI_RVALID),
        .s_axi_wdata(smartconnect_0_M03_AXI_WDATA),
        .s_axi_wlast(smartconnect_0_M03_AXI_WLAST),
        .s_axi_wready(smartconnect_0_M03_AXI_WREADY),
        .s_axi_wstrb(smartconnect_0_M03_AXI_WSTRB),
        .s_axi_wvalid(smartconnect_0_M03_AXI_WVALID));
  Multi_convo_core_axi_bram_ctrl_3_1 axi_bram_ctrl_weight_0_0
       (.bram_addr_a(axi_bram_ctrl_4_BRAM_PORTA_ADDR),
        .bram_clk_a(axi_bram_ctrl_4_BRAM_PORTA_CLK),
        .bram_en_a(axi_bram_ctrl_4_BRAM_PORTA_EN),
        .bram_rddata_a(axi_bram_ctrl_4_BRAM_PORTA_DOUT),
        .bram_rst_a(axi_bram_ctrl_4_BRAM_PORTA_RST),
        .bram_we_a(axi_bram_ctrl_4_BRAM_PORTA_WE),
        .bram_wrdata_a(axi_bram_ctrl_4_BRAM_PORTA_DIN),
        .s_axi_aclk(processing_system7_0_FCLK_CLK0),
        .s_axi_araddr(smartconnect_0_M04_AXI_ARADDR),
        .s_axi_arburst(smartconnect_0_M04_AXI_ARBURST),
        .s_axi_arcache(smartconnect_0_M04_AXI_ARCACHE),
        .s_axi_aresetn(rst_ps7_0_100M_peripheral_aresetn),
        .s_axi_arlen(smartconnect_0_M04_AXI_ARLEN),
        .s_axi_arlock(smartconnect_0_M04_AXI_ARLOCK),
        .s_axi_arprot(smartconnect_0_M04_AXI_ARPROT),
        .s_axi_arready(smartconnect_0_M04_AXI_ARREADY),
        .s_axi_arsize(smartconnect_0_M04_AXI_ARSIZE),
        .s_axi_arvalid(smartconnect_0_M04_AXI_ARVALID),
        .s_axi_awaddr(smartconnect_0_M04_AXI_AWADDR),
        .s_axi_awburst(smartconnect_0_M04_AXI_AWBURST),
        .s_axi_awcache(smartconnect_0_M04_AXI_AWCACHE),
        .s_axi_awlen(smartconnect_0_M04_AXI_AWLEN),
        .s_axi_awlock(smartconnect_0_M04_AXI_AWLOCK),
        .s_axi_awprot(smartconnect_0_M04_AXI_AWPROT),
        .s_axi_awready(smartconnect_0_M04_AXI_AWREADY),
        .s_axi_awsize(smartconnect_0_M04_AXI_AWSIZE),
        .s_axi_awvalid(smartconnect_0_M04_AXI_AWVALID),
        .s_axi_bready(smartconnect_0_M04_AXI_BREADY),
        .s_axi_bresp(smartconnect_0_M04_AXI_BRESP),
        .s_axi_bvalid(smartconnect_0_M04_AXI_BVALID),
        .s_axi_rdata(smartconnect_0_M04_AXI_RDATA),
        .s_axi_rlast(smartconnect_0_M04_AXI_RLAST),
        .s_axi_rready(smartconnect_0_M04_AXI_RREADY),
        .s_axi_rresp(smartconnect_0_M04_AXI_RRESP),
        .s_axi_rvalid(smartconnect_0_M04_AXI_RVALID),
        .s_axi_wdata(smartconnect_0_M04_AXI_WDATA),
        .s_axi_wlast(smartconnect_0_M04_AXI_WLAST),
        .s_axi_wready(smartconnect_0_M04_AXI_WREADY),
        .s_axi_wstrb(smartconnect_0_M04_AXI_WSTRB),
        .s_axi_wvalid(smartconnect_0_M04_AXI_WVALID));
  Multi_convo_core_axi_bram_ctrl_3_2 axi_bram_ctrl_weight_0_1
       (.bram_addr_a(BRAM_weight_0_1_1_ADDR),
        .bram_clk_a(BRAM_weight_0_1_1_CLK),
        .bram_en_a(BRAM_weight_0_1_1_EN),
        .bram_rddata_a(BRAM_weight_0_1_1_DOUT),
        .bram_rst_a(BRAM_weight_0_1_1_RST),
        .bram_we_a(BRAM_weight_0_1_1_WE),
        .bram_wrdata_a(BRAM_weight_0_1_1_DIN),
        .s_axi_aclk(processing_system7_0_FCLK_CLK0),
        .s_axi_araddr(smartconnect_0_M05_AXI_ARADDR),
        .s_axi_arburst(smartconnect_0_M05_AXI_ARBURST),
        .s_axi_arcache(smartconnect_0_M05_AXI_ARCACHE),
        .s_axi_aresetn(rst_ps7_0_100M_peripheral_aresetn),
        .s_axi_arlen(smartconnect_0_M05_AXI_ARLEN),
        .s_axi_arlock(smartconnect_0_M05_AXI_ARLOCK),
        .s_axi_arprot(smartconnect_0_M05_AXI_ARPROT),
        .s_axi_arready(smartconnect_0_M05_AXI_ARREADY),
        .s_axi_arsize(smartconnect_0_M05_AXI_ARSIZE),
        .s_axi_arvalid(smartconnect_0_M05_AXI_ARVALID),
        .s_axi_awaddr(smartconnect_0_M05_AXI_AWADDR),
        .s_axi_awburst(smartconnect_0_M05_AXI_AWBURST),
        .s_axi_awcache(smartconnect_0_M05_AXI_AWCACHE),
        .s_axi_awlen(smartconnect_0_M05_AXI_AWLEN),
        .s_axi_awlock(smartconnect_0_M05_AXI_AWLOCK),
        .s_axi_awprot(smartconnect_0_M05_AXI_AWPROT),
        .s_axi_awready(smartconnect_0_M05_AXI_AWREADY),
        .s_axi_awsize(smartconnect_0_M05_AXI_AWSIZE),
        .s_axi_awvalid(smartconnect_0_M05_AXI_AWVALID),
        .s_axi_bready(smartconnect_0_M05_AXI_BREADY),
        .s_axi_bresp(smartconnect_0_M05_AXI_BRESP),
        .s_axi_bvalid(smartconnect_0_M05_AXI_BVALID),
        .s_axi_rdata(smartconnect_0_M05_AXI_RDATA),
        .s_axi_rlast(smartconnect_0_M05_AXI_RLAST),
        .s_axi_rready(smartconnect_0_M05_AXI_RREADY),
        .s_axi_rresp(smartconnect_0_M05_AXI_RRESP),
        .s_axi_rvalid(smartconnect_0_M05_AXI_RVALID),
        .s_axi_wdata(smartconnect_0_M05_AXI_WDATA),
        .s_axi_wlast(smartconnect_0_M05_AXI_WLAST),
        .s_axi_wready(smartconnect_0_M05_AXI_WREADY),
        .s_axi_wstrb(smartconnect_0_M05_AXI_WSTRB),
        .s_axi_wvalid(smartconnect_0_M05_AXI_WVALID));
  Multi_convo_core_axi_bram_ctrl_5_0 axi_bram_ctrl_weight_0_2
       (.bram_addr_a(BRAM_weight_0_2_1_ADDR),
        .bram_clk_a(BRAM_weight_0_2_1_CLK),
        .bram_en_a(BRAM_weight_0_2_1_EN),
        .bram_rddata_a(BRAM_weight_0_2_1_DOUT),
        .bram_rst_a(BRAM_weight_0_2_1_RST),
        .bram_we_a(BRAM_weight_0_2_1_WE),
        .bram_wrdata_a(BRAM_weight_0_2_1_DIN),
        .s_axi_aclk(processing_system7_0_FCLK_CLK0),
        .s_axi_araddr(smartconnect_0_M06_AXI_ARADDR),
        .s_axi_arburst(smartconnect_0_M06_AXI_ARBURST),
        .s_axi_arcache(smartconnect_0_M06_AXI_ARCACHE),
        .s_axi_aresetn(rst_ps7_0_100M_peripheral_aresetn),
        .s_axi_arlen(smartconnect_0_M06_AXI_ARLEN),
        .s_axi_arlock(smartconnect_0_M06_AXI_ARLOCK),
        .s_axi_arprot(smartconnect_0_M06_AXI_ARPROT),
        .s_axi_arready(smartconnect_0_M06_AXI_ARREADY),
        .s_axi_arsize(smartconnect_0_M06_AXI_ARSIZE),
        .s_axi_arvalid(smartconnect_0_M06_AXI_ARVALID),
        .s_axi_awaddr(smartconnect_0_M06_AXI_AWADDR),
        .s_axi_awburst(smartconnect_0_M06_AXI_AWBURST),
        .s_axi_awcache(smartconnect_0_M06_AXI_AWCACHE),
        .s_axi_awlen(smartconnect_0_M06_AXI_AWLEN),
        .s_axi_awlock(smartconnect_0_M06_AXI_AWLOCK),
        .s_axi_awprot(smartconnect_0_M06_AXI_AWPROT),
        .s_axi_awready(smartconnect_0_M06_AXI_AWREADY),
        .s_axi_awsize(smartconnect_0_M06_AXI_AWSIZE),
        .s_axi_awvalid(smartconnect_0_M06_AXI_AWVALID),
        .s_axi_bready(smartconnect_0_M06_AXI_BREADY),
        .s_axi_bresp(smartconnect_0_M06_AXI_BRESP),
        .s_axi_bvalid(smartconnect_0_M06_AXI_BVALID),
        .s_axi_rdata(smartconnect_0_M06_AXI_RDATA),
        .s_axi_rlast(smartconnect_0_M06_AXI_RLAST),
        .s_axi_rready(smartconnect_0_M06_AXI_RREADY),
        .s_axi_rresp(smartconnect_0_M06_AXI_RRESP),
        .s_axi_rvalid(smartconnect_0_M06_AXI_RVALID),
        .s_axi_wdata(smartconnect_0_M06_AXI_WDATA),
        .s_axi_wlast(smartconnect_0_M06_AXI_WLAST),
        .s_axi_wready(smartconnect_0_M06_AXI_WREADY),
        .s_axi_wstrb(smartconnect_0_M06_AXI_WSTRB),
        .s_axi_wvalid(smartconnect_0_M06_AXI_WVALID));
  Multi_convo_core_axi_bram_ctrl_6_0 axi_bram_ctrl_weight_0_3
       (.bram_addr_a(axi_bram_ctrl_7_BRAM_PORTA_ADDR),
        .bram_clk_a(axi_bram_ctrl_7_BRAM_PORTA_CLK),
        .bram_en_a(axi_bram_ctrl_7_BRAM_PORTA_EN),
        .bram_rddata_a(axi_bram_ctrl_7_BRAM_PORTA_DOUT),
        .bram_rst_a(axi_bram_ctrl_7_BRAM_PORTA_RST),
        .bram_we_a(axi_bram_ctrl_7_BRAM_PORTA_WE),
        .bram_wrdata_a(axi_bram_ctrl_7_BRAM_PORTA_DIN),
        .s_axi_aclk(processing_system7_0_FCLK_CLK0),
        .s_axi_araddr(smartconnect_0_M07_AXI_ARADDR),
        .s_axi_arburst(smartconnect_0_M07_AXI_ARBURST),
        .s_axi_arcache(smartconnect_0_M07_AXI_ARCACHE),
        .s_axi_aresetn(rst_ps7_0_100M_peripheral_aresetn),
        .s_axi_arlen(smartconnect_0_M07_AXI_ARLEN),
        .s_axi_arlock(smartconnect_0_M07_AXI_ARLOCK),
        .s_axi_arprot(smartconnect_0_M07_AXI_ARPROT),
        .s_axi_arready(smartconnect_0_M07_AXI_ARREADY),
        .s_axi_arsize(smartconnect_0_M07_AXI_ARSIZE),
        .s_axi_arvalid(smartconnect_0_M07_AXI_ARVALID),
        .s_axi_awaddr(smartconnect_0_M07_AXI_AWADDR),
        .s_axi_awburst(smartconnect_0_M07_AXI_AWBURST),
        .s_axi_awcache(smartconnect_0_M07_AXI_AWCACHE),
        .s_axi_awlen(smartconnect_0_M07_AXI_AWLEN),
        .s_axi_awlock(smartconnect_0_M07_AXI_AWLOCK),
        .s_axi_awprot(smartconnect_0_M07_AXI_AWPROT),
        .s_axi_awready(smartconnect_0_M07_AXI_AWREADY),
        .s_axi_awsize(smartconnect_0_M07_AXI_AWSIZE),
        .s_axi_awvalid(smartconnect_0_M07_AXI_AWVALID),
        .s_axi_bready(smartconnect_0_M07_AXI_BREADY),
        .s_axi_bresp(smartconnect_0_M07_AXI_BRESP),
        .s_axi_bvalid(smartconnect_0_M07_AXI_BVALID),
        .s_axi_rdata(smartconnect_0_M07_AXI_RDATA),
        .s_axi_rlast(smartconnect_0_M07_AXI_RLAST),
        .s_axi_rready(smartconnect_0_M07_AXI_RREADY),
        .s_axi_rresp(smartconnect_0_M07_AXI_RRESP),
        .s_axi_rvalid(smartconnect_0_M07_AXI_RVALID),
        .s_axi_wdata(smartconnect_0_M07_AXI_WDATA),
        .s_axi_wlast(smartconnect_0_M07_AXI_WLAST),
        .s_axi_wready(smartconnect_0_M07_AXI_WREADY),
        .s_axi_wstrb(smartconnect_0_M07_AXI_WSTRB),
        .s_axi_wvalid(smartconnect_0_M07_AXI_WVALID));
  Multi_convo_core_axi_bram_ctrl_7_0 axi_bram_ctrl_weight_1_0
       (.bram_addr_a(axi_bram_ctrl_8_BRAM_PORTA_ADDR),
        .bram_clk_a(axi_bram_ctrl_8_BRAM_PORTA_CLK),
        .bram_en_a(axi_bram_ctrl_8_BRAM_PORTA_EN),
        .bram_rddata_a(axi_bram_ctrl_8_BRAM_PORTA_DOUT),
        .bram_rst_a(axi_bram_ctrl_8_BRAM_PORTA_RST),
        .bram_we_a(axi_bram_ctrl_8_BRAM_PORTA_WE),
        .bram_wrdata_a(axi_bram_ctrl_8_BRAM_PORTA_DIN),
        .s_axi_aclk(processing_system7_0_FCLK_CLK0),
        .s_axi_araddr(smartconnect_0_M08_AXI_ARADDR),
        .s_axi_arburst(smartconnect_0_M08_AXI_ARBURST),
        .s_axi_arcache(smartconnect_0_M08_AXI_ARCACHE),
        .s_axi_aresetn(rst_ps7_0_100M_peripheral_aresetn),
        .s_axi_arlen(smartconnect_0_M08_AXI_ARLEN),
        .s_axi_arlock(smartconnect_0_M08_AXI_ARLOCK),
        .s_axi_arprot(smartconnect_0_M08_AXI_ARPROT),
        .s_axi_arready(smartconnect_0_M08_AXI_ARREADY),
        .s_axi_arsize(smartconnect_0_M08_AXI_ARSIZE),
        .s_axi_arvalid(smartconnect_0_M08_AXI_ARVALID),
        .s_axi_awaddr(smartconnect_0_M08_AXI_AWADDR),
        .s_axi_awburst(smartconnect_0_M08_AXI_AWBURST),
        .s_axi_awcache(smartconnect_0_M08_AXI_AWCACHE),
        .s_axi_awlen(smartconnect_0_M08_AXI_AWLEN),
        .s_axi_awlock(smartconnect_0_M08_AXI_AWLOCK),
        .s_axi_awprot(smartconnect_0_M08_AXI_AWPROT),
        .s_axi_awready(smartconnect_0_M08_AXI_AWREADY),
        .s_axi_awsize(smartconnect_0_M08_AXI_AWSIZE),
        .s_axi_awvalid(smartconnect_0_M08_AXI_AWVALID),
        .s_axi_bready(smartconnect_0_M08_AXI_BREADY),
        .s_axi_bresp(smartconnect_0_M08_AXI_BRESP),
        .s_axi_bvalid(smartconnect_0_M08_AXI_BVALID),
        .s_axi_rdata(smartconnect_0_M08_AXI_RDATA),
        .s_axi_rlast(smartconnect_0_M08_AXI_RLAST),
        .s_axi_rready(smartconnect_0_M08_AXI_RREADY),
        .s_axi_rresp(smartconnect_0_M08_AXI_RRESP),
        .s_axi_rvalid(smartconnect_0_M08_AXI_RVALID),
        .s_axi_wdata(smartconnect_0_M08_AXI_WDATA),
        .s_axi_wlast(smartconnect_0_M08_AXI_WLAST),
        .s_axi_wready(smartconnect_0_M08_AXI_WREADY),
        .s_axi_wstrb(smartconnect_0_M08_AXI_WSTRB),
        .s_axi_wvalid(smartconnect_0_M08_AXI_WVALID));
  Multi_convo_core_axi_bram_ctrl_7_1 axi_bram_ctrl_weight_1_1
       (.bram_addr_a(axi_bram_ctrl_9_BRAM_PORTA_ADDR),
        .bram_clk_a(axi_bram_ctrl_9_BRAM_PORTA_CLK),
        .bram_en_a(axi_bram_ctrl_9_BRAM_PORTA_EN),
        .bram_rddata_a(axi_bram_ctrl_9_BRAM_PORTA_DOUT),
        .bram_rst_a(axi_bram_ctrl_9_BRAM_PORTA_RST),
        .bram_we_a(axi_bram_ctrl_9_BRAM_PORTA_WE),
        .bram_wrdata_a(axi_bram_ctrl_9_BRAM_PORTA_DIN),
        .s_axi_aclk(processing_system7_0_FCLK_CLK0),
        .s_axi_araddr(smartconnect_0_M09_AXI_ARADDR),
        .s_axi_arburst(smartconnect_0_M09_AXI_ARBURST),
        .s_axi_arcache(smartconnect_0_M09_AXI_ARCACHE),
        .s_axi_aresetn(rst_ps7_0_100M_peripheral_aresetn),
        .s_axi_arlen(smartconnect_0_M09_AXI_ARLEN),
        .s_axi_arlock(smartconnect_0_M09_AXI_ARLOCK),
        .s_axi_arprot(smartconnect_0_M09_AXI_ARPROT),
        .s_axi_arready(smartconnect_0_M09_AXI_ARREADY),
        .s_axi_arsize(smartconnect_0_M09_AXI_ARSIZE),
        .s_axi_arvalid(smartconnect_0_M09_AXI_ARVALID),
        .s_axi_awaddr(smartconnect_0_M09_AXI_AWADDR),
        .s_axi_awburst(smartconnect_0_M09_AXI_AWBURST),
        .s_axi_awcache(smartconnect_0_M09_AXI_AWCACHE),
        .s_axi_awlen(smartconnect_0_M09_AXI_AWLEN),
        .s_axi_awlock(smartconnect_0_M09_AXI_AWLOCK),
        .s_axi_awprot(smartconnect_0_M09_AXI_AWPROT),
        .s_axi_awready(smartconnect_0_M09_AXI_AWREADY),
        .s_axi_awsize(smartconnect_0_M09_AXI_AWSIZE),
        .s_axi_awvalid(smartconnect_0_M09_AXI_AWVALID),
        .s_axi_bready(smartconnect_0_M09_AXI_BREADY),
        .s_axi_bresp(smartconnect_0_M09_AXI_BRESP),
        .s_axi_bvalid(smartconnect_0_M09_AXI_BVALID),
        .s_axi_rdata(smartconnect_0_M09_AXI_RDATA),
        .s_axi_rlast(smartconnect_0_M09_AXI_RLAST),
        .s_axi_rready(smartconnect_0_M09_AXI_RREADY),
        .s_axi_rresp(smartconnect_0_M09_AXI_RRESP),
        .s_axi_rvalid(smartconnect_0_M09_AXI_RVALID),
        .s_axi_wdata(smartconnect_0_M09_AXI_WDATA),
        .s_axi_wlast(smartconnect_0_M09_AXI_WLAST),
        .s_axi_wready(smartconnect_0_M09_AXI_WREADY),
        .s_axi_wstrb(smartconnect_0_M09_AXI_WSTRB),
        .s_axi_wvalid(smartconnect_0_M09_AXI_WVALID));
  Multi_convo_core_axi_bram_ctrl_7_2 axi_bram_ctrl_weight_1_2
       (.bram_addr_a(axi_bram_ctrl_10_BRAM_PORTA_ADDR),
        .bram_clk_a(axi_bram_ctrl_10_BRAM_PORTA_CLK),
        .bram_en_a(axi_bram_ctrl_10_BRAM_PORTA_EN),
        .bram_rddata_a(axi_bram_ctrl_10_BRAM_PORTA_DOUT),
        .bram_rst_a(axi_bram_ctrl_10_BRAM_PORTA_RST),
        .bram_we_a(axi_bram_ctrl_10_BRAM_PORTA_WE),
        .bram_wrdata_a(axi_bram_ctrl_10_BRAM_PORTA_DIN),
        .s_axi_aclk(processing_system7_0_FCLK_CLK0),
        .s_axi_araddr(smartconnect_0_M10_AXI_ARADDR),
        .s_axi_arburst(smartconnect_0_M10_AXI_ARBURST),
        .s_axi_arcache(smartconnect_0_M10_AXI_ARCACHE),
        .s_axi_aresetn(rst_ps7_0_100M_peripheral_aresetn),
        .s_axi_arlen(smartconnect_0_M10_AXI_ARLEN),
        .s_axi_arlock(smartconnect_0_M10_AXI_ARLOCK),
        .s_axi_arprot(smartconnect_0_M10_AXI_ARPROT),
        .s_axi_arready(smartconnect_0_M10_AXI_ARREADY),
        .s_axi_arsize(smartconnect_0_M10_AXI_ARSIZE),
        .s_axi_arvalid(smartconnect_0_M10_AXI_ARVALID),
        .s_axi_awaddr(smartconnect_0_M10_AXI_AWADDR),
        .s_axi_awburst(smartconnect_0_M10_AXI_AWBURST),
        .s_axi_awcache(smartconnect_0_M10_AXI_AWCACHE),
        .s_axi_awlen(smartconnect_0_M10_AXI_AWLEN),
        .s_axi_awlock(smartconnect_0_M10_AXI_AWLOCK),
        .s_axi_awprot(smartconnect_0_M10_AXI_AWPROT),
        .s_axi_awready(smartconnect_0_M10_AXI_AWREADY),
        .s_axi_awsize(smartconnect_0_M10_AXI_AWSIZE),
        .s_axi_awvalid(smartconnect_0_M10_AXI_AWVALID),
        .s_axi_bready(smartconnect_0_M10_AXI_BREADY),
        .s_axi_bresp(smartconnect_0_M10_AXI_BRESP),
        .s_axi_bvalid(smartconnect_0_M10_AXI_BVALID),
        .s_axi_rdata(smartconnect_0_M10_AXI_RDATA),
        .s_axi_rlast(smartconnect_0_M10_AXI_RLAST),
        .s_axi_rready(smartconnect_0_M10_AXI_RREADY),
        .s_axi_rresp(smartconnect_0_M10_AXI_RRESP),
        .s_axi_rvalid(smartconnect_0_M10_AXI_RVALID),
        .s_axi_wdata(smartconnect_0_M10_AXI_WDATA),
        .s_axi_wlast(smartconnect_0_M10_AXI_WLAST),
        .s_axi_wready(smartconnect_0_M10_AXI_WREADY),
        .s_axi_wstrb(smartconnect_0_M10_AXI_WSTRB),
        .s_axi_wvalid(smartconnect_0_M10_AXI_WVALID));
  Multi_convo_core_axi_bram_ctrl_7_3 axi_bram_ctrl_weight_1_3
       (.bram_addr_a(axi_bram_ctrl_11_BRAM_PORTA_ADDR),
        .bram_clk_a(axi_bram_ctrl_11_BRAM_PORTA_CLK),
        .bram_en_a(axi_bram_ctrl_11_BRAM_PORTA_EN),
        .bram_rddata_a(axi_bram_ctrl_11_BRAM_PORTA_DOUT),
        .bram_rst_a(axi_bram_ctrl_11_BRAM_PORTA_RST),
        .bram_we_a(axi_bram_ctrl_11_BRAM_PORTA_WE),
        .bram_wrdata_a(axi_bram_ctrl_11_BRAM_PORTA_DIN),
        .s_axi_aclk(processing_system7_0_FCLK_CLK0),
        .s_axi_araddr(smartconnect_0_M11_AXI_ARADDR),
        .s_axi_arburst(smartconnect_0_M11_AXI_ARBURST),
        .s_axi_arcache(smartconnect_0_M11_AXI_ARCACHE),
        .s_axi_aresetn(rst_ps7_0_100M_peripheral_aresetn),
        .s_axi_arlen(smartconnect_0_M11_AXI_ARLEN),
        .s_axi_arlock(smartconnect_0_M11_AXI_ARLOCK),
        .s_axi_arprot(smartconnect_0_M11_AXI_ARPROT),
        .s_axi_arready(smartconnect_0_M11_AXI_ARREADY),
        .s_axi_arsize(smartconnect_0_M11_AXI_ARSIZE),
        .s_axi_arvalid(smartconnect_0_M11_AXI_ARVALID),
        .s_axi_awaddr(smartconnect_0_M11_AXI_AWADDR),
        .s_axi_awburst(smartconnect_0_M11_AXI_AWBURST),
        .s_axi_awcache(smartconnect_0_M11_AXI_AWCACHE),
        .s_axi_awlen(smartconnect_0_M11_AXI_AWLEN),
        .s_axi_awlock(smartconnect_0_M11_AXI_AWLOCK),
        .s_axi_awprot(smartconnect_0_M11_AXI_AWPROT),
        .s_axi_awready(smartconnect_0_M11_AXI_AWREADY),
        .s_axi_awsize(smartconnect_0_M11_AXI_AWSIZE),
        .s_axi_awvalid(smartconnect_0_M11_AXI_AWVALID),
        .s_axi_bready(smartconnect_0_M11_AXI_BREADY),
        .s_axi_bresp(smartconnect_0_M11_AXI_BRESP),
        .s_axi_bvalid(smartconnect_0_M11_AXI_BVALID),
        .s_axi_rdata(smartconnect_0_M11_AXI_RDATA),
        .s_axi_rlast(smartconnect_0_M11_AXI_RLAST),
        .s_axi_rready(smartconnect_0_M11_AXI_RREADY),
        .s_axi_rresp(smartconnect_0_M11_AXI_RRESP),
        .s_axi_rvalid(smartconnect_0_M11_AXI_RVALID),
        .s_axi_wdata(smartconnect_0_M11_AXI_WDATA),
        .s_axi_wlast(smartconnect_0_M11_AXI_WLAST),
        .s_axi_wready(smartconnect_0_M11_AXI_WREADY),
        .s_axi_wstrb(smartconnect_0_M11_AXI_WSTRB),
        .s_axi_wvalid(smartconnect_0_M11_AXI_WVALID));
  Multi_convo_core_axi_bram_ctrl_11_0 axi_bram_ctrl_weight_2_0
       (.bram_addr_a(axi_bram_ctrl_12_BRAM_PORTA_ADDR),
        .bram_clk_a(axi_bram_ctrl_12_BRAM_PORTA_CLK),
        .bram_en_a(axi_bram_ctrl_12_BRAM_PORTA_EN),
        .bram_rddata_a(axi_bram_ctrl_12_BRAM_PORTA_DOUT),
        .bram_rst_a(axi_bram_ctrl_12_BRAM_PORTA_RST),
        .bram_we_a(axi_bram_ctrl_12_BRAM_PORTA_WE),
        .bram_wrdata_a(axi_bram_ctrl_12_BRAM_PORTA_DIN),
        .s_axi_aclk(processing_system7_0_FCLK_CLK0),
        .s_axi_araddr(smartconnect_0_M12_AXI_ARADDR),
        .s_axi_arburst(smartconnect_0_M12_AXI_ARBURST),
        .s_axi_arcache(smartconnect_0_M12_AXI_ARCACHE),
        .s_axi_aresetn(rst_ps7_0_100M_peripheral_aresetn),
        .s_axi_arlen(smartconnect_0_M12_AXI_ARLEN),
        .s_axi_arlock(smartconnect_0_M12_AXI_ARLOCK),
        .s_axi_arprot(smartconnect_0_M12_AXI_ARPROT),
        .s_axi_arready(smartconnect_0_M12_AXI_ARREADY),
        .s_axi_arsize(smartconnect_0_M12_AXI_ARSIZE),
        .s_axi_arvalid(smartconnect_0_M12_AXI_ARVALID),
        .s_axi_awaddr(smartconnect_0_M12_AXI_AWADDR),
        .s_axi_awburst(smartconnect_0_M12_AXI_AWBURST),
        .s_axi_awcache(smartconnect_0_M12_AXI_AWCACHE),
        .s_axi_awlen(smartconnect_0_M12_AXI_AWLEN),
        .s_axi_awlock(smartconnect_0_M12_AXI_AWLOCK),
        .s_axi_awprot(smartconnect_0_M12_AXI_AWPROT),
        .s_axi_awready(smartconnect_0_M12_AXI_AWREADY),
        .s_axi_awsize(smartconnect_0_M12_AXI_AWSIZE),
        .s_axi_awvalid(smartconnect_0_M12_AXI_AWVALID),
        .s_axi_bready(smartconnect_0_M12_AXI_BREADY),
        .s_axi_bresp(smartconnect_0_M12_AXI_BRESP),
        .s_axi_bvalid(smartconnect_0_M12_AXI_BVALID),
        .s_axi_rdata(smartconnect_0_M12_AXI_RDATA),
        .s_axi_rlast(smartconnect_0_M12_AXI_RLAST),
        .s_axi_rready(smartconnect_0_M12_AXI_RREADY),
        .s_axi_rresp(smartconnect_0_M12_AXI_RRESP),
        .s_axi_rvalid(smartconnect_0_M12_AXI_RVALID),
        .s_axi_wdata(smartconnect_0_M12_AXI_WDATA),
        .s_axi_wlast(smartconnect_0_M12_AXI_WLAST),
        .s_axi_wready(smartconnect_0_M12_AXI_WREADY),
        .s_axi_wstrb(smartconnect_0_M12_AXI_WSTRB),
        .s_axi_wvalid(smartconnect_0_M12_AXI_WVALID));
  Multi_convo_core_axi_bram_ctrl_11_1 axi_bram_ctrl_weight_2_1
       (.bram_addr_a(axi_bram_ctrl_13_BRAM_PORTA_ADDR),
        .bram_clk_a(axi_bram_ctrl_13_BRAM_PORTA_CLK),
        .bram_en_a(axi_bram_ctrl_13_BRAM_PORTA_EN),
        .bram_rddata_a(axi_bram_ctrl_13_BRAM_PORTA_DOUT),
        .bram_rst_a(axi_bram_ctrl_13_BRAM_PORTA_RST),
        .bram_we_a(axi_bram_ctrl_13_BRAM_PORTA_WE),
        .bram_wrdata_a(axi_bram_ctrl_13_BRAM_PORTA_DIN),
        .s_axi_aclk(processing_system7_0_FCLK_CLK0),
        .s_axi_araddr(smartconnect_0_M13_AXI_ARADDR),
        .s_axi_arburst(smartconnect_0_M13_AXI_ARBURST),
        .s_axi_arcache(smartconnect_0_M13_AXI_ARCACHE),
        .s_axi_aresetn(rst_ps7_0_100M_peripheral_aresetn),
        .s_axi_arlen(smartconnect_0_M13_AXI_ARLEN),
        .s_axi_arlock(smartconnect_0_M13_AXI_ARLOCK),
        .s_axi_arprot(smartconnect_0_M13_AXI_ARPROT),
        .s_axi_arready(smartconnect_0_M13_AXI_ARREADY),
        .s_axi_arsize(smartconnect_0_M13_AXI_ARSIZE),
        .s_axi_arvalid(smartconnect_0_M13_AXI_ARVALID),
        .s_axi_awaddr(smartconnect_0_M13_AXI_AWADDR),
        .s_axi_awburst(smartconnect_0_M13_AXI_AWBURST),
        .s_axi_awcache(smartconnect_0_M13_AXI_AWCACHE),
        .s_axi_awlen(smartconnect_0_M13_AXI_AWLEN),
        .s_axi_awlock(smartconnect_0_M13_AXI_AWLOCK),
        .s_axi_awprot(smartconnect_0_M13_AXI_AWPROT),
        .s_axi_awready(smartconnect_0_M13_AXI_AWREADY),
        .s_axi_awsize(smartconnect_0_M13_AXI_AWSIZE),
        .s_axi_awvalid(smartconnect_0_M13_AXI_AWVALID),
        .s_axi_bready(smartconnect_0_M13_AXI_BREADY),
        .s_axi_bresp(smartconnect_0_M13_AXI_BRESP),
        .s_axi_bvalid(smartconnect_0_M13_AXI_BVALID),
        .s_axi_rdata(smartconnect_0_M13_AXI_RDATA),
        .s_axi_rlast(smartconnect_0_M13_AXI_RLAST),
        .s_axi_rready(smartconnect_0_M13_AXI_RREADY),
        .s_axi_rresp(smartconnect_0_M13_AXI_RRESP),
        .s_axi_rvalid(smartconnect_0_M13_AXI_RVALID),
        .s_axi_wdata(smartconnect_0_M13_AXI_WDATA),
        .s_axi_wlast(smartconnect_0_M13_AXI_WLAST),
        .s_axi_wready(smartconnect_0_M13_AXI_WREADY),
        .s_axi_wstrb(smartconnect_0_M13_AXI_WSTRB),
        .s_axi_wvalid(smartconnect_0_M13_AXI_WVALID));
  Multi_convo_core_axi_bram_ctrl_11_2 axi_bram_ctrl_weight_2_2
       (.bram_addr_a(axi_bram_ctrl_14_BRAM_PORTA_ADDR),
        .bram_clk_a(axi_bram_ctrl_14_BRAM_PORTA_CLK),
        .bram_en_a(axi_bram_ctrl_14_BRAM_PORTA_EN),
        .bram_rddata_a(axi_bram_ctrl_14_BRAM_PORTA_DOUT),
        .bram_rst_a(axi_bram_ctrl_14_BRAM_PORTA_RST),
        .bram_we_a(axi_bram_ctrl_14_BRAM_PORTA_WE),
        .bram_wrdata_a(axi_bram_ctrl_14_BRAM_PORTA_DIN),
        .s_axi_aclk(processing_system7_0_FCLK_CLK0),
        .s_axi_araddr(smartconnect_0_M14_AXI_ARADDR),
        .s_axi_arburst(smartconnect_0_M14_AXI_ARBURST),
        .s_axi_arcache(smartconnect_0_M14_AXI_ARCACHE),
        .s_axi_aresetn(rst_ps7_0_100M_peripheral_aresetn),
        .s_axi_arlen(smartconnect_0_M14_AXI_ARLEN),
        .s_axi_arlock(smartconnect_0_M14_AXI_ARLOCK),
        .s_axi_arprot(smartconnect_0_M14_AXI_ARPROT),
        .s_axi_arready(smartconnect_0_M14_AXI_ARREADY),
        .s_axi_arsize(smartconnect_0_M14_AXI_ARSIZE),
        .s_axi_arvalid(smartconnect_0_M14_AXI_ARVALID),
        .s_axi_awaddr(smartconnect_0_M14_AXI_AWADDR),
        .s_axi_awburst(smartconnect_0_M14_AXI_AWBURST),
        .s_axi_awcache(smartconnect_0_M14_AXI_AWCACHE),
        .s_axi_awlen(smartconnect_0_M14_AXI_AWLEN),
        .s_axi_awlock(smartconnect_0_M14_AXI_AWLOCK),
        .s_axi_awprot(smartconnect_0_M14_AXI_AWPROT),
        .s_axi_awready(smartconnect_0_M14_AXI_AWREADY),
        .s_axi_awsize(smartconnect_0_M14_AXI_AWSIZE),
        .s_axi_awvalid(smartconnect_0_M14_AXI_AWVALID),
        .s_axi_bready(smartconnect_0_M14_AXI_BREADY),
        .s_axi_bresp(smartconnect_0_M14_AXI_BRESP),
        .s_axi_bvalid(smartconnect_0_M14_AXI_BVALID),
        .s_axi_rdata(smartconnect_0_M14_AXI_RDATA),
        .s_axi_rlast(smartconnect_0_M14_AXI_RLAST),
        .s_axi_rready(smartconnect_0_M14_AXI_RREADY),
        .s_axi_rresp(smartconnect_0_M14_AXI_RRESP),
        .s_axi_rvalid(smartconnect_0_M14_AXI_RVALID),
        .s_axi_wdata(smartconnect_0_M14_AXI_WDATA),
        .s_axi_wlast(smartconnect_0_M14_AXI_WLAST),
        .s_axi_wready(smartconnect_0_M14_AXI_WREADY),
        .s_axi_wstrb(smartconnect_0_M14_AXI_WSTRB),
        .s_axi_wvalid(smartconnect_0_M14_AXI_WVALID));
  Multi_convo_core_axi_bram_ctrl_11_3 axi_bram_ctrl_weight_2_3
       (.bram_addr_a(axi_bram_ctrl_15_BRAM_PORTA_ADDR),
        .bram_clk_a(axi_bram_ctrl_15_BRAM_PORTA_CLK),
        .bram_en_a(axi_bram_ctrl_15_BRAM_PORTA_EN),
        .bram_rddata_a(axi_bram_ctrl_15_BRAM_PORTA_DOUT),
        .bram_rst_a(axi_bram_ctrl_15_BRAM_PORTA_RST),
        .bram_we_a(axi_bram_ctrl_15_BRAM_PORTA_WE),
        .bram_wrdata_a(axi_bram_ctrl_15_BRAM_PORTA_DIN),
        .s_axi_aclk(processing_system7_0_FCLK_CLK0),
        .s_axi_araddr(smartconnect_0_M15_AXI_ARADDR),
        .s_axi_arburst(smartconnect_0_M15_AXI_ARBURST),
        .s_axi_arcache(smartconnect_0_M15_AXI_ARCACHE),
        .s_axi_aresetn(rst_ps7_0_100M_peripheral_aresetn),
        .s_axi_arlen(smartconnect_0_M15_AXI_ARLEN),
        .s_axi_arlock(smartconnect_0_M15_AXI_ARLOCK),
        .s_axi_arprot(smartconnect_0_M15_AXI_ARPROT),
        .s_axi_arready(smartconnect_0_M15_AXI_ARREADY),
        .s_axi_arsize(smartconnect_0_M15_AXI_ARSIZE),
        .s_axi_arvalid(smartconnect_0_M15_AXI_ARVALID),
        .s_axi_awaddr(smartconnect_0_M15_AXI_AWADDR),
        .s_axi_awburst(smartconnect_0_M15_AXI_AWBURST),
        .s_axi_awcache(smartconnect_0_M15_AXI_AWCACHE),
        .s_axi_awlen(smartconnect_0_M15_AXI_AWLEN),
        .s_axi_awlock(smartconnect_0_M15_AXI_AWLOCK),
        .s_axi_awprot(smartconnect_0_M15_AXI_AWPROT),
        .s_axi_awready(smartconnect_0_M15_AXI_AWREADY),
        .s_axi_awsize(smartconnect_0_M15_AXI_AWSIZE),
        .s_axi_awvalid(smartconnect_0_M15_AXI_AWVALID),
        .s_axi_bready(smartconnect_0_M15_AXI_BREADY),
        .s_axi_bresp(smartconnect_0_M15_AXI_BRESP),
        .s_axi_bvalid(smartconnect_0_M15_AXI_BVALID),
        .s_axi_rdata(smartconnect_0_M15_AXI_RDATA),
        .s_axi_rlast(smartconnect_0_M15_AXI_RLAST),
        .s_axi_rready(smartconnect_0_M15_AXI_RREADY),
        .s_axi_rresp(smartconnect_0_M15_AXI_RRESP),
        .s_axi_rvalid(smartconnect_0_M15_AXI_RVALID),
        .s_axi_wdata(smartconnect_0_M15_AXI_WDATA),
        .s_axi_wlast(smartconnect_0_M15_AXI_WLAST),
        .s_axi_wready(smartconnect_0_M15_AXI_WREADY),
        .s_axi_wstrb(smartconnect_0_M15_AXI_WSTRB),
        .s_axi_wvalid(smartconnect_0_M15_AXI_WVALID));
  Multi_convo_core_axi_bram_ctrl_15_0 axi_bram_ctrl_weight_3_0
       (.bram_addr_a(axi_bram_ctrl_16_BRAM_PORTA_ADDR),
        .bram_clk_a(axi_bram_ctrl_16_BRAM_PORTA_CLK),
        .bram_en_a(axi_bram_ctrl_16_BRAM_PORTA_EN),
        .bram_rddata_a(axi_bram_ctrl_16_BRAM_PORTA_DOUT),
        .bram_rst_a(axi_bram_ctrl_16_BRAM_PORTA_RST),
        .bram_we_a(axi_bram_ctrl_16_BRAM_PORTA_WE),
        .bram_wrdata_a(axi_bram_ctrl_16_BRAM_PORTA_DIN),
        .s_axi_aclk(processing_system7_0_FCLK_CLK0),
        .s_axi_araddr(smartconnect_0_M16_AXI_ARADDR),
        .s_axi_arburst(smartconnect_0_M16_AXI_ARBURST),
        .s_axi_arcache(smartconnect_0_M16_AXI_ARCACHE),
        .s_axi_aresetn(rst_ps7_0_100M_peripheral_aresetn),
        .s_axi_arlen(smartconnect_0_M16_AXI_ARLEN),
        .s_axi_arlock(smartconnect_0_M16_AXI_ARLOCK),
        .s_axi_arprot(smartconnect_0_M16_AXI_ARPROT),
        .s_axi_arready(smartconnect_0_M16_AXI_ARREADY),
        .s_axi_arsize(smartconnect_0_M16_AXI_ARSIZE),
        .s_axi_arvalid(smartconnect_0_M16_AXI_ARVALID),
        .s_axi_awaddr(smartconnect_0_M16_AXI_AWADDR),
        .s_axi_awburst(smartconnect_0_M16_AXI_AWBURST),
        .s_axi_awcache(smartconnect_0_M16_AXI_AWCACHE),
        .s_axi_awlen(smartconnect_0_M16_AXI_AWLEN),
        .s_axi_awlock(smartconnect_0_M16_AXI_AWLOCK),
        .s_axi_awprot(smartconnect_0_M16_AXI_AWPROT),
        .s_axi_awready(smartconnect_0_M16_AXI_AWREADY),
        .s_axi_awsize(smartconnect_0_M16_AXI_AWSIZE),
        .s_axi_awvalid(smartconnect_0_M16_AXI_AWVALID),
        .s_axi_bready(smartconnect_0_M16_AXI_BREADY),
        .s_axi_bresp(smartconnect_0_M16_AXI_BRESP),
        .s_axi_bvalid(smartconnect_0_M16_AXI_BVALID),
        .s_axi_rdata(smartconnect_0_M16_AXI_RDATA),
        .s_axi_rlast(smartconnect_0_M16_AXI_RLAST),
        .s_axi_rready(smartconnect_0_M16_AXI_RREADY),
        .s_axi_rresp(smartconnect_0_M16_AXI_RRESP),
        .s_axi_rvalid(smartconnect_0_M16_AXI_RVALID),
        .s_axi_wdata(smartconnect_0_M16_AXI_WDATA),
        .s_axi_wlast(smartconnect_0_M16_AXI_WLAST),
        .s_axi_wready(smartconnect_0_M16_AXI_WREADY),
        .s_axi_wstrb(smartconnect_0_M16_AXI_WSTRB),
        .s_axi_wvalid(smartconnect_0_M16_AXI_WVALID));
  Multi_convo_core_axi_bram_ctrl_15_1 axi_bram_ctrl_weight_3_1
       (.bram_addr_a(axi_bram_ctrl_17_BRAM_PORTA_ADDR),
        .bram_clk_a(axi_bram_ctrl_17_BRAM_PORTA_CLK),
        .bram_en_a(axi_bram_ctrl_17_BRAM_PORTA_EN),
        .bram_rddata_a(axi_bram_ctrl_17_BRAM_PORTA_DOUT),
        .bram_rst_a(axi_bram_ctrl_17_BRAM_PORTA_RST),
        .bram_we_a(axi_bram_ctrl_17_BRAM_PORTA_WE),
        .bram_wrdata_a(axi_bram_ctrl_17_BRAM_PORTA_DIN),
        .s_axi_aclk(processing_system7_0_FCLK_CLK0),
        .s_axi_araddr(smartconnect_0_M17_AXI_ARADDR),
        .s_axi_arburst(smartconnect_0_M17_AXI_ARBURST),
        .s_axi_arcache(smartconnect_0_M17_AXI_ARCACHE),
        .s_axi_aresetn(rst_ps7_0_100M_peripheral_aresetn),
        .s_axi_arlen(smartconnect_0_M17_AXI_ARLEN),
        .s_axi_arlock(smartconnect_0_M17_AXI_ARLOCK),
        .s_axi_arprot(smartconnect_0_M17_AXI_ARPROT),
        .s_axi_arready(smartconnect_0_M17_AXI_ARREADY),
        .s_axi_arsize(smartconnect_0_M17_AXI_ARSIZE),
        .s_axi_arvalid(smartconnect_0_M17_AXI_ARVALID),
        .s_axi_awaddr(smartconnect_0_M17_AXI_AWADDR),
        .s_axi_awburst(smartconnect_0_M17_AXI_AWBURST),
        .s_axi_awcache(smartconnect_0_M17_AXI_AWCACHE),
        .s_axi_awlen(smartconnect_0_M17_AXI_AWLEN),
        .s_axi_awlock(smartconnect_0_M17_AXI_AWLOCK),
        .s_axi_awprot(smartconnect_0_M17_AXI_AWPROT),
        .s_axi_awready(smartconnect_0_M17_AXI_AWREADY),
        .s_axi_awsize(smartconnect_0_M17_AXI_AWSIZE),
        .s_axi_awvalid(smartconnect_0_M17_AXI_AWVALID),
        .s_axi_bready(smartconnect_0_M17_AXI_BREADY),
        .s_axi_bresp(smartconnect_0_M17_AXI_BRESP),
        .s_axi_bvalid(smartconnect_0_M17_AXI_BVALID),
        .s_axi_rdata(smartconnect_0_M17_AXI_RDATA),
        .s_axi_rlast(smartconnect_0_M17_AXI_RLAST),
        .s_axi_rready(smartconnect_0_M17_AXI_RREADY),
        .s_axi_rresp(smartconnect_0_M17_AXI_RRESP),
        .s_axi_rvalid(smartconnect_0_M17_AXI_RVALID),
        .s_axi_wdata(smartconnect_0_M17_AXI_WDATA),
        .s_axi_wlast(smartconnect_0_M17_AXI_WLAST),
        .s_axi_wready(smartconnect_0_M17_AXI_WREADY),
        .s_axi_wstrb(smartconnect_0_M17_AXI_WSTRB),
        .s_axi_wvalid(smartconnect_0_M17_AXI_WVALID));
  Multi_convo_core_axi_bram_ctrl_15_2 axi_bram_ctrl_weight_3_2
       (.bram_addr_a(axi_bram_ctrl_18_BRAM_PORTA_ADDR),
        .bram_clk_a(axi_bram_ctrl_18_BRAM_PORTA_CLK),
        .bram_en_a(axi_bram_ctrl_18_BRAM_PORTA_EN),
        .bram_rddata_a(axi_bram_ctrl_18_BRAM_PORTA_DOUT),
        .bram_rst_a(axi_bram_ctrl_18_BRAM_PORTA_RST),
        .bram_we_a(axi_bram_ctrl_18_BRAM_PORTA_WE),
        .bram_wrdata_a(axi_bram_ctrl_18_BRAM_PORTA_DIN),
        .s_axi_aclk(processing_system7_0_FCLK_CLK0),
        .s_axi_araddr(smartconnect_0_M18_AXI_ARADDR),
        .s_axi_arburst(smartconnect_0_M18_AXI_ARBURST),
        .s_axi_arcache(smartconnect_0_M18_AXI_ARCACHE),
        .s_axi_aresetn(rst_ps7_0_100M_peripheral_aresetn),
        .s_axi_arlen(smartconnect_0_M18_AXI_ARLEN),
        .s_axi_arlock(smartconnect_0_M18_AXI_ARLOCK),
        .s_axi_arprot(smartconnect_0_M18_AXI_ARPROT),
        .s_axi_arready(smartconnect_0_M18_AXI_ARREADY),
        .s_axi_arsize(smartconnect_0_M18_AXI_ARSIZE),
        .s_axi_arvalid(smartconnect_0_M18_AXI_ARVALID),
        .s_axi_awaddr(smartconnect_0_M18_AXI_AWADDR),
        .s_axi_awburst(smartconnect_0_M18_AXI_AWBURST),
        .s_axi_awcache(smartconnect_0_M18_AXI_AWCACHE),
        .s_axi_awlen(smartconnect_0_M18_AXI_AWLEN),
        .s_axi_awlock(smartconnect_0_M18_AXI_AWLOCK),
        .s_axi_awprot(smartconnect_0_M18_AXI_AWPROT),
        .s_axi_awready(smartconnect_0_M18_AXI_AWREADY),
        .s_axi_awsize(smartconnect_0_M18_AXI_AWSIZE),
        .s_axi_awvalid(smartconnect_0_M18_AXI_AWVALID),
        .s_axi_bready(smartconnect_0_M18_AXI_BREADY),
        .s_axi_bresp(smartconnect_0_M18_AXI_BRESP),
        .s_axi_bvalid(smartconnect_0_M18_AXI_BVALID),
        .s_axi_rdata(smartconnect_0_M18_AXI_RDATA),
        .s_axi_rlast(smartconnect_0_M18_AXI_RLAST),
        .s_axi_rready(smartconnect_0_M18_AXI_RREADY),
        .s_axi_rresp(smartconnect_0_M18_AXI_RRESP),
        .s_axi_rvalid(smartconnect_0_M18_AXI_RVALID),
        .s_axi_wdata(smartconnect_0_M18_AXI_WDATA),
        .s_axi_wlast(smartconnect_0_M18_AXI_WLAST),
        .s_axi_wready(smartconnect_0_M18_AXI_WREADY),
        .s_axi_wstrb(smartconnect_0_M18_AXI_WSTRB),
        .s_axi_wvalid(smartconnect_0_M18_AXI_WVALID));
  Multi_convo_core_axi_bram_ctrl_15_3 axi_bram_ctrl_weight_3_3
       (.bram_addr_a(axi_bram_ctrl_19_BRAM_PORTA_ADDR),
        .bram_clk_a(axi_bram_ctrl_19_BRAM_PORTA_CLK),
        .bram_en_a(axi_bram_ctrl_19_BRAM_PORTA_EN),
        .bram_rddata_a(axi_bram_ctrl_19_BRAM_PORTA_DOUT),
        .bram_rst_a(axi_bram_ctrl_19_BRAM_PORTA_RST),
        .bram_we_a(axi_bram_ctrl_19_BRAM_PORTA_WE),
        .bram_wrdata_a(axi_bram_ctrl_19_BRAM_PORTA_DIN),
        .s_axi_aclk(processing_system7_0_FCLK_CLK0),
        .s_axi_araddr(smartconnect_0_M19_AXI_ARADDR),
        .s_axi_arburst(smartconnect_0_M19_AXI_ARBURST),
        .s_axi_arcache(smartconnect_0_M19_AXI_ARCACHE),
        .s_axi_aresetn(rst_ps7_0_100M_peripheral_aresetn),
        .s_axi_arlen(smartconnect_0_M19_AXI_ARLEN),
        .s_axi_arlock(smartconnect_0_M19_AXI_ARLOCK),
        .s_axi_arprot(smartconnect_0_M19_AXI_ARPROT),
        .s_axi_arready(smartconnect_0_M19_AXI_ARREADY),
        .s_axi_arsize(smartconnect_0_M19_AXI_ARSIZE),
        .s_axi_arvalid(smartconnect_0_M19_AXI_ARVALID),
        .s_axi_awaddr(smartconnect_0_M19_AXI_AWADDR),
        .s_axi_awburst(smartconnect_0_M19_AXI_AWBURST),
        .s_axi_awcache(smartconnect_0_M19_AXI_AWCACHE),
        .s_axi_awlen(smartconnect_0_M19_AXI_AWLEN),
        .s_axi_awlock(smartconnect_0_M19_AXI_AWLOCK),
        .s_axi_awprot(smartconnect_0_M19_AXI_AWPROT),
        .s_axi_awready(smartconnect_0_M19_AXI_AWREADY),
        .s_axi_awsize(smartconnect_0_M19_AXI_AWSIZE),
        .s_axi_awvalid(smartconnect_0_M19_AXI_AWVALID),
        .s_axi_bready(smartconnect_0_M19_AXI_BREADY),
        .s_axi_bresp(smartconnect_0_M19_AXI_BRESP),
        .s_axi_bvalid(smartconnect_0_M19_AXI_BVALID),
        .s_axi_rdata(smartconnect_0_M19_AXI_RDATA),
        .s_axi_rlast(smartconnect_0_M19_AXI_RLAST),
        .s_axi_rready(smartconnect_0_M19_AXI_RREADY),
        .s_axi_rresp(smartconnect_0_M19_AXI_RRESP),
        .s_axi_rvalid(smartconnect_0_M19_AXI_RVALID),
        .s_axi_wdata(smartconnect_0_M19_AXI_WDATA),
        .s_axi_wlast(smartconnect_0_M19_AXI_WLAST),
        .s_axi_wready(smartconnect_0_M19_AXI_WREADY),
        .s_axi_wstrb(smartconnect_0_M19_AXI_WSTRB),
        .s_axi_wvalid(smartconnect_0_M19_AXI_WVALID));
  Multi_convo_core_axi_cdma_0_0 axi_cdma_0
       (.m_axi_aclk(processing_system7_0_FCLK_CLK0),
        .m_axi_araddr(axi_cdma_0_M_AXI_ARADDR),
        .m_axi_arburst(axi_cdma_0_M_AXI_ARBURST),
        .m_axi_arcache(axi_cdma_0_M_AXI_ARCACHE),
        .m_axi_arlen(axi_cdma_0_M_AXI_ARLEN),
        .m_axi_arprot(axi_cdma_0_M_AXI_ARPROT),
        .m_axi_arready(axi_cdma_0_M_AXI_ARREADY),
        .m_axi_arsize(axi_cdma_0_M_AXI_ARSIZE),
        .m_axi_arvalid(axi_cdma_0_M_AXI_ARVALID),
        .m_axi_awaddr(axi_cdma_0_M_AXI_AWADDR),
        .m_axi_awburst(axi_cdma_0_M_AXI_AWBURST),
        .m_axi_awcache(axi_cdma_0_M_AXI_AWCACHE),
        .m_axi_awlen(axi_cdma_0_M_AXI_AWLEN),
        .m_axi_awprot(axi_cdma_0_M_AXI_AWPROT),
        .m_axi_awready(axi_cdma_0_M_AXI_AWREADY),
        .m_axi_awsize(axi_cdma_0_M_AXI_AWSIZE),
        .m_axi_awvalid(axi_cdma_0_M_AXI_AWVALID),
        .m_axi_bready(axi_cdma_0_M_AXI_BREADY),
        .m_axi_bresp(axi_cdma_0_M_AXI_BRESP),
        .m_axi_bvalid(axi_cdma_0_M_AXI_BVALID),
        .m_axi_rdata(axi_cdma_0_M_AXI_RDATA),
        .m_axi_rlast(axi_cdma_0_M_AXI_RLAST),
        .m_axi_rready(axi_cdma_0_M_AXI_RREADY),
        .m_axi_rresp(axi_cdma_0_M_AXI_RRESP),
        .m_axi_rvalid(axi_cdma_0_M_AXI_RVALID),
        .m_axi_wdata(axi_cdma_0_M_AXI_WDATA),
        .m_axi_wlast(axi_cdma_0_M_AXI_WLAST),
        .m_axi_wready(axi_cdma_0_M_AXI_WREADY),
        .m_axi_wstrb(axi_cdma_0_M_AXI_WSTRB),
        .m_axi_wvalid(axi_cdma_0_M_AXI_WVALID),
        .s_axi_lite_aclk(processing_system7_0_FCLK_CLK0),
        .s_axi_lite_araddr(ps7_0_axi_periph_M00_AXI_ARADDR[5:0]),
        .s_axi_lite_aresetn(rst_ps7_0_100M_peripheral_aresetn),
        .s_axi_lite_arready(ps7_0_axi_periph_M00_AXI_ARREADY),
        .s_axi_lite_arvalid(ps7_0_axi_periph_M00_AXI_ARVALID),
        .s_axi_lite_awaddr(ps7_0_axi_periph_M00_AXI_AWADDR[5:0]),
        .s_axi_lite_awready(ps7_0_axi_periph_M00_AXI_AWREADY),
        .s_axi_lite_awvalid(ps7_0_axi_periph_M00_AXI_AWVALID),
        .s_axi_lite_bready(ps7_0_axi_periph_M00_AXI_BREADY),
        .s_axi_lite_bresp(ps7_0_axi_periph_M00_AXI_BRESP),
        .s_axi_lite_bvalid(ps7_0_axi_periph_M00_AXI_BVALID),
        .s_axi_lite_rdata(ps7_0_axi_periph_M00_AXI_RDATA),
        .s_axi_lite_rready(ps7_0_axi_periph_M00_AXI_RREADY),
        .s_axi_lite_rresp(ps7_0_axi_periph_M00_AXI_RRESP),
        .s_axi_lite_rvalid(ps7_0_axi_periph_M00_AXI_RVALID),
        .s_axi_lite_wdata(ps7_0_axi_periph_M00_AXI_WDATA),
        .s_axi_lite_wready(ps7_0_axi_periph_M00_AXI_WREADY),
        .s_axi_lite_wvalid(ps7_0_axi_periph_M00_AXI_WVALID));
  Multi_convo_core_processing_system7_0_0 processing_system7_0
       (.DDR_Addr(DDR_addr[14:0]),
        .DDR_BankAddr(DDR_ba[2:0]),
        .DDR_CAS_n(DDR_cas_n),
        .DDR_CKE(DDR_cke),
        .DDR_CS_n(DDR_cs_n),
        .DDR_Clk(DDR_ck_p),
        .DDR_Clk_n(DDR_ck_n),
        .DDR_DM(DDR_dm[3:0]),
        .DDR_DQ(DDR_dq[31:0]),
        .DDR_DQS(DDR_dqs_p[3:0]),
        .DDR_DQS_n(DDR_dqs_n[3:0]),
        .DDR_DRSTB(DDR_reset_n),
        .DDR_ODT(DDR_odt),
        .DDR_RAS_n(DDR_ras_n),
        .DDR_VRN(FIXED_IO_ddr_vrn),
        .DDR_VRP(FIXED_IO_ddr_vrp),
        .DDR_WEB(DDR_we_n),
        .FCLK_CLK0(processing_system7_0_FCLK_CLK0),
        .FCLK_RESET0_N(processing_system7_0_FCLK_RESET0_N),
        .MIO(FIXED_IO_mio[53:0]),
        .M_AXI_GP0_ACLK(processing_system7_0_FCLK_CLK0),
        .M_AXI_GP0_ARADDR(processing_system7_0_M_AXI_GP0_ARADDR),
        .M_AXI_GP0_ARBURST(processing_system7_0_M_AXI_GP0_ARBURST),
        .M_AXI_GP0_ARCACHE(processing_system7_0_M_AXI_GP0_ARCACHE),
        .M_AXI_GP0_ARID(processing_system7_0_M_AXI_GP0_ARID),
        .M_AXI_GP0_ARLEN(processing_system7_0_M_AXI_GP0_ARLEN),
        .M_AXI_GP0_ARLOCK(processing_system7_0_M_AXI_GP0_ARLOCK),
        .M_AXI_GP0_ARPROT(processing_system7_0_M_AXI_GP0_ARPROT),
        .M_AXI_GP0_ARQOS(processing_system7_0_M_AXI_GP0_ARQOS),
        .M_AXI_GP0_ARREADY(processing_system7_0_M_AXI_GP0_ARREADY),
        .M_AXI_GP0_ARSIZE(processing_system7_0_M_AXI_GP0_ARSIZE),
        .M_AXI_GP0_ARVALID(processing_system7_0_M_AXI_GP0_ARVALID),
        .M_AXI_GP0_AWADDR(processing_system7_0_M_AXI_GP0_AWADDR),
        .M_AXI_GP0_AWBURST(processing_system7_0_M_AXI_GP0_AWBURST),
        .M_AXI_GP0_AWCACHE(processing_system7_0_M_AXI_GP0_AWCACHE),
        .M_AXI_GP0_AWID(processing_system7_0_M_AXI_GP0_AWID),
        .M_AXI_GP0_AWLEN(processing_system7_0_M_AXI_GP0_AWLEN),
        .M_AXI_GP0_AWLOCK(processing_system7_0_M_AXI_GP0_AWLOCK),
        .M_AXI_GP0_AWPROT(processing_system7_0_M_AXI_GP0_AWPROT),
        .M_AXI_GP0_AWQOS(processing_system7_0_M_AXI_GP0_AWQOS),
        .M_AXI_GP0_AWREADY(processing_system7_0_M_AXI_GP0_AWREADY),
        .M_AXI_GP0_AWSIZE(processing_system7_0_M_AXI_GP0_AWSIZE),
        .M_AXI_GP0_AWVALID(processing_system7_0_M_AXI_GP0_AWVALID),
        .M_AXI_GP0_BID(processing_system7_0_M_AXI_GP0_BID),
        .M_AXI_GP0_BREADY(processing_system7_0_M_AXI_GP0_BREADY),
        .M_AXI_GP0_BRESP(processing_system7_0_M_AXI_GP0_BRESP),
        .M_AXI_GP0_BVALID(processing_system7_0_M_AXI_GP0_BVALID),
        .M_AXI_GP0_RDATA(processing_system7_0_M_AXI_GP0_RDATA),
        .M_AXI_GP0_RID(processing_system7_0_M_AXI_GP0_RID),
        .M_AXI_GP0_RLAST(processing_system7_0_M_AXI_GP0_RLAST),
        .M_AXI_GP0_RREADY(processing_system7_0_M_AXI_GP0_RREADY),
        .M_AXI_GP0_RRESP(processing_system7_0_M_AXI_GP0_RRESP),
        .M_AXI_GP0_RVALID(processing_system7_0_M_AXI_GP0_RVALID),
        .M_AXI_GP0_WDATA(processing_system7_0_M_AXI_GP0_WDATA),
        .M_AXI_GP0_WID(processing_system7_0_M_AXI_GP0_WID),
        .M_AXI_GP0_WLAST(processing_system7_0_M_AXI_GP0_WLAST),
        .M_AXI_GP0_WREADY(processing_system7_0_M_AXI_GP0_WREADY),
        .M_AXI_GP0_WSTRB(processing_system7_0_M_AXI_GP0_WSTRB),
        .M_AXI_GP0_WVALID(processing_system7_0_M_AXI_GP0_WVALID),
        .PS_CLK(FIXED_IO_ps_clk),
        .PS_PORB(FIXED_IO_ps_porb),
        .PS_SRSTB(FIXED_IO_ps_srstb),
        .USB0_VBUS_PWRFAULT(1'b0));
  Multi_convo_core_ps7_0_axi_periph_0 ps7_0_axi_periph
       (.ACLK(processing_system7_0_FCLK_CLK0),
        .ARESETN(rst_ps7_0_100M_peripheral_aresetn),
        .M00_ACLK(processing_system7_0_FCLK_CLK0),
        .M00_ARESETN(rst_ps7_0_100M_peripheral_aresetn),
        .M00_AXI_araddr(ps7_0_axi_periph_M00_AXI_ARADDR),
        .M00_AXI_arready(ps7_0_axi_periph_M00_AXI_ARREADY),
        .M00_AXI_arvalid(ps7_0_axi_periph_M00_AXI_ARVALID),
        .M00_AXI_awaddr(ps7_0_axi_periph_M00_AXI_AWADDR),
        .M00_AXI_awready(ps7_0_axi_periph_M00_AXI_AWREADY),
        .M00_AXI_awvalid(ps7_0_axi_periph_M00_AXI_AWVALID),
        .M00_AXI_bready(ps7_0_axi_periph_M00_AXI_BREADY),
        .M00_AXI_bresp(ps7_0_axi_periph_M00_AXI_BRESP),
        .M00_AXI_bvalid(ps7_0_axi_periph_M00_AXI_BVALID),
        .M00_AXI_rdata(ps7_0_axi_periph_M00_AXI_RDATA),
        .M00_AXI_rready(ps7_0_axi_periph_M00_AXI_RREADY),
        .M00_AXI_rresp(ps7_0_axi_periph_M00_AXI_RRESP),
        .M00_AXI_rvalid(ps7_0_axi_periph_M00_AXI_RVALID),
        .M00_AXI_wdata(ps7_0_axi_periph_M00_AXI_WDATA),
        .M00_AXI_wready(ps7_0_axi_periph_M00_AXI_WREADY),
        .M00_AXI_wvalid(ps7_0_axi_periph_M00_AXI_WVALID),
        .M01_ACLK(processing_system7_0_FCLK_CLK0),
        .M01_ARESETN(rst_ps7_0_100M_peripheral_aresetn),
        .M01_AXI_araddr(ps7_0_axi_periph_M01_AXI_ARADDR),
        .M01_AXI_arprot(ps7_0_axi_periph_M01_AXI_ARPROT),
        .M01_AXI_arready(ps7_0_axi_periph_M01_AXI_ARREADY),
        .M01_AXI_arvalid(ps7_0_axi_periph_M01_AXI_ARVALID),
        .M01_AXI_awaddr(ps7_0_axi_periph_M01_AXI_AWADDR),
        .M01_AXI_awprot(ps7_0_axi_periph_M01_AXI_AWPROT),
        .M01_AXI_awready(ps7_0_axi_periph_M01_AXI_AWREADY),
        .M01_AXI_awvalid(ps7_0_axi_periph_M01_AXI_AWVALID),
        .M01_AXI_bready(ps7_0_axi_periph_M01_AXI_BREADY),
        .M01_AXI_bresp(ps7_0_axi_periph_M01_AXI_BRESP),
        .M01_AXI_bvalid(ps7_0_axi_periph_M01_AXI_BVALID),
        .M01_AXI_rdata(ps7_0_axi_periph_M01_AXI_RDATA),
        .M01_AXI_rready(ps7_0_axi_periph_M01_AXI_RREADY),
        .M01_AXI_rresp(ps7_0_axi_periph_M01_AXI_RRESP),
        .M01_AXI_rvalid(ps7_0_axi_periph_M01_AXI_RVALID),
        .M01_AXI_wdata(ps7_0_axi_periph_M01_AXI_WDATA),
        .M01_AXI_wready(ps7_0_axi_periph_M01_AXI_WREADY),
        .M01_AXI_wstrb(ps7_0_axi_periph_M01_AXI_WSTRB),
        .M01_AXI_wvalid(ps7_0_axi_periph_M01_AXI_WVALID),
        .S00_ACLK(processing_system7_0_FCLK_CLK0),
        .S00_ARESETN(rst_ps7_0_100M_peripheral_aresetn),
        .S00_AXI_araddr(processing_system7_0_M_AXI_GP0_ARADDR),
        .S00_AXI_arburst(processing_system7_0_M_AXI_GP0_ARBURST),
        .S00_AXI_arcache(processing_system7_0_M_AXI_GP0_ARCACHE),
        .S00_AXI_arid(processing_system7_0_M_AXI_GP0_ARID),
        .S00_AXI_arlen(processing_system7_0_M_AXI_GP0_ARLEN),
        .S00_AXI_arlock(processing_system7_0_M_AXI_GP0_ARLOCK),
        .S00_AXI_arprot(processing_system7_0_M_AXI_GP0_ARPROT),
        .S00_AXI_arqos(processing_system7_0_M_AXI_GP0_ARQOS),
        .S00_AXI_arready(processing_system7_0_M_AXI_GP0_ARREADY),
        .S00_AXI_arsize(processing_system7_0_M_AXI_GP0_ARSIZE),
        .S00_AXI_arvalid(processing_system7_0_M_AXI_GP0_ARVALID),
        .S00_AXI_awaddr(processing_system7_0_M_AXI_GP0_AWADDR),
        .S00_AXI_awburst(processing_system7_0_M_AXI_GP0_AWBURST),
        .S00_AXI_awcache(processing_system7_0_M_AXI_GP0_AWCACHE),
        .S00_AXI_awid(processing_system7_0_M_AXI_GP0_AWID),
        .S00_AXI_awlen(processing_system7_0_M_AXI_GP0_AWLEN),
        .S00_AXI_awlock(processing_system7_0_M_AXI_GP0_AWLOCK),
        .S00_AXI_awprot(processing_system7_0_M_AXI_GP0_AWPROT),
        .S00_AXI_awqos(processing_system7_0_M_AXI_GP0_AWQOS),
        .S00_AXI_awready(processing_system7_0_M_AXI_GP0_AWREADY),
        .S00_AXI_awsize(processing_system7_0_M_AXI_GP0_AWSIZE),
        .S00_AXI_awvalid(processing_system7_0_M_AXI_GP0_AWVALID),
        .S00_AXI_bid(processing_system7_0_M_AXI_GP0_BID),
        .S00_AXI_bready(processing_system7_0_M_AXI_GP0_BREADY),
        .S00_AXI_bresp(processing_system7_0_M_AXI_GP0_BRESP),
        .S00_AXI_bvalid(processing_system7_0_M_AXI_GP0_BVALID),
        .S00_AXI_rdata(processing_system7_0_M_AXI_GP0_RDATA),
        .S00_AXI_rid(processing_system7_0_M_AXI_GP0_RID),
        .S00_AXI_rlast(processing_system7_0_M_AXI_GP0_RLAST),
        .S00_AXI_rready(processing_system7_0_M_AXI_GP0_RREADY),
        .S00_AXI_rresp(processing_system7_0_M_AXI_GP0_RRESP),
        .S00_AXI_rvalid(processing_system7_0_M_AXI_GP0_RVALID),
        .S00_AXI_wdata(processing_system7_0_M_AXI_GP0_WDATA),
        .S00_AXI_wid(processing_system7_0_M_AXI_GP0_WID),
        .S00_AXI_wlast(processing_system7_0_M_AXI_GP0_WLAST),
        .S00_AXI_wready(processing_system7_0_M_AXI_GP0_WREADY),
        .S00_AXI_wstrb(processing_system7_0_M_AXI_GP0_WSTRB),
        .S00_AXI_wvalid(processing_system7_0_M_AXI_GP0_WVALID));
  Multi_convo_core_regs_file_0_1 regs_file_0
       (.BRAM_img_sel(regs_file_0_BRAM_img_sel),
        .S_AXI_ACLK(processing_system7_0_FCLK_CLK0),
        .S_AXI_ARADDR(ps7_0_axi_periph_M01_AXI_ARADDR[5:0]),
        .S_AXI_ARESETN(rst_ps7_0_100M_peripheral_aresetn),
        .S_AXI_ARPROT(ps7_0_axi_periph_M01_AXI_ARPROT),
        .S_AXI_ARREADY(ps7_0_axi_periph_M01_AXI_ARREADY),
        .S_AXI_ARVALID(ps7_0_axi_periph_M01_AXI_ARVALID),
        .S_AXI_AWADDR(ps7_0_axi_periph_M01_AXI_AWADDR[5:0]),
        .S_AXI_AWPROT(ps7_0_axi_periph_M01_AXI_AWPROT),
        .S_AXI_AWREADY(ps7_0_axi_periph_M01_AXI_AWREADY),
        .S_AXI_AWVALID(ps7_0_axi_periph_M01_AXI_AWVALID),
        .S_AXI_BREADY(ps7_0_axi_periph_M01_AXI_BREADY),
        .S_AXI_BRESP(ps7_0_axi_periph_M01_AXI_BRESP),
        .S_AXI_BVALID(ps7_0_axi_periph_M01_AXI_BVALID),
        .S_AXI_RDATA(ps7_0_axi_periph_M01_AXI_RDATA),
        .S_AXI_RREADY(ps7_0_axi_periph_M01_AXI_RREADY),
        .S_AXI_RRESP(ps7_0_axi_periph_M01_AXI_RRESP),
        .S_AXI_RVALID(ps7_0_axi_periph_M01_AXI_RVALID),
        .S_AXI_WDATA(ps7_0_axi_periph_M01_AXI_WDATA),
        .S_AXI_WREADY(ps7_0_axi_periph_M01_AXI_WREADY),
        .S_AXI_WSTRB(ps7_0_axi_periph_M01_AXI_WSTRB),
        .S_AXI_WVALID(ps7_0_axi_periph_M01_AXI_WVALID),
        .WxW_out(WxW_out_1),
        .channel_input_img(regs_file_0_channel_input_img),
        .end_core_out(Core_end_core_out),
        .no_channel_out(regs_file_0_no_channel_out),
        .rst(rst_1),
        .start_core_in(start_core_in_1),
        .stride(regs_file_0_stride),
        .weight_size_1_16(weight_size_1_16_1),
        .width_input_img(width_input_img_1));
  Multi_convo_core_rst_ps7_0_100M_0 rst_ps7_0_100M
       (.aux_reset_in(1'b1),
        .dcm_locked(1'b1),
        .ext_reset_in(processing_system7_0_FCLK_RESET0_N),
        .mb_debug_sys_rst(1'b0),
        .peripheral_aresetn(rst_ps7_0_100M_peripheral_aresetn),
        .slowest_sync_clk(processing_system7_0_FCLK_CLK0));
  Multi_convo_core_smartconnect_0_0 smartconnect_0
       (.M00_AXI_araddr(smartconnect_0_M00_AXI_ARADDR),
        .M00_AXI_arburst(smartconnect_0_M00_AXI_ARBURST),
        .M00_AXI_arcache(smartconnect_0_M00_AXI_ARCACHE),
        .M00_AXI_arlen(smartconnect_0_M00_AXI_ARLEN),
        .M00_AXI_arlock(smartconnect_0_M00_AXI_ARLOCK),
        .M00_AXI_arprot(smartconnect_0_M00_AXI_ARPROT),
        .M00_AXI_arready(smartconnect_0_M00_AXI_ARREADY),
        .M00_AXI_arsize(smartconnect_0_M00_AXI_ARSIZE),
        .M00_AXI_arvalid(smartconnect_0_M00_AXI_ARVALID),
        .M00_AXI_awaddr(smartconnect_0_M00_AXI_AWADDR),
        .M00_AXI_awburst(smartconnect_0_M00_AXI_AWBURST),
        .M00_AXI_awcache(smartconnect_0_M00_AXI_AWCACHE),
        .M00_AXI_awlen(smartconnect_0_M00_AXI_AWLEN),
        .M00_AXI_awlock(smartconnect_0_M00_AXI_AWLOCK),
        .M00_AXI_awprot(smartconnect_0_M00_AXI_AWPROT),
        .M00_AXI_awready(smartconnect_0_M00_AXI_AWREADY),
        .M00_AXI_awsize(smartconnect_0_M00_AXI_AWSIZE),
        .M00_AXI_awvalid(smartconnect_0_M00_AXI_AWVALID),
        .M00_AXI_bready(smartconnect_0_M00_AXI_BREADY),
        .M00_AXI_bresp(smartconnect_0_M00_AXI_BRESP),
        .M00_AXI_bvalid(smartconnect_0_M00_AXI_BVALID),
        .M00_AXI_rdata(smartconnect_0_M00_AXI_RDATA),
        .M00_AXI_rlast(smartconnect_0_M00_AXI_RLAST),
        .M00_AXI_rready(smartconnect_0_M00_AXI_RREADY),
        .M00_AXI_rresp(smartconnect_0_M00_AXI_RRESP),
        .M00_AXI_rvalid(smartconnect_0_M00_AXI_RVALID),
        .M00_AXI_wdata(smartconnect_0_M00_AXI_WDATA),
        .M00_AXI_wlast(smartconnect_0_M00_AXI_WLAST),
        .M00_AXI_wready(smartconnect_0_M00_AXI_WREADY),
        .M00_AXI_wstrb(smartconnect_0_M00_AXI_WSTRB),
        .M00_AXI_wvalid(smartconnect_0_M00_AXI_WVALID),
        .M01_AXI_araddr(smartconnect_0_M01_AXI_ARADDR),
        .M01_AXI_arburst(smartconnect_0_M01_AXI_ARBURST),
        .M01_AXI_arcache(smartconnect_0_M01_AXI_ARCACHE),
        .M01_AXI_arlen(smartconnect_0_M01_AXI_ARLEN),
        .M01_AXI_arlock(smartconnect_0_M01_AXI_ARLOCK),
        .M01_AXI_arprot(smartconnect_0_M01_AXI_ARPROT),
        .M01_AXI_arready(smartconnect_0_M01_AXI_ARREADY),
        .M01_AXI_arsize(smartconnect_0_M01_AXI_ARSIZE),
        .M01_AXI_arvalid(smartconnect_0_M01_AXI_ARVALID),
        .M01_AXI_awaddr(smartconnect_0_M01_AXI_AWADDR),
        .M01_AXI_awburst(smartconnect_0_M01_AXI_AWBURST),
        .M01_AXI_awcache(smartconnect_0_M01_AXI_AWCACHE),
        .M01_AXI_awlen(smartconnect_0_M01_AXI_AWLEN),
        .M01_AXI_awlock(smartconnect_0_M01_AXI_AWLOCK),
        .M01_AXI_awprot(smartconnect_0_M01_AXI_AWPROT),
        .M01_AXI_awready(smartconnect_0_M01_AXI_AWREADY),
        .M01_AXI_awsize(smartconnect_0_M01_AXI_AWSIZE),
        .M01_AXI_awvalid(smartconnect_0_M01_AXI_AWVALID),
        .M01_AXI_bready(smartconnect_0_M01_AXI_BREADY),
        .M01_AXI_bresp(smartconnect_0_M01_AXI_BRESP),
        .M01_AXI_bvalid(smartconnect_0_M01_AXI_BVALID),
        .M01_AXI_rdata(smartconnect_0_M01_AXI_RDATA),
        .M01_AXI_rlast(smartconnect_0_M01_AXI_RLAST),
        .M01_AXI_rready(smartconnect_0_M01_AXI_RREADY),
        .M01_AXI_rresp(smartconnect_0_M01_AXI_RRESP),
        .M01_AXI_rvalid(smartconnect_0_M01_AXI_RVALID),
        .M01_AXI_wdata(smartconnect_0_M01_AXI_WDATA),
        .M01_AXI_wlast(smartconnect_0_M01_AXI_WLAST),
        .M01_AXI_wready(smartconnect_0_M01_AXI_WREADY),
        .M01_AXI_wstrb(smartconnect_0_M01_AXI_WSTRB),
        .M01_AXI_wvalid(smartconnect_0_M01_AXI_WVALID),
        .M02_AXI_araddr(smartconnect_0_M02_AXI_ARADDR),
        .M02_AXI_arburst(smartconnect_0_M02_AXI_ARBURST),
        .M02_AXI_arcache(smartconnect_0_M02_AXI_ARCACHE),
        .M02_AXI_arlen(smartconnect_0_M02_AXI_ARLEN),
        .M02_AXI_arlock(smartconnect_0_M02_AXI_ARLOCK),
        .M02_AXI_arprot(smartconnect_0_M02_AXI_ARPROT),
        .M02_AXI_arready(smartconnect_0_M02_AXI_ARREADY),
        .M02_AXI_arsize(smartconnect_0_M02_AXI_ARSIZE),
        .M02_AXI_arvalid(smartconnect_0_M02_AXI_ARVALID),
        .M02_AXI_awaddr(smartconnect_0_M02_AXI_AWADDR),
        .M02_AXI_awburst(smartconnect_0_M02_AXI_AWBURST),
        .M02_AXI_awcache(smartconnect_0_M02_AXI_AWCACHE),
        .M02_AXI_awlen(smartconnect_0_M02_AXI_AWLEN),
        .M02_AXI_awlock(smartconnect_0_M02_AXI_AWLOCK),
        .M02_AXI_awprot(smartconnect_0_M02_AXI_AWPROT),
        .M02_AXI_awready(smartconnect_0_M02_AXI_AWREADY),
        .M02_AXI_awsize(smartconnect_0_M02_AXI_AWSIZE),
        .M02_AXI_awvalid(smartconnect_0_M02_AXI_AWVALID),
        .M02_AXI_bready(smartconnect_0_M02_AXI_BREADY),
        .M02_AXI_bresp(smartconnect_0_M02_AXI_BRESP),
        .M02_AXI_bvalid(smartconnect_0_M02_AXI_BVALID),
        .M02_AXI_rdata(smartconnect_0_M02_AXI_RDATA),
        .M02_AXI_rlast(smartconnect_0_M02_AXI_RLAST),
        .M02_AXI_rready(smartconnect_0_M02_AXI_RREADY),
        .M02_AXI_rresp(smartconnect_0_M02_AXI_RRESP),
        .M02_AXI_rvalid(smartconnect_0_M02_AXI_RVALID),
        .M02_AXI_wdata(smartconnect_0_M02_AXI_WDATA),
        .M02_AXI_wlast(smartconnect_0_M02_AXI_WLAST),
        .M02_AXI_wready(smartconnect_0_M02_AXI_WREADY),
        .M02_AXI_wstrb(smartconnect_0_M02_AXI_WSTRB),
        .M02_AXI_wvalid(smartconnect_0_M02_AXI_WVALID),
        .M03_AXI_araddr(smartconnect_0_M03_AXI_ARADDR),
        .M03_AXI_arburst(smartconnect_0_M03_AXI_ARBURST),
        .M03_AXI_arcache(smartconnect_0_M03_AXI_ARCACHE),
        .M03_AXI_arlen(smartconnect_0_M03_AXI_ARLEN),
        .M03_AXI_arlock(smartconnect_0_M03_AXI_ARLOCK),
        .M03_AXI_arprot(smartconnect_0_M03_AXI_ARPROT),
        .M03_AXI_arready(smartconnect_0_M03_AXI_ARREADY),
        .M03_AXI_arsize(smartconnect_0_M03_AXI_ARSIZE),
        .M03_AXI_arvalid(smartconnect_0_M03_AXI_ARVALID),
        .M03_AXI_awaddr(smartconnect_0_M03_AXI_AWADDR),
        .M03_AXI_awburst(smartconnect_0_M03_AXI_AWBURST),
        .M03_AXI_awcache(smartconnect_0_M03_AXI_AWCACHE),
        .M03_AXI_awlen(smartconnect_0_M03_AXI_AWLEN),
        .M03_AXI_awlock(smartconnect_0_M03_AXI_AWLOCK),
        .M03_AXI_awprot(smartconnect_0_M03_AXI_AWPROT),
        .M03_AXI_awready(smartconnect_0_M03_AXI_AWREADY),
        .M03_AXI_awsize(smartconnect_0_M03_AXI_AWSIZE),
        .M03_AXI_awvalid(smartconnect_0_M03_AXI_AWVALID),
        .M03_AXI_bready(smartconnect_0_M03_AXI_BREADY),
        .M03_AXI_bresp(smartconnect_0_M03_AXI_BRESP),
        .M03_AXI_bvalid(smartconnect_0_M03_AXI_BVALID),
        .M03_AXI_rdata(smartconnect_0_M03_AXI_RDATA),
        .M03_AXI_rlast(smartconnect_0_M03_AXI_RLAST),
        .M03_AXI_rready(smartconnect_0_M03_AXI_RREADY),
        .M03_AXI_rresp(smartconnect_0_M03_AXI_RRESP),
        .M03_AXI_rvalid(smartconnect_0_M03_AXI_RVALID),
        .M03_AXI_wdata(smartconnect_0_M03_AXI_WDATA),
        .M03_AXI_wlast(smartconnect_0_M03_AXI_WLAST),
        .M03_AXI_wready(smartconnect_0_M03_AXI_WREADY),
        .M03_AXI_wstrb(smartconnect_0_M03_AXI_WSTRB),
        .M03_AXI_wvalid(smartconnect_0_M03_AXI_WVALID),
        .M04_AXI_araddr(smartconnect_0_M04_AXI_ARADDR),
        .M04_AXI_arburst(smartconnect_0_M04_AXI_ARBURST),
        .M04_AXI_arcache(smartconnect_0_M04_AXI_ARCACHE),
        .M04_AXI_arlen(smartconnect_0_M04_AXI_ARLEN),
        .M04_AXI_arlock(smartconnect_0_M04_AXI_ARLOCK),
        .M04_AXI_arprot(smartconnect_0_M04_AXI_ARPROT),
        .M04_AXI_arready(smartconnect_0_M04_AXI_ARREADY),
        .M04_AXI_arsize(smartconnect_0_M04_AXI_ARSIZE),
        .M04_AXI_arvalid(smartconnect_0_M04_AXI_ARVALID),
        .M04_AXI_awaddr(smartconnect_0_M04_AXI_AWADDR),
        .M04_AXI_awburst(smartconnect_0_M04_AXI_AWBURST),
        .M04_AXI_awcache(smartconnect_0_M04_AXI_AWCACHE),
        .M04_AXI_awlen(smartconnect_0_M04_AXI_AWLEN),
        .M04_AXI_awlock(smartconnect_0_M04_AXI_AWLOCK),
        .M04_AXI_awprot(smartconnect_0_M04_AXI_AWPROT),
        .M04_AXI_awready(smartconnect_0_M04_AXI_AWREADY),
        .M04_AXI_awsize(smartconnect_0_M04_AXI_AWSIZE),
        .M04_AXI_awvalid(smartconnect_0_M04_AXI_AWVALID),
        .M04_AXI_bready(smartconnect_0_M04_AXI_BREADY),
        .M04_AXI_bresp(smartconnect_0_M04_AXI_BRESP),
        .M04_AXI_bvalid(smartconnect_0_M04_AXI_BVALID),
        .M04_AXI_rdata(smartconnect_0_M04_AXI_RDATA),
        .M04_AXI_rlast(smartconnect_0_M04_AXI_RLAST),
        .M04_AXI_rready(smartconnect_0_M04_AXI_RREADY),
        .M04_AXI_rresp(smartconnect_0_M04_AXI_RRESP),
        .M04_AXI_rvalid(smartconnect_0_M04_AXI_RVALID),
        .M04_AXI_wdata(smartconnect_0_M04_AXI_WDATA),
        .M04_AXI_wlast(smartconnect_0_M04_AXI_WLAST),
        .M04_AXI_wready(smartconnect_0_M04_AXI_WREADY),
        .M04_AXI_wstrb(smartconnect_0_M04_AXI_WSTRB),
        .M04_AXI_wvalid(smartconnect_0_M04_AXI_WVALID),
        .M05_AXI_araddr(smartconnect_0_M05_AXI_ARADDR),
        .M05_AXI_arburst(smartconnect_0_M05_AXI_ARBURST),
        .M05_AXI_arcache(smartconnect_0_M05_AXI_ARCACHE),
        .M05_AXI_arlen(smartconnect_0_M05_AXI_ARLEN),
        .M05_AXI_arlock(smartconnect_0_M05_AXI_ARLOCK),
        .M05_AXI_arprot(smartconnect_0_M05_AXI_ARPROT),
        .M05_AXI_arready(smartconnect_0_M05_AXI_ARREADY),
        .M05_AXI_arsize(smartconnect_0_M05_AXI_ARSIZE),
        .M05_AXI_arvalid(smartconnect_0_M05_AXI_ARVALID),
        .M05_AXI_awaddr(smartconnect_0_M05_AXI_AWADDR),
        .M05_AXI_awburst(smartconnect_0_M05_AXI_AWBURST),
        .M05_AXI_awcache(smartconnect_0_M05_AXI_AWCACHE),
        .M05_AXI_awlen(smartconnect_0_M05_AXI_AWLEN),
        .M05_AXI_awlock(smartconnect_0_M05_AXI_AWLOCK),
        .M05_AXI_awprot(smartconnect_0_M05_AXI_AWPROT),
        .M05_AXI_awready(smartconnect_0_M05_AXI_AWREADY),
        .M05_AXI_awsize(smartconnect_0_M05_AXI_AWSIZE),
        .M05_AXI_awvalid(smartconnect_0_M05_AXI_AWVALID),
        .M05_AXI_bready(smartconnect_0_M05_AXI_BREADY),
        .M05_AXI_bresp(smartconnect_0_M05_AXI_BRESP),
        .M05_AXI_bvalid(smartconnect_0_M05_AXI_BVALID),
        .M05_AXI_rdata(smartconnect_0_M05_AXI_RDATA),
        .M05_AXI_rlast(smartconnect_0_M05_AXI_RLAST),
        .M05_AXI_rready(smartconnect_0_M05_AXI_RREADY),
        .M05_AXI_rresp(smartconnect_0_M05_AXI_RRESP),
        .M05_AXI_rvalid(smartconnect_0_M05_AXI_RVALID),
        .M05_AXI_wdata(smartconnect_0_M05_AXI_WDATA),
        .M05_AXI_wlast(smartconnect_0_M05_AXI_WLAST),
        .M05_AXI_wready(smartconnect_0_M05_AXI_WREADY),
        .M05_AXI_wstrb(smartconnect_0_M05_AXI_WSTRB),
        .M05_AXI_wvalid(smartconnect_0_M05_AXI_WVALID),
        .M06_AXI_araddr(smartconnect_0_M06_AXI_ARADDR),
        .M06_AXI_arburst(smartconnect_0_M06_AXI_ARBURST),
        .M06_AXI_arcache(smartconnect_0_M06_AXI_ARCACHE),
        .M06_AXI_arlen(smartconnect_0_M06_AXI_ARLEN),
        .M06_AXI_arlock(smartconnect_0_M06_AXI_ARLOCK),
        .M06_AXI_arprot(smartconnect_0_M06_AXI_ARPROT),
        .M06_AXI_arready(smartconnect_0_M06_AXI_ARREADY),
        .M06_AXI_arsize(smartconnect_0_M06_AXI_ARSIZE),
        .M06_AXI_arvalid(smartconnect_0_M06_AXI_ARVALID),
        .M06_AXI_awaddr(smartconnect_0_M06_AXI_AWADDR),
        .M06_AXI_awburst(smartconnect_0_M06_AXI_AWBURST),
        .M06_AXI_awcache(smartconnect_0_M06_AXI_AWCACHE),
        .M06_AXI_awlen(smartconnect_0_M06_AXI_AWLEN),
        .M06_AXI_awlock(smartconnect_0_M06_AXI_AWLOCK),
        .M06_AXI_awprot(smartconnect_0_M06_AXI_AWPROT),
        .M06_AXI_awready(smartconnect_0_M06_AXI_AWREADY),
        .M06_AXI_awsize(smartconnect_0_M06_AXI_AWSIZE),
        .M06_AXI_awvalid(smartconnect_0_M06_AXI_AWVALID),
        .M06_AXI_bready(smartconnect_0_M06_AXI_BREADY),
        .M06_AXI_bresp(smartconnect_0_M06_AXI_BRESP),
        .M06_AXI_bvalid(smartconnect_0_M06_AXI_BVALID),
        .M06_AXI_rdata(smartconnect_0_M06_AXI_RDATA),
        .M06_AXI_rlast(smartconnect_0_M06_AXI_RLAST),
        .M06_AXI_rready(smartconnect_0_M06_AXI_RREADY),
        .M06_AXI_rresp(smartconnect_0_M06_AXI_RRESP),
        .M06_AXI_rvalid(smartconnect_0_M06_AXI_RVALID),
        .M06_AXI_wdata(smartconnect_0_M06_AXI_WDATA),
        .M06_AXI_wlast(smartconnect_0_M06_AXI_WLAST),
        .M06_AXI_wready(smartconnect_0_M06_AXI_WREADY),
        .M06_AXI_wstrb(smartconnect_0_M06_AXI_WSTRB),
        .M06_AXI_wvalid(smartconnect_0_M06_AXI_WVALID),
        .M07_AXI_araddr(smartconnect_0_M07_AXI_ARADDR),
        .M07_AXI_arburst(smartconnect_0_M07_AXI_ARBURST),
        .M07_AXI_arcache(smartconnect_0_M07_AXI_ARCACHE),
        .M07_AXI_arlen(smartconnect_0_M07_AXI_ARLEN),
        .M07_AXI_arlock(smartconnect_0_M07_AXI_ARLOCK),
        .M07_AXI_arprot(smartconnect_0_M07_AXI_ARPROT),
        .M07_AXI_arready(smartconnect_0_M07_AXI_ARREADY),
        .M07_AXI_arsize(smartconnect_0_M07_AXI_ARSIZE),
        .M07_AXI_arvalid(smartconnect_0_M07_AXI_ARVALID),
        .M07_AXI_awaddr(smartconnect_0_M07_AXI_AWADDR),
        .M07_AXI_awburst(smartconnect_0_M07_AXI_AWBURST),
        .M07_AXI_awcache(smartconnect_0_M07_AXI_AWCACHE),
        .M07_AXI_awlen(smartconnect_0_M07_AXI_AWLEN),
        .M07_AXI_awlock(smartconnect_0_M07_AXI_AWLOCK),
        .M07_AXI_awprot(smartconnect_0_M07_AXI_AWPROT),
        .M07_AXI_awready(smartconnect_0_M07_AXI_AWREADY),
        .M07_AXI_awsize(smartconnect_0_M07_AXI_AWSIZE),
        .M07_AXI_awvalid(smartconnect_0_M07_AXI_AWVALID),
        .M07_AXI_bready(smartconnect_0_M07_AXI_BREADY),
        .M07_AXI_bresp(smartconnect_0_M07_AXI_BRESP),
        .M07_AXI_bvalid(smartconnect_0_M07_AXI_BVALID),
        .M07_AXI_rdata(smartconnect_0_M07_AXI_RDATA),
        .M07_AXI_rlast(smartconnect_0_M07_AXI_RLAST),
        .M07_AXI_rready(smartconnect_0_M07_AXI_RREADY),
        .M07_AXI_rresp(smartconnect_0_M07_AXI_RRESP),
        .M07_AXI_rvalid(smartconnect_0_M07_AXI_RVALID),
        .M07_AXI_wdata(smartconnect_0_M07_AXI_WDATA),
        .M07_AXI_wlast(smartconnect_0_M07_AXI_WLAST),
        .M07_AXI_wready(smartconnect_0_M07_AXI_WREADY),
        .M07_AXI_wstrb(smartconnect_0_M07_AXI_WSTRB),
        .M07_AXI_wvalid(smartconnect_0_M07_AXI_WVALID),
        .M08_AXI_araddr(smartconnect_0_M08_AXI_ARADDR),
        .M08_AXI_arburst(smartconnect_0_M08_AXI_ARBURST),
        .M08_AXI_arcache(smartconnect_0_M08_AXI_ARCACHE),
        .M08_AXI_arlen(smartconnect_0_M08_AXI_ARLEN),
        .M08_AXI_arlock(smartconnect_0_M08_AXI_ARLOCK),
        .M08_AXI_arprot(smartconnect_0_M08_AXI_ARPROT),
        .M08_AXI_arready(smartconnect_0_M08_AXI_ARREADY),
        .M08_AXI_arsize(smartconnect_0_M08_AXI_ARSIZE),
        .M08_AXI_arvalid(smartconnect_0_M08_AXI_ARVALID),
        .M08_AXI_awaddr(smartconnect_0_M08_AXI_AWADDR),
        .M08_AXI_awburst(smartconnect_0_M08_AXI_AWBURST),
        .M08_AXI_awcache(smartconnect_0_M08_AXI_AWCACHE),
        .M08_AXI_awlen(smartconnect_0_M08_AXI_AWLEN),
        .M08_AXI_awlock(smartconnect_0_M08_AXI_AWLOCK),
        .M08_AXI_awprot(smartconnect_0_M08_AXI_AWPROT),
        .M08_AXI_awready(smartconnect_0_M08_AXI_AWREADY),
        .M08_AXI_awsize(smartconnect_0_M08_AXI_AWSIZE),
        .M08_AXI_awvalid(smartconnect_0_M08_AXI_AWVALID),
        .M08_AXI_bready(smartconnect_0_M08_AXI_BREADY),
        .M08_AXI_bresp(smartconnect_0_M08_AXI_BRESP),
        .M08_AXI_bvalid(smartconnect_0_M08_AXI_BVALID),
        .M08_AXI_rdata(smartconnect_0_M08_AXI_RDATA),
        .M08_AXI_rlast(smartconnect_0_M08_AXI_RLAST),
        .M08_AXI_rready(smartconnect_0_M08_AXI_RREADY),
        .M08_AXI_rresp(smartconnect_0_M08_AXI_RRESP),
        .M08_AXI_rvalid(smartconnect_0_M08_AXI_RVALID),
        .M08_AXI_wdata(smartconnect_0_M08_AXI_WDATA),
        .M08_AXI_wlast(smartconnect_0_M08_AXI_WLAST),
        .M08_AXI_wready(smartconnect_0_M08_AXI_WREADY),
        .M08_AXI_wstrb(smartconnect_0_M08_AXI_WSTRB),
        .M08_AXI_wvalid(smartconnect_0_M08_AXI_WVALID),
        .M09_AXI_araddr(smartconnect_0_M09_AXI_ARADDR),
        .M09_AXI_arburst(smartconnect_0_M09_AXI_ARBURST),
        .M09_AXI_arcache(smartconnect_0_M09_AXI_ARCACHE),
        .M09_AXI_arlen(smartconnect_0_M09_AXI_ARLEN),
        .M09_AXI_arlock(smartconnect_0_M09_AXI_ARLOCK),
        .M09_AXI_arprot(smartconnect_0_M09_AXI_ARPROT),
        .M09_AXI_arready(smartconnect_0_M09_AXI_ARREADY),
        .M09_AXI_arsize(smartconnect_0_M09_AXI_ARSIZE),
        .M09_AXI_arvalid(smartconnect_0_M09_AXI_ARVALID),
        .M09_AXI_awaddr(smartconnect_0_M09_AXI_AWADDR),
        .M09_AXI_awburst(smartconnect_0_M09_AXI_AWBURST),
        .M09_AXI_awcache(smartconnect_0_M09_AXI_AWCACHE),
        .M09_AXI_awlen(smartconnect_0_M09_AXI_AWLEN),
        .M09_AXI_awlock(smartconnect_0_M09_AXI_AWLOCK),
        .M09_AXI_awprot(smartconnect_0_M09_AXI_AWPROT),
        .M09_AXI_awready(smartconnect_0_M09_AXI_AWREADY),
        .M09_AXI_awsize(smartconnect_0_M09_AXI_AWSIZE),
        .M09_AXI_awvalid(smartconnect_0_M09_AXI_AWVALID),
        .M09_AXI_bready(smartconnect_0_M09_AXI_BREADY),
        .M09_AXI_bresp(smartconnect_0_M09_AXI_BRESP),
        .M09_AXI_bvalid(smartconnect_0_M09_AXI_BVALID),
        .M09_AXI_rdata(smartconnect_0_M09_AXI_RDATA),
        .M09_AXI_rlast(smartconnect_0_M09_AXI_RLAST),
        .M09_AXI_rready(smartconnect_0_M09_AXI_RREADY),
        .M09_AXI_rresp(smartconnect_0_M09_AXI_RRESP),
        .M09_AXI_rvalid(smartconnect_0_M09_AXI_RVALID),
        .M09_AXI_wdata(smartconnect_0_M09_AXI_WDATA),
        .M09_AXI_wlast(smartconnect_0_M09_AXI_WLAST),
        .M09_AXI_wready(smartconnect_0_M09_AXI_WREADY),
        .M09_AXI_wstrb(smartconnect_0_M09_AXI_WSTRB),
        .M09_AXI_wvalid(smartconnect_0_M09_AXI_WVALID),
        .M10_AXI_araddr(smartconnect_0_M10_AXI_ARADDR),
        .M10_AXI_arburst(smartconnect_0_M10_AXI_ARBURST),
        .M10_AXI_arcache(smartconnect_0_M10_AXI_ARCACHE),
        .M10_AXI_arlen(smartconnect_0_M10_AXI_ARLEN),
        .M10_AXI_arlock(smartconnect_0_M10_AXI_ARLOCK),
        .M10_AXI_arprot(smartconnect_0_M10_AXI_ARPROT),
        .M10_AXI_arready(smartconnect_0_M10_AXI_ARREADY),
        .M10_AXI_arsize(smartconnect_0_M10_AXI_ARSIZE),
        .M10_AXI_arvalid(smartconnect_0_M10_AXI_ARVALID),
        .M10_AXI_awaddr(smartconnect_0_M10_AXI_AWADDR),
        .M10_AXI_awburst(smartconnect_0_M10_AXI_AWBURST),
        .M10_AXI_awcache(smartconnect_0_M10_AXI_AWCACHE),
        .M10_AXI_awlen(smartconnect_0_M10_AXI_AWLEN),
        .M10_AXI_awlock(smartconnect_0_M10_AXI_AWLOCK),
        .M10_AXI_awprot(smartconnect_0_M10_AXI_AWPROT),
        .M10_AXI_awready(smartconnect_0_M10_AXI_AWREADY),
        .M10_AXI_awsize(smartconnect_0_M10_AXI_AWSIZE),
        .M10_AXI_awvalid(smartconnect_0_M10_AXI_AWVALID),
        .M10_AXI_bready(smartconnect_0_M10_AXI_BREADY),
        .M10_AXI_bresp(smartconnect_0_M10_AXI_BRESP),
        .M10_AXI_bvalid(smartconnect_0_M10_AXI_BVALID),
        .M10_AXI_rdata(smartconnect_0_M10_AXI_RDATA),
        .M10_AXI_rlast(smartconnect_0_M10_AXI_RLAST),
        .M10_AXI_rready(smartconnect_0_M10_AXI_RREADY),
        .M10_AXI_rresp(smartconnect_0_M10_AXI_RRESP),
        .M10_AXI_rvalid(smartconnect_0_M10_AXI_RVALID),
        .M10_AXI_wdata(smartconnect_0_M10_AXI_WDATA),
        .M10_AXI_wlast(smartconnect_0_M10_AXI_WLAST),
        .M10_AXI_wready(smartconnect_0_M10_AXI_WREADY),
        .M10_AXI_wstrb(smartconnect_0_M10_AXI_WSTRB),
        .M10_AXI_wvalid(smartconnect_0_M10_AXI_WVALID),
        .M11_AXI_araddr(smartconnect_0_M11_AXI_ARADDR),
        .M11_AXI_arburst(smartconnect_0_M11_AXI_ARBURST),
        .M11_AXI_arcache(smartconnect_0_M11_AXI_ARCACHE),
        .M11_AXI_arlen(smartconnect_0_M11_AXI_ARLEN),
        .M11_AXI_arlock(smartconnect_0_M11_AXI_ARLOCK),
        .M11_AXI_arprot(smartconnect_0_M11_AXI_ARPROT),
        .M11_AXI_arready(smartconnect_0_M11_AXI_ARREADY),
        .M11_AXI_arsize(smartconnect_0_M11_AXI_ARSIZE),
        .M11_AXI_arvalid(smartconnect_0_M11_AXI_ARVALID),
        .M11_AXI_awaddr(smartconnect_0_M11_AXI_AWADDR),
        .M11_AXI_awburst(smartconnect_0_M11_AXI_AWBURST),
        .M11_AXI_awcache(smartconnect_0_M11_AXI_AWCACHE),
        .M11_AXI_awlen(smartconnect_0_M11_AXI_AWLEN),
        .M11_AXI_awlock(smartconnect_0_M11_AXI_AWLOCK),
        .M11_AXI_awprot(smartconnect_0_M11_AXI_AWPROT),
        .M11_AXI_awready(smartconnect_0_M11_AXI_AWREADY),
        .M11_AXI_awsize(smartconnect_0_M11_AXI_AWSIZE),
        .M11_AXI_awvalid(smartconnect_0_M11_AXI_AWVALID),
        .M11_AXI_bready(smartconnect_0_M11_AXI_BREADY),
        .M11_AXI_bresp(smartconnect_0_M11_AXI_BRESP),
        .M11_AXI_bvalid(smartconnect_0_M11_AXI_BVALID),
        .M11_AXI_rdata(smartconnect_0_M11_AXI_RDATA),
        .M11_AXI_rlast(smartconnect_0_M11_AXI_RLAST),
        .M11_AXI_rready(smartconnect_0_M11_AXI_RREADY),
        .M11_AXI_rresp(smartconnect_0_M11_AXI_RRESP),
        .M11_AXI_rvalid(smartconnect_0_M11_AXI_RVALID),
        .M11_AXI_wdata(smartconnect_0_M11_AXI_WDATA),
        .M11_AXI_wlast(smartconnect_0_M11_AXI_WLAST),
        .M11_AXI_wready(smartconnect_0_M11_AXI_WREADY),
        .M11_AXI_wstrb(smartconnect_0_M11_AXI_WSTRB),
        .M11_AXI_wvalid(smartconnect_0_M11_AXI_WVALID),
        .M12_AXI_araddr(smartconnect_0_M12_AXI_ARADDR),
        .M12_AXI_arburst(smartconnect_0_M12_AXI_ARBURST),
        .M12_AXI_arcache(smartconnect_0_M12_AXI_ARCACHE),
        .M12_AXI_arlen(smartconnect_0_M12_AXI_ARLEN),
        .M12_AXI_arlock(smartconnect_0_M12_AXI_ARLOCK),
        .M12_AXI_arprot(smartconnect_0_M12_AXI_ARPROT),
        .M12_AXI_arready(smartconnect_0_M12_AXI_ARREADY),
        .M12_AXI_arsize(smartconnect_0_M12_AXI_ARSIZE),
        .M12_AXI_arvalid(smartconnect_0_M12_AXI_ARVALID),
        .M12_AXI_awaddr(smartconnect_0_M12_AXI_AWADDR),
        .M12_AXI_awburst(smartconnect_0_M12_AXI_AWBURST),
        .M12_AXI_awcache(smartconnect_0_M12_AXI_AWCACHE),
        .M12_AXI_awlen(smartconnect_0_M12_AXI_AWLEN),
        .M12_AXI_awlock(smartconnect_0_M12_AXI_AWLOCK),
        .M12_AXI_awprot(smartconnect_0_M12_AXI_AWPROT),
        .M12_AXI_awready(smartconnect_0_M12_AXI_AWREADY),
        .M12_AXI_awsize(smartconnect_0_M12_AXI_AWSIZE),
        .M12_AXI_awvalid(smartconnect_0_M12_AXI_AWVALID),
        .M12_AXI_bready(smartconnect_0_M12_AXI_BREADY),
        .M12_AXI_bresp(smartconnect_0_M12_AXI_BRESP),
        .M12_AXI_bvalid(smartconnect_0_M12_AXI_BVALID),
        .M12_AXI_rdata(smartconnect_0_M12_AXI_RDATA),
        .M12_AXI_rlast(smartconnect_0_M12_AXI_RLAST),
        .M12_AXI_rready(smartconnect_0_M12_AXI_RREADY),
        .M12_AXI_rresp(smartconnect_0_M12_AXI_RRESP),
        .M12_AXI_rvalid(smartconnect_0_M12_AXI_RVALID),
        .M12_AXI_wdata(smartconnect_0_M12_AXI_WDATA),
        .M12_AXI_wlast(smartconnect_0_M12_AXI_WLAST),
        .M12_AXI_wready(smartconnect_0_M12_AXI_WREADY),
        .M12_AXI_wstrb(smartconnect_0_M12_AXI_WSTRB),
        .M12_AXI_wvalid(smartconnect_0_M12_AXI_WVALID),
        .M13_AXI_araddr(smartconnect_0_M13_AXI_ARADDR),
        .M13_AXI_arburst(smartconnect_0_M13_AXI_ARBURST),
        .M13_AXI_arcache(smartconnect_0_M13_AXI_ARCACHE),
        .M13_AXI_arlen(smartconnect_0_M13_AXI_ARLEN),
        .M13_AXI_arlock(smartconnect_0_M13_AXI_ARLOCK),
        .M13_AXI_arprot(smartconnect_0_M13_AXI_ARPROT),
        .M13_AXI_arready(smartconnect_0_M13_AXI_ARREADY),
        .M13_AXI_arsize(smartconnect_0_M13_AXI_ARSIZE),
        .M13_AXI_arvalid(smartconnect_0_M13_AXI_ARVALID),
        .M13_AXI_awaddr(smartconnect_0_M13_AXI_AWADDR),
        .M13_AXI_awburst(smartconnect_0_M13_AXI_AWBURST),
        .M13_AXI_awcache(smartconnect_0_M13_AXI_AWCACHE),
        .M13_AXI_awlen(smartconnect_0_M13_AXI_AWLEN),
        .M13_AXI_awlock(smartconnect_0_M13_AXI_AWLOCK),
        .M13_AXI_awprot(smartconnect_0_M13_AXI_AWPROT),
        .M13_AXI_awready(smartconnect_0_M13_AXI_AWREADY),
        .M13_AXI_awsize(smartconnect_0_M13_AXI_AWSIZE),
        .M13_AXI_awvalid(smartconnect_0_M13_AXI_AWVALID),
        .M13_AXI_bready(smartconnect_0_M13_AXI_BREADY),
        .M13_AXI_bresp(smartconnect_0_M13_AXI_BRESP),
        .M13_AXI_bvalid(smartconnect_0_M13_AXI_BVALID),
        .M13_AXI_rdata(smartconnect_0_M13_AXI_RDATA),
        .M13_AXI_rlast(smartconnect_0_M13_AXI_RLAST),
        .M13_AXI_rready(smartconnect_0_M13_AXI_RREADY),
        .M13_AXI_rresp(smartconnect_0_M13_AXI_RRESP),
        .M13_AXI_rvalid(smartconnect_0_M13_AXI_RVALID),
        .M13_AXI_wdata(smartconnect_0_M13_AXI_WDATA),
        .M13_AXI_wlast(smartconnect_0_M13_AXI_WLAST),
        .M13_AXI_wready(smartconnect_0_M13_AXI_WREADY),
        .M13_AXI_wstrb(smartconnect_0_M13_AXI_WSTRB),
        .M13_AXI_wvalid(smartconnect_0_M13_AXI_WVALID),
        .M14_AXI_araddr(smartconnect_0_M14_AXI_ARADDR),
        .M14_AXI_arburst(smartconnect_0_M14_AXI_ARBURST),
        .M14_AXI_arcache(smartconnect_0_M14_AXI_ARCACHE),
        .M14_AXI_arlen(smartconnect_0_M14_AXI_ARLEN),
        .M14_AXI_arlock(smartconnect_0_M14_AXI_ARLOCK),
        .M14_AXI_arprot(smartconnect_0_M14_AXI_ARPROT),
        .M14_AXI_arready(smartconnect_0_M14_AXI_ARREADY),
        .M14_AXI_arsize(smartconnect_0_M14_AXI_ARSIZE),
        .M14_AXI_arvalid(smartconnect_0_M14_AXI_ARVALID),
        .M14_AXI_awaddr(smartconnect_0_M14_AXI_AWADDR),
        .M14_AXI_awburst(smartconnect_0_M14_AXI_AWBURST),
        .M14_AXI_awcache(smartconnect_0_M14_AXI_AWCACHE),
        .M14_AXI_awlen(smartconnect_0_M14_AXI_AWLEN),
        .M14_AXI_awlock(smartconnect_0_M14_AXI_AWLOCK),
        .M14_AXI_awprot(smartconnect_0_M14_AXI_AWPROT),
        .M14_AXI_awready(smartconnect_0_M14_AXI_AWREADY),
        .M14_AXI_awsize(smartconnect_0_M14_AXI_AWSIZE),
        .M14_AXI_awvalid(smartconnect_0_M14_AXI_AWVALID),
        .M14_AXI_bready(smartconnect_0_M14_AXI_BREADY),
        .M14_AXI_bresp(smartconnect_0_M14_AXI_BRESP),
        .M14_AXI_bvalid(smartconnect_0_M14_AXI_BVALID),
        .M14_AXI_rdata(smartconnect_0_M14_AXI_RDATA),
        .M14_AXI_rlast(smartconnect_0_M14_AXI_RLAST),
        .M14_AXI_rready(smartconnect_0_M14_AXI_RREADY),
        .M14_AXI_rresp(smartconnect_0_M14_AXI_RRESP),
        .M14_AXI_rvalid(smartconnect_0_M14_AXI_RVALID),
        .M14_AXI_wdata(smartconnect_0_M14_AXI_WDATA),
        .M14_AXI_wlast(smartconnect_0_M14_AXI_WLAST),
        .M14_AXI_wready(smartconnect_0_M14_AXI_WREADY),
        .M14_AXI_wstrb(smartconnect_0_M14_AXI_WSTRB),
        .M14_AXI_wvalid(smartconnect_0_M14_AXI_WVALID),
        .M15_AXI_araddr(smartconnect_0_M15_AXI_ARADDR),
        .M15_AXI_arburst(smartconnect_0_M15_AXI_ARBURST),
        .M15_AXI_arcache(smartconnect_0_M15_AXI_ARCACHE),
        .M15_AXI_arlen(smartconnect_0_M15_AXI_ARLEN),
        .M15_AXI_arlock(smartconnect_0_M15_AXI_ARLOCK),
        .M15_AXI_arprot(smartconnect_0_M15_AXI_ARPROT),
        .M15_AXI_arready(smartconnect_0_M15_AXI_ARREADY),
        .M15_AXI_arsize(smartconnect_0_M15_AXI_ARSIZE),
        .M15_AXI_arvalid(smartconnect_0_M15_AXI_ARVALID),
        .M15_AXI_awaddr(smartconnect_0_M15_AXI_AWADDR),
        .M15_AXI_awburst(smartconnect_0_M15_AXI_AWBURST),
        .M15_AXI_awcache(smartconnect_0_M15_AXI_AWCACHE),
        .M15_AXI_awlen(smartconnect_0_M15_AXI_AWLEN),
        .M15_AXI_awlock(smartconnect_0_M15_AXI_AWLOCK),
        .M15_AXI_awprot(smartconnect_0_M15_AXI_AWPROT),
        .M15_AXI_awready(smartconnect_0_M15_AXI_AWREADY),
        .M15_AXI_awsize(smartconnect_0_M15_AXI_AWSIZE),
        .M15_AXI_awvalid(smartconnect_0_M15_AXI_AWVALID),
        .M15_AXI_bready(smartconnect_0_M15_AXI_BREADY),
        .M15_AXI_bresp(smartconnect_0_M15_AXI_BRESP),
        .M15_AXI_bvalid(smartconnect_0_M15_AXI_BVALID),
        .M15_AXI_rdata(smartconnect_0_M15_AXI_RDATA),
        .M15_AXI_rlast(smartconnect_0_M15_AXI_RLAST),
        .M15_AXI_rready(smartconnect_0_M15_AXI_RREADY),
        .M15_AXI_rresp(smartconnect_0_M15_AXI_RRESP),
        .M15_AXI_rvalid(smartconnect_0_M15_AXI_RVALID),
        .M15_AXI_wdata(smartconnect_0_M15_AXI_WDATA),
        .M15_AXI_wlast(smartconnect_0_M15_AXI_WLAST),
        .M15_AXI_wready(smartconnect_0_M15_AXI_WREADY),
        .M15_AXI_wstrb(smartconnect_0_M15_AXI_WSTRB),
        .M15_AXI_wvalid(smartconnect_0_M15_AXI_WVALID),
        .M16_AXI_araddr(smartconnect_0_M16_AXI_ARADDR),
        .M16_AXI_arburst(smartconnect_0_M16_AXI_ARBURST),
        .M16_AXI_arcache(smartconnect_0_M16_AXI_ARCACHE),
        .M16_AXI_arlen(smartconnect_0_M16_AXI_ARLEN),
        .M16_AXI_arlock(smartconnect_0_M16_AXI_ARLOCK),
        .M16_AXI_arprot(smartconnect_0_M16_AXI_ARPROT),
        .M16_AXI_arready(smartconnect_0_M16_AXI_ARREADY),
        .M16_AXI_arsize(smartconnect_0_M16_AXI_ARSIZE),
        .M16_AXI_arvalid(smartconnect_0_M16_AXI_ARVALID),
        .M16_AXI_awaddr(smartconnect_0_M16_AXI_AWADDR),
        .M16_AXI_awburst(smartconnect_0_M16_AXI_AWBURST),
        .M16_AXI_awcache(smartconnect_0_M16_AXI_AWCACHE),
        .M16_AXI_awlen(smartconnect_0_M16_AXI_AWLEN),
        .M16_AXI_awlock(smartconnect_0_M16_AXI_AWLOCK),
        .M16_AXI_awprot(smartconnect_0_M16_AXI_AWPROT),
        .M16_AXI_awready(smartconnect_0_M16_AXI_AWREADY),
        .M16_AXI_awsize(smartconnect_0_M16_AXI_AWSIZE),
        .M16_AXI_awvalid(smartconnect_0_M16_AXI_AWVALID),
        .M16_AXI_bready(smartconnect_0_M16_AXI_BREADY),
        .M16_AXI_bresp(smartconnect_0_M16_AXI_BRESP),
        .M16_AXI_bvalid(smartconnect_0_M16_AXI_BVALID),
        .M16_AXI_rdata(smartconnect_0_M16_AXI_RDATA),
        .M16_AXI_rlast(smartconnect_0_M16_AXI_RLAST),
        .M16_AXI_rready(smartconnect_0_M16_AXI_RREADY),
        .M16_AXI_rresp(smartconnect_0_M16_AXI_RRESP),
        .M16_AXI_rvalid(smartconnect_0_M16_AXI_RVALID),
        .M16_AXI_wdata(smartconnect_0_M16_AXI_WDATA),
        .M16_AXI_wlast(smartconnect_0_M16_AXI_WLAST),
        .M16_AXI_wready(smartconnect_0_M16_AXI_WREADY),
        .M16_AXI_wstrb(smartconnect_0_M16_AXI_WSTRB),
        .M16_AXI_wvalid(smartconnect_0_M16_AXI_WVALID),
        .M17_AXI_araddr(smartconnect_0_M17_AXI_ARADDR),
        .M17_AXI_arburst(smartconnect_0_M17_AXI_ARBURST),
        .M17_AXI_arcache(smartconnect_0_M17_AXI_ARCACHE),
        .M17_AXI_arlen(smartconnect_0_M17_AXI_ARLEN),
        .M17_AXI_arlock(smartconnect_0_M17_AXI_ARLOCK),
        .M17_AXI_arprot(smartconnect_0_M17_AXI_ARPROT),
        .M17_AXI_arready(smartconnect_0_M17_AXI_ARREADY),
        .M17_AXI_arsize(smartconnect_0_M17_AXI_ARSIZE),
        .M17_AXI_arvalid(smartconnect_0_M17_AXI_ARVALID),
        .M17_AXI_awaddr(smartconnect_0_M17_AXI_AWADDR),
        .M17_AXI_awburst(smartconnect_0_M17_AXI_AWBURST),
        .M17_AXI_awcache(smartconnect_0_M17_AXI_AWCACHE),
        .M17_AXI_awlen(smartconnect_0_M17_AXI_AWLEN),
        .M17_AXI_awlock(smartconnect_0_M17_AXI_AWLOCK),
        .M17_AXI_awprot(smartconnect_0_M17_AXI_AWPROT),
        .M17_AXI_awready(smartconnect_0_M17_AXI_AWREADY),
        .M17_AXI_awsize(smartconnect_0_M17_AXI_AWSIZE),
        .M17_AXI_awvalid(smartconnect_0_M17_AXI_AWVALID),
        .M17_AXI_bready(smartconnect_0_M17_AXI_BREADY),
        .M17_AXI_bresp(smartconnect_0_M17_AXI_BRESP),
        .M17_AXI_bvalid(smartconnect_0_M17_AXI_BVALID),
        .M17_AXI_rdata(smartconnect_0_M17_AXI_RDATA),
        .M17_AXI_rlast(smartconnect_0_M17_AXI_RLAST),
        .M17_AXI_rready(smartconnect_0_M17_AXI_RREADY),
        .M17_AXI_rresp(smartconnect_0_M17_AXI_RRESP),
        .M17_AXI_rvalid(smartconnect_0_M17_AXI_RVALID),
        .M17_AXI_wdata(smartconnect_0_M17_AXI_WDATA),
        .M17_AXI_wlast(smartconnect_0_M17_AXI_WLAST),
        .M17_AXI_wready(smartconnect_0_M17_AXI_WREADY),
        .M17_AXI_wstrb(smartconnect_0_M17_AXI_WSTRB),
        .M17_AXI_wvalid(smartconnect_0_M17_AXI_WVALID),
        .M18_AXI_araddr(smartconnect_0_M18_AXI_ARADDR),
        .M18_AXI_arburst(smartconnect_0_M18_AXI_ARBURST),
        .M18_AXI_arcache(smartconnect_0_M18_AXI_ARCACHE),
        .M18_AXI_arlen(smartconnect_0_M18_AXI_ARLEN),
        .M18_AXI_arlock(smartconnect_0_M18_AXI_ARLOCK),
        .M18_AXI_arprot(smartconnect_0_M18_AXI_ARPROT),
        .M18_AXI_arready(smartconnect_0_M18_AXI_ARREADY),
        .M18_AXI_arsize(smartconnect_0_M18_AXI_ARSIZE),
        .M18_AXI_arvalid(smartconnect_0_M18_AXI_ARVALID),
        .M18_AXI_awaddr(smartconnect_0_M18_AXI_AWADDR),
        .M18_AXI_awburst(smartconnect_0_M18_AXI_AWBURST),
        .M18_AXI_awcache(smartconnect_0_M18_AXI_AWCACHE),
        .M18_AXI_awlen(smartconnect_0_M18_AXI_AWLEN),
        .M18_AXI_awlock(smartconnect_0_M18_AXI_AWLOCK),
        .M18_AXI_awprot(smartconnect_0_M18_AXI_AWPROT),
        .M18_AXI_awready(smartconnect_0_M18_AXI_AWREADY),
        .M18_AXI_awsize(smartconnect_0_M18_AXI_AWSIZE),
        .M18_AXI_awvalid(smartconnect_0_M18_AXI_AWVALID),
        .M18_AXI_bready(smartconnect_0_M18_AXI_BREADY),
        .M18_AXI_bresp(smartconnect_0_M18_AXI_BRESP),
        .M18_AXI_bvalid(smartconnect_0_M18_AXI_BVALID),
        .M18_AXI_rdata(smartconnect_0_M18_AXI_RDATA),
        .M18_AXI_rlast(smartconnect_0_M18_AXI_RLAST),
        .M18_AXI_rready(smartconnect_0_M18_AXI_RREADY),
        .M18_AXI_rresp(smartconnect_0_M18_AXI_RRESP),
        .M18_AXI_rvalid(smartconnect_0_M18_AXI_RVALID),
        .M18_AXI_wdata(smartconnect_0_M18_AXI_WDATA),
        .M18_AXI_wlast(smartconnect_0_M18_AXI_WLAST),
        .M18_AXI_wready(smartconnect_0_M18_AXI_WREADY),
        .M18_AXI_wstrb(smartconnect_0_M18_AXI_WSTRB),
        .M18_AXI_wvalid(smartconnect_0_M18_AXI_WVALID),
        .M19_AXI_araddr(smartconnect_0_M19_AXI_ARADDR),
        .M19_AXI_arburst(smartconnect_0_M19_AXI_ARBURST),
        .M19_AXI_arcache(smartconnect_0_M19_AXI_ARCACHE),
        .M19_AXI_arlen(smartconnect_0_M19_AXI_ARLEN),
        .M19_AXI_arlock(smartconnect_0_M19_AXI_ARLOCK),
        .M19_AXI_arprot(smartconnect_0_M19_AXI_ARPROT),
        .M19_AXI_arready(smartconnect_0_M19_AXI_ARREADY),
        .M19_AXI_arsize(smartconnect_0_M19_AXI_ARSIZE),
        .M19_AXI_arvalid(smartconnect_0_M19_AXI_ARVALID),
        .M19_AXI_awaddr(smartconnect_0_M19_AXI_AWADDR),
        .M19_AXI_awburst(smartconnect_0_M19_AXI_AWBURST),
        .M19_AXI_awcache(smartconnect_0_M19_AXI_AWCACHE),
        .M19_AXI_awlen(smartconnect_0_M19_AXI_AWLEN),
        .M19_AXI_awlock(smartconnect_0_M19_AXI_AWLOCK),
        .M19_AXI_awprot(smartconnect_0_M19_AXI_AWPROT),
        .M19_AXI_awready(smartconnect_0_M19_AXI_AWREADY),
        .M19_AXI_awsize(smartconnect_0_M19_AXI_AWSIZE),
        .M19_AXI_awvalid(smartconnect_0_M19_AXI_AWVALID),
        .M19_AXI_bready(smartconnect_0_M19_AXI_BREADY),
        .M19_AXI_bresp(smartconnect_0_M19_AXI_BRESP),
        .M19_AXI_bvalid(smartconnect_0_M19_AXI_BVALID),
        .M19_AXI_rdata(smartconnect_0_M19_AXI_RDATA),
        .M19_AXI_rlast(smartconnect_0_M19_AXI_RLAST),
        .M19_AXI_rready(smartconnect_0_M19_AXI_RREADY),
        .M19_AXI_rresp(smartconnect_0_M19_AXI_RRESP),
        .M19_AXI_rvalid(smartconnect_0_M19_AXI_RVALID),
        .M19_AXI_wdata(smartconnect_0_M19_AXI_WDATA),
        .M19_AXI_wlast(smartconnect_0_M19_AXI_WLAST),
        .M19_AXI_wready(smartconnect_0_M19_AXI_WREADY),
        .M19_AXI_wstrb(smartconnect_0_M19_AXI_WSTRB),
        .M19_AXI_wvalid(smartconnect_0_M19_AXI_WVALID),
        .M20_AXI_araddr(smartconnect_0_M20_AXI_ARADDR),
        .M20_AXI_arburst(smartconnect_0_M20_AXI_ARBURST),
        .M20_AXI_arcache(smartconnect_0_M20_AXI_ARCACHE),
        .M20_AXI_arlen(smartconnect_0_M20_AXI_ARLEN),
        .M20_AXI_arlock(smartconnect_0_M20_AXI_ARLOCK),
        .M20_AXI_arprot(smartconnect_0_M20_AXI_ARPROT),
        .M20_AXI_arready(smartconnect_0_M20_AXI_ARREADY),
        .M20_AXI_arsize(smartconnect_0_M20_AXI_ARSIZE),
        .M20_AXI_arvalid(smartconnect_0_M20_AXI_ARVALID),
        .M20_AXI_awaddr(smartconnect_0_M20_AXI_AWADDR),
        .M20_AXI_awburst(smartconnect_0_M20_AXI_AWBURST),
        .M20_AXI_awcache(smartconnect_0_M20_AXI_AWCACHE),
        .M20_AXI_awlen(smartconnect_0_M20_AXI_AWLEN),
        .M20_AXI_awlock(smartconnect_0_M20_AXI_AWLOCK),
        .M20_AXI_awprot(smartconnect_0_M20_AXI_AWPROT),
        .M20_AXI_awready(smartconnect_0_M20_AXI_AWREADY),
        .M20_AXI_awsize(smartconnect_0_M20_AXI_AWSIZE),
        .M20_AXI_awvalid(smartconnect_0_M20_AXI_AWVALID),
        .M20_AXI_bready(smartconnect_0_M20_AXI_BREADY),
        .M20_AXI_bresp(smartconnect_0_M20_AXI_BRESP),
        .M20_AXI_bvalid(smartconnect_0_M20_AXI_BVALID),
        .M20_AXI_rdata(smartconnect_0_M20_AXI_RDATA),
        .M20_AXI_rlast(smartconnect_0_M20_AXI_RLAST),
        .M20_AXI_rready(smartconnect_0_M20_AXI_RREADY),
        .M20_AXI_rresp(smartconnect_0_M20_AXI_RRESP),
        .M20_AXI_rvalid(smartconnect_0_M20_AXI_RVALID),
        .M20_AXI_wdata(smartconnect_0_M20_AXI_WDATA),
        .M20_AXI_wlast(smartconnect_0_M20_AXI_WLAST),
        .M20_AXI_wready(smartconnect_0_M20_AXI_WREADY),
        .M20_AXI_wstrb(smartconnect_0_M20_AXI_WSTRB),
        .M20_AXI_wvalid(smartconnect_0_M20_AXI_WVALID),
        .M21_AXI_araddr(smartconnect_0_M21_AXI_ARADDR),
        .M21_AXI_arburst(smartconnect_0_M21_AXI_ARBURST),
        .M21_AXI_arcache(smartconnect_0_M21_AXI_ARCACHE),
        .M21_AXI_arlen(smartconnect_0_M21_AXI_ARLEN),
        .M21_AXI_arlock(smartconnect_0_M21_AXI_ARLOCK),
        .M21_AXI_arprot(smartconnect_0_M21_AXI_ARPROT),
        .M21_AXI_arready(smartconnect_0_M21_AXI_ARREADY),
        .M21_AXI_arsize(smartconnect_0_M21_AXI_ARSIZE),
        .M21_AXI_arvalid(smartconnect_0_M21_AXI_ARVALID),
        .M21_AXI_awaddr(smartconnect_0_M21_AXI_AWADDR),
        .M21_AXI_awburst(smartconnect_0_M21_AXI_AWBURST),
        .M21_AXI_awcache(smartconnect_0_M21_AXI_AWCACHE),
        .M21_AXI_awlen(smartconnect_0_M21_AXI_AWLEN),
        .M21_AXI_awlock(smartconnect_0_M21_AXI_AWLOCK),
        .M21_AXI_awprot(smartconnect_0_M21_AXI_AWPROT),
        .M21_AXI_awready(smartconnect_0_M21_AXI_AWREADY),
        .M21_AXI_awsize(smartconnect_0_M21_AXI_AWSIZE),
        .M21_AXI_awvalid(smartconnect_0_M21_AXI_AWVALID),
        .M21_AXI_bready(smartconnect_0_M21_AXI_BREADY),
        .M21_AXI_bresp(smartconnect_0_M21_AXI_BRESP),
        .M21_AXI_bvalid(smartconnect_0_M21_AXI_BVALID),
        .M21_AXI_rdata(smartconnect_0_M21_AXI_RDATA),
        .M21_AXI_rlast(smartconnect_0_M21_AXI_RLAST),
        .M21_AXI_rready(smartconnect_0_M21_AXI_RREADY),
        .M21_AXI_rresp(smartconnect_0_M21_AXI_RRESP),
        .M21_AXI_rvalid(smartconnect_0_M21_AXI_RVALID),
        .M21_AXI_wdata(smartconnect_0_M21_AXI_WDATA),
        .M21_AXI_wlast(smartconnect_0_M21_AXI_WLAST),
        .M21_AXI_wready(smartconnect_0_M21_AXI_WREADY),
        .M21_AXI_wstrb(smartconnect_0_M21_AXI_WSTRB),
        .M21_AXI_wvalid(smartconnect_0_M21_AXI_WVALID),
        .M22_AXI_araddr(smartconnect_0_M22_AXI_ARADDR),
        .M22_AXI_arburst(smartconnect_0_M22_AXI_ARBURST),
        .M22_AXI_arcache(smartconnect_0_M22_AXI_ARCACHE),
        .M22_AXI_arlen(smartconnect_0_M22_AXI_ARLEN),
        .M22_AXI_arlock(smartconnect_0_M22_AXI_ARLOCK),
        .M22_AXI_arprot(smartconnect_0_M22_AXI_ARPROT),
        .M22_AXI_arready(smartconnect_0_M22_AXI_ARREADY),
        .M22_AXI_arsize(smartconnect_0_M22_AXI_ARSIZE),
        .M22_AXI_arvalid(smartconnect_0_M22_AXI_ARVALID),
        .M22_AXI_awaddr(smartconnect_0_M22_AXI_AWADDR),
        .M22_AXI_awburst(smartconnect_0_M22_AXI_AWBURST),
        .M22_AXI_awcache(smartconnect_0_M22_AXI_AWCACHE),
        .M22_AXI_awlen(smartconnect_0_M22_AXI_AWLEN),
        .M22_AXI_awlock(smartconnect_0_M22_AXI_AWLOCK),
        .M22_AXI_awprot(smartconnect_0_M22_AXI_AWPROT),
        .M22_AXI_awready(smartconnect_0_M22_AXI_AWREADY),
        .M22_AXI_awsize(smartconnect_0_M22_AXI_AWSIZE),
        .M22_AXI_awvalid(smartconnect_0_M22_AXI_AWVALID),
        .M22_AXI_bready(smartconnect_0_M22_AXI_BREADY),
        .M22_AXI_bresp(smartconnect_0_M22_AXI_BRESP),
        .M22_AXI_bvalid(smartconnect_0_M22_AXI_BVALID),
        .M22_AXI_rdata(smartconnect_0_M22_AXI_RDATA),
        .M22_AXI_rlast(smartconnect_0_M22_AXI_RLAST),
        .M22_AXI_rready(smartconnect_0_M22_AXI_RREADY),
        .M22_AXI_rresp(smartconnect_0_M22_AXI_RRESP),
        .M22_AXI_rvalid(smartconnect_0_M22_AXI_RVALID),
        .M22_AXI_wdata(smartconnect_0_M22_AXI_WDATA),
        .M22_AXI_wlast(smartconnect_0_M22_AXI_WLAST),
        .M22_AXI_wready(smartconnect_0_M22_AXI_WREADY),
        .M22_AXI_wstrb(smartconnect_0_M22_AXI_WSTRB),
        .M22_AXI_wvalid(smartconnect_0_M22_AXI_WVALID),
        .M23_AXI_araddr(smartconnect_0_M23_AXI_ARADDR),
        .M23_AXI_arburst(smartconnect_0_M23_AXI_ARBURST),
        .M23_AXI_arcache(smartconnect_0_M23_AXI_ARCACHE),
        .M23_AXI_arlen(smartconnect_0_M23_AXI_ARLEN),
        .M23_AXI_arlock(smartconnect_0_M23_AXI_ARLOCK),
        .M23_AXI_arprot(smartconnect_0_M23_AXI_ARPROT),
        .M23_AXI_arready(smartconnect_0_M23_AXI_ARREADY),
        .M23_AXI_arsize(smartconnect_0_M23_AXI_ARSIZE),
        .M23_AXI_arvalid(smartconnect_0_M23_AXI_ARVALID),
        .M23_AXI_awaddr(smartconnect_0_M23_AXI_AWADDR),
        .M23_AXI_awburst(smartconnect_0_M23_AXI_AWBURST),
        .M23_AXI_awcache(smartconnect_0_M23_AXI_AWCACHE),
        .M23_AXI_awlen(smartconnect_0_M23_AXI_AWLEN),
        .M23_AXI_awlock(smartconnect_0_M23_AXI_AWLOCK),
        .M23_AXI_awprot(smartconnect_0_M23_AXI_AWPROT),
        .M23_AXI_awready(smartconnect_0_M23_AXI_AWREADY),
        .M23_AXI_awsize(smartconnect_0_M23_AXI_AWSIZE),
        .M23_AXI_awvalid(smartconnect_0_M23_AXI_AWVALID),
        .M23_AXI_bready(smartconnect_0_M23_AXI_BREADY),
        .M23_AXI_bresp(smartconnect_0_M23_AXI_BRESP),
        .M23_AXI_bvalid(smartconnect_0_M23_AXI_BVALID),
        .M23_AXI_rdata(smartconnect_0_M23_AXI_RDATA),
        .M23_AXI_rlast(smartconnect_0_M23_AXI_RLAST),
        .M23_AXI_rready(smartconnect_0_M23_AXI_RREADY),
        .M23_AXI_rresp(smartconnect_0_M23_AXI_RRESP),
        .M23_AXI_rvalid(smartconnect_0_M23_AXI_RVALID),
        .M23_AXI_wdata(smartconnect_0_M23_AXI_WDATA),
        .M23_AXI_wlast(smartconnect_0_M23_AXI_WLAST),
        .M23_AXI_wready(smartconnect_0_M23_AXI_WREADY),
        .M23_AXI_wstrb(smartconnect_0_M23_AXI_WSTRB),
        .M23_AXI_wvalid(smartconnect_0_M23_AXI_WVALID),
        .S00_AXI_araddr(axi_cdma_0_M_AXI_ARADDR),
        .S00_AXI_arburst(axi_cdma_0_M_AXI_ARBURST),
        .S00_AXI_arcache(axi_cdma_0_M_AXI_ARCACHE),
        .S00_AXI_arlen(axi_cdma_0_M_AXI_ARLEN),
        .S00_AXI_arlock(1'b0),
        .S00_AXI_arprot(axi_cdma_0_M_AXI_ARPROT),
        .S00_AXI_arqos({1'b0,1'b0,1'b0,1'b0}),
        .S00_AXI_arready(axi_cdma_0_M_AXI_ARREADY),
        .S00_AXI_arsize(axi_cdma_0_M_AXI_ARSIZE),
        .S00_AXI_arvalid(axi_cdma_0_M_AXI_ARVALID),
        .S00_AXI_awaddr(axi_cdma_0_M_AXI_AWADDR),
        .S00_AXI_awburst(axi_cdma_0_M_AXI_AWBURST),
        .S00_AXI_awcache(axi_cdma_0_M_AXI_AWCACHE),
        .S00_AXI_awlen(axi_cdma_0_M_AXI_AWLEN),
        .S00_AXI_awlock(1'b0),
        .S00_AXI_awprot(axi_cdma_0_M_AXI_AWPROT),
        .S00_AXI_awqos({1'b0,1'b0,1'b0,1'b0}),
        .S00_AXI_awready(axi_cdma_0_M_AXI_AWREADY),
        .S00_AXI_awsize(axi_cdma_0_M_AXI_AWSIZE),
        .S00_AXI_awvalid(axi_cdma_0_M_AXI_AWVALID),
        .S00_AXI_bready(axi_cdma_0_M_AXI_BREADY),
        .S00_AXI_bresp(axi_cdma_0_M_AXI_BRESP),
        .S00_AXI_bvalid(axi_cdma_0_M_AXI_BVALID),
        .S00_AXI_rdata(axi_cdma_0_M_AXI_RDATA),
        .S00_AXI_rlast(axi_cdma_0_M_AXI_RLAST),
        .S00_AXI_rready(axi_cdma_0_M_AXI_RREADY),
        .S00_AXI_rresp(axi_cdma_0_M_AXI_RRESP),
        .S00_AXI_rvalid(axi_cdma_0_M_AXI_RVALID),
        .S00_AXI_wdata(axi_cdma_0_M_AXI_WDATA),
        .S00_AXI_wlast(axi_cdma_0_M_AXI_WLAST),
        .S00_AXI_wready(axi_cdma_0_M_AXI_WREADY),
        .S00_AXI_wstrb(axi_cdma_0_M_AXI_WSTRB),
        .S00_AXI_wvalid(axi_cdma_0_M_AXI_WVALID),
        .aclk(processing_system7_0_FCLK_CLK0),
        .aresetn(rst_ps7_0_100M_peripheral_aresetn));
endmodule

module Multi_convo_core_ps7_0_axi_periph_0
   (ACLK,
    ARESETN,
    M00_ACLK,
    M00_ARESETN,
    M00_AXI_araddr,
    M00_AXI_arready,
    M00_AXI_arvalid,
    M00_AXI_awaddr,
    M00_AXI_awready,
    M00_AXI_awvalid,
    M00_AXI_bready,
    M00_AXI_bresp,
    M00_AXI_bvalid,
    M00_AXI_rdata,
    M00_AXI_rready,
    M00_AXI_rresp,
    M00_AXI_rvalid,
    M00_AXI_wdata,
    M00_AXI_wready,
    M00_AXI_wvalid,
    M01_ACLK,
    M01_ARESETN,
    M01_AXI_araddr,
    M01_AXI_arprot,
    M01_AXI_arready,
    M01_AXI_arvalid,
    M01_AXI_awaddr,
    M01_AXI_awprot,
    M01_AXI_awready,
    M01_AXI_awvalid,
    M01_AXI_bready,
    M01_AXI_bresp,
    M01_AXI_bvalid,
    M01_AXI_rdata,
    M01_AXI_rready,
    M01_AXI_rresp,
    M01_AXI_rvalid,
    M01_AXI_wdata,
    M01_AXI_wready,
    M01_AXI_wstrb,
    M01_AXI_wvalid,
    S00_ACLK,
    S00_ARESETN,
    S00_AXI_araddr,
    S00_AXI_arburst,
    S00_AXI_arcache,
    S00_AXI_arid,
    S00_AXI_arlen,
    S00_AXI_arlock,
    S00_AXI_arprot,
    S00_AXI_arqos,
    S00_AXI_arready,
    S00_AXI_arsize,
    S00_AXI_arvalid,
    S00_AXI_awaddr,
    S00_AXI_awburst,
    S00_AXI_awcache,
    S00_AXI_awid,
    S00_AXI_awlen,
    S00_AXI_awlock,
    S00_AXI_awprot,
    S00_AXI_awqos,
    S00_AXI_awready,
    S00_AXI_awsize,
    S00_AXI_awvalid,
    S00_AXI_bid,
    S00_AXI_bready,
    S00_AXI_bresp,
    S00_AXI_bvalid,
    S00_AXI_rdata,
    S00_AXI_rid,
    S00_AXI_rlast,
    S00_AXI_rready,
    S00_AXI_rresp,
    S00_AXI_rvalid,
    S00_AXI_wdata,
    S00_AXI_wid,
    S00_AXI_wlast,
    S00_AXI_wready,
    S00_AXI_wstrb,
    S00_AXI_wvalid);
  input ACLK;
  input ARESETN;
  input M00_ACLK;
  input M00_ARESETN;
  output [31:0]M00_AXI_araddr;
  input [0:0]M00_AXI_arready;
  output [0:0]M00_AXI_arvalid;
  output [31:0]M00_AXI_awaddr;
  input [0:0]M00_AXI_awready;
  output [0:0]M00_AXI_awvalid;
  output [0:0]M00_AXI_bready;
  input [1:0]M00_AXI_bresp;
  input [0:0]M00_AXI_bvalid;
  input [31:0]M00_AXI_rdata;
  output [0:0]M00_AXI_rready;
  input [1:0]M00_AXI_rresp;
  input [0:0]M00_AXI_rvalid;
  output [31:0]M00_AXI_wdata;
  input [0:0]M00_AXI_wready;
  output [0:0]M00_AXI_wvalid;
  input M01_ACLK;
  input M01_ARESETN;
  output [31:0]M01_AXI_araddr;
  output [2:0]M01_AXI_arprot;
  input M01_AXI_arready;
  output M01_AXI_arvalid;
  output [31:0]M01_AXI_awaddr;
  output [2:0]M01_AXI_awprot;
  input M01_AXI_awready;
  output M01_AXI_awvalid;
  output M01_AXI_bready;
  input [1:0]M01_AXI_bresp;
  input M01_AXI_bvalid;
  input [31:0]M01_AXI_rdata;
  output M01_AXI_rready;
  input [1:0]M01_AXI_rresp;
  input M01_AXI_rvalid;
  output [31:0]M01_AXI_wdata;
  input M01_AXI_wready;
  output [3:0]M01_AXI_wstrb;
  output M01_AXI_wvalid;
  input S00_ACLK;
  input S00_ARESETN;
  input [31:0]S00_AXI_araddr;
  input [1:0]S00_AXI_arburst;
  input [3:0]S00_AXI_arcache;
  input [11:0]S00_AXI_arid;
  input [3:0]S00_AXI_arlen;
  input [1:0]S00_AXI_arlock;
  input [2:0]S00_AXI_arprot;
  input [3:0]S00_AXI_arqos;
  output S00_AXI_arready;
  input [2:0]S00_AXI_arsize;
  input S00_AXI_arvalid;
  input [31:0]S00_AXI_awaddr;
  input [1:0]S00_AXI_awburst;
  input [3:0]S00_AXI_awcache;
  input [11:0]S00_AXI_awid;
  input [3:0]S00_AXI_awlen;
  input [1:0]S00_AXI_awlock;
  input [2:0]S00_AXI_awprot;
  input [3:0]S00_AXI_awqos;
  output S00_AXI_awready;
  input [2:0]S00_AXI_awsize;
  input S00_AXI_awvalid;
  output [11:0]S00_AXI_bid;
  input S00_AXI_bready;
  output [1:0]S00_AXI_bresp;
  output S00_AXI_bvalid;
  output [31:0]S00_AXI_rdata;
  output [11:0]S00_AXI_rid;
  output S00_AXI_rlast;
  input S00_AXI_rready;
  output [1:0]S00_AXI_rresp;
  output S00_AXI_rvalid;
  input [31:0]S00_AXI_wdata;
  input [11:0]S00_AXI_wid;
  input S00_AXI_wlast;
  output S00_AXI_wready;
  input [3:0]S00_AXI_wstrb;
  input S00_AXI_wvalid;

  wire [31:0]m00_couplers_to_ps7_0_axi_periph_ARADDR;
  wire [0:0]m00_couplers_to_ps7_0_axi_periph_ARREADY;
  wire [0:0]m00_couplers_to_ps7_0_axi_periph_ARVALID;
  wire [31:0]m00_couplers_to_ps7_0_axi_periph_AWADDR;
  wire [0:0]m00_couplers_to_ps7_0_axi_periph_AWREADY;
  wire [0:0]m00_couplers_to_ps7_0_axi_periph_AWVALID;
  wire [0:0]m00_couplers_to_ps7_0_axi_periph_BREADY;
  wire [1:0]m00_couplers_to_ps7_0_axi_periph_BRESP;
  wire [0:0]m00_couplers_to_ps7_0_axi_periph_BVALID;
  wire [31:0]m00_couplers_to_ps7_0_axi_periph_RDATA;
  wire [0:0]m00_couplers_to_ps7_0_axi_periph_RREADY;
  wire [1:0]m00_couplers_to_ps7_0_axi_periph_RRESP;
  wire [0:0]m00_couplers_to_ps7_0_axi_periph_RVALID;
  wire [31:0]m00_couplers_to_ps7_0_axi_periph_WDATA;
  wire [0:0]m00_couplers_to_ps7_0_axi_periph_WREADY;
  wire [0:0]m00_couplers_to_ps7_0_axi_periph_WVALID;
  wire [31:0]m01_couplers_to_ps7_0_axi_periph_ARADDR;
  wire [2:0]m01_couplers_to_ps7_0_axi_periph_ARPROT;
  wire m01_couplers_to_ps7_0_axi_periph_ARREADY;
  wire m01_couplers_to_ps7_0_axi_periph_ARVALID;
  wire [31:0]m01_couplers_to_ps7_0_axi_periph_AWADDR;
  wire [2:0]m01_couplers_to_ps7_0_axi_periph_AWPROT;
  wire m01_couplers_to_ps7_0_axi_periph_AWREADY;
  wire m01_couplers_to_ps7_0_axi_periph_AWVALID;
  wire m01_couplers_to_ps7_0_axi_periph_BREADY;
  wire [1:0]m01_couplers_to_ps7_0_axi_periph_BRESP;
  wire m01_couplers_to_ps7_0_axi_periph_BVALID;
  wire [31:0]m01_couplers_to_ps7_0_axi_periph_RDATA;
  wire m01_couplers_to_ps7_0_axi_periph_RREADY;
  wire [1:0]m01_couplers_to_ps7_0_axi_periph_RRESP;
  wire m01_couplers_to_ps7_0_axi_periph_RVALID;
  wire [31:0]m01_couplers_to_ps7_0_axi_periph_WDATA;
  wire m01_couplers_to_ps7_0_axi_periph_WREADY;
  wire [3:0]m01_couplers_to_ps7_0_axi_periph_WSTRB;
  wire m01_couplers_to_ps7_0_axi_periph_WVALID;
  wire ps7_0_axi_periph_ACLK_net;
  wire ps7_0_axi_periph_ARESETN_net;
  wire [31:0]ps7_0_axi_periph_to_s00_couplers_ARADDR;
  wire [1:0]ps7_0_axi_periph_to_s00_couplers_ARBURST;
  wire [3:0]ps7_0_axi_periph_to_s00_couplers_ARCACHE;
  wire [11:0]ps7_0_axi_periph_to_s00_couplers_ARID;
  wire [3:0]ps7_0_axi_periph_to_s00_couplers_ARLEN;
  wire [1:0]ps7_0_axi_periph_to_s00_couplers_ARLOCK;
  wire [2:0]ps7_0_axi_periph_to_s00_couplers_ARPROT;
  wire [3:0]ps7_0_axi_periph_to_s00_couplers_ARQOS;
  wire ps7_0_axi_periph_to_s00_couplers_ARREADY;
  wire [2:0]ps7_0_axi_periph_to_s00_couplers_ARSIZE;
  wire ps7_0_axi_periph_to_s00_couplers_ARVALID;
  wire [31:0]ps7_0_axi_periph_to_s00_couplers_AWADDR;
  wire [1:0]ps7_0_axi_periph_to_s00_couplers_AWBURST;
  wire [3:0]ps7_0_axi_periph_to_s00_couplers_AWCACHE;
  wire [11:0]ps7_0_axi_periph_to_s00_couplers_AWID;
  wire [3:0]ps7_0_axi_periph_to_s00_couplers_AWLEN;
  wire [1:0]ps7_0_axi_periph_to_s00_couplers_AWLOCK;
  wire [2:0]ps7_0_axi_periph_to_s00_couplers_AWPROT;
  wire [3:0]ps7_0_axi_periph_to_s00_couplers_AWQOS;
  wire ps7_0_axi_periph_to_s00_couplers_AWREADY;
  wire [2:0]ps7_0_axi_periph_to_s00_couplers_AWSIZE;
  wire ps7_0_axi_periph_to_s00_couplers_AWVALID;
  wire [11:0]ps7_0_axi_periph_to_s00_couplers_BID;
  wire ps7_0_axi_periph_to_s00_couplers_BREADY;
  wire [1:0]ps7_0_axi_periph_to_s00_couplers_BRESP;
  wire ps7_0_axi_periph_to_s00_couplers_BVALID;
  wire [31:0]ps7_0_axi_periph_to_s00_couplers_RDATA;
  wire [11:0]ps7_0_axi_periph_to_s00_couplers_RID;
  wire ps7_0_axi_periph_to_s00_couplers_RLAST;
  wire ps7_0_axi_periph_to_s00_couplers_RREADY;
  wire [1:0]ps7_0_axi_periph_to_s00_couplers_RRESP;
  wire ps7_0_axi_periph_to_s00_couplers_RVALID;
  wire [31:0]ps7_0_axi_periph_to_s00_couplers_WDATA;
  wire [11:0]ps7_0_axi_periph_to_s00_couplers_WID;
  wire ps7_0_axi_periph_to_s00_couplers_WLAST;
  wire ps7_0_axi_periph_to_s00_couplers_WREADY;
  wire [3:0]ps7_0_axi_periph_to_s00_couplers_WSTRB;
  wire ps7_0_axi_periph_to_s00_couplers_WVALID;
  wire [31:0]s00_couplers_to_xbar_ARADDR;
  wire [2:0]s00_couplers_to_xbar_ARPROT;
  wire [0:0]s00_couplers_to_xbar_ARREADY;
  wire s00_couplers_to_xbar_ARVALID;
  wire [31:0]s00_couplers_to_xbar_AWADDR;
  wire [2:0]s00_couplers_to_xbar_AWPROT;
  wire [0:0]s00_couplers_to_xbar_AWREADY;
  wire s00_couplers_to_xbar_AWVALID;
  wire s00_couplers_to_xbar_BREADY;
  wire [1:0]s00_couplers_to_xbar_BRESP;
  wire [0:0]s00_couplers_to_xbar_BVALID;
  wire [31:0]s00_couplers_to_xbar_RDATA;
  wire s00_couplers_to_xbar_RREADY;
  wire [1:0]s00_couplers_to_xbar_RRESP;
  wire [0:0]s00_couplers_to_xbar_RVALID;
  wire [31:0]s00_couplers_to_xbar_WDATA;
  wire [0:0]s00_couplers_to_xbar_WREADY;
  wire [3:0]s00_couplers_to_xbar_WSTRB;
  wire s00_couplers_to_xbar_WVALID;
  wire [31:0]xbar_to_m00_couplers_ARADDR;
  wire [0:0]xbar_to_m00_couplers_ARREADY;
  wire [0:0]xbar_to_m00_couplers_ARVALID;
  wire [31:0]xbar_to_m00_couplers_AWADDR;
  wire [0:0]xbar_to_m00_couplers_AWREADY;
  wire [0:0]xbar_to_m00_couplers_AWVALID;
  wire [0:0]xbar_to_m00_couplers_BREADY;
  wire [1:0]xbar_to_m00_couplers_BRESP;
  wire [0:0]xbar_to_m00_couplers_BVALID;
  wire [31:0]xbar_to_m00_couplers_RDATA;
  wire [0:0]xbar_to_m00_couplers_RREADY;
  wire [1:0]xbar_to_m00_couplers_RRESP;
  wire [0:0]xbar_to_m00_couplers_RVALID;
  wire [31:0]xbar_to_m00_couplers_WDATA;
  wire [0:0]xbar_to_m00_couplers_WREADY;
  wire [0:0]xbar_to_m00_couplers_WVALID;
  wire [63:32]xbar_to_m01_couplers_ARADDR;
  wire [5:3]xbar_to_m01_couplers_ARPROT;
  wire xbar_to_m01_couplers_ARREADY;
  wire [1:1]xbar_to_m01_couplers_ARVALID;
  wire [63:32]xbar_to_m01_couplers_AWADDR;
  wire [5:3]xbar_to_m01_couplers_AWPROT;
  wire xbar_to_m01_couplers_AWREADY;
  wire [1:1]xbar_to_m01_couplers_AWVALID;
  wire [1:1]xbar_to_m01_couplers_BREADY;
  wire [1:0]xbar_to_m01_couplers_BRESP;
  wire xbar_to_m01_couplers_BVALID;
  wire [31:0]xbar_to_m01_couplers_RDATA;
  wire [1:1]xbar_to_m01_couplers_RREADY;
  wire [1:0]xbar_to_m01_couplers_RRESP;
  wire xbar_to_m01_couplers_RVALID;
  wire [63:32]xbar_to_m01_couplers_WDATA;
  wire xbar_to_m01_couplers_WREADY;
  wire [7:4]xbar_to_m01_couplers_WSTRB;
  wire [1:1]xbar_to_m01_couplers_WVALID;
  wire [5:0]NLW_xbar_m_axi_arprot_UNCONNECTED;
  wire [5:0]NLW_xbar_m_axi_awprot_UNCONNECTED;
  wire [7:0]NLW_xbar_m_axi_wstrb_UNCONNECTED;

  assign M00_AXI_araddr[31:0] = m00_couplers_to_ps7_0_axi_periph_ARADDR;
  assign M00_AXI_arvalid[0] = m00_couplers_to_ps7_0_axi_periph_ARVALID;
  assign M00_AXI_awaddr[31:0] = m00_couplers_to_ps7_0_axi_periph_AWADDR;
  assign M00_AXI_awvalid[0] = m00_couplers_to_ps7_0_axi_periph_AWVALID;
  assign M00_AXI_bready[0] = m00_couplers_to_ps7_0_axi_periph_BREADY;
  assign M00_AXI_rready[0] = m00_couplers_to_ps7_0_axi_periph_RREADY;
  assign M00_AXI_wdata[31:0] = m00_couplers_to_ps7_0_axi_periph_WDATA;
  assign M00_AXI_wvalid[0] = m00_couplers_to_ps7_0_axi_periph_WVALID;
  assign M01_AXI_araddr[31:0] = m01_couplers_to_ps7_0_axi_periph_ARADDR;
  assign M01_AXI_arprot[2:0] = m01_couplers_to_ps7_0_axi_periph_ARPROT;
  assign M01_AXI_arvalid = m01_couplers_to_ps7_0_axi_periph_ARVALID;
  assign M01_AXI_awaddr[31:0] = m01_couplers_to_ps7_0_axi_periph_AWADDR;
  assign M01_AXI_awprot[2:0] = m01_couplers_to_ps7_0_axi_periph_AWPROT;
  assign M01_AXI_awvalid = m01_couplers_to_ps7_0_axi_periph_AWVALID;
  assign M01_AXI_bready = m01_couplers_to_ps7_0_axi_periph_BREADY;
  assign M01_AXI_rready = m01_couplers_to_ps7_0_axi_periph_RREADY;
  assign M01_AXI_wdata[31:0] = m01_couplers_to_ps7_0_axi_periph_WDATA;
  assign M01_AXI_wstrb[3:0] = m01_couplers_to_ps7_0_axi_periph_WSTRB;
  assign M01_AXI_wvalid = m01_couplers_to_ps7_0_axi_periph_WVALID;
  assign S00_AXI_arready = ps7_0_axi_periph_to_s00_couplers_ARREADY;
  assign S00_AXI_awready = ps7_0_axi_periph_to_s00_couplers_AWREADY;
  assign S00_AXI_bid[11:0] = ps7_0_axi_periph_to_s00_couplers_BID;
  assign S00_AXI_bresp[1:0] = ps7_0_axi_periph_to_s00_couplers_BRESP;
  assign S00_AXI_bvalid = ps7_0_axi_periph_to_s00_couplers_BVALID;
  assign S00_AXI_rdata[31:0] = ps7_0_axi_periph_to_s00_couplers_RDATA;
  assign S00_AXI_rid[11:0] = ps7_0_axi_periph_to_s00_couplers_RID;
  assign S00_AXI_rlast = ps7_0_axi_periph_to_s00_couplers_RLAST;
  assign S00_AXI_rresp[1:0] = ps7_0_axi_periph_to_s00_couplers_RRESP;
  assign S00_AXI_rvalid = ps7_0_axi_periph_to_s00_couplers_RVALID;
  assign S00_AXI_wready = ps7_0_axi_periph_to_s00_couplers_WREADY;
  assign m00_couplers_to_ps7_0_axi_periph_ARREADY = M00_AXI_arready[0];
  assign m00_couplers_to_ps7_0_axi_periph_AWREADY = M00_AXI_awready[0];
  assign m00_couplers_to_ps7_0_axi_periph_BRESP = M00_AXI_bresp[1:0];
  assign m00_couplers_to_ps7_0_axi_periph_BVALID = M00_AXI_bvalid[0];
  assign m00_couplers_to_ps7_0_axi_periph_RDATA = M00_AXI_rdata[31:0];
  assign m00_couplers_to_ps7_0_axi_periph_RRESP = M00_AXI_rresp[1:0];
  assign m00_couplers_to_ps7_0_axi_periph_RVALID = M00_AXI_rvalid[0];
  assign m00_couplers_to_ps7_0_axi_periph_WREADY = M00_AXI_wready[0];
  assign m01_couplers_to_ps7_0_axi_periph_ARREADY = M01_AXI_arready;
  assign m01_couplers_to_ps7_0_axi_periph_AWREADY = M01_AXI_awready;
  assign m01_couplers_to_ps7_0_axi_periph_BRESP = M01_AXI_bresp[1:0];
  assign m01_couplers_to_ps7_0_axi_periph_BVALID = M01_AXI_bvalid;
  assign m01_couplers_to_ps7_0_axi_periph_RDATA = M01_AXI_rdata[31:0];
  assign m01_couplers_to_ps7_0_axi_periph_RRESP = M01_AXI_rresp[1:0];
  assign m01_couplers_to_ps7_0_axi_periph_RVALID = M01_AXI_rvalid;
  assign m01_couplers_to_ps7_0_axi_periph_WREADY = M01_AXI_wready;
  assign ps7_0_axi_periph_ACLK_net = ACLK;
  assign ps7_0_axi_periph_ARESETN_net = ARESETN;
  assign ps7_0_axi_periph_to_s00_couplers_ARADDR = S00_AXI_araddr[31:0];
  assign ps7_0_axi_periph_to_s00_couplers_ARBURST = S00_AXI_arburst[1:0];
  assign ps7_0_axi_periph_to_s00_couplers_ARCACHE = S00_AXI_arcache[3:0];
  assign ps7_0_axi_periph_to_s00_couplers_ARID = S00_AXI_arid[11:0];
  assign ps7_0_axi_periph_to_s00_couplers_ARLEN = S00_AXI_arlen[3:0];
  assign ps7_0_axi_periph_to_s00_couplers_ARLOCK = S00_AXI_arlock[1:0];
  assign ps7_0_axi_periph_to_s00_couplers_ARPROT = S00_AXI_arprot[2:0];
  assign ps7_0_axi_periph_to_s00_couplers_ARQOS = S00_AXI_arqos[3:0];
  assign ps7_0_axi_periph_to_s00_couplers_ARSIZE = S00_AXI_arsize[2:0];
  assign ps7_0_axi_periph_to_s00_couplers_ARVALID = S00_AXI_arvalid;
  assign ps7_0_axi_periph_to_s00_couplers_AWADDR = S00_AXI_awaddr[31:0];
  assign ps7_0_axi_periph_to_s00_couplers_AWBURST = S00_AXI_awburst[1:0];
  assign ps7_0_axi_periph_to_s00_couplers_AWCACHE = S00_AXI_awcache[3:0];
  assign ps7_0_axi_periph_to_s00_couplers_AWID = S00_AXI_awid[11:0];
  assign ps7_0_axi_periph_to_s00_couplers_AWLEN = S00_AXI_awlen[3:0];
  assign ps7_0_axi_periph_to_s00_couplers_AWLOCK = S00_AXI_awlock[1:0];
  assign ps7_0_axi_periph_to_s00_couplers_AWPROT = S00_AXI_awprot[2:0];
  assign ps7_0_axi_periph_to_s00_couplers_AWQOS = S00_AXI_awqos[3:0];
  assign ps7_0_axi_periph_to_s00_couplers_AWSIZE = S00_AXI_awsize[2:0];
  assign ps7_0_axi_periph_to_s00_couplers_AWVALID = S00_AXI_awvalid;
  assign ps7_0_axi_periph_to_s00_couplers_BREADY = S00_AXI_bready;
  assign ps7_0_axi_periph_to_s00_couplers_RREADY = S00_AXI_rready;
  assign ps7_0_axi_periph_to_s00_couplers_WDATA = S00_AXI_wdata[31:0];
  assign ps7_0_axi_periph_to_s00_couplers_WID = S00_AXI_wid[11:0];
  assign ps7_0_axi_periph_to_s00_couplers_WLAST = S00_AXI_wlast;
  assign ps7_0_axi_periph_to_s00_couplers_WSTRB = S00_AXI_wstrb[3:0];
  assign ps7_0_axi_periph_to_s00_couplers_WVALID = S00_AXI_wvalid;
  m00_couplers_imp_FRMSS4 m00_couplers
       (.M_ACLK(ps7_0_axi_periph_ACLK_net),
        .M_ARESETN(ps7_0_axi_periph_ARESETN_net),
        .M_AXI_araddr(m00_couplers_to_ps7_0_axi_periph_ARADDR),
        .M_AXI_arready(m00_couplers_to_ps7_0_axi_periph_ARREADY),
        .M_AXI_arvalid(m00_couplers_to_ps7_0_axi_periph_ARVALID),
        .M_AXI_awaddr(m00_couplers_to_ps7_0_axi_periph_AWADDR),
        .M_AXI_awready(m00_couplers_to_ps7_0_axi_periph_AWREADY),
        .M_AXI_awvalid(m00_couplers_to_ps7_0_axi_periph_AWVALID),
        .M_AXI_bready(m00_couplers_to_ps7_0_axi_periph_BREADY),
        .M_AXI_bresp(m00_couplers_to_ps7_0_axi_periph_BRESP),
        .M_AXI_bvalid(m00_couplers_to_ps7_0_axi_periph_BVALID),
        .M_AXI_rdata(m00_couplers_to_ps7_0_axi_periph_RDATA),
        .M_AXI_rready(m00_couplers_to_ps7_0_axi_periph_RREADY),
        .M_AXI_rresp(m00_couplers_to_ps7_0_axi_periph_RRESP),
        .M_AXI_rvalid(m00_couplers_to_ps7_0_axi_periph_RVALID),
        .M_AXI_wdata(m00_couplers_to_ps7_0_axi_periph_WDATA),
        .M_AXI_wready(m00_couplers_to_ps7_0_axi_periph_WREADY),
        .M_AXI_wvalid(m00_couplers_to_ps7_0_axi_periph_WVALID),
        .S_ACLK(ps7_0_axi_periph_ACLK_net),
        .S_ARESETN(ps7_0_axi_periph_ARESETN_net),
        .S_AXI_araddr(xbar_to_m00_couplers_ARADDR),
        .S_AXI_arready(xbar_to_m00_couplers_ARREADY),
        .S_AXI_arvalid(xbar_to_m00_couplers_ARVALID),
        .S_AXI_awaddr(xbar_to_m00_couplers_AWADDR),
        .S_AXI_awready(xbar_to_m00_couplers_AWREADY),
        .S_AXI_awvalid(xbar_to_m00_couplers_AWVALID),
        .S_AXI_bready(xbar_to_m00_couplers_BREADY),
        .S_AXI_bresp(xbar_to_m00_couplers_BRESP),
        .S_AXI_bvalid(xbar_to_m00_couplers_BVALID),
        .S_AXI_rdata(xbar_to_m00_couplers_RDATA),
        .S_AXI_rready(xbar_to_m00_couplers_RREADY),
        .S_AXI_rresp(xbar_to_m00_couplers_RRESP),
        .S_AXI_rvalid(xbar_to_m00_couplers_RVALID),
        .S_AXI_wdata(xbar_to_m00_couplers_WDATA),
        .S_AXI_wready(xbar_to_m00_couplers_WREADY),
        .S_AXI_wvalid(xbar_to_m00_couplers_WVALID));
  m01_couplers_imp_1Q3JGDF m01_couplers
       (.M_ACLK(ps7_0_axi_periph_ACLK_net),
        .M_ARESETN(ps7_0_axi_periph_ARESETN_net),
        .M_AXI_araddr(m01_couplers_to_ps7_0_axi_periph_ARADDR),
        .M_AXI_arprot(m01_couplers_to_ps7_0_axi_periph_ARPROT),
        .M_AXI_arready(m01_couplers_to_ps7_0_axi_periph_ARREADY),
        .M_AXI_arvalid(m01_couplers_to_ps7_0_axi_periph_ARVALID),
        .M_AXI_awaddr(m01_couplers_to_ps7_0_axi_periph_AWADDR),
        .M_AXI_awprot(m01_couplers_to_ps7_0_axi_periph_AWPROT),
        .M_AXI_awready(m01_couplers_to_ps7_0_axi_periph_AWREADY),
        .M_AXI_awvalid(m01_couplers_to_ps7_0_axi_periph_AWVALID),
        .M_AXI_bready(m01_couplers_to_ps7_0_axi_periph_BREADY),
        .M_AXI_bresp(m01_couplers_to_ps7_0_axi_periph_BRESP),
        .M_AXI_bvalid(m01_couplers_to_ps7_0_axi_periph_BVALID),
        .M_AXI_rdata(m01_couplers_to_ps7_0_axi_periph_RDATA),
        .M_AXI_rready(m01_couplers_to_ps7_0_axi_periph_RREADY),
        .M_AXI_rresp(m01_couplers_to_ps7_0_axi_periph_RRESP),
        .M_AXI_rvalid(m01_couplers_to_ps7_0_axi_periph_RVALID),
        .M_AXI_wdata(m01_couplers_to_ps7_0_axi_periph_WDATA),
        .M_AXI_wready(m01_couplers_to_ps7_0_axi_periph_WREADY),
        .M_AXI_wstrb(m01_couplers_to_ps7_0_axi_periph_WSTRB),
        .M_AXI_wvalid(m01_couplers_to_ps7_0_axi_periph_WVALID),
        .S_ACLK(ps7_0_axi_periph_ACLK_net),
        .S_ARESETN(ps7_0_axi_periph_ARESETN_net),
        .S_AXI_araddr(xbar_to_m01_couplers_ARADDR),
        .S_AXI_arprot(xbar_to_m01_couplers_ARPROT),
        .S_AXI_arready(xbar_to_m01_couplers_ARREADY),
        .S_AXI_arvalid(xbar_to_m01_couplers_ARVALID),
        .S_AXI_awaddr(xbar_to_m01_couplers_AWADDR),
        .S_AXI_awprot(xbar_to_m01_couplers_AWPROT),
        .S_AXI_awready(xbar_to_m01_couplers_AWREADY),
        .S_AXI_awvalid(xbar_to_m01_couplers_AWVALID),
        .S_AXI_bready(xbar_to_m01_couplers_BREADY),
        .S_AXI_bresp(xbar_to_m01_couplers_BRESP),
        .S_AXI_bvalid(xbar_to_m01_couplers_BVALID),
        .S_AXI_rdata(xbar_to_m01_couplers_RDATA),
        .S_AXI_rready(xbar_to_m01_couplers_RREADY),
        .S_AXI_rresp(xbar_to_m01_couplers_RRESP),
        .S_AXI_rvalid(xbar_to_m01_couplers_RVALID),
        .S_AXI_wdata(xbar_to_m01_couplers_WDATA),
        .S_AXI_wready(xbar_to_m01_couplers_WREADY),
        .S_AXI_wstrb(xbar_to_m01_couplers_WSTRB),
        .S_AXI_wvalid(xbar_to_m01_couplers_WVALID));
  s00_couplers_imp_C3R51E s00_couplers
       (.M_ACLK(ps7_0_axi_periph_ACLK_net),
        .M_ARESETN(ps7_0_axi_periph_ARESETN_net),
        .M_AXI_araddr(s00_couplers_to_xbar_ARADDR),
        .M_AXI_arprot(s00_couplers_to_xbar_ARPROT),
        .M_AXI_arready(s00_couplers_to_xbar_ARREADY),
        .M_AXI_arvalid(s00_couplers_to_xbar_ARVALID),
        .M_AXI_awaddr(s00_couplers_to_xbar_AWADDR),
        .M_AXI_awprot(s00_couplers_to_xbar_AWPROT),
        .M_AXI_awready(s00_couplers_to_xbar_AWREADY),
        .M_AXI_awvalid(s00_couplers_to_xbar_AWVALID),
        .M_AXI_bready(s00_couplers_to_xbar_BREADY),
        .M_AXI_bresp(s00_couplers_to_xbar_BRESP),
        .M_AXI_bvalid(s00_couplers_to_xbar_BVALID),
        .M_AXI_rdata(s00_couplers_to_xbar_RDATA),
        .M_AXI_rready(s00_couplers_to_xbar_RREADY),
        .M_AXI_rresp(s00_couplers_to_xbar_RRESP),
        .M_AXI_rvalid(s00_couplers_to_xbar_RVALID),
        .M_AXI_wdata(s00_couplers_to_xbar_WDATA),
        .M_AXI_wready(s00_couplers_to_xbar_WREADY),
        .M_AXI_wstrb(s00_couplers_to_xbar_WSTRB),
        .M_AXI_wvalid(s00_couplers_to_xbar_WVALID),
        .S_ACLK(ps7_0_axi_periph_ACLK_net),
        .S_ARESETN(ps7_0_axi_periph_ARESETN_net),
        .S_AXI_araddr(ps7_0_axi_periph_to_s00_couplers_ARADDR),
        .S_AXI_arburst(ps7_0_axi_periph_to_s00_couplers_ARBURST),
        .S_AXI_arcache(ps7_0_axi_periph_to_s00_couplers_ARCACHE),
        .S_AXI_arid(ps7_0_axi_periph_to_s00_couplers_ARID),
        .S_AXI_arlen(ps7_0_axi_periph_to_s00_couplers_ARLEN),
        .S_AXI_arlock(ps7_0_axi_periph_to_s00_couplers_ARLOCK),
        .S_AXI_arprot(ps7_0_axi_periph_to_s00_couplers_ARPROT),
        .S_AXI_arqos(ps7_0_axi_periph_to_s00_couplers_ARQOS),
        .S_AXI_arready(ps7_0_axi_periph_to_s00_couplers_ARREADY),
        .S_AXI_arsize(ps7_0_axi_periph_to_s00_couplers_ARSIZE),
        .S_AXI_arvalid(ps7_0_axi_periph_to_s00_couplers_ARVALID),
        .S_AXI_awaddr(ps7_0_axi_periph_to_s00_couplers_AWADDR),
        .S_AXI_awburst(ps7_0_axi_periph_to_s00_couplers_AWBURST),
        .S_AXI_awcache(ps7_0_axi_periph_to_s00_couplers_AWCACHE),
        .S_AXI_awid(ps7_0_axi_periph_to_s00_couplers_AWID),
        .S_AXI_awlen(ps7_0_axi_periph_to_s00_couplers_AWLEN),
        .S_AXI_awlock(ps7_0_axi_periph_to_s00_couplers_AWLOCK),
        .S_AXI_awprot(ps7_0_axi_periph_to_s00_couplers_AWPROT),
        .S_AXI_awqos(ps7_0_axi_periph_to_s00_couplers_AWQOS),
        .S_AXI_awready(ps7_0_axi_periph_to_s00_couplers_AWREADY),
        .S_AXI_awsize(ps7_0_axi_periph_to_s00_couplers_AWSIZE),
        .S_AXI_awvalid(ps7_0_axi_periph_to_s00_couplers_AWVALID),
        .S_AXI_bid(ps7_0_axi_periph_to_s00_couplers_BID),
        .S_AXI_bready(ps7_0_axi_periph_to_s00_couplers_BREADY),
        .S_AXI_bresp(ps7_0_axi_periph_to_s00_couplers_BRESP),
        .S_AXI_bvalid(ps7_0_axi_periph_to_s00_couplers_BVALID),
        .S_AXI_rdata(ps7_0_axi_periph_to_s00_couplers_RDATA),
        .S_AXI_rid(ps7_0_axi_periph_to_s00_couplers_RID),
        .S_AXI_rlast(ps7_0_axi_periph_to_s00_couplers_RLAST),
        .S_AXI_rready(ps7_0_axi_periph_to_s00_couplers_RREADY),
        .S_AXI_rresp(ps7_0_axi_periph_to_s00_couplers_RRESP),
        .S_AXI_rvalid(ps7_0_axi_periph_to_s00_couplers_RVALID),
        .S_AXI_wdata(ps7_0_axi_periph_to_s00_couplers_WDATA),
        .S_AXI_wid(ps7_0_axi_periph_to_s00_couplers_WID),
        .S_AXI_wlast(ps7_0_axi_periph_to_s00_couplers_WLAST),
        .S_AXI_wready(ps7_0_axi_periph_to_s00_couplers_WREADY),
        .S_AXI_wstrb(ps7_0_axi_periph_to_s00_couplers_WSTRB),
        .S_AXI_wvalid(ps7_0_axi_periph_to_s00_couplers_WVALID));
  Multi_convo_core_xbar_0 xbar
       (.aclk(ps7_0_axi_periph_ACLK_net),
        .aresetn(ps7_0_axi_periph_ARESETN_net),
        .m_axi_araddr({xbar_to_m01_couplers_ARADDR,xbar_to_m00_couplers_ARADDR}),
        .m_axi_arprot({xbar_to_m01_couplers_ARPROT,NLW_xbar_m_axi_arprot_UNCONNECTED[2:0]}),
        .m_axi_arready({xbar_to_m01_couplers_ARREADY,xbar_to_m00_couplers_ARREADY}),
        .m_axi_arvalid({xbar_to_m01_couplers_ARVALID,xbar_to_m00_couplers_ARVALID}),
        .m_axi_awaddr({xbar_to_m01_couplers_AWADDR,xbar_to_m00_couplers_AWADDR}),
        .m_axi_awprot({xbar_to_m01_couplers_AWPROT,NLW_xbar_m_axi_awprot_UNCONNECTED[2:0]}),
        .m_axi_awready({xbar_to_m01_couplers_AWREADY,xbar_to_m00_couplers_AWREADY}),
        .m_axi_awvalid({xbar_to_m01_couplers_AWVALID,xbar_to_m00_couplers_AWVALID}),
        .m_axi_bready({xbar_to_m01_couplers_BREADY,xbar_to_m00_couplers_BREADY}),
        .m_axi_bresp({xbar_to_m01_couplers_BRESP,xbar_to_m00_couplers_BRESP}),
        .m_axi_bvalid({xbar_to_m01_couplers_BVALID,xbar_to_m00_couplers_BVALID}),
        .m_axi_rdata({xbar_to_m01_couplers_RDATA,xbar_to_m00_couplers_RDATA}),
        .m_axi_rready({xbar_to_m01_couplers_RREADY,xbar_to_m00_couplers_RREADY}),
        .m_axi_rresp({xbar_to_m01_couplers_RRESP,xbar_to_m00_couplers_RRESP}),
        .m_axi_rvalid({xbar_to_m01_couplers_RVALID,xbar_to_m00_couplers_RVALID}),
        .m_axi_wdata({xbar_to_m01_couplers_WDATA,xbar_to_m00_couplers_WDATA}),
        .m_axi_wready({xbar_to_m01_couplers_WREADY,xbar_to_m00_couplers_WREADY}),
        .m_axi_wstrb({xbar_to_m01_couplers_WSTRB,NLW_xbar_m_axi_wstrb_UNCONNECTED[3:0]}),
        .m_axi_wvalid({xbar_to_m01_couplers_WVALID,xbar_to_m00_couplers_WVALID}),
        .s_axi_araddr(s00_couplers_to_xbar_ARADDR),
        .s_axi_arprot(s00_couplers_to_xbar_ARPROT),
        .s_axi_arready(s00_couplers_to_xbar_ARREADY),
        .s_axi_arvalid(s00_couplers_to_xbar_ARVALID),
        .s_axi_awaddr(s00_couplers_to_xbar_AWADDR),
        .s_axi_awprot(s00_couplers_to_xbar_AWPROT),
        .s_axi_awready(s00_couplers_to_xbar_AWREADY),
        .s_axi_awvalid(s00_couplers_to_xbar_AWVALID),
        .s_axi_bready(s00_couplers_to_xbar_BREADY),
        .s_axi_bresp(s00_couplers_to_xbar_BRESP),
        .s_axi_bvalid(s00_couplers_to_xbar_BVALID),
        .s_axi_rdata(s00_couplers_to_xbar_RDATA),
        .s_axi_rready(s00_couplers_to_xbar_RREADY),
        .s_axi_rresp(s00_couplers_to_xbar_RRESP),
        .s_axi_rvalid(s00_couplers_to_xbar_RVALID),
        .s_axi_wdata(s00_couplers_to_xbar_WDATA),
        .s_axi_wready(s00_couplers_to_xbar_WREADY),
        .s_axi_wstrb(s00_couplers_to_xbar_WSTRB),
        .s_axi_wvalid(s00_couplers_to_xbar_WVALID));
endmodule

module m00_couplers_imp_FRMSS4
   (M_ACLK,
    M_ARESETN,
    M_AXI_araddr,
    M_AXI_arready,
    M_AXI_arvalid,
    M_AXI_awaddr,
    M_AXI_awready,
    M_AXI_awvalid,
    M_AXI_bready,
    M_AXI_bresp,
    M_AXI_bvalid,
    M_AXI_rdata,
    M_AXI_rready,
    M_AXI_rresp,
    M_AXI_rvalid,
    M_AXI_wdata,
    M_AXI_wready,
    M_AXI_wvalid,
    S_ACLK,
    S_ARESETN,
    S_AXI_araddr,
    S_AXI_arready,
    S_AXI_arvalid,
    S_AXI_awaddr,
    S_AXI_awready,
    S_AXI_awvalid,
    S_AXI_bready,
    S_AXI_bresp,
    S_AXI_bvalid,
    S_AXI_rdata,
    S_AXI_rready,
    S_AXI_rresp,
    S_AXI_rvalid,
    S_AXI_wdata,
    S_AXI_wready,
    S_AXI_wvalid);
  input M_ACLK;
  input M_ARESETN;
  output [31:0]M_AXI_araddr;
  input [0:0]M_AXI_arready;
  output [0:0]M_AXI_arvalid;
  output [31:0]M_AXI_awaddr;
  input [0:0]M_AXI_awready;
  output [0:0]M_AXI_awvalid;
  output [0:0]M_AXI_bready;
  input [1:0]M_AXI_bresp;
  input [0:0]M_AXI_bvalid;
  input [31:0]M_AXI_rdata;
  output [0:0]M_AXI_rready;
  input [1:0]M_AXI_rresp;
  input [0:0]M_AXI_rvalid;
  output [31:0]M_AXI_wdata;
  input [0:0]M_AXI_wready;
  output [0:0]M_AXI_wvalid;
  input S_ACLK;
  input S_ARESETN;
  input [31:0]S_AXI_araddr;
  output [0:0]S_AXI_arready;
  input [0:0]S_AXI_arvalid;
  input [31:0]S_AXI_awaddr;
  output [0:0]S_AXI_awready;
  input [0:0]S_AXI_awvalid;
  input [0:0]S_AXI_bready;
  output [1:0]S_AXI_bresp;
  output [0:0]S_AXI_bvalid;
  output [31:0]S_AXI_rdata;
  input [0:0]S_AXI_rready;
  output [1:0]S_AXI_rresp;
  output [0:0]S_AXI_rvalid;
  input [31:0]S_AXI_wdata;
  output [0:0]S_AXI_wready;
  input [0:0]S_AXI_wvalid;

  wire [31:0]m00_couplers_to_m00_couplers_ARADDR;
  wire [0:0]m00_couplers_to_m00_couplers_ARREADY;
  wire [0:0]m00_couplers_to_m00_couplers_ARVALID;
  wire [31:0]m00_couplers_to_m00_couplers_AWADDR;
  wire [0:0]m00_couplers_to_m00_couplers_AWREADY;
  wire [0:0]m00_couplers_to_m00_couplers_AWVALID;
  wire [0:0]m00_couplers_to_m00_couplers_BREADY;
  wire [1:0]m00_couplers_to_m00_couplers_BRESP;
  wire [0:0]m00_couplers_to_m00_couplers_BVALID;
  wire [31:0]m00_couplers_to_m00_couplers_RDATA;
  wire [0:0]m00_couplers_to_m00_couplers_RREADY;
  wire [1:0]m00_couplers_to_m00_couplers_RRESP;
  wire [0:0]m00_couplers_to_m00_couplers_RVALID;
  wire [31:0]m00_couplers_to_m00_couplers_WDATA;
  wire [0:0]m00_couplers_to_m00_couplers_WREADY;
  wire [0:0]m00_couplers_to_m00_couplers_WVALID;

  assign M_AXI_araddr[31:0] = m00_couplers_to_m00_couplers_ARADDR;
  assign M_AXI_arvalid[0] = m00_couplers_to_m00_couplers_ARVALID;
  assign M_AXI_awaddr[31:0] = m00_couplers_to_m00_couplers_AWADDR;
  assign M_AXI_awvalid[0] = m00_couplers_to_m00_couplers_AWVALID;
  assign M_AXI_bready[0] = m00_couplers_to_m00_couplers_BREADY;
  assign M_AXI_rready[0] = m00_couplers_to_m00_couplers_RREADY;
  assign M_AXI_wdata[31:0] = m00_couplers_to_m00_couplers_WDATA;
  assign M_AXI_wvalid[0] = m00_couplers_to_m00_couplers_WVALID;
  assign S_AXI_arready[0] = m00_couplers_to_m00_couplers_ARREADY;
  assign S_AXI_awready[0] = m00_couplers_to_m00_couplers_AWREADY;
  assign S_AXI_bresp[1:0] = m00_couplers_to_m00_couplers_BRESP;
  assign S_AXI_bvalid[0] = m00_couplers_to_m00_couplers_BVALID;
  assign S_AXI_rdata[31:0] = m00_couplers_to_m00_couplers_RDATA;
  assign S_AXI_rresp[1:0] = m00_couplers_to_m00_couplers_RRESP;
  assign S_AXI_rvalid[0] = m00_couplers_to_m00_couplers_RVALID;
  assign S_AXI_wready[0] = m00_couplers_to_m00_couplers_WREADY;
  assign m00_couplers_to_m00_couplers_ARADDR = S_AXI_araddr[31:0];
  assign m00_couplers_to_m00_couplers_ARREADY = M_AXI_arready[0];
  assign m00_couplers_to_m00_couplers_ARVALID = S_AXI_arvalid[0];
  assign m00_couplers_to_m00_couplers_AWADDR = S_AXI_awaddr[31:0];
  assign m00_couplers_to_m00_couplers_AWREADY = M_AXI_awready[0];
  assign m00_couplers_to_m00_couplers_AWVALID = S_AXI_awvalid[0];
  assign m00_couplers_to_m00_couplers_BREADY = S_AXI_bready[0];
  assign m00_couplers_to_m00_couplers_BRESP = M_AXI_bresp[1:0];
  assign m00_couplers_to_m00_couplers_BVALID = M_AXI_bvalid[0];
  assign m00_couplers_to_m00_couplers_RDATA = M_AXI_rdata[31:0];
  assign m00_couplers_to_m00_couplers_RREADY = S_AXI_rready[0];
  assign m00_couplers_to_m00_couplers_RRESP = M_AXI_rresp[1:0];
  assign m00_couplers_to_m00_couplers_RVALID = M_AXI_rvalid[0];
  assign m00_couplers_to_m00_couplers_WDATA = S_AXI_wdata[31:0];
  assign m00_couplers_to_m00_couplers_WREADY = M_AXI_wready[0];
  assign m00_couplers_to_m00_couplers_WVALID = S_AXI_wvalid[0];
endmodule

module m01_couplers_imp_1Q3JGDF
   (M_ACLK,
    M_ARESETN,
    M_AXI_araddr,
    M_AXI_arprot,
    M_AXI_arready,
    M_AXI_arvalid,
    M_AXI_awaddr,
    M_AXI_awprot,
    M_AXI_awready,
    M_AXI_awvalid,
    M_AXI_bready,
    M_AXI_bresp,
    M_AXI_bvalid,
    M_AXI_rdata,
    M_AXI_rready,
    M_AXI_rresp,
    M_AXI_rvalid,
    M_AXI_wdata,
    M_AXI_wready,
    M_AXI_wstrb,
    M_AXI_wvalid,
    S_ACLK,
    S_ARESETN,
    S_AXI_araddr,
    S_AXI_arprot,
    S_AXI_arready,
    S_AXI_arvalid,
    S_AXI_awaddr,
    S_AXI_awprot,
    S_AXI_awready,
    S_AXI_awvalid,
    S_AXI_bready,
    S_AXI_bresp,
    S_AXI_bvalid,
    S_AXI_rdata,
    S_AXI_rready,
    S_AXI_rresp,
    S_AXI_rvalid,
    S_AXI_wdata,
    S_AXI_wready,
    S_AXI_wstrb,
    S_AXI_wvalid);
  input M_ACLK;
  input M_ARESETN;
  output [31:0]M_AXI_araddr;
  output [2:0]M_AXI_arprot;
  input M_AXI_arready;
  output M_AXI_arvalid;
  output [31:0]M_AXI_awaddr;
  output [2:0]M_AXI_awprot;
  input M_AXI_awready;
  output M_AXI_awvalid;
  output M_AXI_bready;
  input [1:0]M_AXI_bresp;
  input M_AXI_bvalid;
  input [31:0]M_AXI_rdata;
  output M_AXI_rready;
  input [1:0]M_AXI_rresp;
  input M_AXI_rvalid;
  output [31:0]M_AXI_wdata;
  input M_AXI_wready;
  output [3:0]M_AXI_wstrb;
  output M_AXI_wvalid;
  input S_ACLK;
  input S_ARESETN;
  input [31:0]S_AXI_araddr;
  input [2:0]S_AXI_arprot;
  output S_AXI_arready;
  input S_AXI_arvalid;
  input [31:0]S_AXI_awaddr;
  input [2:0]S_AXI_awprot;
  output S_AXI_awready;
  input S_AXI_awvalid;
  input S_AXI_bready;
  output [1:0]S_AXI_bresp;
  output S_AXI_bvalid;
  output [31:0]S_AXI_rdata;
  input S_AXI_rready;
  output [1:0]S_AXI_rresp;
  output S_AXI_rvalid;
  input [31:0]S_AXI_wdata;
  output S_AXI_wready;
  input [3:0]S_AXI_wstrb;
  input S_AXI_wvalid;

  wire [31:0]m01_couplers_to_m01_couplers_ARADDR;
  wire [2:0]m01_couplers_to_m01_couplers_ARPROT;
  wire m01_couplers_to_m01_couplers_ARREADY;
  wire m01_couplers_to_m01_couplers_ARVALID;
  wire [31:0]m01_couplers_to_m01_couplers_AWADDR;
  wire [2:0]m01_couplers_to_m01_couplers_AWPROT;
  wire m01_couplers_to_m01_couplers_AWREADY;
  wire m01_couplers_to_m01_couplers_AWVALID;
  wire m01_couplers_to_m01_couplers_BREADY;
  wire [1:0]m01_couplers_to_m01_couplers_BRESP;
  wire m01_couplers_to_m01_couplers_BVALID;
  wire [31:0]m01_couplers_to_m01_couplers_RDATA;
  wire m01_couplers_to_m01_couplers_RREADY;
  wire [1:0]m01_couplers_to_m01_couplers_RRESP;
  wire m01_couplers_to_m01_couplers_RVALID;
  wire [31:0]m01_couplers_to_m01_couplers_WDATA;
  wire m01_couplers_to_m01_couplers_WREADY;
  wire [3:0]m01_couplers_to_m01_couplers_WSTRB;
  wire m01_couplers_to_m01_couplers_WVALID;

  assign M_AXI_araddr[31:0] = m01_couplers_to_m01_couplers_ARADDR;
  assign M_AXI_arprot[2:0] = m01_couplers_to_m01_couplers_ARPROT;
  assign M_AXI_arvalid = m01_couplers_to_m01_couplers_ARVALID;
  assign M_AXI_awaddr[31:0] = m01_couplers_to_m01_couplers_AWADDR;
  assign M_AXI_awprot[2:0] = m01_couplers_to_m01_couplers_AWPROT;
  assign M_AXI_awvalid = m01_couplers_to_m01_couplers_AWVALID;
  assign M_AXI_bready = m01_couplers_to_m01_couplers_BREADY;
  assign M_AXI_rready = m01_couplers_to_m01_couplers_RREADY;
  assign M_AXI_wdata[31:0] = m01_couplers_to_m01_couplers_WDATA;
  assign M_AXI_wstrb[3:0] = m01_couplers_to_m01_couplers_WSTRB;
  assign M_AXI_wvalid = m01_couplers_to_m01_couplers_WVALID;
  assign S_AXI_arready = m01_couplers_to_m01_couplers_ARREADY;
  assign S_AXI_awready = m01_couplers_to_m01_couplers_AWREADY;
  assign S_AXI_bresp[1:0] = m01_couplers_to_m01_couplers_BRESP;
  assign S_AXI_bvalid = m01_couplers_to_m01_couplers_BVALID;
  assign S_AXI_rdata[31:0] = m01_couplers_to_m01_couplers_RDATA;
  assign S_AXI_rresp[1:0] = m01_couplers_to_m01_couplers_RRESP;
  assign S_AXI_rvalid = m01_couplers_to_m01_couplers_RVALID;
  assign S_AXI_wready = m01_couplers_to_m01_couplers_WREADY;
  assign m01_couplers_to_m01_couplers_ARADDR = S_AXI_araddr[31:0];
  assign m01_couplers_to_m01_couplers_ARPROT = S_AXI_arprot[2:0];
  assign m01_couplers_to_m01_couplers_ARREADY = M_AXI_arready;
  assign m01_couplers_to_m01_couplers_ARVALID = S_AXI_arvalid;
  assign m01_couplers_to_m01_couplers_AWADDR = S_AXI_awaddr[31:0];
  assign m01_couplers_to_m01_couplers_AWPROT = S_AXI_awprot[2:0];
  assign m01_couplers_to_m01_couplers_AWREADY = M_AXI_awready;
  assign m01_couplers_to_m01_couplers_AWVALID = S_AXI_awvalid;
  assign m01_couplers_to_m01_couplers_BREADY = S_AXI_bready;
  assign m01_couplers_to_m01_couplers_BRESP = M_AXI_bresp[1:0];
  assign m01_couplers_to_m01_couplers_BVALID = M_AXI_bvalid;
  assign m01_couplers_to_m01_couplers_RDATA = M_AXI_rdata[31:0];
  assign m01_couplers_to_m01_couplers_RREADY = S_AXI_rready;
  assign m01_couplers_to_m01_couplers_RRESP = M_AXI_rresp[1:0];
  assign m01_couplers_to_m01_couplers_RVALID = M_AXI_rvalid;
  assign m01_couplers_to_m01_couplers_WDATA = S_AXI_wdata[31:0];
  assign m01_couplers_to_m01_couplers_WREADY = M_AXI_wready;
  assign m01_couplers_to_m01_couplers_WSTRB = S_AXI_wstrb[3:0];
  assign m01_couplers_to_m01_couplers_WVALID = S_AXI_wvalid;
endmodule

module s00_couplers_imp_C3R51E
   (M_ACLK,
    M_ARESETN,
    M_AXI_araddr,
    M_AXI_arprot,
    M_AXI_arready,
    M_AXI_arvalid,
    M_AXI_awaddr,
    M_AXI_awprot,
    M_AXI_awready,
    M_AXI_awvalid,
    M_AXI_bready,
    M_AXI_bresp,
    M_AXI_bvalid,
    M_AXI_rdata,
    M_AXI_rready,
    M_AXI_rresp,
    M_AXI_rvalid,
    M_AXI_wdata,
    M_AXI_wready,
    M_AXI_wstrb,
    M_AXI_wvalid,
    S_ACLK,
    S_ARESETN,
    S_AXI_araddr,
    S_AXI_arburst,
    S_AXI_arcache,
    S_AXI_arid,
    S_AXI_arlen,
    S_AXI_arlock,
    S_AXI_arprot,
    S_AXI_arqos,
    S_AXI_arready,
    S_AXI_arsize,
    S_AXI_arvalid,
    S_AXI_awaddr,
    S_AXI_awburst,
    S_AXI_awcache,
    S_AXI_awid,
    S_AXI_awlen,
    S_AXI_awlock,
    S_AXI_awprot,
    S_AXI_awqos,
    S_AXI_awready,
    S_AXI_awsize,
    S_AXI_awvalid,
    S_AXI_bid,
    S_AXI_bready,
    S_AXI_bresp,
    S_AXI_bvalid,
    S_AXI_rdata,
    S_AXI_rid,
    S_AXI_rlast,
    S_AXI_rready,
    S_AXI_rresp,
    S_AXI_rvalid,
    S_AXI_wdata,
    S_AXI_wid,
    S_AXI_wlast,
    S_AXI_wready,
    S_AXI_wstrb,
    S_AXI_wvalid);
  input M_ACLK;
  input M_ARESETN;
  output [31:0]M_AXI_araddr;
  output [2:0]M_AXI_arprot;
  input M_AXI_arready;
  output M_AXI_arvalid;
  output [31:0]M_AXI_awaddr;
  output [2:0]M_AXI_awprot;
  input M_AXI_awready;
  output M_AXI_awvalid;
  output M_AXI_bready;
  input [1:0]M_AXI_bresp;
  input M_AXI_bvalid;
  input [31:0]M_AXI_rdata;
  output M_AXI_rready;
  input [1:0]M_AXI_rresp;
  input M_AXI_rvalid;
  output [31:0]M_AXI_wdata;
  input M_AXI_wready;
  output [3:0]M_AXI_wstrb;
  output M_AXI_wvalid;
  input S_ACLK;
  input S_ARESETN;
  input [31:0]S_AXI_araddr;
  input [1:0]S_AXI_arburst;
  input [3:0]S_AXI_arcache;
  input [11:0]S_AXI_arid;
  input [3:0]S_AXI_arlen;
  input [1:0]S_AXI_arlock;
  input [2:0]S_AXI_arprot;
  input [3:0]S_AXI_arqos;
  output S_AXI_arready;
  input [2:0]S_AXI_arsize;
  input S_AXI_arvalid;
  input [31:0]S_AXI_awaddr;
  input [1:0]S_AXI_awburst;
  input [3:0]S_AXI_awcache;
  input [11:0]S_AXI_awid;
  input [3:0]S_AXI_awlen;
  input [1:0]S_AXI_awlock;
  input [2:0]S_AXI_awprot;
  input [3:0]S_AXI_awqos;
  output S_AXI_awready;
  input [2:0]S_AXI_awsize;
  input S_AXI_awvalid;
  output [11:0]S_AXI_bid;
  input S_AXI_bready;
  output [1:0]S_AXI_bresp;
  output S_AXI_bvalid;
  output [31:0]S_AXI_rdata;
  output [11:0]S_AXI_rid;
  output S_AXI_rlast;
  input S_AXI_rready;
  output [1:0]S_AXI_rresp;
  output S_AXI_rvalid;
  input [31:0]S_AXI_wdata;
  input [11:0]S_AXI_wid;
  input S_AXI_wlast;
  output S_AXI_wready;
  input [3:0]S_AXI_wstrb;
  input S_AXI_wvalid;

  wire S_ACLK_1;
  wire S_ARESETN_1;
  wire [31:0]auto_pc_to_s00_couplers_ARADDR;
  wire [2:0]auto_pc_to_s00_couplers_ARPROT;
  wire auto_pc_to_s00_couplers_ARREADY;
  wire auto_pc_to_s00_couplers_ARVALID;
  wire [31:0]auto_pc_to_s00_couplers_AWADDR;
  wire [2:0]auto_pc_to_s00_couplers_AWPROT;
  wire auto_pc_to_s00_couplers_AWREADY;
  wire auto_pc_to_s00_couplers_AWVALID;
  wire auto_pc_to_s00_couplers_BREADY;
  wire [1:0]auto_pc_to_s00_couplers_BRESP;
  wire auto_pc_to_s00_couplers_BVALID;
  wire [31:0]auto_pc_to_s00_couplers_RDATA;
  wire auto_pc_to_s00_couplers_RREADY;
  wire [1:0]auto_pc_to_s00_couplers_RRESP;
  wire auto_pc_to_s00_couplers_RVALID;
  wire [31:0]auto_pc_to_s00_couplers_WDATA;
  wire auto_pc_to_s00_couplers_WREADY;
  wire [3:0]auto_pc_to_s00_couplers_WSTRB;
  wire auto_pc_to_s00_couplers_WVALID;
  wire [31:0]s00_couplers_to_auto_pc_ARADDR;
  wire [1:0]s00_couplers_to_auto_pc_ARBURST;
  wire [3:0]s00_couplers_to_auto_pc_ARCACHE;
  wire [11:0]s00_couplers_to_auto_pc_ARID;
  wire [3:0]s00_couplers_to_auto_pc_ARLEN;
  wire [1:0]s00_couplers_to_auto_pc_ARLOCK;
  wire [2:0]s00_couplers_to_auto_pc_ARPROT;
  wire [3:0]s00_couplers_to_auto_pc_ARQOS;
  wire s00_couplers_to_auto_pc_ARREADY;
  wire [2:0]s00_couplers_to_auto_pc_ARSIZE;
  wire s00_couplers_to_auto_pc_ARVALID;
  wire [31:0]s00_couplers_to_auto_pc_AWADDR;
  wire [1:0]s00_couplers_to_auto_pc_AWBURST;
  wire [3:0]s00_couplers_to_auto_pc_AWCACHE;
  wire [11:0]s00_couplers_to_auto_pc_AWID;
  wire [3:0]s00_couplers_to_auto_pc_AWLEN;
  wire [1:0]s00_couplers_to_auto_pc_AWLOCK;
  wire [2:0]s00_couplers_to_auto_pc_AWPROT;
  wire [3:0]s00_couplers_to_auto_pc_AWQOS;
  wire s00_couplers_to_auto_pc_AWREADY;
  wire [2:0]s00_couplers_to_auto_pc_AWSIZE;
  wire s00_couplers_to_auto_pc_AWVALID;
  wire [11:0]s00_couplers_to_auto_pc_BID;
  wire s00_couplers_to_auto_pc_BREADY;
  wire [1:0]s00_couplers_to_auto_pc_BRESP;
  wire s00_couplers_to_auto_pc_BVALID;
  wire [31:0]s00_couplers_to_auto_pc_RDATA;
  wire [11:0]s00_couplers_to_auto_pc_RID;
  wire s00_couplers_to_auto_pc_RLAST;
  wire s00_couplers_to_auto_pc_RREADY;
  wire [1:0]s00_couplers_to_auto_pc_RRESP;
  wire s00_couplers_to_auto_pc_RVALID;
  wire [31:0]s00_couplers_to_auto_pc_WDATA;
  wire [11:0]s00_couplers_to_auto_pc_WID;
  wire s00_couplers_to_auto_pc_WLAST;
  wire s00_couplers_to_auto_pc_WREADY;
  wire [3:0]s00_couplers_to_auto_pc_WSTRB;
  wire s00_couplers_to_auto_pc_WVALID;

  assign M_AXI_araddr[31:0] = auto_pc_to_s00_couplers_ARADDR;
  assign M_AXI_arprot[2:0] = auto_pc_to_s00_couplers_ARPROT;
  assign M_AXI_arvalid = auto_pc_to_s00_couplers_ARVALID;
  assign M_AXI_awaddr[31:0] = auto_pc_to_s00_couplers_AWADDR;
  assign M_AXI_awprot[2:0] = auto_pc_to_s00_couplers_AWPROT;
  assign M_AXI_awvalid = auto_pc_to_s00_couplers_AWVALID;
  assign M_AXI_bready = auto_pc_to_s00_couplers_BREADY;
  assign M_AXI_rready = auto_pc_to_s00_couplers_RREADY;
  assign M_AXI_wdata[31:0] = auto_pc_to_s00_couplers_WDATA;
  assign M_AXI_wstrb[3:0] = auto_pc_to_s00_couplers_WSTRB;
  assign M_AXI_wvalid = auto_pc_to_s00_couplers_WVALID;
  assign S_ACLK_1 = S_ACLK;
  assign S_ARESETN_1 = S_ARESETN;
  assign S_AXI_arready = s00_couplers_to_auto_pc_ARREADY;
  assign S_AXI_awready = s00_couplers_to_auto_pc_AWREADY;
  assign S_AXI_bid[11:0] = s00_couplers_to_auto_pc_BID;
  assign S_AXI_bresp[1:0] = s00_couplers_to_auto_pc_BRESP;
  assign S_AXI_bvalid = s00_couplers_to_auto_pc_BVALID;
  assign S_AXI_rdata[31:0] = s00_couplers_to_auto_pc_RDATA;
  assign S_AXI_rid[11:0] = s00_couplers_to_auto_pc_RID;
  assign S_AXI_rlast = s00_couplers_to_auto_pc_RLAST;
  assign S_AXI_rresp[1:0] = s00_couplers_to_auto_pc_RRESP;
  assign S_AXI_rvalid = s00_couplers_to_auto_pc_RVALID;
  assign S_AXI_wready = s00_couplers_to_auto_pc_WREADY;
  assign auto_pc_to_s00_couplers_ARREADY = M_AXI_arready;
  assign auto_pc_to_s00_couplers_AWREADY = M_AXI_awready;
  assign auto_pc_to_s00_couplers_BRESP = M_AXI_bresp[1:0];
  assign auto_pc_to_s00_couplers_BVALID = M_AXI_bvalid;
  assign auto_pc_to_s00_couplers_RDATA = M_AXI_rdata[31:0];
  assign auto_pc_to_s00_couplers_RRESP = M_AXI_rresp[1:0];
  assign auto_pc_to_s00_couplers_RVALID = M_AXI_rvalid;
  assign auto_pc_to_s00_couplers_WREADY = M_AXI_wready;
  assign s00_couplers_to_auto_pc_ARADDR = S_AXI_araddr[31:0];
  assign s00_couplers_to_auto_pc_ARBURST = S_AXI_arburst[1:0];
  assign s00_couplers_to_auto_pc_ARCACHE = S_AXI_arcache[3:0];
  assign s00_couplers_to_auto_pc_ARID = S_AXI_arid[11:0];
  assign s00_couplers_to_auto_pc_ARLEN = S_AXI_arlen[3:0];
  assign s00_couplers_to_auto_pc_ARLOCK = S_AXI_arlock[1:0];
  assign s00_couplers_to_auto_pc_ARPROT = S_AXI_arprot[2:0];
  assign s00_couplers_to_auto_pc_ARQOS = S_AXI_arqos[3:0];
  assign s00_couplers_to_auto_pc_ARSIZE = S_AXI_arsize[2:0];
  assign s00_couplers_to_auto_pc_ARVALID = S_AXI_arvalid;
  assign s00_couplers_to_auto_pc_AWADDR = S_AXI_awaddr[31:0];
  assign s00_couplers_to_auto_pc_AWBURST = S_AXI_awburst[1:0];
  assign s00_couplers_to_auto_pc_AWCACHE = S_AXI_awcache[3:0];
  assign s00_couplers_to_auto_pc_AWID = S_AXI_awid[11:0];
  assign s00_couplers_to_auto_pc_AWLEN = S_AXI_awlen[3:0];
  assign s00_couplers_to_auto_pc_AWLOCK = S_AXI_awlock[1:0];
  assign s00_couplers_to_auto_pc_AWPROT = S_AXI_awprot[2:0];
  assign s00_couplers_to_auto_pc_AWQOS = S_AXI_awqos[3:0];
  assign s00_couplers_to_auto_pc_AWSIZE = S_AXI_awsize[2:0];
  assign s00_couplers_to_auto_pc_AWVALID = S_AXI_awvalid;
  assign s00_couplers_to_auto_pc_BREADY = S_AXI_bready;
  assign s00_couplers_to_auto_pc_RREADY = S_AXI_rready;
  assign s00_couplers_to_auto_pc_WDATA = S_AXI_wdata[31:0];
  assign s00_couplers_to_auto_pc_WID = S_AXI_wid[11:0];
  assign s00_couplers_to_auto_pc_WLAST = S_AXI_wlast;
  assign s00_couplers_to_auto_pc_WSTRB = S_AXI_wstrb[3:0];
  assign s00_couplers_to_auto_pc_WVALID = S_AXI_wvalid;
  Multi_convo_core_auto_pc_0 auto_pc
       (.aclk(S_ACLK_1),
        .aresetn(S_ARESETN_1),
        .m_axi_araddr(auto_pc_to_s00_couplers_ARADDR),
        .m_axi_arprot(auto_pc_to_s00_couplers_ARPROT),
        .m_axi_arready(auto_pc_to_s00_couplers_ARREADY),
        .m_axi_arvalid(auto_pc_to_s00_couplers_ARVALID),
        .m_axi_awaddr(auto_pc_to_s00_couplers_AWADDR),
        .m_axi_awprot(auto_pc_to_s00_couplers_AWPROT),
        .m_axi_awready(auto_pc_to_s00_couplers_AWREADY),
        .m_axi_awvalid(auto_pc_to_s00_couplers_AWVALID),
        .m_axi_bready(auto_pc_to_s00_couplers_BREADY),
        .m_axi_bresp(auto_pc_to_s00_couplers_BRESP),
        .m_axi_bvalid(auto_pc_to_s00_couplers_BVALID),
        .m_axi_rdata(auto_pc_to_s00_couplers_RDATA),
        .m_axi_rready(auto_pc_to_s00_couplers_RREADY),
        .m_axi_rresp(auto_pc_to_s00_couplers_RRESP),
        .m_axi_rvalid(auto_pc_to_s00_couplers_RVALID),
        .m_axi_wdata(auto_pc_to_s00_couplers_WDATA),
        .m_axi_wready(auto_pc_to_s00_couplers_WREADY),
        .m_axi_wstrb(auto_pc_to_s00_couplers_WSTRB),
        .m_axi_wvalid(auto_pc_to_s00_couplers_WVALID),
        .s_axi_araddr(s00_couplers_to_auto_pc_ARADDR),
        .s_axi_arburst(s00_couplers_to_auto_pc_ARBURST),
        .s_axi_arcache(s00_couplers_to_auto_pc_ARCACHE),
        .s_axi_arid(s00_couplers_to_auto_pc_ARID),
        .s_axi_arlen(s00_couplers_to_auto_pc_ARLEN),
        .s_axi_arlock(s00_couplers_to_auto_pc_ARLOCK),
        .s_axi_arprot(s00_couplers_to_auto_pc_ARPROT),
        .s_axi_arqos(s00_couplers_to_auto_pc_ARQOS),
        .s_axi_arready(s00_couplers_to_auto_pc_ARREADY),
        .s_axi_arsize(s00_couplers_to_auto_pc_ARSIZE),
        .s_axi_arvalid(s00_couplers_to_auto_pc_ARVALID),
        .s_axi_awaddr(s00_couplers_to_auto_pc_AWADDR),
        .s_axi_awburst(s00_couplers_to_auto_pc_AWBURST),
        .s_axi_awcache(s00_couplers_to_auto_pc_AWCACHE),
        .s_axi_awid(s00_couplers_to_auto_pc_AWID),
        .s_axi_awlen(s00_couplers_to_auto_pc_AWLEN),
        .s_axi_awlock(s00_couplers_to_auto_pc_AWLOCK),
        .s_axi_awprot(s00_couplers_to_auto_pc_AWPROT),
        .s_axi_awqos(s00_couplers_to_auto_pc_AWQOS),
        .s_axi_awready(s00_couplers_to_auto_pc_AWREADY),
        .s_axi_awsize(s00_couplers_to_auto_pc_AWSIZE),
        .s_axi_awvalid(s00_couplers_to_auto_pc_AWVALID),
        .s_axi_bid(s00_couplers_to_auto_pc_BID),
        .s_axi_bready(s00_couplers_to_auto_pc_BREADY),
        .s_axi_bresp(s00_couplers_to_auto_pc_BRESP),
        .s_axi_bvalid(s00_couplers_to_auto_pc_BVALID),
        .s_axi_rdata(s00_couplers_to_auto_pc_RDATA),
        .s_axi_rid(s00_couplers_to_auto_pc_RID),
        .s_axi_rlast(s00_couplers_to_auto_pc_RLAST),
        .s_axi_rready(s00_couplers_to_auto_pc_RREADY),
        .s_axi_rresp(s00_couplers_to_auto_pc_RRESP),
        .s_axi_rvalid(s00_couplers_to_auto_pc_RVALID),
        .s_axi_wdata(s00_couplers_to_auto_pc_WDATA),
        .s_axi_wid(s00_couplers_to_auto_pc_WID),
        .s_axi_wlast(s00_couplers_to_auto_pc_WLAST),
        .s_axi_wready(s00_couplers_to_auto_pc_WREADY),
        .s_axi_wstrb(s00_couplers_to_auto_pc_WSTRB),
        .s_axi_wvalid(s00_couplers_to_auto_pc_WVALID));
endmodule
