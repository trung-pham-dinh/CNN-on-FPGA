//Copyright 1986-2021 Xilinx, Inc. All Rights Reserved.
//--------------------------------------------------------------------------------
//Tool Version: Vivado v.2021.1 (win64) Build 3247384 Thu Jun 10 19:36:33 MDT 2021
//Date        : Mon Feb  7 16:35:12 2022
//Host        : DESKTOP-Q4T850H running 64-bit major release  (build 9200)
//Command     : generate_target Multi_accumulator_inst_0.bd
//Design      : Multi_accumulator_inst_0
//Purpose     : IP block netlist
//--------------------------------------------------------------------------------
`timescale 1 ps / 1 ps

(* CORE_GENERATION_INFO = "Multi_accumulator_inst_0,IP_Integrator,{x_ipVendor=xilinx.com,x_ipLibrary=BlockDiagram,x_ipName=Multi_accumulator_inst_0,x_ipVersion=1.00.a,x_ipLanguage=VERILOG,numBlks=10,numReposBlks=10,numNonXlnxBlks=0,numHierBlks=0,maxHierDepth=0,numSysgenBlks=0,numHlsBlks=0,numHdlrefBlks=6,numPkgbdBlks=0,bdsource=D_/Documents/Xilinx/CNN_FPGA/Vivado/src/bd/Multi_accumulator/Multi_accumulator.bd,synth_mode=OOC_per_IP}" *) (* HW_HANDOFF = "Multi_accumulator_inst_0.hwdef" *) 
module Multi_accumulator_inst_0
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
  (* X_INTERFACE_INFO = "xilinx.com:interface:bram:1.0 BRAM_out_AXI_0 ADDR" *) (* X_INTERFACE_PARAMETER = "XIL_INTERFACENAME BRAM_out_AXI_0, MASTER_TYPE BRAM_CTRL, MEM_ECC NONE, MEM_SIZE 8192, MEM_WIDTH 32, READ_LATENCY 1" *) input [31:0]BRAM_out_AXI_0_addr;
  (* X_INTERFACE_INFO = "xilinx.com:interface:bram:1.0 BRAM_out_AXI_0 CLK" *) input BRAM_out_AXI_0_clk;
  (* X_INTERFACE_INFO = "xilinx.com:interface:bram:1.0 BRAM_out_AXI_0 DIN" *) input [31:0]BRAM_out_AXI_0_din;
  (* X_INTERFACE_INFO = "xilinx.com:interface:bram:1.0 BRAM_out_AXI_0 DOUT" *) output [31:0]BRAM_out_AXI_0_dout;
  (* X_INTERFACE_INFO = "xilinx.com:interface:bram:1.0 BRAM_out_AXI_0 EN" *) input BRAM_out_AXI_0_en;
  (* X_INTERFACE_INFO = "xilinx.com:interface:bram:1.0 BRAM_out_AXI_0 RST" *) input BRAM_out_AXI_0_rst;
  (* X_INTERFACE_INFO = "xilinx.com:interface:bram:1.0 BRAM_out_AXI_0 WE" *) input [3:0]BRAM_out_AXI_0_we;
  (* X_INTERFACE_INFO = "xilinx.com:interface:bram:1.0 BRAM_out_AXI_1 ADDR" *) (* X_INTERFACE_PARAMETER = "XIL_INTERFACENAME BRAM_out_AXI_1, MASTER_TYPE BRAM_CTRL, MEM_ECC NONE, MEM_SIZE 8192, MEM_WIDTH 32, READ_LATENCY 1" *) input [31:0]BRAM_out_AXI_1_addr;
  (* X_INTERFACE_INFO = "xilinx.com:interface:bram:1.0 BRAM_out_AXI_1 CLK" *) input BRAM_out_AXI_1_clk;
  (* X_INTERFACE_INFO = "xilinx.com:interface:bram:1.0 BRAM_out_AXI_1 DIN" *) input [31:0]BRAM_out_AXI_1_din;
  (* X_INTERFACE_INFO = "xilinx.com:interface:bram:1.0 BRAM_out_AXI_1 DOUT" *) output [31:0]BRAM_out_AXI_1_dout;
  (* X_INTERFACE_INFO = "xilinx.com:interface:bram:1.0 BRAM_out_AXI_1 EN" *) input BRAM_out_AXI_1_en;
  (* X_INTERFACE_INFO = "xilinx.com:interface:bram:1.0 BRAM_out_AXI_1 RST" *) input BRAM_out_AXI_1_rst;
  (* X_INTERFACE_INFO = "xilinx.com:interface:bram:1.0 BRAM_out_AXI_1 WE" *) input [3:0]BRAM_out_AXI_1_we;
  (* X_INTERFACE_INFO = "xilinx.com:interface:bram:1.0 BRAM_out_AXI_2 ADDR" *) (* X_INTERFACE_PARAMETER = "XIL_INTERFACENAME BRAM_out_AXI_2, MASTER_TYPE BRAM_CTRL, MEM_ECC NONE, MEM_SIZE 8192, MEM_WIDTH 32, READ_LATENCY 1" *) input [31:0]BRAM_out_AXI_2_addr;
  (* X_INTERFACE_INFO = "xilinx.com:interface:bram:1.0 BRAM_out_AXI_2 CLK" *) input BRAM_out_AXI_2_clk;
  (* X_INTERFACE_INFO = "xilinx.com:interface:bram:1.0 BRAM_out_AXI_2 DIN" *) input [31:0]BRAM_out_AXI_2_din;
  (* X_INTERFACE_INFO = "xilinx.com:interface:bram:1.0 BRAM_out_AXI_2 DOUT" *) output [31:0]BRAM_out_AXI_2_dout;
  (* X_INTERFACE_INFO = "xilinx.com:interface:bram:1.0 BRAM_out_AXI_2 EN" *) input BRAM_out_AXI_2_en;
  (* X_INTERFACE_INFO = "xilinx.com:interface:bram:1.0 BRAM_out_AXI_2 RST" *) input BRAM_out_AXI_2_rst;
  (* X_INTERFACE_INFO = "xilinx.com:interface:bram:1.0 BRAM_out_AXI_2 WE" *) input [3:0]BRAM_out_AXI_2_we;
  (* X_INTERFACE_INFO = "xilinx.com:interface:bram:1.0 BRAM_out_AXI_3 ADDR" *) (* X_INTERFACE_PARAMETER = "XIL_INTERFACENAME BRAM_out_AXI_3, MASTER_TYPE BRAM_CTRL, MEM_ECC NONE, MEM_SIZE 8192, MEM_WIDTH 32, READ_LATENCY 1" *) input [31:0]BRAM_out_AXI_3_addr;
  (* X_INTERFACE_INFO = "xilinx.com:interface:bram:1.0 BRAM_out_AXI_3 CLK" *) input BRAM_out_AXI_3_clk;
  (* X_INTERFACE_INFO = "xilinx.com:interface:bram:1.0 BRAM_out_AXI_3 DIN" *) input [31:0]BRAM_out_AXI_3_din;
  (* X_INTERFACE_INFO = "xilinx.com:interface:bram:1.0 BRAM_out_AXI_3 DOUT" *) output [31:0]BRAM_out_AXI_3_dout;
  (* X_INTERFACE_INFO = "xilinx.com:interface:bram:1.0 BRAM_out_AXI_3 EN" *) input BRAM_out_AXI_3_en;
  (* X_INTERFACE_INFO = "xilinx.com:interface:bram:1.0 BRAM_out_AXI_3 RST" *) input BRAM_out_AXI_3_rst;
  (* X_INTERFACE_INFO = "xilinx.com:interface:bram:1.0 BRAM_out_AXI_3 WE" *) input [3:0]BRAM_out_AXI_3_we;
  input [15:0]WxW_out;
  output accum_done;
  output [31:0]bram_dout_0;
  output [31:0]bram_dout_1;
  output [31:0]bram_dout_2;
  output [31:0]bram_dout_3;
  (* X_INTERFACE_INFO = "xilinx.com:signal:clock:1.0 CLK.CLK CLK" *) (* X_INTERFACE_PARAMETER = "XIL_INTERFACENAME CLK.CLK, ASSOCIATED_RESET rst, CLK_DOMAIN Multi_convo_core_clk, FREQ_HZ 100000000, FREQ_TOLERANCE_HZ 0, INSERT_VIP 0, PHASE 0.0" *) input clk;
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
  wire Net;
  wire [15:0]Net1;
  wire [10:0]Net2;
  wire [31:0]accumulator_0_BRAM_addr;
  wire accumulator_0_BRAM_clk;
  wire [31:0]accumulator_0_BRAM_din;
  wire accumulator_0_BRAM_en;
  wire accumulator_0_BRAM_rst;
  wire [3:0]accumulator_0_BRAM_wen;
  wire accumulator_0_accum_done;
  wire [31:0]accumulator_1_BRAM_addr;
  wire accumulator_1_BRAM_clk;
  wire [31:0]accumulator_1_BRAM_din;
  wire accumulator_1_BRAM_en;
  wire accumulator_1_BRAM_rst;
  wire [3:0]accumulator_1_BRAM_wen;
  wire accumulator_1_accum_done;
  wire [31:0]accumulator_2_BRAM_addr;
  wire accumulator_2_BRAM_clk;
  wire [31:0]accumulator_2_BRAM_din;
  wire accumulator_2_BRAM_en;
  wire accumulator_2_BRAM_rst;
  wire [3:0]accumulator_2_BRAM_wen;
  wire accumulator_2_accum_done;
  wire [31:0]accumulator_3_BRAM_addr;
  wire accumulator_3_BRAM_clk;
  wire [31:0]accumulator_3_BRAM_din;
  wire accumulator_3_BRAM_en;
  wire accumulator_3_BRAM_rst;
  wire [3:0]accumulator_3_BRAM_wen;
  wire accumulator_3_accum_done;
  wire and_gate_accum_0_out;
  wire and_gate_accum_1_and_out;
  wire [31:0]blk_mem_gen_0_douta;
  wire [31:0]blk_mem_gen_1_douta;
  wire [31:0]blk_mem_gen_2_douta;
  wire [31:0]blk_mem_gen_3_douta;
  wire clk_0_1;
  wire in0_0_1;
  wire in1_0_1;
  wire in2_0_1;
  wire in3_0_1;
  wire [7:0]in_psum0_0_1;
  wire [7:0]in_psum0_1_1;
  wire [7:0]in_psum0_2_1;
  wire [7:0]in_psum0_3_1;
  wire [7:0]in_psum1_0_1;
  wire [7:0]in_psum1_1_1;
  wire [7:0]in_psum1_2_1;
  wire [7:0]in_psum1_3_1;
  wire [7:0]in_psum2_0_1;
  wire [7:0]in_psum2_1_1;
  wire [7:0]in_psum2_2_1;
  wire [7:0]in_psum2_3_1;
  wire [7:0]in_psum3_0_1;
  wire [7:0]in_psum3_1_1;
  wire [7:0]in_psum3_2_1;
  wire [7:0]in_psum3_3_1;

  assign BRAM_PORTB_0_1_ADDR = BRAM_out_AXI_0_addr[31:0];
  assign BRAM_PORTB_0_1_CLK = BRAM_out_AXI_0_clk;
  assign BRAM_PORTB_0_1_DIN = BRAM_out_AXI_0_din[31:0];
  assign BRAM_PORTB_0_1_EN = BRAM_out_AXI_0_en;
  assign BRAM_PORTB_0_1_RST = BRAM_out_AXI_0_rst;
  assign BRAM_PORTB_0_1_WE = BRAM_out_AXI_0_we[3:0];
  assign BRAM_PORTB_1_1_ADDR = BRAM_out_AXI_1_addr[31:0];
  assign BRAM_PORTB_1_1_CLK = BRAM_out_AXI_1_clk;
  assign BRAM_PORTB_1_1_DIN = BRAM_out_AXI_1_din[31:0];
  assign BRAM_PORTB_1_1_EN = BRAM_out_AXI_1_en;
  assign BRAM_PORTB_1_1_RST = BRAM_out_AXI_1_rst;
  assign BRAM_PORTB_1_1_WE = BRAM_out_AXI_1_we[3:0];
  assign BRAM_PORTB_2_1_ADDR = BRAM_out_AXI_2_addr[31:0];
  assign BRAM_PORTB_2_1_CLK = BRAM_out_AXI_2_clk;
  assign BRAM_PORTB_2_1_DIN = BRAM_out_AXI_2_din[31:0];
  assign BRAM_PORTB_2_1_EN = BRAM_out_AXI_2_en;
  assign BRAM_PORTB_2_1_RST = BRAM_out_AXI_2_rst;
  assign BRAM_PORTB_2_1_WE = BRAM_out_AXI_2_we[3:0];
  assign BRAM_PORTB_3_1_ADDR = BRAM_out_AXI_3_addr[31:0];
  assign BRAM_PORTB_3_1_CLK = BRAM_out_AXI_3_clk;
  assign BRAM_PORTB_3_1_DIN = BRAM_out_AXI_3_din[31:0];
  assign BRAM_PORTB_3_1_EN = BRAM_out_AXI_3_en;
  assign BRAM_PORTB_3_1_RST = BRAM_out_AXI_3_rst;
  assign BRAM_PORTB_3_1_WE = BRAM_out_AXI_3_we[3:0];
  assign BRAM_addr_sim[31:0] = accumulator_0_BRAM_addr;
  assign BRAM_out_AXI_0_dout[31:0] = BRAM_PORTB_0_1_DOUT;
  assign BRAM_out_AXI_1_dout[31:0] = BRAM_PORTB_1_1_DOUT;
  assign BRAM_out_AXI_2_dout[31:0] = BRAM_PORTB_2_1_DOUT;
  assign BRAM_out_AXI_3_dout[31:0] = BRAM_PORTB_3_1_DOUT;
  assign Net = rst;
  assign Net1 = WxW_out[15:0];
  assign Net2 = no_channel_out[10:0];
  assign accum_done = and_gate_accum_1_and_out;
  assign bram_dout_0[31:0] = blk_mem_gen_0_douta;
  assign bram_dout_1[31:0] = blk_mem_gen_3_douta;
  assign bram_dout_2[31:0] = blk_mem_gen_1_douta;
  assign bram_dout_3[31:0] = blk_mem_gen_2_douta;
  assign clk_0_1 = clk;
  assign in0_0_1 = mac_done_0;
  assign in1_0_1 = mac_done_1;
  assign in2_0_1 = mac_done_2;
  assign in3_0_1 = mac_done_3;
  assign in_psum0_0_1 = psum0_0[7:0];
  assign in_psum0_1_1 = psum1_0[7:0];
  assign in_psum0_2_1 = psum2_0[7:0];
  assign in_psum0_3_1 = psum3_0[7:0];
  assign in_psum1_0_1 = psum0_1[7:0];
  assign in_psum1_1_1 = psum1_1[7:0];
  assign in_psum1_2_1 = psum2_1[7:0];
  assign in_psum1_3_1 = psum3_1[7:0];
  assign in_psum2_0_1 = psum0_2[7:0];
  assign in_psum2_1_1 = psum1_2[7:0];
  assign in_psum2_2_1 = psum2_2[7:0];
  assign in_psum2_3_1 = psum3_2[7:0];
  assign in_psum3_0_1 = psum0_3[7:0];
  assign in_psum3_1_1 = psum1_3[7:0];
  assign in_psum3_2_1 = psum2_3[7:0];
  assign in_psum3_3_1 = psum3_3[7:0];
  Multi_accumulator_inst_0_accumulator_0_0 accumulator_0
       (.BRAM_addr(accumulator_0_BRAM_addr),
        .BRAM_clk(accumulator_0_BRAM_clk),
        .BRAM_din(accumulator_0_BRAM_din),
        .BRAM_dout(blk_mem_gen_0_douta),
        .BRAM_en(accumulator_0_BRAM_en),
        .BRAM_rready(and_gate_accum_0_out),
        .BRAM_rst(accumulator_0_BRAM_rst),
        .BRAM_wen(accumulator_0_BRAM_wen),
        .accum_done(accumulator_0_accum_done),
        .clk(clk_0_1),
        .in_psum0(in_psum0_0_1),
        .in_psum1(in_psum1_0_1),
        .in_psum2(in_psum2_0_1),
        .in_psum3(in_psum3_0_1),
        .no_channel(Net2),
        .no_entry(Net1),
        .rst(Net));
  Multi_accumulator_inst_0_accumulator_1_0 accumulator_1
       (.BRAM_addr(accumulator_2_BRAM_addr),
        .BRAM_clk(accumulator_2_BRAM_clk),
        .BRAM_din(accumulator_2_BRAM_din),
        .BRAM_dout(blk_mem_gen_3_douta),
        .BRAM_en(accumulator_2_BRAM_en),
        .BRAM_rready(and_gate_accum_0_out),
        .BRAM_rst(accumulator_2_BRAM_rst),
        .BRAM_wen(accumulator_2_BRAM_wen),
        .accum_done(accumulator_1_accum_done),
        .clk(clk_0_1),
        .in_psum0(in_psum0_1_1),
        .in_psum1(in_psum1_1_1),
        .in_psum2(in_psum2_1_1),
        .in_psum3(in_psum3_1_1),
        .no_channel(Net2),
        .no_entry(Net1),
        .rst(Net));
  Multi_accumulator_inst_0_accumulator_2_0 accumulator_2
       (.BRAM_addr(accumulator_1_BRAM_addr),
        .BRAM_clk(accumulator_1_BRAM_clk),
        .BRAM_din(accumulator_1_BRAM_din),
        .BRAM_dout(blk_mem_gen_1_douta),
        .BRAM_en(accumulator_1_BRAM_en),
        .BRAM_rready(and_gate_accum_0_out),
        .BRAM_rst(accumulator_1_BRAM_rst),
        .BRAM_wen(accumulator_1_BRAM_wen),
        .accum_done(accumulator_2_accum_done),
        .clk(clk_0_1),
        .in_psum0(in_psum0_2_1),
        .in_psum1(in_psum1_2_1),
        .in_psum2(in_psum2_2_1),
        .in_psum3(in_psum3_2_1),
        .no_channel(Net2),
        .no_entry(Net1),
        .rst(Net));
  Multi_accumulator_inst_0_accumulator_3_0 accumulator_3
       (.BRAM_addr(accumulator_3_BRAM_addr),
        .BRAM_clk(accumulator_3_BRAM_clk),
        .BRAM_din(accumulator_3_BRAM_din),
        .BRAM_dout(blk_mem_gen_2_douta),
        .BRAM_en(accumulator_3_BRAM_en),
        .BRAM_rready(and_gate_accum_0_out),
        .BRAM_rst(accumulator_3_BRAM_rst),
        .BRAM_wen(accumulator_3_BRAM_wen),
        .accum_done(accumulator_3_accum_done),
        .clk(clk_0_1),
        .in_psum0(in_psum0_3_1),
        .in_psum1(in_psum1_3_1),
        .in_psum2(in_psum2_3_1),
        .in_psum3(in_psum3_3_1),
        .no_channel(Net2),
        .no_entry(Net1),
        .rst(Net));
  Multi_accumulator_inst_0_and_gate_accum_0_0 and_gate_accum_0
       (.and_out(and_gate_accum_0_out),
        .in0(in0_0_1),
        .in1(in1_0_1),
        .in2(in2_0_1),
        .in3(in3_0_1));
  Multi_accumulator_inst_0_and_gate_accum_1_0 and_gate_accum_1
       (.and_out(and_gate_accum_1_and_out),
        .in0(accumulator_0_accum_done),
        .in1(accumulator_1_accum_done),
        .in2(accumulator_2_accum_done),
        .in3(accumulator_3_accum_done));
  Multi_accumulator_inst_0_blk_mem_gen_0_0 blk_mem_gen_0
       (.addra(accumulator_0_BRAM_addr),
        .addrb(BRAM_PORTB_0_1_ADDR),
        .clka(accumulator_0_BRAM_clk),
        .clkb(BRAM_PORTB_0_1_CLK),
        .dina(accumulator_0_BRAM_din),
        .dinb(BRAM_PORTB_0_1_DIN),
        .douta(blk_mem_gen_0_douta),
        .doutb(BRAM_PORTB_0_1_DOUT),
        .ena(accumulator_0_BRAM_en),
        .enb(BRAM_PORTB_0_1_EN),
        .rsta(accumulator_0_BRAM_rst),
        .rstb(BRAM_PORTB_0_1_RST),
        .wea(accumulator_0_BRAM_wen),
        .web(BRAM_PORTB_0_1_WE));
  Multi_accumulator_inst_0_blk_mem_gen_1_0 blk_mem_gen_1
       (.addra(accumulator_2_BRAM_addr),
        .addrb(BRAM_PORTB_1_1_ADDR),
        .clka(accumulator_2_BRAM_clk),
        .clkb(BRAM_PORTB_1_1_CLK),
        .dina(accumulator_2_BRAM_din),
        .dinb(BRAM_PORTB_1_1_DIN),
        .douta(blk_mem_gen_3_douta),
        .doutb(BRAM_PORTB_1_1_DOUT),
        .ena(accumulator_2_BRAM_en),
        .enb(BRAM_PORTB_1_1_EN),
        .rsta(accumulator_2_BRAM_rst),
        .rstb(BRAM_PORTB_1_1_RST),
        .wea(accumulator_2_BRAM_wen),
        .web(BRAM_PORTB_1_1_WE));
  Multi_accumulator_inst_0_blk_mem_gen_2_0 blk_mem_gen_2
       (.addra(accumulator_1_BRAM_addr),
        .addrb(BRAM_PORTB_2_1_ADDR),
        .clka(accumulator_1_BRAM_clk),
        .clkb(BRAM_PORTB_2_1_CLK),
        .dina(accumulator_1_BRAM_din),
        .dinb(BRAM_PORTB_2_1_DIN),
        .douta(blk_mem_gen_1_douta),
        .doutb(BRAM_PORTB_2_1_DOUT),
        .ena(accumulator_1_BRAM_en),
        .enb(BRAM_PORTB_2_1_EN),
        .rsta(accumulator_1_BRAM_rst),
        .rstb(BRAM_PORTB_2_1_RST),
        .wea(accumulator_1_BRAM_wen),
        .web(BRAM_PORTB_2_1_WE));
  Multi_accumulator_inst_0_blk_mem_gen_3_0 blk_mem_gen_3
       (.addra(accumulator_3_BRAM_addr),
        .addrb(BRAM_PORTB_3_1_ADDR),
        .clka(accumulator_3_BRAM_clk),
        .clkb(BRAM_PORTB_3_1_CLK),
        .dina(accumulator_3_BRAM_din),
        .dinb(BRAM_PORTB_3_1_DIN),
        .douta(blk_mem_gen_2_douta),
        .doutb(BRAM_PORTB_3_1_DOUT),
        .ena(accumulator_3_BRAM_en),
        .enb(BRAM_PORTB_3_1_EN),
        .rsta(accumulator_3_BRAM_rst),
        .rstb(BRAM_PORTB_3_1_RST),
        .wea(accumulator_3_BRAM_wen),
        .web(BRAM_PORTB_3_1_WE));
endmodule
