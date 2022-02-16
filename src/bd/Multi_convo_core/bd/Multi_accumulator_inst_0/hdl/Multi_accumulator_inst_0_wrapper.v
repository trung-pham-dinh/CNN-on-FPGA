//Copyright 1986-2021 Xilinx, Inc. All Rights Reserved.
//--------------------------------------------------------------------------------
//Tool Version: Vivado v.2021.1 (win64) Build 3247384 Thu Jun 10 19:36:33 MDT 2021
//Date        : Tue Feb 15 08:38:45 2022
//Host        : DESKTOP-Q4T850H running 64-bit major release  (build 9200)
//Command     : generate_target Multi_accumulator_inst_0_wrapper.bd
//Design      : Multi_accumulator_inst_0_wrapper
//Purpose     : IP block netlist
//--------------------------------------------------------------------------------
`timescale 1 ps / 1 ps

module Multi_accumulator_inst_0_wrapper
   (BRAM_addr_sim,
    BRAM_out_AXI_0_addr,
    BRAM_out_AXI_0_clk,
    BRAM_out_AXI_0_din,
    BRAM_out_AXI_0_dout,
    BRAM_out_AXI_0_en,
    BRAM_out_AXI_0_rst,
    BRAM_out_AXI_0_we,
    BRAM_out_AXI_1_addr,
    BRAM_out_AXI_1_clk,
    BRAM_out_AXI_1_din,
    BRAM_out_AXI_1_dout,
    BRAM_out_AXI_1_en,
    BRAM_out_AXI_1_rst,
    BRAM_out_AXI_1_we,
    BRAM_out_AXI_2_addr,
    BRAM_out_AXI_2_clk,
    BRAM_out_AXI_2_din,
    BRAM_out_AXI_2_dout,
    BRAM_out_AXI_2_en,
    BRAM_out_AXI_2_rst,
    BRAM_out_AXI_2_we,
    BRAM_out_AXI_3_addr,
    BRAM_out_AXI_3_clk,
    BRAM_out_AXI_3_din,
    BRAM_out_AXI_3_dout,
    BRAM_out_AXI_3_en,
    BRAM_out_AXI_3_rst,
    BRAM_out_AXI_3_we,
    WxW_out,
    accum_done,
    bram_dout_0,
    bram_dout_1,
    bram_dout_2,
    bram_dout_3,
    clk,
    mac_done_0,
    mac_done_1,
    mac_done_2,
    mac_done_3,
    no_channel_out,
    psum0_0,
    psum0_1,
    psum0_2,
    psum0_3,
    psum1_0,
    psum1_1,
    psum1_2,
    psum1_3,
    psum2_0,
    psum2_1,
    psum2_2,
    psum2_3,
    psum3_0,
    psum3_1,
    psum3_2,
    psum3_3,
    rst);
  output [31:0]BRAM_addr_sim;
  input [11:0]BRAM_out_AXI_0_addr;
  input BRAM_out_AXI_0_clk;
  input [31:0]BRAM_out_AXI_0_din;
  output [31:0]BRAM_out_AXI_0_dout;
  input BRAM_out_AXI_0_en;
  input BRAM_out_AXI_0_rst;
  input [3:0]BRAM_out_AXI_0_we;
  input [11:0]BRAM_out_AXI_1_addr;
  input BRAM_out_AXI_1_clk;
  input [31:0]BRAM_out_AXI_1_din;
  output [31:0]BRAM_out_AXI_1_dout;
  input BRAM_out_AXI_1_en;
  input BRAM_out_AXI_1_rst;
  input [3:0]BRAM_out_AXI_1_we;
  input [11:0]BRAM_out_AXI_2_addr;
  input BRAM_out_AXI_2_clk;
  input [31:0]BRAM_out_AXI_2_din;
  output [31:0]BRAM_out_AXI_2_dout;
  input BRAM_out_AXI_2_en;
  input BRAM_out_AXI_2_rst;
  input [3:0]BRAM_out_AXI_2_we;
  input [11:0]BRAM_out_AXI_3_addr;
  input BRAM_out_AXI_3_clk;
  input [31:0]BRAM_out_AXI_3_din;
  output [31:0]BRAM_out_AXI_3_dout;
  input BRAM_out_AXI_3_en;
  input BRAM_out_AXI_3_rst;
  input [3:0]BRAM_out_AXI_3_we;
  input [15:0]WxW_out;
  output accum_done;
  output [31:0]bram_dout_0;
  output [31:0]bram_dout_1;
  output [31:0]bram_dout_2;
  output [31:0]bram_dout_3;
  input clk;
  input mac_done_0;
  input mac_done_1;
  input mac_done_2;
  input mac_done_3;
  input [10:0]no_channel_out;
  input [7:0]psum0_0;
  input [7:0]psum0_1;
  input [7:0]psum0_2;
  input [7:0]psum0_3;
  input [7:0]psum1_0;
  input [7:0]psum1_1;
  input [7:0]psum1_2;
  input [7:0]psum1_3;
  input [7:0]psum2_0;
  input [7:0]psum2_1;
  input [7:0]psum2_2;
  input [7:0]psum2_3;
  input [7:0]psum3_0;
  input [7:0]psum3_1;
  input [7:0]psum3_2;
  input [7:0]psum3_3;
  input rst;

  wire [31:0]BRAM_addr_sim;
  wire [11:0]BRAM_out_AXI_0_addr;
  wire BRAM_out_AXI_0_clk;
  wire [31:0]BRAM_out_AXI_0_din;
  wire [31:0]BRAM_out_AXI_0_dout;
  wire BRAM_out_AXI_0_en;
  wire BRAM_out_AXI_0_rst;
  wire [3:0]BRAM_out_AXI_0_we;
  wire [11:0]BRAM_out_AXI_1_addr;
  wire BRAM_out_AXI_1_clk;
  wire [31:0]BRAM_out_AXI_1_din;
  wire [31:0]BRAM_out_AXI_1_dout;
  wire BRAM_out_AXI_1_en;
  wire BRAM_out_AXI_1_rst;
  wire [3:0]BRAM_out_AXI_1_we;
  wire [11:0]BRAM_out_AXI_2_addr;
  wire BRAM_out_AXI_2_clk;
  wire [31:0]BRAM_out_AXI_2_din;
  wire [31:0]BRAM_out_AXI_2_dout;
  wire BRAM_out_AXI_2_en;
  wire BRAM_out_AXI_2_rst;
  wire [3:0]BRAM_out_AXI_2_we;
  wire [11:0]BRAM_out_AXI_3_addr;
  wire BRAM_out_AXI_3_clk;
  wire [31:0]BRAM_out_AXI_3_din;
  wire [31:0]BRAM_out_AXI_3_dout;
  wire BRAM_out_AXI_3_en;
  wire BRAM_out_AXI_3_rst;
  wire [3:0]BRAM_out_AXI_3_we;
  wire [15:0]WxW_out;
  wire accum_done;
  wire [31:0]bram_dout_0;
  wire [31:0]bram_dout_1;
  wire [31:0]bram_dout_2;
  wire [31:0]bram_dout_3;
  wire clk;
  wire mac_done_0;
  wire mac_done_1;
  wire mac_done_2;
  wire mac_done_3;
  wire [10:0]no_channel_out;
  wire [7:0]psum0_0;
  wire [7:0]psum0_1;
  wire [7:0]psum0_2;
  wire [7:0]psum0_3;
  wire [7:0]psum1_0;
  wire [7:0]psum1_1;
  wire [7:0]psum1_2;
  wire [7:0]psum1_3;
  wire [7:0]psum2_0;
  wire [7:0]psum2_1;
  wire [7:0]psum2_2;
  wire [7:0]psum2_3;
  wire [7:0]psum3_0;
  wire [7:0]psum3_1;
  wire [7:0]psum3_2;
  wire [7:0]psum3_3;
  wire rst;

  Multi_accumulator_inst_0 Multi_accumulator_inst_0_i
       (.BRAM_addr_sim(BRAM_addr_sim),
        .BRAM_out_AXI_0_addr(BRAM_out_AXI_0_addr),
        .BRAM_out_AXI_0_clk(BRAM_out_AXI_0_clk),
        .BRAM_out_AXI_0_din(BRAM_out_AXI_0_din),
        .BRAM_out_AXI_0_dout(BRAM_out_AXI_0_dout),
        .BRAM_out_AXI_0_en(BRAM_out_AXI_0_en),
        .BRAM_out_AXI_0_rst(BRAM_out_AXI_0_rst),
        .BRAM_out_AXI_0_we(BRAM_out_AXI_0_we),
        .BRAM_out_AXI_1_addr(BRAM_out_AXI_1_addr),
        .BRAM_out_AXI_1_clk(BRAM_out_AXI_1_clk),
        .BRAM_out_AXI_1_din(BRAM_out_AXI_1_din),
        .BRAM_out_AXI_1_dout(BRAM_out_AXI_1_dout),
        .BRAM_out_AXI_1_en(BRAM_out_AXI_1_en),
        .BRAM_out_AXI_1_rst(BRAM_out_AXI_1_rst),
        .BRAM_out_AXI_1_we(BRAM_out_AXI_1_we),
        .BRAM_out_AXI_2_addr(BRAM_out_AXI_2_addr),
        .BRAM_out_AXI_2_clk(BRAM_out_AXI_2_clk),
        .BRAM_out_AXI_2_din(BRAM_out_AXI_2_din),
        .BRAM_out_AXI_2_dout(BRAM_out_AXI_2_dout),
        .BRAM_out_AXI_2_en(BRAM_out_AXI_2_en),
        .BRAM_out_AXI_2_rst(BRAM_out_AXI_2_rst),
        .BRAM_out_AXI_2_we(BRAM_out_AXI_2_we),
        .BRAM_out_AXI_3_addr(BRAM_out_AXI_3_addr),
        .BRAM_out_AXI_3_clk(BRAM_out_AXI_3_clk),
        .BRAM_out_AXI_3_din(BRAM_out_AXI_3_din),
        .BRAM_out_AXI_3_dout(BRAM_out_AXI_3_dout),
        .BRAM_out_AXI_3_en(BRAM_out_AXI_3_en),
        .BRAM_out_AXI_3_rst(BRAM_out_AXI_3_rst),
        .BRAM_out_AXI_3_we(BRAM_out_AXI_3_we),
        .WxW_out(WxW_out),
        .accum_done(accum_done),
        .bram_dout_0(bram_dout_0),
        .bram_dout_1(bram_dout_1),
        .bram_dout_2(bram_dout_2),
        .bram_dout_3(bram_dout_3),
        .clk(clk),
        .mac_done_0(mac_done_0),
        .mac_done_1(mac_done_1),
        .mac_done_2(mac_done_2),
        .mac_done_3(mac_done_3),
        .no_channel_out(no_channel_out),
        .psum0_0(psum0_0),
        .psum0_1(psum0_1),
        .psum0_2(psum0_2),
        .psum0_3(psum0_3),
        .psum1_0(psum1_0),
        .psum1_1(psum1_1),
        .psum1_2(psum1_2),
        .psum1_3(psum1_3),
        .psum2_0(psum2_0),
        .psum2_1(psum2_1),
        .psum2_2(psum2_2),
        .psum2_3(psum2_3),
        .psum3_0(psum3_0),
        .psum3_1(psum3_1),
        .psum3_2(psum3_2),
        .psum3_3(psum3_3),
        .rst(rst));
endmodule
