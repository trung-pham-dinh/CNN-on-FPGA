//Copyright 1986-2021 Xilinx, Inc. All Rights Reserved.
//--------------------------------------------------------------------------------
//Tool Version: Vivado v.2021.1 (win64) Build 3247384 Thu Jun 10 19:36:33 MDT 2021
//Date        : Fri Jan 28 16:10:45 2022
//Host        : DESKTOP-Q4T850H running 64-bit major release  (build 9200)
//Command     : generate_target Convo_core_inst_2.bd
//Design      : Convo_core_inst_2
//Purpose     : IP block netlist
//--------------------------------------------------------------------------------
`timescale 1 ps / 1 ps

(* CORE_GENERATION_INFO = "Convo_core_inst_2,IP_Integrator,{x_ipVendor=xilinx.com,x_ipLibrary=BlockDiagram,x_ipName=Convo_core_inst_2,x_ipVersion=1.00.a,x_ipLanguage=VERILOG,numBlks=11,numReposBlks=11,numNonXlnxBlks=0,numHierBlks=0,maxHierDepth=0,numSysgenBlks=0,numHlsBlks=0,numHdlrefBlks=6,numPkgbdBlks=0,bdsource=D_/Documents/Xilinx/CNN_FPGA/Vivado/src/bd/Convo_core/Convo_core.bd,synth_mode=OOC_per_IP}" *) (* HW_HANDOFF = "Convo_core_inst_2.hwdef" *) 
module Convo_core_inst_2
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
  (* X_INTERFACE_INFO = "xilinx.com:signal:reset:1.0 RST.BRAM_IMG_AXI_RST RST" *) (* X_INTERFACE_PARAMETER = "XIL_INTERFACENAME RST.BRAM_IMG_AXI_RST, INSERT_VIP 0, POLARITY ACTIVE_LOW" *) input BRAM_img_AXI_rst;
  input [3:0]BRAM_img_AXI_wen;
  input BRAM_img_sel;
  (* X_INTERFACE_INFO = "xilinx.com:interface:bram:1.0 BRAM_weight_AXI_0 ADDR" *) (* X_INTERFACE_PARAMETER = "XIL_INTERFACENAME BRAM_weight_AXI_0, MASTER_TYPE OTHER, MEM_ECC NONE, MEM_SIZE 8192, MEM_WIDTH 32, READ_LATENCY 1" *) input [31:0]BRAM_weight_AXI_0_addr;
  (* X_INTERFACE_INFO = "xilinx.com:interface:bram:1.0 BRAM_weight_AXI_0 CLK" *) input BRAM_weight_AXI_0_clk;
  (* X_INTERFACE_INFO = "xilinx.com:interface:bram:1.0 BRAM_weight_AXI_0 DIN" *) input [31:0]BRAM_weight_AXI_0_din;
  (* X_INTERFACE_INFO = "xilinx.com:interface:bram:1.0 BRAM_weight_AXI_0 DOUT" *) output [31:0]BRAM_weight_AXI_0_dout;
  (* X_INTERFACE_INFO = "xilinx.com:interface:bram:1.0 BRAM_weight_AXI_0 EN" *) input BRAM_weight_AXI_0_en;
  (* X_INTERFACE_INFO = "xilinx.com:interface:bram:1.0 BRAM_weight_AXI_0 RST" *) input BRAM_weight_AXI_0_rst;
  (* X_INTERFACE_INFO = "xilinx.com:interface:bram:1.0 BRAM_weight_AXI_0 WE" *) input [3:0]BRAM_weight_AXI_0_we;
  (* X_INTERFACE_INFO = "xilinx.com:interface:bram:1.0 BRAM_weight_AXI_1 ADDR" *) (* X_INTERFACE_PARAMETER = "XIL_INTERFACENAME BRAM_weight_AXI_1, MASTER_TYPE OTHER, MEM_ECC NONE, MEM_SIZE 8192, MEM_WIDTH 32, READ_LATENCY 1" *) input [31:0]BRAM_weight_AXI_1_addr;
  (* X_INTERFACE_INFO = "xilinx.com:interface:bram:1.0 BRAM_weight_AXI_1 CLK" *) input BRAM_weight_AXI_1_clk;
  (* X_INTERFACE_INFO = "xilinx.com:interface:bram:1.0 BRAM_weight_AXI_1 DIN" *) input [31:0]BRAM_weight_AXI_1_din;
  (* X_INTERFACE_INFO = "xilinx.com:interface:bram:1.0 BRAM_weight_AXI_1 DOUT" *) output [31:0]BRAM_weight_AXI_1_dout;
  (* X_INTERFACE_INFO = "xilinx.com:interface:bram:1.0 BRAM_weight_AXI_1 EN" *) input BRAM_weight_AXI_1_en;
  (* X_INTERFACE_INFO = "xilinx.com:interface:bram:1.0 BRAM_weight_AXI_1 RST" *) input BRAM_weight_AXI_1_rst;
  (* X_INTERFACE_INFO = "xilinx.com:interface:bram:1.0 BRAM_weight_AXI_1 WE" *) input [3:0]BRAM_weight_AXI_1_we;
  (* X_INTERFACE_INFO = "xilinx.com:interface:bram:1.0 BRAM_weight_AXI_2 ADDR" *) (* X_INTERFACE_PARAMETER = "XIL_INTERFACENAME BRAM_weight_AXI_2, MASTER_TYPE OTHER, MEM_ECC NONE, MEM_SIZE 8192, MEM_WIDTH 32, READ_LATENCY 1" *) input [31:0]BRAM_weight_AXI_2_addr;
  (* X_INTERFACE_INFO = "xilinx.com:interface:bram:1.0 BRAM_weight_AXI_2 CLK" *) input BRAM_weight_AXI_2_clk;
  (* X_INTERFACE_INFO = "xilinx.com:interface:bram:1.0 BRAM_weight_AXI_2 DIN" *) input [31:0]BRAM_weight_AXI_2_din;
  (* X_INTERFACE_INFO = "xilinx.com:interface:bram:1.0 BRAM_weight_AXI_2 DOUT" *) output [31:0]BRAM_weight_AXI_2_dout;
  (* X_INTERFACE_INFO = "xilinx.com:interface:bram:1.0 BRAM_weight_AXI_2 EN" *) input BRAM_weight_AXI_2_en;
  (* X_INTERFACE_INFO = "xilinx.com:interface:bram:1.0 BRAM_weight_AXI_2 RST" *) input BRAM_weight_AXI_2_rst;
  (* X_INTERFACE_INFO = "xilinx.com:interface:bram:1.0 BRAM_weight_AXI_2 WE" *) input [3:0]BRAM_weight_AXI_2_we;
  (* X_INTERFACE_INFO = "xilinx.com:interface:bram:1.0 BRAM_weight_AXI_3 ADDR" *) (* X_INTERFACE_PARAMETER = "XIL_INTERFACENAME BRAM_weight_AXI_3, MASTER_TYPE OTHER, MEM_ECC NONE, MEM_SIZE 8192, MEM_WIDTH 32, READ_LATENCY 1" *) input [31:0]BRAM_weight_AXI_3_addr;
  (* X_INTERFACE_INFO = "xilinx.com:interface:bram:1.0 BRAM_weight_AXI_3 CLK" *) input BRAM_weight_AXI_3_clk;
  (* X_INTERFACE_INFO = "xilinx.com:interface:bram:1.0 BRAM_weight_AXI_3 DIN" *) input [31:0]BRAM_weight_AXI_3_din;
  (* X_INTERFACE_INFO = "xilinx.com:interface:bram:1.0 BRAM_weight_AXI_3 DOUT" *) output [31:0]BRAM_weight_AXI_3_dout;
  (* X_INTERFACE_INFO = "xilinx.com:interface:bram:1.0 BRAM_weight_AXI_3 EN" *) input BRAM_weight_AXI_3_en;
  (* X_INTERFACE_INFO = "xilinx.com:interface:bram:1.0 BRAM_weight_AXI_3 RST" *) input BRAM_weight_AXI_3_rst;
  (* X_INTERFACE_INFO = "xilinx.com:interface:bram:1.0 BRAM_weight_AXI_3 WE" *) input [3:0]BRAM_weight_AXI_3_we;
  input accum_done;
  output channel_end;
  input [11:0]channel_input_img;
  (* X_INTERFACE_INFO = "xilinx.com:signal:clock:1.0 CLK.CLK CLK" *) (* X_INTERFACE_PARAMETER = "XIL_INTERFACENAME CLK.CLK, ASSOCIATED_RESET rst:rst_0, CLK_DOMAIN Multi_convo_core_clk_0, FREQ_HZ 100000000, FREQ_TOLERANCE_HZ 0, INSERT_VIP 0, PHASE 0.0" *) input clk;
  input en;
  input init_signal;
  output [7:0]out_psum0;
  output [7:0]out_psum1;
  output [7:0]out_psum2;
  output [7:0]out_psum3;
  output out_psum_vld;
  (* X_INTERFACE_INFO = "xilinx.com:signal:reset:1.0 RST.RST RST" *) (* X_INTERFACE_PARAMETER = "XIL_INTERFACENAME RST.RST, INSERT_VIP 0, POLARITY ACTIVE_LOW" *) input rst;
  input [2:0]stride;
  output weight_end;
  input [31:0]weight_size_1_16;
  input [11:0]width_input_img;

  wire [31:0]BRAM_PORTB_0_1_ADDR;
  wire BRAM_PORTB_0_1_CLK;
  wire [31:0]BRAM_PORTB_0_1_DIN;
  wire [31:0]BRAM_PORTB_0_1_DOUT;
  wire BRAM_PORTB_0_1_EN;
  wire BRAM_PORTB_0_1_RST;
  wire [3:0]BRAM_PORTB_0_1_WE;
  wire [31:0]BRAM_PORTB_1_1_ADDR;
  wire BRAM_PORTB_1_1_CLK;
  wire [31:0]BRAM_PORTB_1_1_DIN;
  wire [31:0]BRAM_PORTB_1_1_DOUT;
  wire BRAM_PORTB_1_1_EN;
  wire BRAM_PORTB_1_1_RST;
  wire [3:0]BRAM_PORTB_1_1_WE;
  wire [31:0]BRAM_PORTB_2_1_ADDR;
  wire BRAM_PORTB_2_1_CLK;
  wire [31:0]BRAM_PORTB_2_1_DIN;
  wire [31:0]BRAM_PORTB_2_1_DOUT;
  wire BRAM_PORTB_2_1_EN;
  wire BRAM_PORTB_2_1_RST;
  wire [3:0]BRAM_PORTB_2_1_WE;
  wire [31:0]BRAM_PORTB_3_1_ADDR;
  wire BRAM_PORTB_3_1_CLK;
  wire [31:0]BRAM_PORTB_3_1_DIN;
  wire [31:0]BRAM_PORTB_3_1_DOUT;
  wire BRAM_PORTB_3_1_EN;
  wire BRAM_PORTB_3_1_RST;
  wire [3:0]BRAM_PORTB_3_1_WE;
  wire [31:0]BRAM_in2_addr_0_1;
  wire [31:0]BRAM_in2_din_0_1;
  wire BRAM_in2_en_0_1;
  wire BRAM_in2_rst_0_1;
  wire [3:0]BRAM_in2_wen_0_1;
  wire [31:0]BRAM_selector_0_BRAM_in1_dout;
  wire [31:0]BRAM_selector_0_BRAM_in2_dout;
  wire [31:0]BRAM_selector_0_BRAM_out_addr;
  wire BRAM_selector_0_BRAM_out_clk;
  wire [31:0]BRAM_selector_0_BRAM_out_din;
  wire BRAM_selector_0_BRAM_out_en;
  wire BRAM_selector_0_BRAM_out_rst;
  wire [3:0]BRAM_selector_0_BRAM_out_wen;
  wire accum_done_1;
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
  wire sel_0_1;
  wire [2:0]stride_0_1;
  wire [31:0]weight_size_0_1;
  wire [11:0]width_0_1;

  assign BRAM_PORTB_0_1_ADDR = BRAM_weight_AXI_1_addr[31:0];
  assign BRAM_PORTB_0_1_CLK = BRAM_weight_AXI_1_clk;
  assign BRAM_PORTB_0_1_DIN = BRAM_weight_AXI_1_din[31:0];
  assign BRAM_PORTB_0_1_EN = BRAM_weight_AXI_1_en;
  assign BRAM_PORTB_0_1_RST = BRAM_weight_AXI_1_rst;
  assign BRAM_PORTB_0_1_WE = BRAM_weight_AXI_1_we[3:0];
  assign BRAM_PORTB_1_1_ADDR = BRAM_weight_AXI_0_addr[31:0];
  assign BRAM_PORTB_1_1_CLK = BRAM_weight_AXI_0_clk;
  assign BRAM_PORTB_1_1_DIN = BRAM_weight_AXI_0_din[31:0];
  assign BRAM_PORTB_1_1_EN = BRAM_weight_AXI_0_en;
  assign BRAM_PORTB_1_1_RST = BRAM_weight_AXI_0_rst;
  assign BRAM_PORTB_1_1_WE = BRAM_weight_AXI_0_we[3:0];
  assign BRAM_PORTB_2_1_ADDR = BRAM_weight_AXI_2_addr[31:0];
  assign BRAM_PORTB_2_1_CLK = BRAM_weight_AXI_2_clk;
  assign BRAM_PORTB_2_1_DIN = BRAM_weight_AXI_2_din[31:0];
  assign BRAM_PORTB_2_1_EN = BRAM_weight_AXI_2_en;
  assign BRAM_PORTB_2_1_RST = BRAM_weight_AXI_2_rst;
  assign BRAM_PORTB_2_1_WE = BRAM_weight_AXI_2_we[3:0];
  assign BRAM_PORTB_3_1_ADDR = BRAM_weight_AXI_3_addr[31:0];
  assign BRAM_PORTB_3_1_CLK = BRAM_weight_AXI_3_clk;
  assign BRAM_PORTB_3_1_DIN = BRAM_weight_AXI_3_din[31:0];
  assign BRAM_PORTB_3_1_EN = BRAM_weight_AXI_3_en;
  assign BRAM_PORTB_3_1_RST = BRAM_weight_AXI_3_rst;
  assign BRAM_PORTB_3_1_WE = BRAM_weight_AXI_3_we[3:0];
  assign BRAM_img_AXI_dout[31:0] = BRAM_selector_0_BRAM_in2_dout;
  assign BRAM_in2_addr_0_1 = BRAM_img_AXI_addr[31:0];
  assign BRAM_in2_din_0_1 = BRAM_img_AXI_din[31:0];
  assign BRAM_in2_en_0_1 = BRAM_img_AXI_en;
  assign BRAM_in2_rst_0_1 = BRAM_img_AXI_rst;
  assign BRAM_in2_wen_0_1 = BRAM_img_AXI_wen[3:0];
  assign BRAM_weight_AXI_0_dout[31:0] = BRAM_PORTB_1_1_DOUT;
  assign BRAM_weight_AXI_1_dout[31:0] = BRAM_PORTB_0_1_DOUT;
  assign BRAM_weight_AXI_2_dout[31:0] = BRAM_PORTB_2_1_DOUT;
  assign BRAM_weight_AXI_3_dout[31:0] = BRAM_PORTB_3_1_DOUT;
  assign accum_done_1 = accum_done;
  assign channel_0_1 = channel_input_img[11:0];
  assign channel_end = load_activation_0_channel_end;
  assign clk_0_1 = clk;
  assign en_0_1 = en;
  assign init_signal_0_1 = init_signal;
  assign out_psum0[7:0] = computing_core_0_out_psum0;
  assign out_psum1[7:0] = computing_core_0_out_psum1;
  assign out_psum2[7:0] = computing_core_0_out_psum2;
  assign out_psum3[7:0] = computing_core_0_out_psum3;
  assign out_psum_vld = computing_core_0_out_psum_vld;
  assign rst_0_1 = rst;
  assign sel_0_1 = BRAM_img_sel;
  assign stride_0_1 = stride[2:0];
  assign weight_end = load_weight_0_weight_end;
  assign weight_size_0_1 = weight_size_1_16[31:0];
  assign width_0_1 = width_input_img[11:0];
  Convo_core_inst_2_BRAM_selector_0_0 BRAM_selector_0
       (.BRAM_in1_addr(load_activation_0_BRAM_1_addr),
        .BRAM_in1_din(load_activation_0_BRAM_din),
        .BRAM_in1_dout(BRAM_selector_0_BRAM_in1_dout),
        .BRAM_in1_en(load_activation_0_BRAM_en),
        .BRAM_in1_rst(load_activation_0_BRAM_rst),
        .BRAM_in1_wen(load_activation_0_BRAM_wen),
        .BRAM_in2_addr(BRAM_in2_addr_0_1),
        .BRAM_in2_din(BRAM_in2_din_0_1),
        .BRAM_in2_dout(BRAM_selector_0_BRAM_in2_dout),
        .BRAM_in2_en(BRAM_in2_en_0_1),
        .BRAM_in2_rst(BRAM_in2_rst_0_1),
        .BRAM_in2_wen(BRAM_in2_wen_0_1),
        .BRAM_out_addr(BRAM_selector_0_BRAM_out_addr),
        .BRAM_out_clk(BRAM_selector_0_BRAM_out_clk),
        .BRAM_out_din(BRAM_selector_0_BRAM_out_din),
        .BRAM_out_dout(blk_mem_gen_4_doutb),
        .BRAM_out_en(BRAM_selector_0_BRAM_out_en),
        .BRAM_out_rst(BRAM_selector_0_BRAM_out_rst),
        .BRAM_out_wen(BRAM_selector_0_BRAM_out_wen),
        .clk(load_activation_0_BRAM_clk),
        .sel(sel_0_1));
  Convo_core_inst_2_blk_mem_gen_0_0 blk_mem_gen_0
       (.addra(load_weight_0_BRAM_0_addr),
        .addrb(BRAM_PORTB_1_1_ADDR),
        .clka(load_weight_0_BRAM_clk),
        .clkb(BRAM_PORTB_1_1_CLK),
        .dina(load_weight_0_BRAM_din),
        .dinb(BRAM_PORTB_1_1_DIN),
        .douta(blk_mem_gen_0_douta),
        .doutb(BRAM_PORTB_1_1_DOUT),
        .ena(load_weight_0_BRAM_en),
        .enb(BRAM_PORTB_1_1_EN),
        .rsta(load_weight_0_BRAM_rst),
        .rstb(BRAM_PORTB_1_1_RST),
        .wea(load_weight_0_BRAM_wen),
        .web(BRAM_PORTB_1_1_WE));
  Convo_core_inst_2_blk_mem_gen_1_0 blk_mem_gen_1
       (.addra(load_weight_0_BRAM_1_addr),
        .addrb(BRAM_PORTB_0_1_ADDR),
        .clka(load_weight_0_BRAM_clk),
        .clkb(BRAM_PORTB_0_1_CLK),
        .dina(load_weight_0_BRAM_din),
        .dinb(BRAM_PORTB_0_1_DIN),
        .douta(blk_mem_gen_1_douta),
        .doutb(BRAM_PORTB_0_1_DOUT),
        .ena(load_weight_0_BRAM_en),
        .enb(BRAM_PORTB_0_1_EN),
        .rsta(load_weight_0_BRAM_rst),
        .rstb(BRAM_PORTB_0_1_RST),
        .wea(load_weight_0_BRAM_wen),
        .web(BRAM_PORTB_0_1_WE));
  Convo_core_inst_2_blk_mem_gen_2_0 blk_mem_gen_2
       (.addra(load_weight_0_BRAM_3_addr),
        .addrb(BRAM_PORTB_2_1_ADDR),
        .clka(load_weight_0_BRAM_clk),
        .clkb(BRAM_PORTB_2_1_CLK),
        .dina(load_weight_0_BRAM_din),
        .dinb(BRAM_PORTB_2_1_DIN),
        .douta(blk_mem_gen_2_douta),
        .doutb(BRAM_PORTB_2_1_DOUT),
        .ena(load_weight_0_BRAM_en),
        .enb(BRAM_PORTB_2_1_EN),
        .rsta(load_weight_0_BRAM_rst),
        .rstb(BRAM_PORTB_2_1_RST),
        .wea(load_weight_0_BRAM_wen),
        .web(BRAM_PORTB_2_1_WE));
  Convo_core_inst_2_blk_mem_gen_3_0 blk_mem_gen_3
       (.addra(load_weight_0_BRAM_2_addr),
        .addrb(BRAM_PORTB_3_1_ADDR),
        .clka(load_weight_0_BRAM_clk),
        .clkb(BRAM_PORTB_3_1_CLK),
        .dina(load_weight_0_BRAM_din),
        .dinb(BRAM_PORTB_3_1_DIN),
        .douta(blk_mem_gen_3_douta),
        .doutb(BRAM_PORTB_3_1_DOUT),
        .ena(load_weight_0_BRAM_en),
        .enb(BRAM_PORTB_3_1_EN),
        .rsta(load_weight_0_BRAM_rst),
        .rstb(BRAM_PORTB_3_1_RST),
        .wea(load_weight_0_BRAM_wen),
        .web(BRAM_PORTB_3_1_WE));
  Convo_core_inst_2_blk_mem_gen_4_0 blk_mem_gen_4
       (.addra(load_activation_0_BRAM_0_addr),
        .addrb(BRAM_selector_0_BRAM_out_addr),
        .clka(load_activation_0_BRAM_clk),
        .clkb(BRAM_selector_0_BRAM_out_clk),
        .dina(load_activation_0_BRAM_din),
        .dinb(BRAM_selector_0_BRAM_out_din),
        .douta(blk_mem_gen_4_douta),
        .doutb(blk_mem_gen_4_doutb),
        .ena(load_activation_0_BRAM_en),
        .enb(BRAM_selector_0_BRAM_out_en),
        .rsta(load_activation_0_BRAM_rst),
        .rstb(BRAM_selector_0_BRAM_out_rst),
        .wea(load_activation_0_BRAM_wen),
        .web(BRAM_selector_0_BRAM_out_wen));
  Convo_core_inst_2_computing_core_0_0 computing_core_0
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
  Convo_core_inst_2_load_activation_0_0 load_activation_0
       (.BRAM_0_addr(load_activation_0_BRAM_0_addr),
        .BRAM_0_dout(blk_mem_gen_4_douta),
        .BRAM_1_addr(load_activation_0_BRAM_1_addr),
        .BRAM_1_dout(BRAM_selector_0_BRAM_in1_dout),
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
  Convo_core_inst_2_load_weight_0_0 load_weight_0
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
  Convo_core_inst_2_load_weight_ctrl_0_0 load_weight_ctrl_0
       (.buffer_ready(load_weight_ctrl_0_buffer_ready),
        .channel_end(load_activation_0_channel_end),
        .clk(clk_0_1),
        .core_end(accum_done_1),
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
  Convo_core_inst_2_pipeline_0_0 pipeline_0
       (.activate_ready(load_activation_0_done),
        .clk(clk_0_1),
        .core_end(accum_done_1),
        .en(en_0_1),
        .init_signal(init_signal_0_1),
        .rst(rst_0_1),
        .start_core(pipeline_0_start_core),
        .start_load(pipeline_0_start_load),
        .weight_ready(load_weight_ctrl_0_buffer_ready));
endmodule
