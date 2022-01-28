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


// IP VLNV: xilinx.com:module_ref:load_weight_ctrl:1.0
// IP Revision: 1

`timescale 1ns/1ps

(* IP_DEFINITION_SOURCE = "module_ref" *)
(* DowngradeIPIdentifiedWarnings = "yes" *)
module Convo_core_inst_2_load_weight_ctrl_0_0 (
  clk,
  rst,
  init,
  load_done,
  channel_end,
  core_end,
  weight0_in,
  weight1_in,
  weight2_in,
  weight3_in,
  weight0_out,
  weight1_out,
  weight2_out,
  weight3_out,
  buffer_ready,
  load_start
);

(* X_INTERFACE_PARAMETER = "XIL_INTERFACENAME clk, ASSOCIATED_RESET rst, FREQ_HZ 100000000, FREQ_TOLERANCE_HZ 0, PHASE 0.0, CLK_DOMAIN Multi_convo_core_clk_0, INSERT_VIP 0" *)
(* X_INTERFACE_INFO = "xilinx.com:signal:clock:1.0 clk CLK" *)
input wire clk;
(* X_INTERFACE_PARAMETER = "XIL_INTERFACENAME rst, POLARITY ACTIVE_LOW, INSERT_VIP 0" *)
(* X_INTERFACE_INFO = "xilinx.com:signal:reset:1.0 rst RST" *)
input wire rst;
input wire init;
input wire load_done;
input wire channel_end;
input wire core_end;
input wire [71 : 0] weight0_in;
input wire [71 : 0] weight1_in;
input wire [71 : 0] weight2_in;
input wire [71 : 0] weight3_in;
output wire [71 : 0] weight0_out;
output wire [71 : 0] weight1_out;
output wire [71 : 0] weight2_out;
output wire [71 : 0] weight3_out;
output wire buffer_ready;
output wire load_start;

  load_weight_ctrl #(
    .WEIGHT_WIDTH(8)
  ) inst (
    .clk(clk),
    .rst(rst),
    .init(init),
    .load_done(load_done),
    .channel_end(channel_end),
    .core_end(core_end),
    .weight0_in(weight0_in),
    .weight1_in(weight1_in),
    .weight2_in(weight2_in),
    .weight3_in(weight3_in),
    .weight0_out(weight0_out),
    .weight1_out(weight1_out),
    .weight2_out(weight2_out),
    .weight3_out(weight3_out),
    .buffer_ready(buffer_ready),
    .load_start(load_start)
  );
endmodule
