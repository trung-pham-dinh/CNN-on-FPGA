//Copyright 1986-2021 Xilinx, Inc. All Rights Reserved.
//--------------------------------------------------------------------------------
//Tool Version: Vivado v.2021.1 (win64) Build 3247384 Thu Jun 10 19:36:33 MDT 2021
//Date        : Mon Jan 24 09:51:43 2022
//Host        : DESKTOP-Q4T850H running 64-bit major release  (build 9200)
//Command     : generate_target Convo_core.bd
//Design      : Convo_core
//Purpose     : IP block netlist
//--------------------------------------------------------------------------------
`timescale 1 ps / 1 ps

(* CORE_GENERATION_INFO = "Convo_core,IP_Integrator,{x_ipVendor=xilinx.com,x_ipLibrary=BlockDiagram,x_ipName=Convo_core,x_ipVersion=1.00.a,x_ipLanguage=VERILOG,numBlks=10,numReposBlks=10,numNonXlnxBlks=0,numHierBlks=0,maxHierDepth=0,numSysgenBlks=0,numHlsBlks=0,numHdlrefBlks=5,numPkgbdBlks=0,bdsource=USER,synth_mode=OOC_per_IP}" *) (* HW_HANDOFF = "Convo_core.hwdef" *) 
module Convo_core
   (BRAM_addr_weight,
    activate0_sim,
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
    weight_end_0,
    weight_size_0,
    width_0);
  output [31:0]BRAM_addr_weight;
  output [23:0]activate0_sim;
  output [23:0]activate1_sim;
  output [23:0]activate2_sim;
  (* X_INTERFACE_INFO = "xilinx.com:signal:reset:1.0 RST.ADDR_RST_0 RST" *) (* X_INTERFACE_PARAMETER = "XIL_INTERFACENAME RST.ADDR_RST_0, INSERT_VIP 0, POLARITY ACTIVE_LOW" *) input addr_rst_0;
  input [11:0]channel_0;
  output channel_end_out;
  (* X_INTERFACE_INFO = "xilinx.com:signal:clock:1.0 CLK.CLK_0 CLK" *) (* X_INTERFACE_PARAMETER = "XIL_INTERFACENAME CLK.CLK_0, ASSOCIATED_RESET rst_0, CLK_DOMAIN Convo_core_clk_0, FREQ_HZ 100000000, FREQ_TOLERANCE_HZ 0, INSERT_VIP 0, PHASE 0.0" *) input clk_0;
  input en_0;
  input init_signal_0;
  output [7:0]out_psum0_0;
  output [7:0]out_psum1_0;
  output [7:0]out_psum2_0;
  output [7:0]out_psum3_0;
  output out_psum_vld_0;
  (* X_INTERFACE_INFO = "xilinx.com:signal:reset:1.0 RST.RST_0 RST" *) (* X_INTERFACE_PARAMETER = "XIL_INTERFACENAME RST.RST_0, INSERT_VIP 0, POLARITY ACTIVE_LOW" *) input rst_0;
  output start_core_sim;
  input [2:0]stride_0;
  output [71:0]weight0_sim;
  output [71:0]weight1_sim;
  output [71:0]weight2_sim;
  output [71:0]weight3_sim;
  output weight_done;
  output weight_end_0;
  input [31:0]weight_size_0;
  input [11:0]width_0;

  wire addr_rst_0_1;
  wire [31:0]blk_mem_gen_0_douta;
  wire [31:0]blk_mem_gen_1_douta;
  wire [31:0]blk_mem_gen_2_douta;
  wire [31:0]blk_mem_gen_3_douta;
  wire [31:0]blk_mem_gen_4_douta;
  wire [31:0]blk_mem_gen_4_doutb;
  wire [11:0]channel_0_1;
  wire clk_0_1;
  wire [7:0]computing_core_0_out_psum0;
  wire [7:0]computing_core_0_out_psum1;
  wire [7:0]computing_core_0_out_psum2;
  wire [7:0]computing_core_0_out_psum3;
  wire computing_core_0_out_psum_vld;
  wire en_0_1;
  wire init_signal_0_1;
  wire [31:0]load_activation_0_BRAM_0_addr;
  wire [31:0]load_activation_0_BRAM_1_addr;
  wire load_activation_0_BRAM_clk;
  wire [31:0]load_activation_0_BRAM_din;
  wire load_activation_0_BRAM_en;
  wire load_activation_0_BRAM_rst;
  wire [3:0]load_activation_0_BRAM_wen;
  wire [23:0]load_activation_0_activate0;
  wire [23:0]load_activation_0_activate1;
  wire [23:0]load_activation_0_activate2;
  wire load_activation_0_channel_end;
  wire load_activation_0_done;
  wire [31:0]load_weight_0_BRAM_0_addr;
  wire [31:0]load_weight_0_BRAM_1_addr;
  wire [31:0]load_weight_0_BRAM_2_addr;
  wire [31:0]load_weight_0_BRAM_3_addr;
  wire load_weight_0_BRAM_clk;
  wire [31:0]load_weight_0_BRAM_din;
  wire load_weight_0_BRAM_en;
  wire load_weight_0_BRAM_rst;
  wire [3:0]load_weight_0_BRAM_wen;
  wire load_weight_0_load_end;
  wire [71:0]load_weight_0_weight0;
  wire [71:0]load_weight_0_weight1;
  wire [71:0]load_weight_0_weight2;
  wire [71:0]load_weight_0_weight3;
  wire load_weight_0_weight_end;
  wire load_weight_ctrl_0_buffer_ready;
  wire load_weight_ctrl_0_load_start;
  wire [71:0]load_weight_ctrl_0_weight0_out;
  wire [71:0]load_weight_ctrl_0_weight1_out;
  wire [71:0]load_weight_ctrl_0_weight2_out;
  wire [71:0]load_weight_ctrl_0_weight3_out;
  wire pipeline_0_start_core;
  wire pipeline_0_start_load;
  wire rst_0_1;
  wire [2:0]stride_0_1;
  wire [31:0]weight_size_0_1;
  wire [11:0]width_0_1;

  assign BRAM_addr_weight[31:0] = load_weight_0_BRAM_0_addr;
  assign activate0_sim[23:0] = load_activation_0_activate0;
  assign activate1_sim[23:0] = load_activation_0_activate1;
  assign activate2_sim[23:0] = load_activation_0_activate2;
  assign addr_rst_0_1 = addr_rst_0;
  assign channel_0_1 = channel_0[11:0];
  assign channel_end_out = load_activation_0_channel_end;
  assign clk_0_1 = clk_0;
  assign en_0_1 = en_0;
  assign init_signal_0_1 = init_signal_0;
  assign out_psum0_0[7:0] = computing_core_0_out_psum0;
  assign out_psum1_0[7:0] = computing_core_0_out_psum1;
  assign out_psum2_0[7:0] = computing_core_0_out_psum2;
  assign out_psum3_0[7:0] = computing_core_0_out_psum3;
  assign out_psum_vld_0 = computing_core_0_out_psum_vld;
  assign rst_0_1 = rst_0;
  assign start_core_sim = pipeline_0_start_core;
  assign stride_0_1 = stride_0[2:0];
  assign weight0_sim[71:0] = load_weight_ctrl_0_weight0_out;
  assign weight1_sim[71:0] = load_weight_ctrl_0_weight1_out;
  assign weight2_sim[71:0] = load_weight_ctrl_0_weight2_out;
  assign weight3_sim[71:0] = load_weight_ctrl_0_weight3_out;
  assign weight_done = load_weight_0_load_end;
  assign weight_end_0 = load_weight_0_weight_end;
  assign weight_size_0_1 = weight_size_0[31:0];
  assign width_0_1 = width_0[11:0];
  Convo_core_blk_mem_gen_0_0 blk_mem_gen_0
       (.addra(load_weight_0_BRAM_0_addr),
        .clka(load_weight_0_BRAM_clk),
        .dina(load_weight_0_BRAM_din),
        .douta(blk_mem_gen_0_douta),
        .ena(load_weight_0_BRAM_en),
        .rsta(load_weight_0_BRAM_rst),
        .wea(load_weight_0_BRAM_wen));
  Convo_core_blk_mem_gen_1_0 blk_mem_gen_1
       (.addra(load_weight_0_BRAM_1_addr),
        .clka(load_weight_0_BRAM_clk),
        .dina(load_weight_0_BRAM_din),
        .douta(blk_mem_gen_1_douta),
        .ena(load_weight_0_BRAM_en),
        .rsta(load_weight_0_BRAM_rst),
        .wea(load_weight_0_BRAM_wen));
  Convo_core_blk_mem_gen_2_0 blk_mem_gen_2
       (.addra(load_weight_0_BRAM_3_addr),
        .clka(load_weight_0_BRAM_clk),
        .dina(load_weight_0_BRAM_din),
        .douta(blk_mem_gen_2_douta),
        .ena(load_weight_0_BRAM_en),
        .rsta(load_weight_0_BRAM_rst),
        .wea(load_weight_0_BRAM_wen));
  Convo_core_blk_mem_gen_3_0 blk_mem_gen_3
       (.addra(load_weight_0_BRAM_2_addr),
        .clka(load_weight_0_BRAM_clk),
        .dina(load_weight_0_BRAM_din),
        .douta(blk_mem_gen_3_douta),
        .ena(load_weight_0_BRAM_en),
        .rsta(load_weight_0_BRAM_rst),
        .wea(load_weight_0_BRAM_wen));
  Convo_core_blk_mem_gen_4_0 blk_mem_gen_4
       (.addra(load_activation_0_BRAM_0_addr),
        .addrb(load_activation_0_BRAM_1_addr),
        .clka(load_activation_0_BRAM_clk),
        .clkb(load_activation_0_BRAM_clk),
        .dina(load_activation_0_BRAM_din),
        .dinb(load_activation_0_BRAM_din),
        .douta(blk_mem_gen_4_douta),
        .doutb(blk_mem_gen_4_doutb),
        .ena(load_activation_0_BRAM_en),
        .enb(load_activation_0_BRAM_en),
        .rsta(load_activation_0_BRAM_rst),
        .rstb(load_activation_0_BRAM_rst),
        .wea(load_activation_0_BRAM_wen),
        .web(load_activation_0_BRAM_wen));
  Convo_core_computing_core_0_0 computing_core_0
       (.activate0(load_activation_0_activate0),
        .activate1(load_activation_0_activate1),
        .activate2(load_activation_0_activate2),
        .clk(clk_0_1),
        .load_done(pipeline_0_start_core),
        .out_psum0(computing_core_0_out_psum0),
        .out_psum1(computing_core_0_out_psum1),
        .out_psum2(computing_core_0_out_psum2),
        .out_psum3(computing_core_0_out_psum3),
        .out_psum_vld(computing_core_0_out_psum_vld),
        .rst(rst_0_1),
        .weight0(load_weight_ctrl_0_weight0_out),
        .weight1(load_weight_ctrl_0_weight1_out),
        .weight2(load_weight_ctrl_0_weight2_out),
        .weight3(load_weight_ctrl_0_weight3_out));
  Convo_core_load_activation_0_0 load_activation_0
       (.BRAM_0_addr(load_activation_0_BRAM_0_addr),
        .BRAM_0_dout(blk_mem_gen_4_douta),
        .BRAM_1_addr(load_activation_0_BRAM_1_addr),
        .BRAM_1_dout(blk_mem_gen_4_doutb),
        .BRAM_clk(load_activation_0_BRAM_clk),
        .BRAM_din(load_activation_0_BRAM_din),
        .BRAM_en(load_activation_0_BRAM_en),
        .BRAM_rst(load_activation_0_BRAM_rst),
        .BRAM_wen(load_activation_0_BRAM_wen),
        .activate0(load_activation_0_activate0),
        .activate1(load_activation_0_activate1),
        .activate2(load_activation_0_activate2),
        .channel(channel_0_1),
        .channel_end(load_activation_0_channel_end),
        .clk(clk_0_1),
        .done(load_activation_0_done),
        .load_start(pipeline_0_start_load),
        .rst(rst_0_1),
        .stride(stride_0_1),
        .width(width_0_1));
  Convo_core_load_weight_0_1 load_weight_0
       (.BRAM_0_addr(load_weight_0_BRAM_0_addr),
        .BRAM_0_dout(blk_mem_gen_0_douta),
        .BRAM_1_addr(load_weight_0_BRAM_1_addr),
        .BRAM_1_dout(blk_mem_gen_1_douta),
        .BRAM_2_addr(load_weight_0_BRAM_2_addr),
        .BRAM_2_dout(blk_mem_gen_2_douta),
        .BRAM_3_addr(load_weight_0_BRAM_3_addr),
        .BRAM_3_dout(blk_mem_gen_3_douta),
        .BRAM_clk(load_weight_0_BRAM_clk),
        .BRAM_din(load_weight_0_BRAM_din),
        .BRAM_en(load_weight_0_BRAM_en),
        .BRAM_rst(load_weight_0_BRAM_rst),
        .BRAM_wen(load_weight_0_BRAM_wen),
        .addr_rst(addr_rst_0_1),
        .clk(clk_0_1),
        .load_end(load_weight_0_load_end),
        .load_start(load_weight_ctrl_0_load_start),
        .rst(rst_0_1),
        .weight0(load_weight_0_weight0),
        .weight1(load_weight_0_weight1),
        .weight2(load_weight_0_weight2),
        .weight3(load_weight_0_weight3),
        .weight_end(load_weight_0_weight_end),
        .weight_size(weight_size_0_1));
  Convo_core_load_weight_ctrl_0_0 load_weight_ctrl_0
       (.buffer_ready(load_weight_ctrl_0_buffer_ready),
        .channel_end(load_activation_0_channel_end),
        .clk(clk_0_1),
        .core_free(computing_core_0_out_psum_vld),
        .init(init_signal_0_1),
        .load_done(load_weight_0_load_end),
        .load_start(load_weight_ctrl_0_load_start),
        .rst(rst_0_1),
        .weight0_in(load_weight_0_weight0),
        .weight0_out(load_weight_ctrl_0_weight0_out),
        .weight1_in(load_weight_0_weight1),
        .weight1_out(load_weight_ctrl_0_weight1_out),
        .weight2_in(load_weight_0_weight2),
        .weight2_out(load_weight_ctrl_0_weight2_out),
        .weight3_in(load_weight_0_weight3),
        .weight3_out(load_weight_ctrl_0_weight3_out));
  Convo_core_pipeline_0_0 pipeline_0
       (.activate_ready(load_activation_0_done),
        .clk(clk_0_1),
        .core_end(computing_core_0_out_psum_vld),
        .en(en_0_1),
        .init_signal(init_signal_0_1),
        .rst(rst_0_1),
        .start_core(pipeline_0_start_core),
        .start_load(pipeline_0_start_load),
        .weight_ready(load_weight_ctrl_0_buffer_ready));
endmodule
