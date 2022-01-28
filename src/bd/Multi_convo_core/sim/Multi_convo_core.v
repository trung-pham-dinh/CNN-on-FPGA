//Copyright 1986-2021 Xilinx, Inc. All Rights Reserved.
//--------------------------------------------------------------------------------
//Tool Version: Vivado v.2021.1 (win64) Build 3247384 Thu Jun 10 19:36:33 MDT 2021
//Date        : Fri Jan 28 09:37:48 2022
//Host        : DESKTOP-Q4T850H running 64-bit major release  (build 9200)
//Command     : generate_target Multi_convo_core.bd
//Design      : Multi_convo_core
//Purpose     : IP block netlist
//--------------------------------------------------------------------------------
`timescale 1 ps / 1 ps

(* CORE_GENERATION_INFO = "Multi_convo_core,IP_Integrator,{x_ipVendor=xilinx.com,x_ipLibrary=BlockDiagram,x_ipName=Multi_convo_core,x_ipVersion=1.00.a,x_ipLanguage=VERILOG,numBlks=14,numReposBlks=13,numNonXlnxBlks=0,numHierBlks=1,maxHierDepth=1,numSysgenBlks=0,numHlsBlks=0,numHdlrefBlks=7,numPkgbdBlks=1,bdsource=USER,synth_mode=OOC_per_IP}" *) (* HW_HANDOFF = "Multi_convo_core.hwdef" *) 
module Multi_convo_core
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
  (* X_INTERFACE_INFO = "xilinx.com:signal:clock:1.0 CLK.CLK_0 CLK" *) (* X_INTERFACE_PARAMETER = "XIL_INTERFACENAME CLK.CLK_0, ASSOCIATED_RESET rst_0, CLK_DOMAIN Multi_convo_core_clk_0, FREQ_HZ 100000000, FREQ_TOLERANCE_HZ 0, INSERT_VIP 0, PHASE 0.0" *) input clk_0;
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
  (* X_INTERFACE_INFO = "xilinx.com:signal:reset:1.0 RST.RST_0 RST" *) (* X_INTERFACE_PARAMETER = "XIL_INTERFACENAME RST.RST_0, INSERT_VIP 0, POLARITY ACTIVE_LOW" *) input rst_0;
  input [2:0]stride_0;
  output weight_end_0;
  input [31:0]weight_size_1_16_0;
  input [11:0]width_input_img_0;

  wire BRAM_img_sel_0_1;
  wire Convo_core_0_channel_end;
  wire [7:0]Convo_core_0_out_psum0;
  wire [7:0]Convo_core_0_out_psum1;
  wire [7:0]Convo_core_0_out_psum2;
  wire [7:0]Convo_core_0_out_psum3;
  wire Convo_core_0_out_psum_vld;
  wire Convo_core_0_weight_end;
  wire accum_done_1;
  wire [31:0]accumulator_0_BRAM_addr;
  wire accumulator_0_BRAM_clk;
  wire [31:0]accumulator_0_BRAM_din;
  wire accumulator_0_BRAM_en;
  wire accumulator_0_BRAM_rst;
  wire [3:0]accumulator_0_BRAM_wen;
  wire [31:0]blk_mem_gen_0_douta;
  wire [11:0]channel_input_img_0_1;
  wire clk_0_1;
  wire en_0_1;
  wire [7:0]in_psum1_0_1;
  wire [7:0]in_psum2_0_1;
  wire [7:0]in_psum3_0_1;
  wire init_signal_0_1;
  wire [10:0]no_channel_0_1;
  wire [15:0]no_entry_0_1;
  wire rst_0_1;
  wire [2:0]stride_0_1;
  wire [31:0]weight_size_1_16_0_1;
  wire [11:0]width_input_img_0_1;

  assign BRAM_img_sel_0_1 = BRAM_img_sel_0;
  assign BRAM_out_dout[31:0] = blk_mem_gen_0_douta;
  assign addr_out[31:0] = accumulator_0_BRAM_addr;
  assign channel_end_0 = Convo_core_0_channel_end;
  assign channel_input_img_0_1 = channel_input_img_0[11:0];
  assign clk_0_1 = clk_0;
  assign en_0_1 = en_0;
  assign in_psum1_0_1 = in_psum1_0[7:0];
  assign in_psum2_0_1 = in_psum2_0[7:0];
  assign in_psum3_0_1 = in_psum3_0[7:0];
  assign init_signal_0_1 = init_signal_0;
  assign no_channel_0_1 = no_channel_0[10:0];
  assign no_entry_0_1 = no_entry_0[15:0];
  assign out_din[31:0] = accumulator_0_BRAM_din;
  assign out_psum0_0[7:0] = Convo_core_0_out_psum0;
  assign out_psum1_0[7:0] = Convo_core_0_out_psum1;
  assign out_psum2_0[7:0] = Convo_core_0_out_psum2;
  assign out_psum3_0[7:0] = Convo_core_0_out_psum3;
  assign rst_0_1 = rst_0;
  assign stride_0_1 = stride_0[2:0];
  assign weight_end_0 = Convo_core_0_weight_end;
  assign weight_size_1_16_0_1 = weight_size_1_16_0[31:0];
  assign width_input_img_0_1 = width_input_img_0[11:0];
  Convo_core_inst_0 Convo_core_0
       (.BRAM_img_AXI_addr({1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0}),
        .BRAM_img_AXI_din({1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0}),
        .BRAM_img_AXI_en(1'b0),
        .BRAM_img_AXI_rst(1'b0),
        .BRAM_img_AXI_wen({1'b0,1'b0,1'b0,1'b0}),
        .BRAM_img_sel(BRAM_img_sel_0_1),
        .BRAM_weight_AXI_0_addr({1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0}),
        .BRAM_weight_AXI_0_clk(1'b0),
        .BRAM_weight_AXI_0_din({1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b1,1'b0,1'b0,1'b0}),
        .BRAM_weight_AXI_0_en(1'b0),
        .BRAM_weight_AXI_0_rst(1'b0),
        .BRAM_weight_AXI_0_we({1'b0,1'b0,1'b0,1'b0}),
        .BRAM_weight_AXI_1_addr({1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0}),
        .BRAM_weight_AXI_1_clk(1'b0),
        .BRAM_weight_AXI_1_din({1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b1,1'b0,1'b0,1'b0}),
        .BRAM_weight_AXI_1_en(1'b0),
        .BRAM_weight_AXI_1_rst(1'b0),
        .BRAM_weight_AXI_1_we({1'b0,1'b0,1'b0,1'b0}),
        .BRAM_weight_AXI_2_addr({1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0}),
        .BRAM_weight_AXI_2_clk(1'b0),
        .BRAM_weight_AXI_2_din({1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b1,1'b0,1'b0,1'b0}),
        .BRAM_weight_AXI_2_en(1'b0),
        .BRAM_weight_AXI_2_rst(1'b0),
        .BRAM_weight_AXI_2_we({1'b0,1'b0,1'b0,1'b0}),
        .BRAM_weight_AXI_3_addr({1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0}),
        .BRAM_weight_AXI_3_clk(1'b0),
        .BRAM_weight_AXI_3_din({1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b1,1'b0,1'b0,1'b0}),
        .BRAM_weight_AXI_3_en(1'b0),
        .BRAM_weight_AXI_3_rst(1'b0),
        .BRAM_weight_AXI_3_we({1'b0,1'b0,1'b0,1'b0}),
        .accum_done(accum_done_1),
        .channel_end(Convo_core_0_channel_end),
        .channel_input_img(channel_input_img_0_1),
        .clk(clk_0_1),
        .en(en_0_1),
        .init_signal(init_signal_0_1),
        .out_psum0(Convo_core_0_out_psum0),
        .out_psum1(Convo_core_0_out_psum1),
        .out_psum2(Convo_core_0_out_psum2),
        .out_psum3(Convo_core_0_out_psum3),
        .out_psum_vld(Convo_core_0_out_psum_vld),
        .rst(rst_0_1),
        .stride(stride_0_1),
        .weight_end(Convo_core_0_weight_end),
        .weight_size_1_16(weight_size_1_16_0_1),
        .width_input_img(width_input_img_0_1));
  Multi_convo_core_accumulator_0_0 accumulator_0
       (.BRAM_addr(accumulator_0_BRAM_addr),
        .BRAM_clk(accumulator_0_BRAM_clk),
        .BRAM_din(accumulator_0_BRAM_din),
        .BRAM_dout(blk_mem_gen_0_douta),
        .BRAM_en(accumulator_0_BRAM_en),
        .BRAM_rready(Convo_core_0_out_psum_vld),
        .BRAM_rst(accumulator_0_BRAM_rst),
        .BRAM_wen(accumulator_0_BRAM_wen),
        .accum_done(accum_done_1),
        .clk(clk_0_1),
        .in_psum0(Convo_core_0_out_psum0),
        .in_psum1(in_psum1_0_1),
        .in_psum2(in_psum2_0_1),
        .in_psum3(in_psum3_0_1),
        .no_channel(no_channel_0_1),
        .no_entry(no_entry_0_1),
        .rst(rst_0_1));
  Multi_convo_core_blk_mem_gen_0_0 blk_mem_gen_0
       (.addra(accumulator_0_BRAM_addr),
        .clka(accumulator_0_BRAM_clk),
        .dina(accumulator_0_BRAM_din),
        .douta(blk_mem_gen_0_douta),
        .ena(accumulator_0_BRAM_en),
        .rsta(accumulator_0_BRAM_rst),
        .wea(accumulator_0_BRAM_wen));
endmodule
