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


// IP VLNV: xilinx.com:module_ref:BRAM_selector:1.0
// IP Revision: 1

(* X_CORE_INFO = "BRAM_selector,Vivado 2021.1" *)
(* CHECK_LICENSE_TYPE = "Convo_core_inst_2_BRAM_selector_0_0,BRAM_selector,{}" *)
(* CORE_GENERATION_INFO = "Convo_core_inst_2_BRAM_selector_0_0,BRAM_selector,{x_ipProduct=Vivado 2021.1,x_ipVendor=xilinx.com,x_ipLibrary=module_ref,x_ipName=BRAM_selector,x_ipVersion=1.0,x_ipCoreRevision=1,x_ipLanguage=VERILOG,x_ipSimLanguage=MIXED,BRAM_ADDR_BIT=32,BRAM_WIDTH=32}" *)
(* IP_DEFINITION_SOURCE = "module_ref" *)
(* DowngradeIPIdentifiedWarnings = "yes" *)
module Convo_core_inst_2_BRAM_selector_0_0 (
  clk,
  sel,
  BRAM_in1_addr,
  BRAM_in1_din,
  BRAM_in1_dout,
  BRAM_in1_en,
  BRAM_in1_rst,
  BRAM_in1_wen,
  BRAM_in2_addr,
  BRAM_in2_din,
  BRAM_in2_dout,
  BRAM_in2_en,
  BRAM_in2_rst,
  BRAM_in2_wen,
  BRAM_out_addr,
  BRAM_out_clk,
  BRAM_out_din,
  BRAM_out_dout,
  BRAM_out_en,
  BRAM_out_rst,
  BRAM_out_wen
);

(* X_INTERFACE_PARAMETER = "XIL_INTERFACENAME clk, FREQ_HZ 100000000, FREQ_TOLERANCE_HZ 0, PHASE 0.0, CLK_DOMAIN Convo_core_inst_2_load_activation_0_0_BRAM_clk, INSERT_VIP 0" *)
(* X_INTERFACE_INFO = "xilinx.com:signal:clock:1.0 clk CLK" *)
input wire clk;
input wire sel;
input wire [31 : 0] BRAM_in1_addr;
input wire [31 : 0] BRAM_in1_din;
output wire [31 : 0] BRAM_in1_dout;
input wire BRAM_in1_en;
(* X_INTERFACE_PARAMETER = "XIL_INTERFACENAME BRAM_in1_rst, POLARITY ACTIVE_LOW, INSERT_VIP 0" *)
(* X_INTERFACE_INFO = "xilinx.com:signal:reset:1.0 BRAM_in1_rst RST" *)
input wire BRAM_in1_rst;
input wire [3 : 0] BRAM_in1_wen;
input wire [31 : 0] BRAM_in2_addr;
input wire [31 : 0] BRAM_in2_din;
output wire [31 : 0] BRAM_in2_dout;
input wire BRAM_in2_en;
(* X_INTERFACE_PARAMETER = "XIL_INTERFACENAME BRAM_in2_rst, POLARITY ACTIVE_LOW, INSERT_VIP 0" *)
(* X_INTERFACE_INFO = "xilinx.com:signal:reset:1.0 BRAM_in2_rst RST" *)
input wire BRAM_in2_rst;
input wire [3 : 0] BRAM_in2_wen;
output wire [31 : 0] BRAM_out_addr;
(* X_INTERFACE_PARAMETER = "XIL_INTERFACENAME BRAM_out_clk, ASSOCIATED_RESET BRAM_out_rst, FREQ_HZ 100000000, FREQ_TOLERANCE_HZ 0, PHASE 0.0, CLK_DOMAIN Convo_core_inst_2_BRAM_selector_0_0_BRAM_out_clk, INSERT_VIP 0" *)
(* X_INTERFACE_INFO = "xilinx.com:signal:clock:1.0 BRAM_out_clk CLK" *)
output wire BRAM_out_clk;
output wire [31 : 0] BRAM_out_din;
input wire [31 : 0] BRAM_out_dout;
output wire BRAM_out_en;
(* X_INTERFACE_PARAMETER = "XIL_INTERFACENAME BRAM_out_rst, POLARITY ACTIVE_LOW, INSERT_VIP 0" *)
(* X_INTERFACE_INFO = "xilinx.com:signal:reset:1.0 BRAM_out_rst RST" *)
output wire BRAM_out_rst;
output wire [3 : 0] BRAM_out_wen;

  BRAM_selector #(
    .BRAM_ADDR_BIT(32),
    .BRAM_WIDTH(32)
  ) inst (
    .clk(clk),
    .sel(sel),
    .BRAM_in1_addr(BRAM_in1_addr),
    .BRAM_in1_din(BRAM_in1_din),
    .BRAM_in1_dout(BRAM_in1_dout),
    .BRAM_in1_en(BRAM_in1_en),
    .BRAM_in1_rst(BRAM_in1_rst),
    .BRAM_in1_wen(BRAM_in1_wen),
    .BRAM_in2_addr(BRAM_in2_addr),
    .BRAM_in2_din(BRAM_in2_din),
    .BRAM_in2_dout(BRAM_in2_dout),
    .BRAM_in2_en(BRAM_in2_en),
    .BRAM_in2_rst(BRAM_in2_rst),
    .BRAM_in2_wen(BRAM_in2_wen),
    .BRAM_out_addr(BRAM_out_addr),
    .BRAM_out_clk(BRAM_out_clk),
    .BRAM_out_din(BRAM_out_din),
    .BRAM_out_dout(BRAM_out_dout),
    .BRAM_out_en(BRAM_out_en),
    .BRAM_out_rst(BRAM_out_rst),
    .BRAM_out_wen(BRAM_out_wen)
  );
endmodule
