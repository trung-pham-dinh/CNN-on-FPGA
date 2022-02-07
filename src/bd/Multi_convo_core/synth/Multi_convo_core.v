//Copyright 1986-2021 Xilinx, Inc. All Rights Reserved.
//--------------------------------------------------------------------------------
//Tool Version: Vivado v.2021.1 (win64) Build 3247384 Thu Jun 10 19:36:33 MDT 2021
//Date        : Mon Feb  7 16:35:04 2022
//Host        : DESKTOP-Q4T850H running 64-bit major release  (build 9200)
//Command     : generate_target Multi_convo_core.bd
//Design      : Multi_convo_core
//Purpose     : IP block netlist
//--------------------------------------------------------------------------------
`timescale 1 ps / 1 ps

(* CORE_GENERATION_INFO = "Multi_convo_core,IP_Integrator,{x_ipVendor=xilinx.com,x_ipLibrary=BlockDiagram,x_ipName=Multi_convo_core,x_ipVersion=1.00.a,x_ipLanguage=VERILOG,numBlks=59,numReposBlks=54,numNonXlnxBlks=0,numHierBlks=5,maxHierDepth=1,numSysgenBlks=0,numHlsBlks=0,numHdlrefBlks=30,numPkgbdBlks=5,bdsource=USER,synth_mode=OOC_per_IP}" *) (* HW_HANDOFF = "Multi_convo_core.hwdef" *) 
module Multi_convo_core
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
  (* X_INTERFACE_INFO = "xilinx.com:signal:clock:1.0 CLK.CLK CLK" *) (* X_INTERFACE_PARAMETER = "XIL_INTERFACENAME CLK.CLK, ASSOCIATED_RESET rst, CLK_DOMAIN Multi_convo_core_clk, FREQ_HZ 100000000, FREQ_TOLERANCE_HZ 0, INSERT_VIP 0, PHASE 0.0" *) input clk;
  input en;
  input init_signal;
  input [10:0]no_channel_out;
  output [7:0]psum_0;
  output [7:0]psum_1;
  output [7:0]psum_2;
  output [7:0]psum_3;
  (* X_INTERFACE_INFO = "xilinx.com:signal:reset:1.0 RST.RST RST" *) (* X_INTERFACE_PARAMETER = "XIL_INTERFACENAME RST.RST, INSERT_VIP 0, POLARITY ACTIVE_LOW" *) input rst;
  input [2:0]stride;
  output weight_end;
  input [31:0]weight_size_1_16;
  input [11:0]width_input_img;

  wire BRAM_img_sel_0_1;
  wire [7:0]Convo_core_0_out_psum0;
  wire [7:0]Convo_core_0_out_psum1;
  wire [7:0]Convo_core_0_out_psum2;
  wire [7:0]Convo_core_0_out_psum3;
  wire [7:0]Convo_core_1_out_psum0;
  wire [7:0]Convo_core_1_out_psum1;
  wire [7:0]Convo_core_1_out_psum2;
  wire [7:0]Convo_core_1_out_psum3;
  wire [7:0]Convo_core_2_out_psum0;
  wire [7:0]Convo_core_2_out_psum1;
  wire [7:0]Convo_core_2_out_psum2;
  wire [7:0]Convo_core_2_out_psum3;
  wire Convo_core_2_out_psum_vld;
  wire Convo_core_3_channel_end;
  wire [7:0]Convo_core_3_out_psum0;
  wire [7:0]Convo_core_3_out_psum1;
  wire [7:0]Convo_core_3_out_psum2;
  wire [7:0]Convo_core_3_out_psum3;
  wire Convo_core_3_weight_end;
  wire [31:0]Multi_accumulator_0_BRAM_addr_sim;
  wire Multi_accumulator_0_accum_done;
  wire [31:0]Multi_accumulator_0_bram_dout_0;
  wire [31:0]Multi_accumulator_0_bram_dout_1;
  wire [31:0]Multi_accumulator_0_bram_dout_2;
  wire [31:0]Multi_accumulator_0_bram_dout_3;
  wire [15:0]WxW_out_0_1;
  wire [11:0]channel_input_img_0_1;
  wire clk_0_1;
  wire en_0_1;
  wire init_signal_0_1;
  wire mac_done_0_1;
  wire mac_done_1_1;
  wire mac_done_3_1;
  wire [10:0]no_channel_out_0_1;
  wire rst_0_1;
  wire [2:0]stride_0_1;
  wire [31:0]weight_size_1_16_0_1;
  wire [11:0]width_input_img_0_1;

  assign BRAM_addr_sim[31:0] = Multi_accumulator_0_BRAM_addr_sim;
  assign BRAM_img_sel_0_1 = BRAM_img_sel;
  assign WxW_out_0_1 = WxW_out[15:0];
  assign bram_dout_0[31:0] = Multi_accumulator_0_bram_dout_0;
  assign bram_dout_1[31:0] = Multi_accumulator_0_bram_dout_1;
  assign bram_dout_2[31:0] = Multi_accumulator_0_bram_dout_2;
  assign bram_dout_3[31:0] = Multi_accumulator_0_bram_dout_3;
  assign channel_end = Convo_core_3_channel_end;
  assign channel_input_img_0_1 = channel_input_img[11:0];
  assign clk_0_1 = clk;
  assign en_0_1 = en;
  assign init_signal_0_1 = init_signal;
  assign no_channel_out_0_1 = no_channel_out[10:0];
  assign psum_0[7:0] = Convo_core_0_out_psum0;
  assign psum_1[7:0] = Convo_core_0_out_psum1;
  assign psum_2[7:0] = Convo_core_0_out_psum2;
  assign psum_3[7:0] = Convo_core_0_out_psum3;
  assign rst_0_1 = rst;
  assign stride_0_1 = stride[2:0];
  assign weight_end = Convo_core_3_weight_end;
  assign weight_size_1_16_0_1 = weight_size_1_16[31:0];
  assign width_input_img_0_1 = width_input_img[11:0];
  Convo_core_inst_0 Convo_core_0
       (.BRAM_img_AXI_addr({1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0}),
        .BRAM_img_AXI_din({1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0}),
        .BRAM_img_AXI_en(1'b0),
        .BRAM_img_AXI_rst(1'b0),
        .BRAM_img_AXI_wen({1'b0,1'b0,1'b0,1'b0}),
        .BRAM_img_sel(BRAM_img_sel_0_1),
        .BRAM_weight_AXI_0_addr(1'b0),
        .BRAM_weight_AXI_0_clk(1'b0),
        .BRAM_weight_AXI_0_din(1'b0),
        .BRAM_weight_AXI_0_en(1'b0),
        .BRAM_weight_AXI_0_rst(1'b0),
        .BRAM_weight_AXI_0_we(1'b0),
        .BRAM_weight_AXI_1_addr(1'b0),
        .BRAM_weight_AXI_1_clk(1'b0),
        .BRAM_weight_AXI_1_din(1'b0),
        .BRAM_weight_AXI_1_en(1'b0),
        .BRAM_weight_AXI_1_rst(1'b0),
        .BRAM_weight_AXI_1_we(1'b0),
        .BRAM_weight_AXI_2_addr(1'b0),
        .BRAM_weight_AXI_2_clk(1'b0),
        .BRAM_weight_AXI_2_din(1'b0),
        .BRAM_weight_AXI_2_en(1'b0),
        .BRAM_weight_AXI_2_rst(1'b0),
        .BRAM_weight_AXI_2_we(1'b0),
        .BRAM_weight_AXI_3_addr(1'b0),
        .BRAM_weight_AXI_3_clk(1'b0),
        .BRAM_weight_AXI_3_din(1'b0),
        .BRAM_weight_AXI_3_en(1'b0),
        .BRAM_weight_AXI_3_rst(1'b0),
        .BRAM_weight_AXI_3_we(1'b0),
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
       (.BRAM_img_AXI_addr({1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0}),
        .BRAM_img_AXI_din({1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0}),
        .BRAM_img_AXI_en(1'b0),
        .BRAM_img_AXI_rst(1'b0),
        .BRAM_img_AXI_wen({1'b0,1'b0,1'b0,1'b0}),
        .BRAM_img_sel(BRAM_img_sel_0_1),
        .BRAM_weight_AXI_0_addr(1'b0),
        .BRAM_weight_AXI_0_clk(1'b0),
        .BRAM_weight_AXI_0_din(1'b0),
        .BRAM_weight_AXI_0_en(1'b0),
        .BRAM_weight_AXI_0_rst(1'b0),
        .BRAM_weight_AXI_0_we(1'b0),
        .BRAM_weight_AXI_1_addr(1'b0),
        .BRAM_weight_AXI_1_clk(1'b0),
        .BRAM_weight_AXI_1_din(1'b0),
        .BRAM_weight_AXI_1_en(1'b0),
        .BRAM_weight_AXI_1_rst(1'b0),
        .BRAM_weight_AXI_1_we(1'b0),
        .BRAM_weight_AXI_2_addr(1'b0),
        .BRAM_weight_AXI_2_clk(1'b0),
        .BRAM_weight_AXI_2_din(1'b0),
        .BRAM_weight_AXI_2_en(1'b0),
        .BRAM_weight_AXI_2_rst(1'b0),
        .BRAM_weight_AXI_2_we(1'b0),
        .BRAM_weight_AXI_3_addr(1'b0),
        .BRAM_weight_AXI_3_clk(1'b0),
        .BRAM_weight_AXI_3_din(1'b0),
        .BRAM_weight_AXI_3_en(1'b0),
        .BRAM_weight_AXI_3_rst(1'b0),
        .BRAM_weight_AXI_3_we(1'b0),
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
       (.BRAM_img_AXI_addr({1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0}),
        .BRAM_img_AXI_din({1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0}),
        .BRAM_img_AXI_en(1'b0),
        .BRAM_img_AXI_rst(1'b0),
        .BRAM_img_AXI_wen({1'b0,1'b0,1'b0,1'b0}),
        .BRAM_img_sel(BRAM_img_sel_0_1),
        .BRAM_weight_AXI_0_addr(1'b0),
        .BRAM_weight_AXI_0_clk(1'b0),
        .BRAM_weight_AXI_0_din(1'b0),
        .BRAM_weight_AXI_0_en(1'b0),
        .BRAM_weight_AXI_0_rst(1'b0),
        .BRAM_weight_AXI_0_we(1'b0),
        .BRAM_weight_AXI_1_addr(1'b0),
        .BRAM_weight_AXI_1_clk(1'b0),
        .BRAM_weight_AXI_1_din(1'b0),
        .BRAM_weight_AXI_1_en(1'b0),
        .BRAM_weight_AXI_1_rst(1'b0),
        .BRAM_weight_AXI_1_we(1'b0),
        .BRAM_weight_AXI_2_addr(1'b0),
        .BRAM_weight_AXI_2_clk(1'b0),
        .BRAM_weight_AXI_2_din(1'b0),
        .BRAM_weight_AXI_2_en(1'b0),
        .BRAM_weight_AXI_2_rst(1'b0),
        .BRAM_weight_AXI_2_we(1'b0),
        .BRAM_weight_AXI_3_addr(1'b0),
        .BRAM_weight_AXI_3_clk(1'b0),
        .BRAM_weight_AXI_3_din(1'b0),
        .BRAM_weight_AXI_3_en(1'b0),
        .BRAM_weight_AXI_3_rst(1'b0),
        .BRAM_weight_AXI_3_we(1'b0),
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
       (.BRAM_img_AXI_addr({1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0}),
        .BRAM_img_AXI_din({1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0}),
        .BRAM_img_AXI_en(1'b0),
        .BRAM_img_AXI_rst(1'b0),
        .BRAM_img_AXI_wen({1'b0,1'b0,1'b0,1'b0}),
        .BRAM_img_sel(BRAM_img_sel_0_1),
        .BRAM_weight_AXI_0_addr(1'b0),
        .BRAM_weight_AXI_0_clk(1'b0),
        .BRAM_weight_AXI_0_din(1'b0),
        .BRAM_weight_AXI_0_en(1'b0),
        .BRAM_weight_AXI_0_rst(1'b0),
        .BRAM_weight_AXI_0_we(1'b0),
        .BRAM_weight_AXI_1_addr(1'b0),
        .BRAM_weight_AXI_1_clk(1'b0),
        .BRAM_weight_AXI_1_din(1'b0),
        .BRAM_weight_AXI_1_en(1'b0),
        .BRAM_weight_AXI_1_rst(1'b0),
        .BRAM_weight_AXI_1_we(1'b0),
        .BRAM_weight_AXI_2_addr(1'b0),
        .BRAM_weight_AXI_2_clk(1'b0),
        .BRAM_weight_AXI_2_din(1'b0),
        .BRAM_weight_AXI_2_en(1'b0),
        .BRAM_weight_AXI_2_rst(1'b0),
        .BRAM_weight_AXI_2_we(1'b0),
        .BRAM_weight_AXI_3_addr(1'b0),
        .BRAM_weight_AXI_3_clk(1'b0),
        .BRAM_weight_AXI_3_din(1'b0),
        .BRAM_weight_AXI_3_en(1'b0),
        .BRAM_weight_AXI_3_rst(1'b0),
        .BRAM_weight_AXI_3_we(1'b0),
        .accum_done(Multi_accumulator_0_accum_done),
        .channel_end(Convo_core_3_channel_end),
        .channel_input_img(channel_input_img_0_1),
        .clk(clk_0_1),
        .en(en_0_1),
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
       (.BRAM_addr_sim(Multi_accumulator_0_BRAM_addr_sim),
        .BRAM_out_AXI_0_addr({1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0}),
        .BRAM_out_AXI_0_clk(1'b0),
        .BRAM_out_AXI_0_din({1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b1,1'b0,1'b0,1'b0}),
        .BRAM_out_AXI_0_en(1'b0),
        .BRAM_out_AXI_0_rst(1'b0),
        .BRAM_out_AXI_0_we({1'b0,1'b0,1'b0,1'b0}),
        .BRAM_out_AXI_1_addr({1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0}),
        .BRAM_out_AXI_1_clk(1'b0),
        .BRAM_out_AXI_1_din({1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b1,1'b0,1'b0,1'b0}),
        .BRAM_out_AXI_1_en(1'b0),
        .BRAM_out_AXI_1_rst(1'b0),
        .BRAM_out_AXI_1_we({1'b0,1'b0,1'b0,1'b0}),
        .BRAM_out_AXI_2_addr({1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0}),
        .BRAM_out_AXI_2_clk(1'b0),
        .BRAM_out_AXI_2_din({1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b1,1'b0,1'b0,1'b0}),
        .BRAM_out_AXI_2_en(1'b0),
        .BRAM_out_AXI_2_rst(1'b0),
        .BRAM_out_AXI_2_we({1'b0,1'b0,1'b0,1'b0}),
        .BRAM_out_AXI_3_addr({1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0}),
        .BRAM_out_AXI_3_clk(1'b0),
        .BRAM_out_AXI_3_din({1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b1,1'b0,1'b0,1'b0}),
        .BRAM_out_AXI_3_en(1'b0),
        .BRAM_out_AXI_3_rst(1'b0),
        .BRAM_out_AXI_3_we({1'b0,1'b0,1'b0,1'b0}),
        .WxW_out(WxW_out_0_1),
        .accum_done(Multi_accumulator_0_accum_done),
        .bram_dout_0(Multi_accumulator_0_bram_dout_0),
        .bram_dout_1(Multi_accumulator_0_bram_dout_1),
        .bram_dout_2(Multi_accumulator_0_bram_dout_2),
        .bram_dout_3(Multi_accumulator_0_bram_dout_3),
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
endmodule
