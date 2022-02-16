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


// IP VLNV: xilinx.com:module_ref:accumulator:1.0
// IP Revision: 1

`timescale 1ns/1ps

(* IP_DEFINITION_SOURCE = "module_ref" *)
(* DowngradeIPIdentifiedWarnings = "yes" *)
module Multi_accumulator_accumulator_0_1 (
  clk,
  rst,
  no_entry,
  no_channel,
  BRAM_rready,
  in_psum0,
  in_psum1,
  in_psum2,
  in_psum3,
  accum_done,
  BRAM_addr,
  BRAM_clk,
  BRAM_din,
  BRAM_dout,
  BRAM_en,
  BRAM_rst,
  BRAM_wen
);

(* X_INTERFACE_PARAMETER = "XIL_INTERFACENAME clk, ASSOCIATED_RESET rst, FREQ_HZ 100000000, FREQ_TOLERANCE_HZ 0, PHASE 0.0, CLK_DOMAIN Multi_accumulator_clk, INSERT_VIP 0" *)
(* X_INTERFACE_INFO = "xilinx.com:signal:clock:1.0 clk CLK" *)
input wire clk;
(* X_INTERFACE_PARAMETER = "XIL_INTERFACENAME rst, POLARITY ACTIVE_LOW, INSERT_VIP 0" *)
(* X_INTERFACE_INFO = "xilinx.com:signal:reset:1.0 rst RST" *)
input wire rst;
input wire [15 : 0] no_entry;
input wire [10 : 0] no_channel;
input wire BRAM_rready;
input wire [7 : 0] in_psum0;
input wire [7 : 0] in_psum1;
input wire [7 : 0] in_psum2;
input wire [7 : 0] in_psum3;
output wire accum_done;
output wire [31 : 0] BRAM_addr;
(* X_INTERFACE_PARAMETER = "XIL_INTERFACENAME BRAM_clk, ASSOCIATED_RESET BRAM_rst, FREQ_HZ 100000000, FREQ_TOLERANCE_HZ 0, PHASE 0.0, CLK_DOMAIN Multi_accumulator_accumulator_0_1_BRAM_clk, INSERT_VIP 0" *)
(* X_INTERFACE_INFO = "xilinx.com:signal:clock:1.0 BRAM_clk CLK" *)
output wire BRAM_clk;
output wire [31 : 0] BRAM_din;
input wire [31 : 0] BRAM_dout;
output wire BRAM_en;
(* X_INTERFACE_PARAMETER = "XIL_INTERFACENAME BRAM_rst, POLARITY ACTIVE_LOW, INSERT_VIP 0" *)
(* X_INTERFACE_INFO = "xilinx.com:signal:reset:1.0 BRAM_rst RST" *)
output wire BRAM_rst;
output wire [3 : 0] BRAM_wen;

  accumulator #(
    .PSUM_WIDTH(8),
    .BRAM_WIDTH(32),
    .BRAM_ADDR_BIT(32),
    .BRAM_BYTE(4),
    .NO_ENTRY_BIT(16),
    .NO_CHANNEL_BIT(11)
  ) inst (
    .clk(clk),
    .rst(rst),
    .no_entry(no_entry),
    .no_channel(no_channel),
    .BRAM_rready(BRAM_rready),
    .in_psum0(in_psum0),
    .in_psum1(in_psum1),
    .in_psum2(in_psum2),
    .in_psum3(in_psum3),
    .accum_done(accum_done),
    .BRAM_addr(BRAM_addr),
    .BRAM_clk(BRAM_clk),
    .BRAM_din(BRAM_din),
    .BRAM_dout(BRAM_dout),
    .BRAM_en(BRAM_en),
    .BRAM_rst(BRAM_rst),
    .BRAM_wen(BRAM_wen)
  );
endmodule
