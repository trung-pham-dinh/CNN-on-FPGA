// (c) Copyright 1995-2022 Xilinx, Inc. All rights reserved.
// 
// This file contains confidential and proprietary information
// of Xilinx, Inc. and is protected under U.S. and
// international copyright and other intellectual property
// laws.
// 
// DISCLAIMER
// This disclaimer is not a license and does not grant any
// rights to the materials distributed herewith. Except as
// otherwise provided in a valid license issued to you by
// Xilinx, and to the maximum extent permitted by applicable
// law: (1) THESE MATERIALS ARE MADE AVAILABLE "AS IS" AND
// WITH ALL FAULTS, AND XILINX HEREBY DISCLAIMS ALL WARRANTIES
// AND CONDITIONS, EXPRESS, IMPLIED, OR STATUTORY, INCLUDING
// BUT NOT LIMITED TO WARRANTIES OF MERCHANTABILITY, NON-
// INFRINGEMENT, OR FITNESS FOR ANY PARTICULAR PURPOSE; and
// (2) Xilinx shall not be liable (whether in contract or tort,
// including negligence, or under any other theory of
// liability) for any loss or damage of any kind or nature
// related to, arising under or in connection with these
// materials, including for any direct, or any indirect,
// special, incidental, or consequential loss or damage
// (including loss of data, profits, goodwill, or any type of
// loss or damage suffered as a result of any action brought
// by a third party) even if such damage or loss was
// reasonably foreseeable or Xilinx had been advised of the
// possibility of the same.
// 
// CRITICAL APPLICATIONS
// Xilinx products are not designed or intended to be fail-
// safe, or for use in any application requiring fail-safe
// performance, such as life-support or safety devices or
// systems, Class III medical devices, nuclear facilities,
// applications related to the deployment of airbags, or any
// other applications that could lead to death, personal
// injury, or severe property or environmental damage
// (individually and collectively, "Critical
// Applications"). Customer assumes the sole risk and
// liability of any use of Xilinx products in Critical
// Applications, subject only to applicable laws and
// regulations governing limitations on product liability.
// 
// THIS COPYRIGHT NOTICE AND DISCLAIMER MUST BE RETAINED AS
// PART OF THIS FILE AT ALL TIMES.
// 
// DO NOT MODIFY THIS FILE.


// IP VLNV: xilinx.com:module_ref:load_activation:1.0
// IP Revision: 1

`timescale 1ns/1ps

(* IP_DEFINITION_SOURCE = "module_ref" *)
(* DowngradeIPIdentifiedWarnings = "yes" *)
module Convo_core_inst_1_load_activation_0_0 (
  clk,
  rst,
  stride,
  width,
  channel,
  load_start,
  activate0,
  activate1,
  activate2,
  done,
  channel_end,
  BRAM_clk,
  BRAM_en,
  BRAM_rst,
  BRAM_din,
  BRAM_wen,
  BRAM_0_addr,
  BRAM_0_dout,
  BRAM_1_addr,
  BRAM_1_dout
);

(* X_INTERFACE_PARAMETER = "XIL_INTERFACENAME clk, ASSOCIATED_RESET rst, FREQ_HZ 100000000, FREQ_TOLERANCE_HZ 0, PHASE 0.0, CLK_DOMAIN Multi_convo_core_clk, INSERT_VIP 0" *)
(* X_INTERFACE_INFO = "xilinx.com:signal:clock:1.0 clk CLK" *)
input wire clk;
(* X_INTERFACE_PARAMETER = "XIL_INTERFACENAME rst, POLARITY ACTIVE_LOW, INSERT_VIP 0" *)
(* X_INTERFACE_INFO = "xilinx.com:signal:reset:1.0 rst RST" *)
input wire rst;
input wire [2 : 0] stride;
input wire [11 : 0] width;
input wire [11 : 0] channel;
input wire load_start;
output wire [23 : 0] activate0;
output wire [23 : 0] activate1;
output wire [23 : 0] activate2;
output wire done;
output wire channel_end;
(* X_INTERFACE_PARAMETER = "XIL_INTERFACENAME BRAM_clk, ASSOCIATED_RESET BRAM_rst, FREQ_HZ 100000000, FREQ_TOLERANCE_HZ 0, PHASE 0.0, CLK_DOMAIN Convo_core_inst_1_load_activation_0_0_BRAM_clk, INSERT_VIP 0" *)
(* X_INTERFACE_INFO = "xilinx.com:signal:clock:1.0 BRAM_clk CLK" *)
output wire BRAM_clk;
output wire BRAM_en;
(* X_INTERFACE_PARAMETER = "XIL_INTERFACENAME BRAM_rst, POLARITY ACTIVE_LOW, INSERT_VIP 0" *)
(* X_INTERFACE_INFO = "xilinx.com:signal:reset:1.0 BRAM_rst RST" *)
output wire BRAM_rst;
output wire [31 : 0] BRAM_din;
output wire [3 : 0] BRAM_wen;
output wire [31 : 0] BRAM_0_addr;
input wire [31 : 0] BRAM_0_dout;
output wire [31 : 0] BRAM_1_addr;
input wire [31 : 0] BRAM_1_dout;

  load_activation #(
    .BRAM_ADDR_BIT(32),
    .BRAM_WIDTH(32),
    .WEIGHT_WIDTH(8),
    .BRAM_BYTE(4)
  ) inst (
    .clk(clk),
    .rst(rst),
    .stride(stride),
    .width(width),
    .channel(channel),
    .load_start(load_start),
    .activate0(activate0),
    .activate1(activate1),
    .activate2(activate2),
    .done(done),
    .channel_end(channel_end),
    .BRAM_clk(BRAM_clk),
    .BRAM_en(BRAM_en),
    .BRAM_rst(BRAM_rst),
    .BRAM_din(BRAM_din),
    .BRAM_wen(BRAM_wen),
    .BRAM_0_addr(BRAM_0_addr),
    .BRAM_0_dout(BRAM_0_dout),
    .BRAM_1_addr(BRAM_1_addr),
    .BRAM_1_dout(BRAM_1_dout)
  );
endmodule
