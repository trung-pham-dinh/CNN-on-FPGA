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


//------------------------------------------------------------------------------------
// Filename:    Multi_convo_core_smartconnect_0_0_stub.sv
// Description: This HDL file is intended to be used with following simulators only:
//
//   Vivado Simulator (XSim)
//   Cadence Xcelium Simulator
//   Aldec Riviera-PRO Simulator
//
//------------------------------------------------------------------------------------
`timescale 1ps/1ps

`ifdef XILINX_SIMULATOR

`ifndef XILINX_SIMULATOR_BITASBOOL
`define XILINX_SIMULATOR_BITASBOOL
typedef bit bit_as_bool;
`endif

(* SC_MODULE_EXPORT *)
module Multi_convo_core_smartconnect_0_0 (
  input bit_as_bool aclk,
  input bit_as_bool aresetn,
  input bit [31 : 0] S00_AXI_awaddr,
  input bit [7 : 0] S00_AXI_awlen,
  input bit [2 : 0] S00_AXI_awsize,
  input bit [1 : 0] S00_AXI_awburst,
  input bit [0 : 0] S00_AXI_awlock,
  input bit [3 : 0] S00_AXI_awcache,
  input bit [2 : 0] S00_AXI_awprot,
  input bit [3 : 0] S00_AXI_awqos,
  input bit_as_bool S00_AXI_awvalid,
  output bit_as_bool S00_AXI_awready,
  input bit [31 : 0] S00_AXI_wdata,
  input bit [3 : 0] S00_AXI_wstrb,
  input bit_as_bool S00_AXI_wlast,
  input bit_as_bool S00_AXI_wvalid,
  output bit_as_bool S00_AXI_wready,
  output bit [1 : 0] S00_AXI_bresp,
  output bit_as_bool S00_AXI_bvalid,
  input bit_as_bool S00_AXI_bready,
  input bit [31 : 0] S00_AXI_araddr,
  input bit [7 : 0] S00_AXI_arlen,
  input bit [2 : 0] S00_AXI_arsize,
  input bit [1 : 0] S00_AXI_arburst,
  input bit [0 : 0] S00_AXI_arlock,
  input bit [3 : 0] S00_AXI_arcache,
  input bit [2 : 0] S00_AXI_arprot,
  input bit [3 : 0] S00_AXI_arqos,
  input bit_as_bool S00_AXI_arvalid,
  output bit_as_bool S00_AXI_arready,
  output bit [31 : 0] S00_AXI_rdata,
  output bit [1 : 0] S00_AXI_rresp,
  output bit_as_bool S00_AXI_rlast,
  output bit_as_bool S00_AXI_rvalid,
  input bit_as_bool S00_AXI_rready,
  output bit [11 : 0] M00_AXI_awaddr,
  output bit [7 : 0] M00_AXI_awlen,
  output bit [2 : 0] M00_AXI_awsize,
  output bit [1 : 0] M00_AXI_awburst,
  output bit [0 : 0] M00_AXI_awlock,
  output bit [3 : 0] M00_AXI_awcache,
  output bit [2 : 0] M00_AXI_awprot,
  output bit [3 : 0] M00_AXI_awqos,
  output bit_as_bool M00_AXI_awvalid,
  input bit_as_bool M00_AXI_awready,
  output bit [31 : 0] M00_AXI_wdata,
  output bit [3 : 0] M00_AXI_wstrb,
  output bit_as_bool M00_AXI_wlast,
  output bit_as_bool M00_AXI_wvalid,
  input bit_as_bool M00_AXI_wready,
  input bit [1 : 0] M00_AXI_bresp,
  input bit_as_bool M00_AXI_bvalid,
  output bit_as_bool M00_AXI_bready,
  output bit [11 : 0] M00_AXI_araddr,
  output bit [7 : 0] M00_AXI_arlen,
  output bit [2 : 0] M00_AXI_arsize,
  output bit [1 : 0] M00_AXI_arburst,
  output bit [0 : 0] M00_AXI_arlock,
  output bit [3 : 0] M00_AXI_arcache,
  output bit [2 : 0] M00_AXI_arprot,
  output bit [3 : 0] M00_AXI_arqos,
  output bit_as_bool M00_AXI_arvalid,
  input bit_as_bool M00_AXI_arready,
  input bit [31 : 0] M00_AXI_rdata,
  input bit [1 : 0] M00_AXI_rresp,
  input bit_as_bool M00_AXI_rlast,
  input bit_as_bool M00_AXI_rvalid,
  output bit_as_bool M00_AXI_rready,
  output bit [11 : 0] M01_AXI_awaddr,
  output bit [7 : 0] M01_AXI_awlen,
  output bit [2 : 0] M01_AXI_awsize,
  output bit [1 : 0] M01_AXI_awburst,
  output bit [0 : 0] M01_AXI_awlock,
  output bit [3 : 0] M01_AXI_awcache,
  output bit [2 : 0] M01_AXI_awprot,
  output bit [3 : 0] M01_AXI_awqos,
  output bit_as_bool M01_AXI_awvalid,
  input bit_as_bool M01_AXI_awready,
  output bit [31 : 0] M01_AXI_wdata,
  output bit [3 : 0] M01_AXI_wstrb,
  output bit_as_bool M01_AXI_wlast,
  output bit_as_bool M01_AXI_wvalid,
  input bit_as_bool M01_AXI_wready,
  input bit [1 : 0] M01_AXI_bresp,
  input bit_as_bool M01_AXI_bvalid,
  output bit_as_bool M01_AXI_bready,
  output bit [11 : 0] M01_AXI_araddr,
  output bit [7 : 0] M01_AXI_arlen,
  output bit [2 : 0] M01_AXI_arsize,
  output bit [1 : 0] M01_AXI_arburst,
  output bit [0 : 0] M01_AXI_arlock,
  output bit [3 : 0] M01_AXI_arcache,
  output bit [2 : 0] M01_AXI_arprot,
  output bit [3 : 0] M01_AXI_arqos,
  output bit_as_bool M01_AXI_arvalid,
  input bit_as_bool M01_AXI_arready,
  input bit [31 : 0] M01_AXI_rdata,
  input bit [1 : 0] M01_AXI_rresp,
  input bit_as_bool M01_AXI_rlast,
  input bit_as_bool M01_AXI_rvalid,
  output bit_as_bool M01_AXI_rready,
  output bit [11 : 0] M02_AXI_awaddr,
  output bit [7 : 0] M02_AXI_awlen,
  output bit [2 : 0] M02_AXI_awsize,
  output bit [1 : 0] M02_AXI_awburst,
  output bit [0 : 0] M02_AXI_awlock,
  output bit [3 : 0] M02_AXI_awcache,
  output bit [2 : 0] M02_AXI_awprot,
  output bit [3 : 0] M02_AXI_awqos,
  output bit_as_bool M02_AXI_awvalid,
  input bit_as_bool M02_AXI_awready,
  output bit [31 : 0] M02_AXI_wdata,
  output bit [3 : 0] M02_AXI_wstrb,
  output bit_as_bool M02_AXI_wlast,
  output bit_as_bool M02_AXI_wvalid,
  input bit_as_bool M02_AXI_wready,
  input bit [1 : 0] M02_AXI_bresp,
  input bit_as_bool M02_AXI_bvalid,
  output bit_as_bool M02_AXI_bready,
  output bit [11 : 0] M02_AXI_araddr,
  output bit [7 : 0] M02_AXI_arlen,
  output bit [2 : 0] M02_AXI_arsize,
  output bit [1 : 0] M02_AXI_arburst,
  output bit [0 : 0] M02_AXI_arlock,
  output bit [3 : 0] M02_AXI_arcache,
  output bit [2 : 0] M02_AXI_arprot,
  output bit [3 : 0] M02_AXI_arqos,
  output bit_as_bool M02_AXI_arvalid,
  input bit_as_bool M02_AXI_arready,
  input bit [31 : 0] M02_AXI_rdata,
  input bit [1 : 0] M02_AXI_rresp,
  input bit_as_bool M02_AXI_rlast,
  input bit_as_bool M02_AXI_rvalid,
  output bit_as_bool M02_AXI_rready,
  output bit [11 : 0] M03_AXI_awaddr,
  output bit [7 : 0] M03_AXI_awlen,
  output bit [2 : 0] M03_AXI_awsize,
  output bit [1 : 0] M03_AXI_awburst,
  output bit [0 : 0] M03_AXI_awlock,
  output bit [3 : 0] M03_AXI_awcache,
  output bit [2 : 0] M03_AXI_awprot,
  output bit [3 : 0] M03_AXI_awqos,
  output bit_as_bool M03_AXI_awvalid,
  input bit_as_bool M03_AXI_awready,
  output bit [31 : 0] M03_AXI_wdata,
  output bit [3 : 0] M03_AXI_wstrb,
  output bit_as_bool M03_AXI_wlast,
  output bit_as_bool M03_AXI_wvalid,
  input bit_as_bool M03_AXI_wready,
  input bit [1 : 0] M03_AXI_bresp,
  input bit_as_bool M03_AXI_bvalid,
  output bit_as_bool M03_AXI_bready,
  output bit [11 : 0] M03_AXI_araddr,
  output bit [7 : 0] M03_AXI_arlen,
  output bit [2 : 0] M03_AXI_arsize,
  output bit [1 : 0] M03_AXI_arburst,
  output bit [0 : 0] M03_AXI_arlock,
  output bit [3 : 0] M03_AXI_arcache,
  output bit [2 : 0] M03_AXI_arprot,
  output bit [3 : 0] M03_AXI_arqos,
  output bit_as_bool M03_AXI_arvalid,
  input bit_as_bool M03_AXI_arready,
  input bit [31 : 0] M03_AXI_rdata,
  input bit [1 : 0] M03_AXI_rresp,
  input bit_as_bool M03_AXI_rlast,
  input bit_as_bool M03_AXI_rvalid,
  output bit_as_bool M03_AXI_rready,
  output bit [11 : 0] M04_AXI_awaddr,
  output bit [7 : 0] M04_AXI_awlen,
  output bit [2 : 0] M04_AXI_awsize,
  output bit [1 : 0] M04_AXI_awburst,
  output bit [0 : 0] M04_AXI_awlock,
  output bit [3 : 0] M04_AXI_awcache,
  output bit [2 : 0] M04_AXI_awprot,
  output bit [3 : 0] M04_AXI_awqos,
  output bit_as_bool M04_AXI_awvalid,
  input bit_as_bool M04_AXI_awready,
  output bit [31 : 0] M04_AXI_wdata,
  output bit [3 : 0] M04_AXI_wstrb,
  output bit_as_bool M04_AXI_wlast,
  output bit_as_bool M04_AXI_wvalid,
  input bit_as_bool M04_AXI_wready,
  input bit [1 : 0] M04_AXI_bresp,
  input bit_as_bool M04_AXI_bvalid,
  output bit_as_bool M04_AXI_bready,
  output bit [11 : 0] M04_AXI_araddr,
  output bit [7 : 0] M04_AXI_arlen,
  output bit [2 : 0] M04_AXI_arsize,
  output bit [1 : 0] M04_AXI_arburst,
  output bit [0 : 0] M04_AXI_arlock,
  output bit [3 : 0] M04_AXI_arcache,
  output bit [2 : 0] M04_AXI_arprot,
  output bit [3 : 0] M04_AXI_arqos,
  output bit_as_bool M04_AXI_arvalid,
  input bit_as_bool M04_AXI_arready,
  input bit [31 : 0] M04_AXI_rdata,
  input bit [1 : 0] M04_AXI_rresp,
  input bit_as_bool M04_AXI_rlast,
  input bit_as_bool M04_AXI_rvalid,
  output bit_as_bool M04_AXI_rready,
  output bit [11 : 0] M05_AXI_awaddr,
  output bit [7 : 0] M05_AXI_awlen,
  output bit [2 : 0] M05_AXI_awsize,
  output bit [1 : 0] M05_AXI_awburst,
  output bit [0 : 0] M05_AXI_awlock,
  output bit [3 : 0] M05_AXI_awcache,
  output bit [2 : 0] M05_AXI_awprot,
  output bit [3 : 0] M05_AXI_awqos,
  output bit_as_bool M05_AXI_awvalid,
  input bit_as_bool M05_AXI_awready,
  output bit [31 : 0] M05_AXI_wdata,
  output bit [3 : 0] M05_AXI_wstrb,
  output bit_as_bool M05_AXI_wlast,
  output bit_as_bool M05_AXI_wvalid,
  input bit_as_bool M05_AXI_wready,
  input bit [1 : 0] M05_AXI_bresp,
  input bit_as_bool M05_AXI_bvalid,
  output bit_as_bool M05_AXI_bready,
  output bit [11 : 0] M05_AXI_araddr,
  output bit [7 : 0] M05_AXI_arlen,
  output bit [2 : 0] M05_AXI_arsize,
  output bit [1 : 0] M05_AXI_arburst,
  output bit [0 : 0] M05_AXI_arlock,
  output bit [3 : 0] M05_AXI_arcache,
  output bit [2 : 0] M05_AXI_arprot,
  output bit [3 : 0] M05_AXI_arqos,
  output bit_as_bool M05_AXI_arvalid,
  input bit_as_bool M05_AXI_arready,
  input bit [31 : 0] M05_AXI_rdata,
  input bit [1 : 0] M05_AXI_rresp,
  input bit_as_bool M05_AXI_rlast,
  input bit_as_bool M05_AXI_rvalid,
  output bit_as_bool M05_AXI_rready,
  output bit [11 : 0] M06_AXI_awaddr,
  output bit [7 : 0] M06_AXI_awlen,
  output bit [2 : 0] M06_AXI_awsize,
  output bit [1 : 0] M06_AXI_awburst,
  output bit [0 : 0] M06_AXI_awlock,
  output bit [3 : 0] M06_AXI_awcache,
  output bit [2 : 0] M06_AXI_awprot,
  output bit [3 : 0] M06_AXI_awqos,
  output bit_as_bool M06_AXI_awvalid,
  input bit_as_bool M06_AXI_awready,
  output bit [31 : 0] M06_AXI_wdata,
  output bit [3 : 0] M06_AXI_wstrb,
  output bit_as_bool M06_AXI_wlast,
  output bit_as_bool M06_AXI_wvalid,
  input bit_as_bool M06_AXI_wready,
  input bit [1 : 0] M06_AXI_bresp,
  input bit_as_bool M06_AXI_bvalid,
  output bit_as_bool M06_AXI_bready,
  output bit [11 : 0] M06_AXI_araddr,
  output bit [7 : 0] M06_AXI_arlen,
  output bit [2 : 0] M06_AXI_arsize,
  output bit [1 : 0] M06_AXI_arburst,
  output bit [0 : 0] M06_AXI_arlock,
  output bit [3 : 0] M06_AXI_arcache,
  output bit [2 : 0] M06_AXI_arprot,
  output bit [3 : 0] M06_AXI_arqos,
  output bit_as_bool M06_AXI_arvalid,
  input bit_as_bool M06_AXI_arready,
  input bit [31 : 0] M06_AXI_rdata,
  input bit [1 : 0] M06_AXI_rresp,
  input bit_as_bool M06_AXI_rlast,
  input bit_as_bool M06_AXI_rvalid,
  output bit_as_bool M06_AXI_rready,
  output bit [11 : 0] M07_AXI_awaddr,
  output bit [7 : 0] M07_AXI_awlen,
  output bit [2 : 0] M07_AXI_awsize,
  output bit [1 : 0] M07_AXI_awburst,
  output bit [0 : 0] M07_AXI_awlock,
  output bit [3 : 0] M07_AXI_awcache,
  output bit [2 : 0] M07_AXI_awprot,
  output bit [3 : 0] M07_AXI_awqos,
  output bit_as_bool M07_AXI_awvalid,
  input bit_as_bool M07_AXI_awready,
  output bit [31 : 0] M07_AXI_wdata,
  output bit [3 : 0] M07_AXI_wstrb,
  output bit_as_bool M07_AXI_wlast,
  output bit_as_bool M07_AXI_wvalid,
  input bit_as_bool M07_AXI_wready,
  input bit [1 : 0] M07_AXI_bresp,
  input bit_as_bool M07_AXI_bvalid,
  output bit_as_bool M07_AXI_bready,
  output bit [11 : 0] M07_AXI_araddr,
  output bit [7 : 0] M07_AXI_arlen,
  output bit [2 : 0] M07_AXI_arsize,
  output bit [1 : 0] M07_AXI_arburst,
  output bit [0 : 0] M07_AXI_arlock,
  output bit [3 : 0] M07_AXI_arcache,
  output bit [2 : 0] M07_AXI_arprot,
  output bit [3 : 0] M07_AXI_arqos,
  output bit_as_bool M07_AXI_arvalid,
  input bit_as_bool M07_AXI_arready,
  input bit [31 : 0] M07_AXI_rdata,
  input bit [1 : 0] M07_AXI_rresp,
  input bit_as_bool M07_AXI_rlast,
  input bit_as_bool M07_AXI_rvalid,
  output bit_as_bool M07_AXI_rready,
  output bit [11 : 0] M08_AXI_awaddr,
  output bit [7 : 0] M08_AXI_awlen,
  output bit [2 : 0] M08_AXI_awsize,
  output bit [1 : 0] M08_AXI_awburst,
  output bit [0 : 0] M08_AXI_awlock,
  output bit [3 : 0] M08_AXI_awcache,
  output bit [2 : 0] M08_AXI_awprot,
  output bit [3 : 0] M08_AXI_awqos,
  output bit_as_bool M08_AXI_awvalid,
  input bit_as_bool M08_AXI_awready,
  output bit [31 : 0] M08_AXI_wdata,
  output bit [3 : 0] M08_AXI_wstrb,
  output bit_as_bool M08_AXI_wlast,
  output bit_as_bool M08_AXI_wvalid,
  input bit_as_bool M08_AXI_wready,
  input bit [1 : 0] M08_AXI_bresp,
  input bit_as_bool M08_AXI_bvalid,
  output bit_as_bool M08_AXI_bready,
  output bit [11 : 0] M08_AXI_araddr,
  output bit [7 : 0] M08_AXI_arlen,
  output bit [2 : 0] M08_AXI_arsize,
  output bit [1 : 0] M08_AXI_arburst,
  output bit [0 : 0] M08_AXI_arlock,
  output bit [3 : 0] M08_AXI_arcache,
  output bit [2 : 0] M08_AXI_arprot,
  output bit [3 : 0] M08_AXI_arqos,
  output bit_as_bool M08_AXI_arvalid,
  input bit_as_bool M08_AXI_arready,
  input bit [31 : 0] M08_AXI_rdata,
  input bit [1 : 0] M08_AXI_rresp,
  input bit_as_bool M08_AXI_rlast,
  input bit_as_bool M08_AXI_rvalid,
  output bit_as_bool M08_AXI_rready,
  output bit [11 : 0] M09_AXI_awaddr,
  output bit [7 : 0] M09_AXI_awlen,
  output bit [2 : 0] M09_AXI_awsize,
  output bit [1 : 0] M09_AXI_awburst,
  output bit [0 : 0] M09_AXI_awlock,
  output bit [3 : 0] M09_AXI_awcache,
  output bit [2 : 0] M09_AXI_awprot,
  output bit [3 : 0] M09_AXI_awqos,
  output bit_as_bool M09_AXI_awvalid,
  input bit_as_bool M09_AXI_awready,
  output bit [31 : 0] M09_AXI_wdata,
  output bit [3 : 0] M09_AXI_wstrb,
  output bit_as_bool M09_AXI_wlast,
  output bit_as_bool M09_AXI_wvalid,
  input bit_as_bool M09_AXI_wready,
  input bit [1 : 0] M09_AXI_bresp,
  input bit_as_bool M09_AXI_bvalid,
  output bit_as_bool M09_AXI_bready,
  output bit [11 : 0] M09_AXI_araddr,
  output bit [7 : 0] M09_AXI_arlen,
  output bit [2 : 0] M09_AXI_arsize,
  output bit [1 : 0] M09_AXI_arburst,
  output bit [0 : 0] M09_AXI_arlock,
  output bit [3 : 0] M09_AXI_arcache,
  output bit [2 : 0] M09_AXI_arprot,
  output bit [3 : 0] M09_AXI_arqos,
  output bit_as_bool M09_AXI_arvalid,
  input bit_as_bool M09_AXI_arready,
  input bit [31 : 0] M09_AXI_rdata,
  input bit [1 : 0] M09_AXI_rresp,
  input bit_as_bool M09_AXI_rlast,
  input bit_as_bool M09_AXI_rvalid,
  output bit_as_bool M09_AXI_rready,
  output bit [11 : 0] M10_AXI_awaddr,
  output bit [7 : 0] M10_AXI_awlen,
  output bit [2 : 0] M10_AXI_awsize,
  output bit [1 : 0] M10_AXI_awburst,
  output bit [0 : 0] M10_AXI_awlock,
  output bit [3 : 0] M10_AXI_awcache,
  output bit [2 : 0] M10_AXI_awprot,
  output bit [3 : 0] M10_AXI_awqos,
  output bit_as_bool M10_AXI_awvalid,
  input bit_as_bool M10_AXI_awready,
  output bit [31 : 0] M10_AXI_wdata,
  output bit [3 : 0] M10_AXI_wstrb,
  output bit_as_bool M10_AXI_wlast,
  output bit_as_bool M10_AXI_wvalid,
  input bit_as_bool M10_AXI_wready,
  input bit [1 : 0] M10_AXI_bresp,
  input bit_as_bool M10_AXI_bvalid,
  output bit_as_bool M10_AXI_bready,
  output bit [11 : 0] M10_AXI_araddr,
  output bit [7 : 0] M10_AXI_arlen,
  output bit [2 : 0] M10_AXI_arsize,
  output bit [1 : 0] M10_AXI_arburst,
  output bit [0 : 0] M10_AXI_arlock,
  output bit [3 : 0] M10_AXI_arcache,
  output bit [2 : 0] M10_AXI_arprot,
  output bit [3 : 0] M10_AXI_arqos,
  output bit_as_bool M10_AXI_arvalid,
  input bit_as_bool M10_AXI_arready,
  input bit [31 : 0] M10_AXI_rdata,
  input bit [1 : 0] M10_AXI_rresp,
  input bit_as_bool M10_AXI_rlast,
  input bit_as_bool M10_AXI_rvalid,
  output bit_as_bool M10_AXI_rready,
  output bit [11 : 0] M11_AXI_awaddr,
  output bit [7 : 0] M11_AXI_awlen,
  output bit [2 : 0] M11_AXI_awsize,
  output bit [1 : 0] M11_AXI_awburst,
  output bit [0 : 0] M11_AXI_awlock,
  output bit [3 : 0] M11_AXI_awcache,
  output bit [2 : 0] M11_AXI_awprot,
  output bit [3 : 0] M11_AXI_awqos,
  output bit_as_bool M11_AXI_awvalid,
  input bit_as_bool M11_AXI_awready,
  output bit [31 : 0] M11_AXI_wdata,
  output bit [3 : 0] M11_AXI_wstrb,
  output bit_as_bool M11_AXI_wlast,
  output bit_as_bool M11_AXI_wvalid,
  input bit_as_bool M11_AXI_wready,
  input bit [1 : 0] M11_AXI_bresp,
  input bit_as_bool M11_AXI_bvalid,
  output bit_as_bool M11_AXI_bready,
  output bit [11 : 0] M11_AXI_araddr,
  output bit [7 : 0] M11_AXI_arlen,
  output bit [2 : 0] M11_AXI_arsize,
  output bit [1 : 0] M11_AXI_arburst,
  output bit [0 : 0] M11_AXI_arlock,
  output bit [3 : 0] M11_AXI_arcache,
  output bit [2 : 0] M11_AXI_arprot,
  output bit [3 : 0] M11_AXI_arqos,
  output bit_as_bool M11_AXI_arvalid,
  input bit_as_bool M11_AXI_arready,
  input bit [31 : 0] M11_AXI_rdata,
  input bit [1 : 0] M11_AXI_rresp,
  input bit_as_bool M11_AXI_rlast,
  input bit_as_bool M11_AXI_rvalid,
  output bit_as_bool M11_AXI_rready,
  output bit [11 : 0] M12_AXI_awaddr,
  output bit [7 : 0] M12_AXI_awlen,
  output bit [2 : 0] M12_AXI_awsize,
  output bit [1 : 0] M12_AXI_awburst,
  output bit [0 : 0] M12_AXI_awlock,
  output bit [3 : 0] M12_AXI_awcache,
  output bit [2 : 0] M12_AXI_awprot,
  output bit [3 : 0] M12_AXI_awqos,
  output bit_as_bool M12_AXI_awvalid,
  input bit_as_bool M12_AXI_awready,
  output bit [31 : 0] M12_AXI_wdata,
  output bit [3 : 0] M12_AXI_wstrb,
  output bit_as_bool M12_AXI_wlast,
  output bit_as_bool M12_AXI_wvalid,
  input bit_as_bool M12_AXI_wready,
  input bit [1 : 0] M12_AXI_bresp,
  input bit_as_bool M12_AXI_bvalid,
  output bit_as_bool M12_AXI_bready,
  output bit [11 : 0] M12_AXI_araddr,
  output bit [7 : 0] M12_AXI_arlen,
  output bit [2 : 0] M12_AXI_arsize,
  output bit [1 : 0] M12_AXI_arburst,
  output bit [0 : 0] M12_AXI_arlock,
  output bit [3 : 0] M12_AXI_arcache,
  output bit [2 : 0] M12_AXI_arprot,
  output bit [3 : 0] M12_AXI_arqos,
  output bit_as_bool M12_AXI_arvalid,
  input bit_as_bool M12_AXI_arready,
  input bit [31 : 0] M12_AXI_rdata,
  input bit [1 : 0] M12_AXI_rresp,
  input bit_as_bool M12_AXI_rlast,
  input bit_as_bool M12_AXI_rvalid,
  output bit_as_bool M12_AXI_rready,
  output bit [11 : 0] M13_AXI_awaddr,
  output bit [7 : 0] M13_AXI_awlen,
  output bit [2 : 0] M13_AXI_awsize,
  output bit [1 : 0] M13_AXI_awburst,
  output bit [0 : 0] M13_AXI_awlock,
  output bit [3 : 0] M13_AXI_awcache,
  output bit [2 : 0] M13_AXI_awprot,
  output bit [3 : 0] M13_AXI_awqos,
  output bit_as_bool M13_AXI_awvalid,
  input bit_as_bool M13_AXI_awready,
  output bit [31 : 0] M13_AXI_wdata,
  output bit [3 : 0] M13_AXI_wstrb,
  output bit_as_bool M13_AXI_wlast,
  output bit_as_bool M13_AXI_wvalid,
  input bit_as_bool M13_AXI_wready,
  input bit [1 : 0] M13_AXI_bresp,
  input bit_as_bool M13_AXI_bvalid,
  output bit_as_bool M13_AXI_bready,
  output bit [11 : 0] M13_AXI_araddr,
  output bit [7 : 0] M13_AXI_arlen,
  output bit [2 : 0] M13_AXI_arsize,
  output bit [1 : 0] M13_AXI_arburst,
  output bit [0 : 0] M13_AXI_arlock,
  output bit [3 : 0] M13_AXI_arcache,
  output bit [2 : 0] M13_AXI_arprot,
  output bit [3 : 0] M13_AXI_arqos,
  output bit_as_bool M13_AXI_arvalid,
  input bit_as_bool M13_AXI_arready,
  input bit [31 : 0] M13_AXI_rdata,
  input bit [1 : 0] M13_AXI_rresp,
  input bit_as_bool M13_AXI_rlast,
  input bit_as_bool M13_AXI_rvalid,
  output bit_as_bool M13_AXI_rready,
  output bit [11 : 0] M14_AXI_awaddr,
  output bit [7 : 0] M14_AXI_awlen,
  output bit [2 : 0] M14_AXI_awsize,
  output bit [1 : 0] M14_AXI_awburst,
  output bit [0 : 0] M14_AXI_awlock,
  output bit [3 : 0] M14_AXI_awcache,
  output bit [2 : 0] M14_AXI_awprot,
  output bit [3 : 0] M14_AXI_awqos,
  output bit_as_bool M14_AXI_awvalid,
  input bit_as_bool M14_AXI_awready,
  output bit [31 : 0] M14_AXI_wdata,
  output bit [3 : 0] M14_AXI_wstrb,
  output bit_as_bool M14_AXI_wlast,
  output bit_as_bool M14_AXI_wvalid,
  input bit_as_bool M14_AXI_wready,
  input bit [1 : 0] M14_AXI_bresp,
  input bit_as_bool M14_AXI_bvalid,
  output bit_as_bool M14_AXI_bready,
  output bit [11 : 0] M14_AXI_araddr,
  output bit [7 : 0] M14_AXI_arlen,
  output bit [2 : 0] M14_AXI_arsize,
  output bit [1 : 0] M14_AXI_arburst,
  output bit [0 : 0] M14_AXI_arlock,
  output bit [3 : 0] M14_AXI_arcache,
  output bit [2 : 0] M14_AXI_arprot,
  output bit [3 : 0] M14_AXI_arqos,
  output bit_as_bool M14_AXI_arvalid,
  input bit_as_bool M14_AXI_arready,
  input bit [31 : 0] M14_AXI_rdata,
  input bit [1 : 0] M14_AXI_rresp,
  input bit_as_bool M14_AXI_rlast,
  input bit_as_bool M14_AXI_rvalid,
  output bit_as_bool M14_AXI_rready,
  output bit [11 : 0] M15_AXI_awaddr,
  output bit [7 : 0] M15_AXI_awlen,
  output bit [2 : 0] M15_AXI_awsize,
  output bit [1 : 0] M15_AXI_awburst,
  output bit [0 : 0] M15_AXI_awlock,
  output bit [3 : 0] M15_AXI_awcache,
  output bit [2 : 0] M15_AXI_awprot,
  output bit [3 : 0] M15_AXI_awqos,
  output bit_as_bool M15_AXI_awvalid,
  input bit_as_bool M15_AXI_awready,
  output bit [31 : 0] M15_AXI_wdata,
  output bit [3 : 0] M15_AXI_wstrb,
  output bit_as_bool M15_AXI_wlast,
  output bit_as_bool M15_AXI_wvalid,
  input bit_as_bool M15_AXI_wready,
  input bit [1 : 0] M15_AXI_bresp,
  input bit_as_bool M15_AXI_bvalid,
  output bit_as_bool M15_AXI_bready,
  output bit [11 : 0] M15_AXI_araddr,
  output bit [7 : 0] M15_AXI_arlen,
  output bit [2 : 0] M15_AXI_arsize,
  output bit [1 : 0] M15_AXI_arburst,
  output bit [0 : 0] M15_AXI_arlock,
  output bit [3 : 0] M15_AXI_arcache,
  output bit [2 : 0] M15_AXI_arprot,
  output bit [3 : 0] M15_AXI_arqos,
  output bit_as_bool M15_AXI_arvalid,
  input bit_as_bool M15_AXI_arready,
  input bit [31 : 0] M15_AXI_rdata,
  input bit [1 : 0] M15_AXI_rresp,
  input bit_as_bool M15_AXI_rlast,
  input bit_as_bool M15_AXI_rvalid,
  output bit_as_bool M15_AXI_rready,
  output bit [11 : 0] M16_AXI_awaddr,
  output bit [7 : 0] M16_AXI_awlen,
  output bit [2 : 0] M16_AXI_awsize,
  output bit [1 : 0] M16_AXI_awburst,
  output bit [0 : 0] M16_AXI_awlock,
  output bit [3 : 0] M16_AXI_awcache,
  output bit [2 : 0] M16_AXI_awprot,
  output bit [3 : 0] M16_AXI_awqos,
  output bit_as_bool M16_AXI_awvalid,
  input bit_as_bool M16_AXI_awready,
  output bit [31 : 0] M16_AXI_wdata,
  output bit [3 : 0] M16_AXI_wstrb,
  output bit_as_bool M16_AXI_wlast,
  output bit_as_bool M16_AXI_wvalid,
  input bit_as_bool M16_AXI_wready,
  input bit [1 : 0] M16_AXI_bresp,
  input bit_as_bool M16_AXI_bvalid,
  output bit_as_bool M16_AXI_bready,
  output bit [11 : 0] M16_AXI_araddr,
  output bit [7 : 0] M16_AXI_arlen,
  output bit [2 : 0] M16_AXI_arsize,
  output bit [1 : 0] M16_AXI_arburst,
  output bit [0 : 0] M16_AXI_arlock,
  output bit [3 : 0] M16_AXI_arcache,
  output bit [2 : 0] M16_AXI_arprot,
  output bit [3 : 0] M16_AXI_arqos,
  output bit_as_bool M16_AXI_arvalid,
  input bit_as_bool M16_AXI_arready,
  input bit [31 : 0] M16_AXI_rdata,
  input bit [1 : 0] M16_AXI_rresp,
  input bit_as_bool M16_AXI_rlast,
  input bit_as_bool M16_AXI_rvalid,
  output bit_as_bool M16_AXI_rready,
  output bit [11 : 0] M17_AXI_awaddr,
  output bit [7 : 0] M17_AXI_awlen,
  output bit [2 : 0] M17_AXI_awsize,
  output bit [1 : 0] M17_AXI_awburst,
  output bit [0 : 0] M17_AXI_awlock,
  output bit [3 : 0] M17_AXI_awcache,
  output bit [2 : 0] M17_AXI_awprot,
  output bit [3 : 0] M17_AXI_awqos,
  output bit_as_bool M17_AXI_awvalid,
  input bit_as_bool M17_AXI_awready,
  output bit [31 : 0] M17_AXI_wdata,
  output bit [3 : 0] M17_AXI_wstrb,
  output bit_as_bool M17_AXI_wlast,
  output bit_as_bool M17_AXI_wvalid,
  input bit_as_bool M17_AXI_wready,
  input bit [1 : 0] M17_AXI_bresp,
  input bit_as_bool M17_AXI_bvalid,
  output bit_as_bool M17_AXI_bready,
  output bit [11 : 0] M17_AXI_araddr,
  output bit [7 : 0] M17_AXI_arlen,
  output bit [2 : 0] M17_AXI_arsize,
  output bit [1 : 0] M17_AXI_arburst,
  output bit [0 : 0] M17_AXI_arlock,
  output bit [3 : 0] M17_AXI_arcache,
  output bit [2 : 0] M17_AXI_arprot,
  output bit [3 : 0] M17_AXI_arqos,
  output bit_as_bool M17_AXI_arvalid,
  input bit_as_bool M17_AXI_arready,
  input bit [31 : 0] M17_AXI_rdata,
  input bit [1 : 0] M17_AXI_rresp,
  input bit_as_bool M17_AXI_rlast,
  input bit_as_bool M17_AXI_rvalid,
  output bit_as_bool M17_AXI_rready,
  output bit [11 : 0] M18_AXI_awaddr,
  output bit [7 : 0] M18_AXI_awlen,
  output bit [2 : 0] M18_AXI_awsize,
  output bit [1 : 0] M18_AXI_awburst,
  output bit [0 : 0] M18_AXI_awlock,
  output bit [3 : 0] M18_AXI_awcache,
  output bit [2 : 0] M18_AXI_awprot,
  output bit [3 : 0] M18_AXI_awqos,
  output bit_as_bool M18_AXI_awvalid,
  input bit_as_bool M18_AXI_awready,
  output bit [31 : 0] M18_AXI_wdata,
  output bit [3 : 0] M18_AXI_wstrb,
  output bit_as_bool M18_AXI_wlast,
  output bit_as_bool M18_AXI_wvalid,
  input bit_as_bool M18_AXI_wready,
  input bit [1 : 0] M18_AXI_bresp,
  input bit_as_bool M18_AXI_bvalid,
  output bit_as_bool M18_AXI_bready,
  output bit [11 : 0] M18_AXI_araddr,
  output bit [7 : 0] M18_AXI_arlen,
  output bit [2 : 0] M18_AXI_arsize,
  output bit [1 : 0] M18_AXI_arburst,
  output bit [0 : 0] M18_AXI_arlock,
  output bit [3 : 0] M18_AXI_arcache,
  output bit [2 : 0] M18_AXI_arprot,
  output bit [3 : 0] M18_AXI_arqos,
  output bit_as_bool M18_AXI_arvalid,
  input bit_as_bool M18_AXI_arready,
  input bit [31 : 0] M18_AXI_rdata,
  input bit [1 : 0] M18_AXI_rresp,
  input bit_as_bool M18_AXI_rlast,
  input bit_as_bool M18_AXI_rvalid,
  output bit_as_bool M18_AXI_rready,
  output bit [11 : 0] M19_AXI_awaddr,
  output bit [7 : 0] M19_AXI_awlen,
  output bit [2 : 0] M19_AXI_awsize,
  output bit [1 : 0] M19_AXI_awburst,
  output bit [0 : 0] M19_AXI_awlock,
  output bit [3 : 0] M19_AXI_awcache,
  output bit [2 : 0] M19_AXI_awprot,
  output bit [3 : 0] M19_AXI_awqos,
  output bit_as_bool M19_AXI_awvalid,
  input bit_as_bool M19_AXI_awready,
  output bit [31 : 0] M19_AXI_wdata,
  output bit [3 : 0] M19_AXI_wstrb,
  output bit_as_bool M19_AXI_wlast,
  output bit_as_bool M19_AXI_wvalid,
  input bit_as_bool M19_AXI_wready,
  input bit [1 : 0] M19_AXI_bresp,
  input bit_as_bool M19_AXI_bvalid,
  output bit_as_bool M19_AXI_bready,
  output bit [11 : 0] M19_AXI_araddr,
  output bit [7 : 0] M19_AXI_arlen,
  output bit [2 : 0] M19_AXI_arsize,
  output bit [1 : 0] M19_AXI_arburst,
  output bit [0 : 0] M19_AXI_arlock,
  output bit [3 : 0] M19_AXI_arcache,
  output bit [2 : 0] M19_AXI_arprot,
  output bit [3 : 0] M19_AXI_arqos,
  output bit_as_bool M19_AXI_arvalid,
  input bit_as_bool M19_AXI_arready,
  input bit [31 : 0] M19_AXI_rdata,
  input bit [1 : 0] M19_AXI_rresp,
  input bit_as_bool M19_AXI_rlast,
  input bit_as_bool M19_AXI_rvalid,
  output bit_as_bool M19_AXI_rready,
  output bit [11 : 0] M20_AXI_awaddr,
  output bit [7 : 0] M20_AXI_awlen,
  output bit [2 : 0] M20_AXI_awsize,
  output bit [1 : 0] M20_AXI_awburst,
  output bit [0 : 0] M20_AXI_awlock,
  output bit [3 : 0] M20_AXI_awcache,
  output bit [2 : 0] M20_AXI_awprot,
  output bit [3 : 0] M20_AXI_awqos,
  output bit_as_bool M20_AXI_awvalid,
  input bit_as_bool M20_AXI_awready,
  output bit [31 : 0] M20_AXI_wdata,
  output bit [3 : 0] M20_AXI_wstrb,
  output bit_as_bool M20_AXI_wlast,
  output bit_as_bool M20_AXI_wvalid,
  input bit_as_bool M20_AXI_wready,
  input bit [1 : 0] M20_AXI_bresp,
  input bit_as_bool M20_AXI_bvalid,
  output bit_as_bool M20_AXI_bready,
  output bit [11 : 0] M20_AXI_araddr,
  output bit [7 : 0] M20_AXI_arlen,
  output bit [2 : 0] M20_AXI_arsize,
  output bit [1 : 0] M20_AXI_arburst,
  output bit [0 : 0] M20_AXI_arlock,
  output bit [3 : 0] M20_AXI_arcache,
  output bit [2 : 0] M20_AXI_arprot,
  output bit [3 : 0] M20_AXI_arqos,
  output bit_as_bool M20_AXI_arvalid,
  input bit_as_bool M20_AXI_arready,
  input bit [31 : 0] M20_AXI_rdata,
  input bit [1 : 0] M20_AXI_rresp,
  input bit_as_bool M20_AXI_rlast,
  input bit_as_bool M20_AXI_rvalid,
  output bit_as_bool M20_AXI_rready,
  output bit [11 : 0] M21_AXI_awaddr,
  output bit [7 : 0] M21_AXI_awlen,
  output bit [2 : 0] M21_AXI_awsize,
  output bit [1 : 0] M21_AXI_awburst,
  output bit [0 : 0] M21_AXI_awlock,
  output bit [3 : 0] M21_AXI_awcache,
  output bit [2 : 0] M21_AXI_awprot,
  output bit [3 : 0] M21_AXI_awqos,
  output bit_as_bool M21_AXI_awvalid,
  input bit_as_bool M21_AXI_awready,
  output bit [31 : 0] M21_AXI_wdata,
  output bit [3 : 0] M21_AXI_wstrb,
  output bit_as_bool M21_AXI_wlast,
  output bit_as_bool M21_AXI_wvalid,
  input bit_as_bool M21_AXI_wready,
  input bit [1 : 0] M21_AXI_bresp,
  input bit_as_bool M21_AXI_bvalid,
  output bit_as_bool M21_AXI_bready,
  output bit [11 : 0] M21_AXI_araddr,
  output bit [7 : 0] M21_AXI_arlen,
  output bit [2 : 0] M21_AXI_arsize,
  output bit [1 : 0] M21_AXI_arburst,
  output bit [0 : 0] M21_AXI_arlock,
  output bit [3 : 0] M21_AXI_arcache,
  output bit [2 : 0] M21_AXI_arprot,
  output bit [3 : 0] M21_AXI_arqos,
  output bit_as_bool M21_AXI_arvalid,
  input bit_as_bool M21_AXI_arready,
  input bit [31 : 0] M21_AXI_rdata,
  input bit [1 : 0] M21_AXI_rresp,
  input bit_as_bool M21_AXI_rlast,
  input bit_as_bool M21_AXI_rvalid,
  output bit_as_bool M21_AXI_rready,
  output bit [11 : 0] M22_AXI_awaddr,
  output bit [7 : 0] M22_AXI_awlen,
  output bit [2 : 0] M22_AXI_awsize,
  output bit [1 : 0] M22_AXI_awburst,
  output bit [0 : 0] M22_AXI_awlock,
  output bit [3 : 0] M22_AXI_awcache,
  output bit [2 : 0] M22_AXI_awprot,
  output bit [3 : 0] M22_AXI_awqos,
  output bit_as_bool M22_AXI_awvalid,
  input bit_as_bool M22_AXI_awready,
  output bit [31 : 0] M22_AXI_wdata,
  output bit [3 : 0] M22_AXI_wstrb,
  output bit_as_bool M22_AXI_wlast,
  output bit_as_bool M22_AXI_wvalid,
  input bit_as_bool M22_AXI_wready,
  input bit [1 : 0] M22_AXI_bresp,
  input bit_as_bool M22_AXI_bvalid,
  output bit_as_bool M22_AXI_bready,
  output bit [11 : 0] M22_AXI_araddr,
  output bit [7 : 0] M22_AXI_arlen,
  output bit [2 : 0] M22_AXI_arsize,
  output bit [1 : 0] M22_AXI_arburst,
  output bit [0 : 0] M22_AXI_arlock,
  output bit [3 : 0] M22_AXI_arcache,
  output bit [2 : 0] M22_AXI_arprot,
  output bit [3 : 0] M22_AXI_arqos,
  output bit_as_bool M22_AXI_arvalid,
  input bit_as_bool M22_AXI_arready,
  input bit [31 : 0] M22_AXI_rdata,
  input bit [1 : 0] M22_AXI_rresp,
  input bit_as_bool M22_AXI_rlast,
  input bit_as_bool M22_AXI_rvalid,
  output bit_as_bool M22_AXI_rready,
  output bit [11 : 0] M23_AXI_awaddr,
  output bit [7 : 0] M23_AXI_awlen,
  output bit [2 : 0] M23_AXI_awsize,
  output bit [1 : 0] M23_AXI_awburst,
  output bit [0 : 0] M23_AXI_awlock,
  output bit [3 : 0] M23_AXI_awcache,
  output bit [2 : 0] M23_AXI_awprot,
  output bit [3 : 0] M23_AXI_awqos,
  output bit_as_bool M23_AXI_awvalid,
  input bit_as_bool M23_AXI_awready,
  output bit [31 : 0] M23_AXI_wdata,
  output bit [3 : 0] M23_AXI_wstrb,
  output bit_as_bool M23_AXI_wlast,
  output bit_as_bool M23_AXI_wvalid,
  input bit_as_bool M23_AXI_wready,
  input bit [1 : 0] M23_AXI_bresp,
  input bit_as_bool M23_AXI_bvalid,
  output bit_as_bool M23_AXI_bready,
  output bit [11 : 0] M23_AXI_araddr,
  output bit [7 : 0] M23_AXI_arlen,
  output bit [2 : 0] M23_AXI_arsize,
  output bit [1 : 0] M23_AXI_arburst,
  output bit [0 : 0] M23_AXI_arlock,
  output bit [3 : 0] M23_AXI_arcache,
  output bit [2 : 0] M23_AXI_arprot,
  output bit [3 : 0] M23_AXI_arqos,
  output bit_as_bool M23_AXI_arvalid,
  input bit_as_bool M23_AXI_arready,
  input bit [31 : 0] M23_AXI_rdata,
  input bit [1 : 0] M23_AXI_rresp,
  input bit_as_bool M23_AXI_rlast,
  input bit_as_bool M23_AXI_rvalid,
  output bit_as_bool M23_AXI_rready
);
endmodule
`endif

`ifdef XCELIUM
(* XMSC_MODULE_EXPORT *)
module Multi_convo_core_smartconnect_0_0 (aclk,aresetn,S00_AXI_awaddr,S00_AXI_awlen,S00_AXI_awsize,S00_AXI_awburst,S00_AXI_awlock,S00_AXI_awcache,S00_AXI_awprot,S00_AXI_awqos,S00_AXI_awvalid,S00_AXI_awready,S00_AXI_wdata,S00_AXI_wstrb,S00_AXI_wlast,S00_AXI_wvalid,S00_AXI_wready,S00_AXI_bresp,S00_AXI_bvalid,S00_AXI_bready,S00_AXI_araddr,S00_AXI_arlen,S00_AXI_arsize,S00_AXI_arburst,S00_AXI_arlock,S00_AXI_arcache,S00_AXI_arprot,S00_AXI_arqos,S00_AXI_arvalid,S00_AXI_arready,S00_AXI_rdata,S00_AXI_rresp,S00_AXI_rlast,S00_AXI_rvalid,S00_AXI_rready,M00_AXI_awaddr,M00_AXI_awlen,M00_AXI_awsize,M00_AXI_awburst,M00_AXI_awlock,M00_AXI_awcache,M00_AXI_awprot,M00_AXI_awqos,M00_AXI_awvalid,M00_AXI_awready,M00_AXI_wdata,M00_AXI_wstrb,M00_AXI_wlast,M00_AXI_wvalid,M00_AXI_wready,M00_AXI_bresp,M00_AXI_bvalid,M00_AXI_bready,M00_AXI_araddr,M00_AXI_arlen,M00_AXI_arsize,M00_AXI_arburst,M00_AXI_arlock,M00_AXI_arcache,M00_AXI_arprot,M00_AXI_arqos,M00_AXI_arvalid,M00_AXI_arready,M00_AXI_rdata,M00_AXI_rresp,M00_AXI_rlast,M00_AXI_rvalid,M00_AXI_rready,M01_AXI_awaddr,M01_AXI_awlen,M01_AXI_awsize,M01_AXI_awburst,M01_AXI_awlock,M01_AXI_awcache,M01_AXI_awprot,M01_AXI_awqos,M01_AXI_awvalid,M01_AXI_awready,M01_AXI_wdata,M01_AXI_wstrb,M01_AXI_wlast,M01_AXI_wvalid,M01_AXI_wready,M01_AXI_bresp,M01_AXI_bvalid,M01_AXI_bready,M01_AXI_araddr,M01_AXI_arlen,M01_AXI_arsize,M01_AXI_arburst,M01_AXI_arlock,M01_AXI_arcache,M01_AXI_arprot,M01_AXI_arqos,M01_AXI_arvalid,M01_AXI_arready,M01_AXI_rdata,M01_AXI_rresp,M01_AXI_rlast,M01_AXI_rvalid,M01_AXI_rready,M02_AXI_awaddr,M02_AXI_awlen,M02_AXI_awsize,M02_AXI_awburst,M02_AXI_awlock,M02_AXI_awcache,M02_AXI_awprot,M02_AXI_awqos,M02_AXI_awvalid,M02_AXI_awready,M02_AXI_wdata,M02_AXI_wstrb,M02_AXI_wlast,M02_AXI_wvalid,M02_AXI_wready,M02_AXI_bresp,M02_AXI_bvalid,M02_AXI_bready,M02_AXI_araddr,M02_AXI_arlen,M02_AXI_arsize,M02_AXI_arburst,M02_AXI_arlock,M02_AXI_arcache,M02_AXI_arprot,M02_AXI_arqos,M02_AXI_arvalid,M02_AXI_arready,M02_AXI_rdata,M02_AXI_rresp,M02_AXI_rlast,M02_AXI_rvalid,M02_AXI_rready,M03_AXI_awaddr,M03_AXI_awlen,M03_AXI_awsize,M03_AXI_awburst,M03_AXI_awlock,M03_AXI_awcache,M03_AXI_awprot,M03_AXI_awqos,M03_AXI_awvalid,M03_AXI_awready,M03_AXI_wdata,M03_AXI_wstrb,M03_AXI_wlast,M03_AXI_wvalid,M03_AXI_wready,M03_AXI_bresp,M03_AXI_bvalid,M03_AXI_bready,M03_AXI_araddr,M03_AXI_arlen,M03_AXI_arsize,M03_AXI_arburst,M03_AXI_arlock,M03_AXI_arcache,M03_AXI_arprot,M03_AXI_arqos,M03_AXI_arvalid,M03_AXI_arready,M03_AXI_rdata,M03_AXI_rresp,M03_AXI_rlast,M03_AXI_rvalid,M03_AXI_rready,M04_AXI_awaddr,M04_AXI_awlen,M04_AXI_awsize,M04_AXI_awburst,M04_AXI_awlock,M04_AXI_awcache,M04_AXI_awprot,M04_AXI_awqos,M04_AXI_awvalid,M04_AXI_awready,M04_AXI_wdata,M04_AXI_wstrb,M04_AXI_wlast,M04_AXI_wvalid,M04_AXI_wready,M04_AXI_bresp,M04_AXI_bvalid,M04_AXI_bready,M04_AXI_araddr,M04_AXI_arlen,M04_AXI_arsize,M04_AXI_arburst,M04_AXI_arlock,M04_AXI_arcache,M04_AXI_arprot,M04_AXI_arqos,M04_AXI_arvalid,M04_AXI_arready,M04_AXI_rdata,M04_AXI_rresp,M04_AXI_rlast,M04_AXI_rvalid,M04_AXI_rready,M05_AXI_awaddr,M05_AXI_awlen,M05_AXI_awsize,M05_AXI_awburst,M05_AXI_awlock,M05_AXI_awcache,M05_AXI_awprot,M05_AXI_awqos,M05_AXI_awvalid,M05_AXI_awready,M05_AXI_wdata,M05_AXI_wstrb,M05_AXI_wlast,M05_AXI_wvalid,M05_AXI_wready,M05_AXI_bresp,M05_AXI_bvalid,M05_AXI_bready,M05_AXI_araddr,M05_AXI_arlen,M05_AXI_arsize,M05_AXI_arburst,M05_AXI_arlock,M05_AXI_arcache,M05_AXI_arprot,M05_AXI_arqos,M05_AXI_arvalid,M05_AXI_arready,M05_AXI_rdata,M05_AXI_rresp,M05_AXI_rlast,M05_AXI_rvalid,M05_AXI_rready,M06_AXI_awaddr,M06_AXI_awlen,M06_AXI_awsize,M06_AXI_awburst,M06_AXI_awlock,M06_AXI_awcache,M06_AXI_awprot,M06_AXI_awqos,M06_AXI_awvalid,M06_AXI_awready,M06_AXI_wdata,M06_AXI_wstrb,M06_AXI_wlast,M06_AXI_wvalid,M06_AXI_wready,M06_AXI_bresp,M06_AXI_bvalid,M06_AXI_bready,M06_AXI_araddr,M06_AXI_arlen,M06_AXI_arsize,M06_AXI_arburst,M06_AXI_arlock,M06_AXI_arcache,M06_AXI_arprot,M06_AXI_arqos,M06_AXI_arvalid,M06_AXI_arready,M06_AXI_rdata,M06_AXI_rresp,M06_AXI_rlast,M06_AXI_rvalid,M06_AXI_rready,M07_AXI_awaddr,M07_AXI_awlen,M07_AXI_awsize,M07_AXI_awburst,M07_AXI_awlock,M07_AXI_awcache,M07_AXI_awprot,M07_AXI_awqos,M07_AXI_awvalid,M07_AXI_awready,M07_AXI_wdata,M07_AXI_wstrb,M07_AXI_wlast,M07_AXI_wvalid,M07_AXI_wready,M07_AXI_bresp,M07_AXI_bvalid,M07_AXI_bready,M07_AXI_araddr,M07_AXI_arlen,M07_AXI_arsize,M07_AXI_arburst,M07_AXI_arlock,M07_AXI_arcache,M07_AXI_arprot,M07_AXI_arqos,M07_AXI_arvalid,M07_AXI_arready,M07_AXI_rdata,M07_AXI_rresp,M07_AXI_rlast,M07_AXI_rvalid,M07_AXI_rready,M08_AXI_awaddr,M08_AXI_awlen,M08_AXI_awsize,M08_AXI_awburst,M08_AXI_awlock,M08_AXI_awcache,M08_AXI_awprot,M08_AXI_awqos,M08_AXI_awvalid,M08_AXI_awready,M08_AXI_wdata,M08_AXI_wstrb,M08_AXI_wlast,M08_AXI_wvalid,M08_AXI_wready,M08_AXI_bresp,M08_AXI_bvalid,M08_AXI_bready,M08_AXI_araddr,M08_AXI_arlen,M08_AXI_arsize,M08_AXI_arburst,M08_AXI_arlock,M08_AXI_arcache,M08_AXI_arprot,M08_AXI_arqos,M08_AXI_arvalid,M08_AXI_arready,M08_AXI_rdata,M08_AXI_rresp,M08_AXI_rlast,M08_AXI_rvalid,M08_AXI_rready,M09_AXI_awaddr,M09_AXI_awlen,M09_AXI_awsize,M09_AXI_awburst,M09_AXI_awlock,M09_AXI_awcache,M09_AXI_awprot,M09_AXI_awqos,M09_AXI_awvalid,M09_AXI_awready,M09_AXI_wdata,M09_AXI_wstrb,M09_AXI_wlast,M09_AXI_wvalid,M09_AXI_wready,M09_AXI_bresp,M09_AXI_bvalid,M09_AXI_bready,M09_AXI_araddr,M09_AXI_arlen,M09_AXI_arsize,M09_AXI_arburst,M09_AXI_arlock,M09_AXI_arcache,M09_AXI_arprot,M09_AXI_arqos,M09_AXI_arvalid,M09_AXI_arready,M09_AXI_rdata,M09_AXI_rresp,M09_AXI_rlast,M09_AXI_rvalid,M09_AXI_rready,M10_AXI_awaddr,M10_AXI_awlen,M10_AXI_awsize,M10_AXI_awburst,M10_AXI_awlock,M10_AXI_awcache,M10_AXI_awprot,M10_AXI_awqos,M10_AXI_awvalid,M10_AXI_awready,M10_AXI_wdata,M10_AXI_wstrb,M10_AXI_wlast,M10_AXI_wvalid,M10_AXI_wready,M10_AXI_bresp,M10_AXI_bvalid,M10_AXI_bready,M10_AXI_araddr,M10_AXI_arlen,M10_AXI_arsize,M10_AXI_arburst,M10_AXI_arlock,M10_AXI_arcache,M10_AXI_arprot,M10_AXI_arqos,M10_AXI_arvalid,M10_AXI_arready,M10_AXI_rdata,M10_AXI_rresp,M10_AXI_rlast,M10_AXI_rvalid,M10_AXI_rready,M11_AXI_awaddr,M11_AXI_awlen,M11_AXI_awsize,M11_AXI_awburst,M11_AXI_awlock,M11_AXI_awcache,M11_AXI_awprot,M11_AXI_awqos,M11_AXI_awvalid,M11_AXI_awready,M11_AXI_wdata,M11_AXI_wstrb,M11_AXI_wlast,M11_AXI_wvalid,M11_AXI_wready,M11_AXI_bresp,M11_AXI_bvalid,M11_AXI_bready,M11_AXI_araddr,M11_AXI_arlen,M11_AXI_arsize,M11_AXI_arburst,M11_AXI_arlock,M11_AXI_arcache,M11_AXI_arprot,M11_AXI_arqos,M11_AXI_arvalid,M11_AXI_arready,M11_AXI_rdata,M11_AXI_rresp,M11_AXI_rlast,M11_AXI_rvalid,M11_AXI_rready,M12_AXI_awaddr,M12_AXI_awlen,M12_AXI_awsize,M12_AXI_awburst,M12_AXI_awlock,M12_AXI_awcache,M12_AXI_awprot,M12_AXI_awqos,M12_AXI_awvalid,M12_AXI_awready,M12_AXI_wdata,M12_AXI_wstrb,M12_AXI_wlast,M12_AXI_wvalid,M12_AXI_wready,M12_AXI_bresp,M12_AXI_bvalid,M12_AXI_bready,M12_AXI_araddr,M12_AXI_arlen,M12_AXI_arsize,M12_AXI_arburst,M12_AXI_arlock,M12_AXI_arcache,M12_AXI_arprot,M12_AXI_arqos,M12_AXI_arvalid,M12_AXI_arready,M12_AXI_rdata,M12_AXI_rresp,M12_AXI_rlast,M12_AXI_rvalid,M12_AXI_rready,M13_AXI_awaddr,M13_AXI_awlen,M13_AXI_awsize,M13_AXI_awburst,M13_AXI_awlock,M13_AXI_awcache,M13_AXI_awprot,M13_AXI_awqos,M13_AXI_awvalid,M13_AXI_awready,M13_AXI_wdata,M13_AXI_wstrb,M13_AXI_wlast,M13_AXI_wvalid,M13_AXI_wready,M13_AXI_bresp,M13_AXI_bvalid,M13_AXI_bready,M13_AXI_araddr,M13_AXI_arlen,M13_AXI_arsize,M13_AXI_arburst,M13_AXI_arlock,M13_AXI_arcache,M13_AXI_arprot,M13_AXI_arqos,M13_AXI_arvalid,M13_AXI_arready,M13_AXI_rdata,M13_AXI_rresp,M13_AXI_rlast,M13_AXI_rvalid,M13_AXI_rready,M14_AXI_awaddr,M14_AXI_awlen,M14_AXI_awsize,M14_AXI_awburst,M14_AXI_awlock,M14_AXI_awcache,M14_AXI_awprot,M14_AXI_awqos,M14_AXI_awvalid,M14_AXI_awready,M14_AXI_wdata,M14_AXI_wstrb,M14_AXI_wlast,M14_AXI_wvalid,M14_AXI_wready,M14_AXI_bresp,M14_AXI_bvalid,M14_AXI_bready,M14_AXI_araddr,M14_AXI_arlen,M14_AXI_arsize,M14_AXI_arburst,M14_AXI_arlock,M14_AXI_arcache,M14_AXI_arprot,M14_AXI_arqos,M14_AXI_arvalid,M14_AXI_arready,M14_AXI_rdata,M14_AXI_rresp,M14_AXI_rlast,M14_AXI_rvalid,M14_AXI_rready,M15_AXI_awaddr,M15_AXI_awlen,M15_AXI_awsize,M15_AXI_awburst,M15_AXI_awlock,M15_AXI_awcache,M15_AXI_awprot,M15_AXI_awqos,M15_AXI_awvalid,M15_AXI_awready,M15_AXI_wdata,M15_AXI_wstrb,M15_AXI_wlast,M15_AXI_wvalid,M15_AXI_wready,M15_AXI_bresp,M15_AXI_bvalid,M15_AXI_bready,M15_AXI_araddr,M15_AXI_arlen,M15_AXI_arsize,M15_AXI_arburst,M15_AXI_arlock,M15_AXI_arcache,M15_AXI_arprot,M15_AXI_arqos,M15_AXI_arvalid,M15_AXI_arready,M15_AXI_rdata,M15_AXI_rresp,M15_AXI_rlast,M15_AXI_rvalid,M15_AXI_rready,M16_AXI_awaddr,M16_AXI_awlen,M16_AXI_awsize,M16_AXI_awburst,M16_AXI_awlock,M16_AXI_awcache,M16_AXI_awprot,M16_AXI_awqos,M16_AXI_awvalid,M16_AXI_awready,M16_AXI_wdata,M16_AXI_wstrb,M16_AXI_wlast,M16_AXI_wvalid,M16_AXI_wready,M16_AXI_bresp,M16_AXI_bvalid,M16_AXI_bready,M16_AXI_araddr,M16_AXI_arlen,M16_AXI_arsize,M16_AXI_arburst,M16_AXI_arlock,M16_AXI_arcache,M16_AXI_arprot,M16_AXI_arqos,M16_AXI_arvalid,M16_AXI_arready,M16_AXI_rdata,M16_AXI_rresp,M16_AXI_rlast,M16_AXI_rvalid,M16_AXI_rready,M17_AXI_awaddr,M17_AXI_awlen,M17_AXI_awsize,M17_AXI_awburst,M17_AXI_awlock,M17_AXI_awcache,M17_AXI_awprot,M17_AXI_awqos,M17_AXI_awvalid,M17_AXI_awready,M17_AXI_wdata,M17_AXI_wstrb,M17_AXI_wlast,M17_AXI_wvalid,M17_AXI_wready,M17_AXI_bresp,M17_AXI_bvalid,M17_AXI_bready,M17_AXI_araddr,M17_AXI_arlen,M17_AXI_arsize,M17_AXI_arburst,M17_AXI_arlock,M17_AXI_arcache,M17_AXI_arprot,M17_AXI_arqos,M17_AXI_arvalid,M17_AXI_arready,M17_AXI_rdata,M17_AXI_rresp,M17_AXI_rlast,M17_AXI_rvalid,M17_AXI_rready,M18_AXI_awaddr,M18_AXI_awlen,M18_AXI_awsize,M18_AXI_awburst,M18_AXI_awlock,M18_AXI_awcache,M18_AXI_awprot,M18_AXI_awqos,M18_AXI_awvalid,M18_AXI_awready,M18_AXI_wdata,M18_AXI_wstrb,M18_AXI_wlast,M18_AXI_wvalid,M18_AXI_wready,M18_AXI_bresp,M18_AXI_bvalid,M18_AXI_bready,M18_AXI_araddr,M18_AXI_arlen,M18_AXI_arsize,M18_AXI_arburst,M18_AXI_arlock,M18_AXI_arcache,M18_AXI_arprot,M18_AXI_arqos,M18_AXI_arvalid,M18_AXI_arready,M18_AXI_rdata,M18_AXI_rresp,M18_AXI_rlast,M18_AXI_rvalid,M18_AXI_rready,M19_AXI_awaddr,M19_AXI_awlen,M19_AXI_awsize,M19_AXI_awburst,M19_AXI_awlock,M19_AXI_awcache,M19_AXI_awprot,M19_AXI_awqos,M19_AXI_awvalid,M19_AXI_awready,M19_AXI_wdata,M19_AXI_wstrb,M19_AXI_wlast,M19_AXI_wvalid,M19_AXI_wready,M19_AXI_bresp,M19_AXI_bvalid,M19_AXI_bready,M19_AXI_araddr,M19_AXI_arlen,M19_AXI_arsize,M19_AXI_arburst,M19_AXI_arlock,M19_AXI_arcache,M19_AXI_arprot,M19_AXI_arqos,M19_AXI_arvalid,M19_AXI_arready,M19_AXI_rdata,M19_AXI_rresp,M19_AXI_rlast,M19_AXI_rvalid,M19_AXI_rready,M20_AXI_awaddr,M20_AXI_awlen,M20_AXI_awsize,M20_AXI_awburst,M20_AXI_awlock,M20_AXI_awcache,M20_AXI_awprot,M20_AXI_awqos,M20_AXI_awvalid,M20_AXI_awready,M20_AXI_wdata,M20_AXI_wstrb,M20_AXI_wlast,M20_AXI_wvalid,M20_AXI_wready,M20_AXI_bresp,M20_AXI_bvalid,M20_AXI_bready,M20_AXI_araddr,M20_AXI_arlen,M20_AXI_arsize,M20_AXI_arburst,M20_AXI_arlock,M20_AXI_arcache,M20_AXI_arprot,M20_AXI_arqos,M20_AXI_arvalid,M20_AXI_arready,M20_AXI_rdata,M20_AXI_rresp,M20_AXI_rlast,M20_AXI_rvalid,M20_AXI_rready,M21_AXI_awaddr,M21_AXI_awlen,M21_AXI_awsize,M21_AXI_awburst,M21_AXI_awlock,M21_AXI_awcache,M21_AXI_awprot,M21_AXI_awqos,M21_AXI_awvalid,M21_AXI_awready,M21_AXI_wdata,M21_AXI_wstrb,M21_AXI_wlast,M21_AXI_wvalid,M21_AXI_wready,M21_AXI_bresp,M21_AXI_bvalid,M21_AXI_bready,M21_AXI_araddr,M21_AXI_arlen,M21_AXI_arsize,M21_AXI_arburst,M21_AXI_arlock,M21_AXI_arcache,M21_AXI_arprot,M21_AXI_arqos,M21_AXI_arvalid,M21_AXI_arready,M21_AXI_rdata,M21_AXI_rresp,M21_AXI_rlast,M21_AXI_rvalid,M21_AXI_rready,M22_AXI_awaddr,M22_AXI_awlen,M22_AXI_awsize,M22_AXI_awburst,M22_AXI_awlock,M22_AXI_awcache,M22_AXI_awprot,M22_AXI_awqos,M22_AXI_awvalid,M22_AXI_awready,M22_AXI_wdata,M22_AXI_wstrb,M22_AXI_wlast,M22_AXI_wvalid,M22_AXI_wready,M22_AXI_bresp,M22_AXI_bvalid,M22_AXI_bready,M22_AXI_araddr,M22_AXI_arlen,M22_AXI_arsize,M22_AXI_arburst,M22_AXI_arlock,M22_AXI_arcache,M22_AXI_arprot,M22_AXI_arqos,M22_AXI_arvalid,M22_AXI_arready,M22_AXI_rdata,M22_AXI_rresp,M22_AXI_rlast,M22_AXI_rvalid,M22_AXI_rready,M23_AXI_awaddr,M23_AXI_awlen,M23_AXI_awsize,M23_AXI_awburst,M23_AXI_awlock,M23_AXI_awcache,M23_AXI_awprot,M23_AXI_awqos,M23_AXI_awvalid,M23_AXI_awready,M23_AXI_wdata,M23_AXI_wstrb,M23_AXI_wlast,M23_AXI_wvalid,M23_AXI_wready,M23_AXI_bresp,M23_AXI_bvalid,M23_AXI_bready,M23_AXI_araddr,M23_AXI_arlen,M23_AXI_arsize,M23_AXI_arburst,M23_AXI_arlock,M23_AXI_arcache,M23_AXI_arprot,M23_AXI_arqos,M23_AXI_arvalid,M23_AXI_arready,M23_AXI_rdata,M23_AXI_rresp,M23_AXI_rlast,M23_AXI_rvalid,M23_AXI_rready)
(* integer foreign = "SystemC";
*);
  input bit aclk;
  input bit aresetn;
  input bit [31 : 0] S00_AXI_awaddr;
  input bit [7 : 0] S00_AXI_awlen;
  input bit [2 : 0] S00_AXI_awsize;
  input bit [1 : 0] S00_AXI_awburst;
  input bit [0 : 0] S00_AXI_awlock;
  input bit [3 : 0] S00_AXI_awcache;
  input bit [2 : 0] S00_AXI_awprot;
  input bit [3 : 0] S00_AXI_awqos;
  input bit S00_AXI_awvalid;
  output wire S00_AXI_awready;
  input bit [31 : 0] S00_AXI_wdata;
  input bit [3 : 0] S00_AXI_wstrb;
  input bit S00_AXI_wlast;
  input bit S00_AXI_wvalid;
  output wire S00_AXI_wready;
  output wire [1 : 0] S00_AXI_bresp;
  output wire S00_AXI_bvalid;
  input bit S00_AXI_bready;
  input bit [31 : 0] S00_AXI_araddr;
  input bit [7 : 0] S00_AXI_arlen;
  input bit [2 : 0] S00_AXI_arsize;
  input bit [1 : 0] S00_AXI_arburst;
  input bit [0 : 0] S00_AXI_arlock;
  input bit [3 : 0] S00_AXI_arcache;
  input bit [2 : 0] S00_AXI_arprot;
  input bit [3 : 0] S00_AXI_arqos;
  input bit S00_AXI_arvalid;
  output wire S00_AXI_arready;
  output wire [31 : 0] S00_AXI_rdata;
  output wire [1 : 0] S00_AXI_rresp;
  output wire S00_AXI_rlast;
  output wire S00_AXI_rvalid;
  input bit S00_AXI_rready;
  output wire [11 : 0] M00_AXI_awaddr;
  output wire [7 : 0] M00_AXI_awlen;
  output wire [2 : 0] M00_AXI_awsize;
  output wire [1 : 0] M00_AXI_awburst;
  output wire [0 : 0] M00_AXI_awlock;
  output wire [3 : 0] M00_AXI_awcache;
  output wire [2 : 0] M00_AXI_awprot;
  output wire [3 : 0] M00_AXI_awqos;
  output wire M00_AXI_awvalid;
  input bit M00_AXI_awready;
  output wire [31 : 0] M00_AXI_wdata;
  output wire [3 : 0] M00_AXI_wstrb;
  output wire M00_AXI_wlast;
  output wire M00_AXI_wvalid;
  input bit M00_AXI_wready;
  input bit [1 : 0] M00_AXI_bresp;
  input bit M00_AXI_bvalid;
  output wire M00_AXI_bready;
  output wire [11 : 0] M00_AXI_araddr;
  output wire [7 : 0] M00_AXI_arlen;
  output wire [2 : 0] M00_AXI_arsize;
  output wire [1 : 0] M00_AXI_arburst;
  output wire [0 : 0] M00_AXI_arlock;
  output wire [3 : 0] M00_AXI_arcache;
  output wire [2 : 0] M00_AXI_arprot;
  output wire [3 : 0] M00_AXI_arqos;
  output wire M00_AXI_arvalid;
  input bit M00_AXI_arready;
  input bit [31 : 0] M00_AXI_rdata;
  input bit [1 : 0] M00_AXI_rresp;
  input bit M00_AXI_rlast;
  input bit M00_AXI_rvalid;
  output wire M00_AXI_rready;
  output wire [11 : 0] M01_AXI_awaddr;
  output wire [7 : 0] M01_AXI_awlen;
  output wire [2 : 0] M01_AXI_awsize;
  output wire [1 : 0] M01_AXI_awburst;
  output wire [0 : 0] M01_AXI_awlock;
  output wire [3 : 0] M01_AXI_awcache;
  output wire [2 : 0] M01_AXI_awprot;
  output wire [3 : 0] M01_AXI_awqos;
  output wire M01_AXI_awvalid;
  input bit M01_AXI_awready;
  output wire [31 : 0] M01_AXI_wdata;
  output wire [3 : 0] M01_AXI_wstrb;
  output wire M01_AXI_wlast;
  output wire M01_AXI_wvalid;
  input bit M01_AXI_wready;
  input bit [1 : 0] M01_AXI_bresp;
  input bit M01_AXI_bvalid;
  output wire M01_AXI_bready;
  output wire [11 : 0] M01_AXI_araddr;
  output wire [7 : 0] M01_AXI_arlen;
  output wire [2 : 0] M01_AXI_arsize;
  output wire [1 : 0] M01_AXI_arburst;
  output wire [0 : 0] M01_AXI_arlock;
  output wire [3 : 0] M01_AXI_arcache;
  output wire [2 : 0] M01_AXI_arprot;
  output wire [3 : 0] M01_AXI_arqos;
  output wire M01_AXI_arvalid;
  input bit M01_AXI_arready;
  input bit [31 : 0] M01_AXI_rdata;
  input bit [1 : 0] M01_AXI_rresp;
  input bit M01_AXI_rlast;
  input bit M01_AXI_rvalid;
  output wire M01_AXI_rready;
  output wire [11 : 0] M02_AXI_awaddr;
  output wire [7 : 0] M02_AXI_awlen;
  output wire [2 : 0] M02_AXI_awsize;
  output wire [1 : 0] M02_AXI_awburst;
  output wire [0 : 0] M02_AXI_awlock;
  output wire [3 : 0] M02_AXI_awcache;
  output wire [2 : 0] M02_AXI_awprot;
  output wire [3 : 0] M02_AXI_awqos;
  output wire M02_AXI_awvalid;
  input bit M02_AXI_awready;
  output wire [31 : 0] M02_AXI_wdata;
  output wire [3 : 0] M02_AXI_wstrb;
  output wire M02_AXI_wlast;
  output wire M02_AXI_wvalid;
  input bit M02_AXI_wready;
  input bit [1 : 0] M02_AXI_bresp;
  input bit M02_AXI_bvalid;
  output wire M02_AXI_bready;
  output wire [11 : 0] M02_AXI_araddr;
  output wire [7 : 0] M02_AXI_arlen;
  output wire [2 : 0] M02_AXI_arsize;
  output wire [1 : 0] M02_AXI_arburst;
  output wire [0 : 0] M02_AXI_arlock;
  output wire [3 : 0] M02_AXI_arcache;
  output wire [2 : 0] M02_AXI_arprot;
  output wire [3 : 0] M02_AXI_arqos;
  output wire M02_AXI_arvalid;
  input bit M02_AXI_arready;
  input bit [31 : 0] M02_AXI_rdata;
  input bit [1 : 0] M02_AXI_rresp;
  input bit M02_AXI_rlast;
  input bit M02_AXI_rvalid;
  output wire M02_AXI_rready;
  output wire [11 : 0] M03_AXI_awaddr;
  output wire [7 : 0] M03_AXI_awlen;
  output wire [2 : 0] M03_AXI_awsize;
  output wire [1 : 0] M03_AXI_awburst;
  output wire [0 : 0] M03_AXI_awlock;
  output wire [3 : 0] M03_AXI_awcache;
  output wire [2 : 0] M03_AXI_awprot;
  output wire [3 : 0] M03_AXI_awqos;
  output wire M03_AXI_awvalid;
  input bit M03_AXI_awready;
  output wire [31 : 0] M03_AXI_wdata;
  output wire [3 : 0] M03_AXI_wstrb;
  output wire M03_AXI_wlast;
  output wire M03_AXI_wvalid;
  input bit M03_AXI_wready;
  input bit [1 : 0] M03_AXI_bresp;
  input bit M03_AXI_bvalid;
  output wire M03_AXI_bready;
  output wire [11 : 0] M03_AXI_araddr;
  output wire [7 : 0] M03_AXI_arlen;
  output wire [2 : 0] M03_AXI_arsize;
  output wire [1 : 0] M03_AXI_arburst;
  output wire [0 : 0] M03_AXI_arlock;
  output wire [3 : 0] M03_AXI_arcache;
  output wire [2 : 0] M03_AXI_arprot;
  output wire [3 : 0] M03_AXI_arqos;
  output wire M03_AXI_arvalid;
  input bit M03_AXI_arready;
  input bit [31 : 0] M03_AXI_rdata;
  input bit [1 : 0] M03_AXI_rresp;
  input bit M03_AXI_rlast;
  input bit M03_AXI_rvalid;
  output wire M03_AXI_rready;
  output wire [11 : 0] M04_AXI_awaddr;
  output wire [7 : 0] M04_AXI_awlen;
  output wire [2 : 0] M04_AXI_awsize;
  output wire [1 : 0] M04_AXI_awburst;
  output wire [0 : 0] M04_AXI_awlock;
  output wire [3 : 0] M04_AXI_awcache;
  output wire [2 : 0] M04_AXI_awprot;
  output wire [3 : 0] M04_AXI_awqos;
  output wire M04_AXI_awvalid;
  input bit M04_AXI_awready;
  output wire [31 : 0] M04_AXI_wdata;
  output wire [3 : 0] M04_AXI_wstrb;
  output wire M04_AXI_wlast;
  output wire M04_AXI_wvalid;
  input bit M04_AXI_wready;
  input bit [1 : 0] M04_AXI_bresp;
  input bit M04_AXI_bvalid;
  output wire M04_AXI_bready;
  output wire [11 : 0] M04_AXI_araddr;
  output wire [7 : 0] M04_AXI_arlen;
  output wire [2 : 0] M04_AXI_arsize;
  output wire [1 : 0] M04_AXI_arburst;
  output wire [0 : 0] M04_AXI_arlock;
  output wire [3 : 0] M04_AXI_arcache;
  output wire [2 : 0] M04_AXI_arprot;
  output wire [3 : 0] M04_AXI_arqos;
  output wire M04_AXI_arvalid;
  input bit M04_AXI_arready;
  input bit [31 : 0] M04_AXI_rdata;
  input bit [1 : 0] M04_AXI_rresp;
  input bit M04_AXI_rlast;
  input bit M04_AXI_rvalid;
  output wire M04_AXI_rready;
  output wire [11 : 0] M05_AXI_awaddr;
  output wire [7 : 0] M05_AXI_awlen;
  output wire [2 : 0] M05_AXI_awsize;
  output wire [1 : 0] M05_AXI_awburst;
  output wire [0 : 0] M05_AXI_awlock;
  output wire [3 : 0] M05_AXI_awcache;
  output wire [2 : 0] M05_AXI_awprot;
  output wire [3 : 0] M05_AXI_awqos;
  output wire M05_AXI_awvalid;
  input bit M05_AXI_awready;
  output wire [31 : 0] M05_AXI_wdata;
  output wire [3 : 0] M05_AXI_wstrb;
  output wire M05_AXI_wlast;
  output wire M05_AXI_wvalid;
  input bit M05_AXI_wready;
  input bit [1 : 0] M05_AXI_bresp;
  input bit M05_AXI_bvalid;
  output wire M05_AXI_bready;
  output wire [11 : 0] M05_AXI_araddr;
  output wire [7 : 0] M05_AXI_arlen;
  output wire [2 : 0] M05_AXI_arsize;
  output wire [1 : 0] M05_AXI_arburst;
  output wire [0 : 0] M05_AXI_arlock;
  output wire [3 : 0] M05_AXI_arcache;
  output wire [2 : 0] M05_AXI_arprot;
  output wire [3 : 0] M05_AXI_arqos;
  output wire M05_AXI_arvalid;
  input bit M05_AXI_arready;
  input bit [31 : 0] M05_AXI_rdata;
  input bit [1 : 0] M05_AXI_rresp;
  input bit M05_AXI_rlast;
  input bit M05_AXI_rvalid;
  output wire M05_AXI_rready;
  output wire [11 : 0] M06_AXI_awaddr;
  output wire [7 : 0] M06_AXI_awlen;
  output wire [2 : 0] M06_AXI_awsize;
  output wire [1 : 0] M06_AXI_awburst;
  output wire [0 : 0] M06_AXI_awlock;
  output wire [3 : 0] M06_AXI_awcache;
  output wire [2 : 0] M06_AXI_awprot;
  output wire [3 : 0] M06_AXI_awqos;
  output wire M06_AXI_awvalid;
  input bit M06_AXI_awready;
  output wire [31 : 0] M06_AXI_wdata;
  output wire [3 : 0] M06_AXI_wstrb;
  output wire M06_AXI_wlast;
  output wire M06_AXI_wvalid;
  input bit M06_AXI_wready;
  input bit [1 : 0] M06_AXI_bresp;
  input bit M06_AXI_bvalid;
  output wire M06_AXI_bready;
  output wire [11 : 0] M06_AXI_araddr;
  output wire [7 : 0] M06_AXI_arlen;
  output wire [2 : 0] M06_AXI_arsize;
  output wire [1 : 0] M06_AXI_arburst;
  output wire [0 : 0] M06_AXI_arlock;
  output wire [3 : 0] M06_AXI_arcache;
  output wire [2 : 0] M06_AXI_arprot;
  output wire [3 : 0] M06_AXI_arqos;
  output wire M06_AXI_arvalid;
  input bit M06_AXI_arready;
  input bit [31 : 0] M06_AXI_rdata;
  input bit [1 : 0] M06_AXI_rresp;
  input bit M06_AXI_rlast;
  input bit M06_AXI_rvalid;
  output wire M06_AXI_rready;
  output wire [11 : 0] M07_AXI_awaddr;
  output wire [7 : 0] M07_AXI_awlen;
  output wire [2 : 0] M07_AXI_awsize;
  output wire [1 : 0] M07_AXI_awburst;
  output wire [0 : 0] M07_AXI_awlock;
  output wire [3 : 0] M07_AXI_awcache;
  output wire [2 : 0] M07_AXI_awprot;
  output wire [3 : 0] M07_AXI_awqos;
  output wire M07_AXI_awvalid;
  input bit M07_AXI_awready;
  output wire [31 : 0] M07_AXI_wdata;
  output wire [3 : 0] M07_AXI_wstrb;
  output wire M07_AXI_wlast;
  output wire M07_AXI_wvalid;
  input bit M07_AXI_wready;
  input bit [1 : 0] M07_AXI_bresp;
  input bit M07_AXI_bvalid;
  output wire M07_AXI_bready;
  output wire [11 : 0] M07_AXI_araddr;
  output wire [7 : 0] M07_AXI_arlen;
  output wire [2 : 0] M07_AXI_arsize;
  output wire [1 : 0] M07_AXI_arburst;
  output wire [0 : 0] M07_AXI_arlock;
  output wire [3 : 0] M07_AXI_arcache;
  output wire [2 : 0] M07_AXI_arprot;
  output wire [3 : 0] M07_AXI_arqos;
  output wire M07_AXI_arvalid;
  input bit M07_AXI_arready;
  input bit [31 : 0] M07_AXI_rdata;
  input bit [1 : 0] M07_AXI_rresp;
  input bit M07_AXI_rlast;
  input bit M07_AXI_rvalid;
  output wire M07_AXI_rready;
  output wire [11 : 0] M08_AXI_awaddr;
  output wire [7 : 0] M08_AXI_awlen;
  output wire [2 : 0] M08_AXI_awsize;
  output wire [1 : 0] M08_AXI_awburst;
  output wire [0 : 0] M08_AXI_awlock;
  output wire [3 : 0] M08_AXI_awcache;
  output wire [2 : 0] M08_AXI_awprot;
  output wire [3 : 0] M08_AXI_awqos;
  output wire M08_AXI_awvalid;
  input bit M08_AXI_awready;
  output wire [31 : 0] M08_AXI_wdata;
  output wire [3 : 0] M08_AXI_wstrb;
  output wire M08_AXI_wlast;
  output wire M08_AXI_wvalid;
  input bit M08_AXI_wready;
  input bit [1 : 0] M08_AXI_bresp;
  input bit M08_AXI_bvalid;
  output wire M08_AXI_bready;
  output wire [11 : 0] M08_AXI_araddr;
  output wire [7 : 0] M08_AXI_arlen;
  output wire [2 : 0] M08_AXI_arsize;
  output wire [1 : 0] M08_AXI_arburst;
  output wire [0 : 0] M08_AXI_arlock;
  output wire [3 : 0] M08_AXI_arcache;
  output wire [2 : 0] M08_AXI_arprot;
  output wire [3 : 0] M08_AXI_arqos;
  output wire M08_AXI_arvalid;
  input bit M08_AXI_arready;
  input bit [31 : 0] M08_AXI_rdata;
  input bit [1 : 0] M08_AXI_rresp;
  input bit M08_AXI_rlast;
  input bit M08_AXI_rvalid;
  output wire M08_AXI_rready;
  output wire [11 : 0] M09_AXI_awaddr;
  output wire [7 : 0] M09_AXI_awlen;
  output wire [2 : 0] M09_AXI_awsize;
  output wire [1 : 0] M09_AXI_awburst;
  output wire [0 : 0] M09_AXI_awlock;
  output wire [3 : 0] M09_AXI_awcache;
  output wire [2 : 0] M09_AXI_awprot;
  output wire [3 : 0] M09_AXI_awqos;
  output wire M09_AXI_awvalid;
  input bit M09_AXI_awready;
  output wire [31 : 0] M09_AXI_wdata;
  output wire [3 : 0] M09_AXI_wstrb;
  output wire M09_AXI_wlast;
  output wire M09_AXI_wvalid;
  input bit M09_AXI_wready;
  input bit [1 : 0] M09_AXI_bresp;
  input bit M09_AXI_bvalid;
  output wire M09_AXI_bready;
  output wire [11 : 0] M09_AXI_araddr;
  output wire [7 : 0] M09_AXI_arlen;
  output wire [2 : 0] M09_AXI_arsize;
  output wire [1 : 0] M09_AXI_arburst;
  output wire [0 : 0] M09_AXI_arlock;
  output wire [3 : 0] M09_AXI_arcache;
  output wire [2 : 0] M09_AXI_arprot;
  output wire [3 : 0] M09_AXI_arqos;
  output wire M09_AXI_arvalid;
  input bit M09_AXI_arready;
  input bit [31 : 0] M09_AXI_rdata;
  input bit [1 : 0] M09_AXI_rresp;
  input bit M09_AXI_rlast;
  input bit M09_AXI_rvalid;
  output wire M09_AXI_rready;
  output wire [11 : 0] M10_AXI_awaddr;
  output wire [7 : 0] M10_AXI_awlen;
  output wire [2 : 0] M10_AXI_awsize;
  output wire [1 : 0] M10_AXI_awburst;
  output wire [0 : 0] M10_AXI_awlock;
  output wire [3 : 0] M10_AXI_awcache;
  output wire [2 : 0] M10_AXI_awprot;
  output wire [3 : 0] M10_AXI_awqos;
  output wire M10_AXI_awvalid;
  input bit M10_AXI_awready;
  output wire [31 : 0] M10_AXI_wdata;
  output wire [3 : 0] M10_AXI_wstrb;
  output wire M10_AXI_wlast;
  output wire M10_AXI_wvalid;
  input bit M10_AXI_wready;
  input bit [1 : 0] M10_AXI_bresp;
  input bit M10_AXI_bvalid;
  output wire M10_AXI_bready;
  output wire [11 : 0] M10_AXI_araddr;
  output wire [7 : 0] M10_AXI_arlen;
  output wire [2 : 0] M10_AXI_arsize;
  output wire [1 : 0] M10_AXI_arburst;
  output wire [0 : 0] M10_AXI_arlock;
  output wire [3 : 0] M10_AXI_arcache;
  output wire [2 : 0] M10_AXI_arprot;
  output wire [3 : 0] M10_AXI_arqos;
  output wire M10_AXI_arvalid;
  input bit M10_AXI_arready;
  input bit [31 : 0] M10_AXI_rdata;
  input bit [1 : 0] M10_AXI_rresp;
  input bit M10_AXI_rlast;
  input bit M10_AXI_rvalid;
  output wire M10_AXI_rready;
  output wire [11 : 0] M11_AXI_awaddr;
  output wire [7 : 0] M11_AXI_awlen;
  output wire [2 : 0] M11_AXI_awsize;
  output wire [1 : 0] M11_AXI_awburst;
  output wire [0 : 0] M11_AXI_awlock;
  output wire [3 : 0] M11_AXI_awcache;
  output wire [2 : 0] M11_AXI_awprot;
  output wire [3 : 0] M11_AXI_awqos;
  output wire M11_AXI_awvalid;
  input bit M11_AXI_awready;
  output wire [31 : 0] M11_AXI_wdata;
  output wire [3 : 0] M11_AXI_wstrb;
  output wire M11_AXI_wlast;
  output wire M11_AXI_wvalid;
  input bit M11_AXI_wready;
  input bit [1 : 0] M11_AXI_bresp;
  input bit M11_AXI_bvalid;
  output wire M11_AXI_bready;
  output wire [11 : 0] M11_AXI_araddr;
  output wire [7 : 0] M11_AXI_arlen;
  output wire [2 : 0] M11_AXI_arsize;
  output wire [1 : 0] M11_AXI_arburst;
  output wire [0 : 0] M11_AXI_arlock;
  output wire [3 : 0] M11_AXI_arcache;
  output wire [2 : 0] M11_AXI_arprot;
  output wire [3 : 0] M11_AXI_arqos;
  output wire M11_AXI_arvalid;
  input bit M11_AXI_arready;
  input bit [31 : 0] M11_AXI_rdata;
  input bit [1 : 0] M11_AXI_rresp;
  input bit M11_AXI_rlast;
  input bit M11_AXI_rvalid;
  output wire M11_AXI_rready;
  output wire [11 : 0] M12_AXI_awaddr;
  output wire [7 : 0] M12_AXI_awlen;
  output wire [2 : 0] M12_AXI_awsize;
  output wire [1 : 0] M12_AXI_awburst;
  output wire [0 : 0] M12_AXI_awlock;
  output wire [3 : 0] M12_AXI_awcache;
  output wire [2 : 0] M12_AXI_awprot;
  output wire [3 : 0] M12_AXI_awqos;
  output wire M12_AXI_awvalid;
  input bit M12_AXI_awready;
  output wire [31 : 0] M12_AXI_wdata;
  output wire [3 : 0] M12_AXI_wstrb;
  output wire M12_AXI_wlast;
  output wire M12_AXI_wvalid;
  input bit M12_AXI_wready;
  input bit [1 : 0] M12_AXI_bresp;
  input bit M12_AXI_bvalid;
  output wire M12_AXI_bready;
  output wire [11 : 0] M12_AXI_araddr;
  output wire [7 : 0] M12_AXI_arlen;
  output wire [2 : 0] M12_AXI_arsize;
  output wire [1 : 0] M12_AXI_arburst;
  output wire [0 : 0] M12_AXI_arlock;
  output wire [3 : 0] M12_AXI_arcache;
  output wire [2 : 0] M12_AXI_arprot;
  output wire [3 : 0] M12_AXI_arqos;
  output wire M12_AXI_arvalid;
  input bit M12_AXI_arready;
  input bit [31 : 0] M12_AXI_rdata;
  input bit [1 : 0] M12_AXI_rresp;
  input bit M12_AXI_rlast;
  input bit M12_AXI_rvalid;
  output wire M12_AXI_rready;
  output wire [11 : 0] M13_AXI_awaddr;
  output wire [7 : 0] M13_AXI_awlen;
  output wire [2 : 0] M13_AXI_awsize;
  output wire [1 : 0] M13_AXI_awburst;
  output wire [0 : 0] M13_AXI_awlock;
  output wire [3 : 0] M13_AXI_awcache;
  output wire [2 : 0] M13_AXI_awprot;
  output wire [3 : 0] M13_AXI_awqos;
  output wire M13_AXI_awvalid;
  input bit M13_AXI_awready;
  output wire [31 : 0] M13_AXI_wdata;
  output wire [3 : 0] M13_AXI_wstrb;
  output wire M13_AXI_wlast;
  output wire M13_AXI_wvalid;
  input bit M13_AXI_wready;
  input bit [1 : 0] M13_AXI_bresp;
  input bit M13_AXI_bvalid;
  output wire M13_AXI_bready;
  output wire [11 : 0] M13_AXI_araddr;
  output wire [7 : 0] M13_AXI_arlen;
  output wire [2 : 0] M13_AXI_arsize;
  output wire [1 : 0] M13_AXI_arburst;
  output wire [0 : 0] M13_AXI_arlock;
  output wire [3 : 0] M13_AXI_arcache;
  output wire [2 : 0] M13_AXI_arprot;
  output wire [3 : 0] M13_AXI_arqos;
  output wire M13_AXI_arvalid;
  input bit M13_AXI_arready;
  input bit [31 : 0] M13_AXI_rdata;
  input bit [1 : 0] M13_AXI_rresp;
  input bit M13_AXI_rlast;
  input bit M13_AXI_rvalid;
  output wire M13_AXI_rready;
  output wire [11 : 0] M14_AXI_awaddr;
  output wire [7 : 0] M14_AXI_awlen;
  output wire [2 : 0] M14_AXI_awsize;
  output wire [1 : 0] M14_AXI_awburst;
  output wire [0 : 0] M14_AXI_awlock;
  output wire [3 : 0] M14_AXI_awcache;
  output wire [2 : 0] M14_AXI_awprot;
  output wire [3 : 0] M14_AXI_awqos;
  output wire M14_AXI_awvalid;
  input bit M14_AXI_awready;
  output wire [31 : 0] M14_AXI_wdata;
  output wire [3 : 0] M14_AXI_wstrb;
  output wire M14_AXI_wlast;
  output wire M14_AXI_wvalid;
  input bit M14_AXI_wready;
  input bit [1 : 0] M14_AXI_bresp;
  input bit M14_AXI_bvalid;
  output wire M14_AXI_bready;
  output wire [11 : 0] M14_AXI_araddr;
  output wire [7 : 0] M14_AXI_arlen;
  output wire [2 : 0] M14_AXI_arsize;
  output wire [1 : 0] M14_AXI_arburst;
  output wire [0 : 0] M14_AXI_arlock;
  output wire [3 : 0] M14_AXI_arcache;
  output wire [2 : 0] M14_AXI_arprot;
  output wire [3 : 0] M14_AXI_arqos;
  output wire M14_AXI_arvalid;
  input bit M14_AXI_arready;
  input bit [31 : 0] M14_AXI_rdata;
  input bit [1 : 0] M14_AXI_rresp;
  input bit M14_AXI_rlast;
  input bit M14_AXI_rvalid;
  output wire M14_AXI_rready;
  output wire [11 : 0] M15_AXI_awaddr;
  output wire [7 : 0] M15_AXI_awlen;
  output wire [2 : 0] M15_AXI_awsize;
  output wire [1 : 0] M15_AXI_awburst;
  output wire [0 : 0] M15_AXI_awlock;
  output wire [3 : 0] M15_AXI_awcache;
  output wire [2 : 0] M15_AXI_awprot;
  output wire [3 : 0] M15_AXI_awqos;
  output wire M15_AXI_awvalid;
  input bit M15_AXI_awready;
  output wire [31 : 0] M15_AXI_wdata;
  output wire [3 : 0] M15_AXI_wstrb;
  output wire M15_AXI_wlast;
  output wire M15_AXI_wvalid;
  input bit M15_AXI_wready;
  input bit [1 : 0] M15_AXI_bresp;
  input bit M15_AXI_bvalid;
  output wire M15_AXI_bready;
  output wire [11 : 0] M15_AXI_araddr;
  output wire [7 : 0] M15_AXI_arlen;
  output wire [2 : 0] M15_AXI_arsize;
  output wire [1 : 0] M15_AXI_arburst;
  output wire [0 : 0] M15_AXI_arlock;
  output wire [3 : 0] M15_AXI_arcache;
  output wire [2 : 0] M15_AXI_arprot;
  output wire [3 : 0] M15_AXI_arqos;
  output wire M15_AXI_arvalid;
  input bit M15_AXI_arready;
  input bit [31 : 0] M15_AXI_rdata;
  input bit [1 : 0] M15_AXI_rresp;
  input bit M15_AXI_rlast;
  input bit M15_AXI_rvalid;
  output wire M15_AXI_rready;
  output wire [11 : 0] M16_AXI_awaddr;
  output wire [7 : 0] M16_AXI_awlen;
  output wire [2 : 0] M16_AXI_awsize;
  output wire [1 : 0] M16_AXI_awburst;
  output wire [0 : 0] M16_AXI_awlock;
  output wire [3 : 0] M16_AXI_awcache;
  output wire [2 : 0] M16_AXI_awprot;
  output wire [3 : 0] M16_AXI_awqos;
  output wire M16_AXI_awvalid;
  input bit M16_AXI_awready;
  output wire [31 : 0] M16_AXI_wdata;
  output wire [3 : 0] M16_AXI_wstrb;
  output wire M16_AXI_wlast;
  output wire M16_AXI_wvalid;
  input bit M16_AXI_wready;
  input bit [1 : 0] M16_AXI_bresp;
  input bit M16_AXI_bvalid;
  output wire M16_AXI_bready;
  output wire [11 : 0] M16_AXI_araddr;
  output wire [7 : 0] M16_AXI_arlen;
  output wire [2 : 0] M16_AXI_arsize;
  output wire [1 : 0] M16_AXI_arburst;
  output wire [0 : 0] M16_AXI_arlock;
  output wire [3 : 0] M16_AXI_arcache;
  output wire [2 : 0] M16_AXI_arprot;
  output wire [3 : 0] M16_AXI_arqos;
  output wire M16_AXI_arvalid;
  input bit M16_AXI_arready;
  input bit [31 : 0] M16_AXI_rdata;
  input bit [1 : 0] M16_AXI_rresp;
  input bit M16_AXI_rlast;
  input bit M16_AXI_rvalid;
  output wire M16_AXI_rready;
  output wire [11 : 0] M17_AXI_awaddr;
  output wire [7 : 0] M17_AXI_awlen;
  output wire [2 : 0] M17_AXI_awsize;
  output wire [1 : 0] M17_AXI_awburst;
  output wire [0 : 0] M17_AXI_awlock;
  output wire [3 : 0] M17_AXI_awcache;
  output wire [2 : 0] M17_AXI_awprot;
  output wire [3 : 0] M17_AXI_awqos;
  output wire M17_AXI_awvalid;
  input bit M17_AXI_awready;
  output wire [31 : 0] M17_AXI_wdata;
  output wire [3 : 0] M17_AXI_wstrb;
  output wire M17_AXI_wlast;
  output wire M17_AXI_wvalid;
  input bit M17_AXI_wready;
  input bit [1 : 0] M17_AXI_bresp;
  input bit M17_AXI_bvalid;
  output wire M17_AXI_bready;
  output wire [11 : 0] M17_AXI_araddr;
  output wire [7 : 0] M17_AXI_arlen;
  output wire [2 : 0] M17_AXI_arsize;
  output wire [1 : 0] M17_AXI_arburst;
  output wire [0 : 0] M17_AXI_arlock;
  output wire [3 : 0] M17_AXI_arcache;
  output wire [2 : 0] M17_AXI_arprot;
  output wire [3 : 0] M17_AXI_arqos;
  output wire M17_AXI_arvalid;
  input bit M17_AXI_arready;
  input bit [31 : 0] M17_AXI_rdata;
  input bit [1 : 0] M17_AXI_rresp;
  input bit M17_AXI_rlast;
  input bit M17_AXI_rvalid;
  output wire M17_AXI_rready;
  output wire [11 : 0] M18_AXI_awaddr;
  output wire [7 : 0] M18_AXI_awlen;
  output wire [2 : 0] M18_AXI_awsize;
  output wire [1 : 0] M18_AXI_awburst;
  output wire [0 : 0] M18_AXI_awlock;
  output wire [3 : 0] M18_AXI_awcache;
  output wire [2 : 0] M18_AXI_awprot;
  output wire [3 : 0] M18_AXI_awqos;
  output wire M18_AXI_awvalid;
  input bit M18_AXI_awready;
  output wire [31 : 0] M18_AXI_wdata;
  output wire [3 : 0] M18_AXI_wstrb;
  output wire M18_AXI_wlast;
  output wire M18_AXI_wvalid;
  input bit M18_AXI_wready;
  input bit [1 : 0] M18_AXI_bresp;
  input bit M18_AXI_bvalid;
  output wire M18_AXI_bready;
  output wire [11 : 0] M18_AXI_araddr;
  output wire [7 : 0] M18_AXI_arlen;
  output wire [2 : 0] M18_AXI_arsize;
  output wire [1 : 0] M18_AXI_arburst;
  output wire [0 : 0] M18_AXI_arlock;
  output wire [3 : 0] M18_AXI_arcache;
  output wire [2 : 0] M18_AXI_arprot;
  output wire [3 : 0] M18_AXI_arqos;
  output wire M18_AXI_arvalid;
  input bit M18_AXI_arready;
  input bit [31 : 0] M18_AXI_rdata;
  input bit [1 : 0] M18_AXI_rresp;
  input bit M18_AXI_rlast;
  input bit M18_AXI_rvalid;
  output wire M18_AXI_rready;
  output wire [11 : 0] M19_AXI_awaddr;
  output wire [7 : 0] M19_AXI_awlen;
  output wire [2 : 0] M19_AXI_awsize;
  output wire [1 : 0] M19_AXI_awburst;
  output wire [0 : 0] M19_AXI_awlock;
  output wire [3 : 0] M19_AXI_awcache;
  output wire [2 : 0] M19_AXI_awprot;
  output wire [3 : 0] M19_AXI_awqos;
  output wire M19_AXI_awvalid;
  input bit M19_AXI_awready;
  output wire [31 : 0] M19_AXI_wdata;
  output wire [3 : 0] M19_AXI_wstrb;
  output wire M19_AXI_wlast;
  output wire M19_AXI_wvalid;
  input bit M19_AXI_wready;
  input bit [1 : 0] M19_AXI_bresp;
  input bit M19_AXI_bvalid;
  output wire M19_AXI_bready;
  output wire [11 : 0] M19_AXI_araddr;
  output wire [7 : 0] M19_AXI_arlen;
  output wire [2 : 0] M19_AXI_arsize;
  output wire [1 : 0] M19_AXI_arburst;
  output wire [0 : 0] M19_AXI_arlock;
  output wire [3 : 0] M19_AXI_arcache;
  output wire [2 : 0] M19_AXI_arprot;
  output wire [3 : 0] M19_AXI_arqos;
  output wire M19_AXI_arvalid;
  input bit M19_AXI_arready;
  input bit [31 : 0] M19_AXI_rdata;
  input bit [1 : 0] M19_AXI_rresp;
  input bit M19_AXI_rlast;
  input bit M19_AXI_rvalid;
  output wire M19_AXI_rready;
  output wire [11 : 0] M20_AXI_awaddr;
  output wire [7 : 0] M20_AXI_awlen;
  output wire [2 : 0] M20_AXI_awsize;
  output wire [1 : 0] M20_AXI_awburst;
  output wire [0 : 0] M20_AXI_awlock;
  output wire [3 : 0] M20_AXI_awcache;
  output wire [2 : 0] M20_AXI_awprot;
  output wire [3 : 0] M20_AXI_awqos;
  output wire M20_AXI_awvalid;
  input bit M20_AXI_awready;
  output wire [31 : 0] M20_AXI_wdata;
  output wire [3 : 0] M20_AXI_wstrb;
  output wire M20_AXI_wlast;
  output wire M20_AXI_wvalid;
  input bit M20_AXI_wready;
  input bit [1 : 0] M20_AXI_bresp;
  input bit M20_AXI_bvalid;
  output wire M20_AXI_bready;
  output wire [11 : 0] M20_AXI_araddr;
  output wire [7 : 0] M20_AXI_arlen;
  output wire [2 : 0] M20_AXI_arsize;
  output wire [1 : 0] M20_AXI_arburst;
  output wire [0 : 0] M20_AXI_arlock;
  output wire [3 : 0] M20_AXI_arcache;
  output wire [2 : 0] M20_AXI_arprot;
  output wire [3 : 0] M20_AXI_arqos;
  output wire M20_AXI_arvalid;
  input bit M20_AXI_arready;
  input bit [31 : 0] M20_AXI_rdata;
  input bit [1 : 0] M20_AXI_rresp;
  input bit M20_AXI_rlast;
  input bit M20_AXI_rvalid;
  output wire M20_AXI_rready;
  output wire [11 : 0] M21_AXI_awaddr;
  output wire [7 : 0] M21_AXI_awlen;
  output wire [2 : 0] M21_AXI_awsize;
  output wire [1 : 0] M21_AXI_awburst;
  output wire [0 : 0] M21_AXI_awlock;
  output wire [3 : 0] M21_AXI_awcache;
  output wire [2 : 0] M21_AXI_awprot;
  output wire [3 : 0] M21_AXI_awqos;
  output wire M21_AXI_awvalid;
  input bit M21_AXI_awready;
  output wire [31 : 0] M21_AXI_wdata;
  output wire [3 : 0] M21_AXI_wstrb;
  output wire M21_AXI_wlast;
  output wire M21_AXI_wvalid;
  input bit M21_AXI_wready;
  input bit [1 : 0] M21_AXI_bresp;
  input bit M21_AXI_bvalid;
  output wire M21_AXI_bready;
  output wire [11 : 0] M21_AXI_araddr;
  output wire [7 : 0] M21_AXI_arlen;
  output wire [2 : 0] M21_AXI_arsize;
  output wire [1 : 0] M21_AXI_arburst;
  output wire [0 : 0] M21_AXI_arlock;
  output wire [3 : 0] M21_AXI_arcache;
  output wire [2 : 0] M21_AXI_arprot;
  output wire [3 : 0] M21_AXI_arqos;
  output wire M21_AXI_arvalid;
  input bit M21_AXI_arready;
  input bit [31 : 0] M21_AXI_rdata;
  input bit [1 : 0] M21_AXI_rresp;
  input bit M21_AXI_rlast;
  input bit M21_AXI_rvalid;
  output wire M21_AXI_rready;
  output wire [11 : 0] M22_AXI_awaddr;
  output wire [7 : 0] M22_AXI_awlen;
  output wire [2 : 0] M22_AXI_awsize;
  output wire [1 : 0] M22_AXI_awburst;
  output wire [0 : 0] M22_AXI_awlock;
  output wire [3 : 0] M22_AXI_awcache;
  output wire [2 : 0] M22_AXI_awprot;
  output wire [3 : 0] M22_AXI_awqos;
  output wire M22_AXI_awvalid;
  input bit M22_AXI_awready;
  output wire [31 : 0] M22_AXI_wdata;
  output wire [3 : 0] M22_AXI_wstrb;
  output wire M22_AXI_wlast;
  output wire M22_AXI_wvalid;
  input bit M22_AXI_wready;
  input bit [1 : 0] M22_AXI_bresp;
  input bit M22_AXI_bvalid;
  output wire M22_AXI_bready;
  output wire [11 : 0] M22_AXI_araddr;
  output wire [7 : 0] M22_AXI_arlen;
  output wire [2 : 0] M22_AXI_arsize;
  output wire [1 : 0] M22_AXI_arburst;
  output wire [0 : 0] M22_AXI_arlock;
  output wire [3 : 0] M22_AXI_arcache;
  output wire [2 : 0] M22_AXI_arprot;
  output wire [3 : 0] M22_AXI_arqos;
  output wire M22_AXI_arvalid;
  input bit M22_AXI_arready;
  input bit [31 : 0] M22_AXI_rdata;
  input bit [1 : 0] M22_AXI_rresp;
  input bit M22_AXI_rlast;
  input bit M22_AXI_rvalid;
  output wire M22_AXI_rready;
  output wire [11 : 0] M23_AXI_awaddr;
  output wire [7 : 0] M23_AXI_awlen;
  output wire [2 : 0] M23_AXI_awsize;
  output wire [1 : 0] M23_AXI_awburst;
  output wire [0 : 0] M23_AXI_awlock;
  output wire [3 : 0] M23_AXI_awcache;
  output wire [2 : 0] M23_AXI_awprot;
  output wire [3 : 0] M23_AXI_awqos;
  output wire M23_AXI_awvalid;
  input bit M23_AXI_awready;
  output wire [31 : 0] M23_AXI_wdata;
  output wire [3 : 0] M23_AXI_wstrb;
  output wire M23_AXI_wlast;
  output wire M23_AXI_wvalid;
  input bit M23_AXI_wready;
  input bit [1 : 0] M23_AXI_bresp;
  input bit M23_AXI_bvalid;
  output wire M23_AXI_bready;
  output wire [11 : 0] M23_AXI_araddr;
  output wire [7 : 0] M23_AXI_arlen;
  output wire [2 : 0] M23_AXI_arsize;
  output wire [1 : 0] M23_AXI_arburst;
  output wire [0 : 0] M23_AXI_arlock;
  output wire [3 : 0] M23_AXI_arcache;
  output wire [2 : 0] M23_AXI_arprot;
  output wire [3 : 0] M23_AXI_arqos;
  output wire M23_AXI_arvalid;
  input bit M23_AXI_arready;
  input bit [31 : 0] M23_AXI_rdata;
  input bit [1 : 0] M23_AXI_rresp;
  input bit M23_AXI_rlast;
  input bit M23_AXI_rvalid;
  output wire M23_AXI_rready;
endmodule
`endif

`ifdef RIVIERA
(* SC_MODULE_EXPORT *)
module Multi_convo_core_smartconnect_0_0 (aclk,aresetn,S00_AXI_awaddr,S00_AXI_awlen,S00_AXI_awsize,S00_AXI_awburst,S00_AXI_awlock,S00_AXI_awcache,S00_AXI_awprot,S00_AXI_awqos,S00_AXI_awvalid,S00_AXI_awready,S00_AXI_wdata,S00_AXI_wstrb,S00_AXI_wlast,S00_AXI_wvalid,S00_AXI_wready,S00_AXI_bresp,S00_AXI_bvalid,S00_AXI_bready,S00_AXI_araddr,S00_AXI_arlen,S00_AXI_arsize,S00_AXI_arburst,S00_AXI_arlock,S00_AXI_arcache,S00_AXI_arprot,S00_AXI_arqos,S00_AXI_arvalid,S00_AXI_arready,S00_AXI_rdata,S00_AXI_rresp,S00_AXI_rlast,S00_AXI_rvalid,S00_AXI_rready,M00_AXI_awaddr,M00_AXI_awlen,M00_AXI_awsize,M00_AXI_awburst,M00_AXI_awlock,M00_AXI_awcache,M00_AXI_awprot,M00_AXI_awqos,M00_AXI_awvalid,M00_AXI_awready,M00_AXI_wdata,M00_AXI_wstrb,M00_AXI_wlast,M00_AXI_wvalid,M00_AXI_wready,M00_AXI_bresp,M00_AXI_bvalid,M00_AXI_bready,M00_AXI_araddr,M00_AXI_arlen,M00_AXI_arsize,M00_AXI_arburst,M00_AXI_arlock,M00_AXI_arcache,M00_AXI_arprot,M00_AXI_arqos,M00_AXI_arvalid,M00_AXI_arready,M00_AXI_rdata,M00_AXI_rresp,M00_AXI_rlast,M00_AXI_rvalid,M00_AXI_rready,M01_AXI_awaddr,M01_AXI_awlen,M01_AXI_awsize,M01_AXI_awburst,M01_AXI_awlock,M01_AXI_awcache,M01_AXI_awprot,M01_AXI_awqos,M01_AXI_awvalid,M01_AXI_awready,M01_AXI_wdata,M01_AXI_wstrb,M01_AXI_wlast,M01_AXI_wvalid,M01_AXI_wready,M01_AXI_bresp,M01_AXI_bvalid,M01_AXI_bready,M01_AXI_araddr,M01_AXI_arlen,M01_AXI_arsize,M01_AXI_arburst,M01_AXI_arlock,M01_AXI_arcache,M01_AXI_arprot,M01_AXI_arqos,M01_AXI_arvalid,M01_AXI_arready,M01_AXI_rdata,M01_AXI_rresp,M01_AXI_rlast,M01_AXI_rvalid,M01_AXI_rready,M02_AXI_awaddr,M02_AXI_awlen,M02_AXI_awsize,M02_AXI_awburst,M02_AXI_awlock,M02_AXI_awcache,M02_AXI_awprot,M02_AXI_awqos,M02_AXI_awvalid,M02_AXI_awready,M02_AXI_wdata,M02_AXI_wstrb,M02_AXI_wlast,M02_AXI_wvalid,M02_AXI_wready,M02_AXI_bresp,M02_AXI_bvalid,M02_AXI_bready,M02_AXI_araddr,M02_AXI_arlen,M02_AXI_arsize,M02_AXI_arburst,M02_AXI_arlock,M02_AXI_arcache,M02_AXI_arprot,M02_AXI_arqos,M02_AXI_arvalid,M02_AXI_arready,M02_AXI_rdata,M02_AXI_rresp,M02_AXI_rlast,M02_AXI_rvalid,M02_AXI_rready,M03_AXI_awaddr,M03_AXI_awlen,M03_AXI_awsize,M03_AXI_awburst,M03_AXI_awlock,M03_AXI_awcache,M03_AXI_awprot,M03_AXI_awqos,M03_AXI_awvalid,M03_AXI_awready,M03_AXI_wdata,M03_AXI_wstrb,M03_AXI_wlast,M03_AXI_wvalid,M03_AXI_wready,M03_AXI_bresp,M03_AXI_bvalid,M03_AXI_bready,M03_AXI_araddr,M03_AXI_arlen,M03_AXI_arsize,M03_AXI_arburst,M03_AXI_arlock,M03_AXI_arcache,M03_AXI_arprot,M03_AXI_arqos,M03_AXI_arvalid,M03_AXI_arready,M03_AXI_rdata,M03_AXI_rresp,M03_AXI_rlast,M03_AXI_rvalid,M03_AXI_rready,M04_AXI_awaddr,M04_AXI_awlen,M04_AXI_awsize,M04_AXI_awburst,M04_AXI_awlock,M04_AXI_awcache,M04_AXI_awprot,M04_AXI_awqos,M04_AXI_awvalid,M04_AXI_awready,M04_AXI_wdata,M04_AXI_wstrb,M04_AXI_wlast,M04_AXI_wvalid,M04_AXI_wready,M04_AXI_bresp,M04_AXI_bvalid,M04_AXI_bready,M04_AXI_araddr,M04_AXI_arlen,M04_AXI_arsize,M04_AXI_arburst,M04_AXI_arlock,M04_AXI_arcache,M04_AXI_arprot,M04_AXI_arqos,M04_AXI_arvalid,M04_AXI_arready,M04_AXI_rdata,M04_AXI_rresp,M04_AXI_rlast,M04_AXI_rvalid,M04_AXI_rready,M05_AXI_awaddr,M05_AXI_awlen,M05_AXI_awsize,M05_AXI_awburst,M05_AXI_awlock,M05_AXI_awcache,M05_AXI_awprot,M05_AXI_awqos,M05_AXI_awvalid,M05_AXI_awready,M05_AXI_wdata,M05_AXI_wstrb,M05_AXI_wlast,M05_AXI_wvalid,M05_AXI_wready,M05_AXI_bresp,M05_AXI_bvalid,M05_AXI_bready,M05_AXI_araddr,M05_AXI_arlen,M05_AXI_arsize,M05_AXI_arburst,M05_AXI_arlock,M05_AXI_arcache,M05_AXI_arprot,M05_AXI_arqos,M05_AXI_arvalid,M05_AXI_arready,M05_AXI_rdata,M05_AXI_rresp,M05_AXI_rlast,M05_AXI_rvalid,M05_AXI_rready,M06_AXI_awaddr,M06_AXI_awlen,M06_AXI_awsize,M06_AXI_awburst,M06_AXI_awlock,M06_AXI_awcache,M06_AXI_awprot,M06_AXI_awqos,M06_AXI_awvalid,M06_AXI_awready,M06_AXI_wdata,M06_AXI_wstrb,M06_AXI_wlast,M06_AXI_wvalid,M06_AXI_wready,M06_AXI_bresp,M06_AXI_bvalid,M06_AXI_bready,M06_AXI_araddr,M06_AXI_arlen,M06_AXI_arsize,M06_AXI_arburst,M06_AXI_arlock,M06_AXI_arcache,M06_AXI_arprot,M06_AXI_arqos,M06_AXI_arvalid,M06_AXI_arready,M06_AXI_rdata,M06_AXI_rresp,M06_AXI_rlast,M06_AXI_rvalid,M06_AXI_rready,M07_AXI_awaddr,M07_AXI_awlen,M07_AXI_awsize,M07_AXI_awburst,M07_AXI_awlock,M07_AXI_awcache,M07_AXI_awprot,M07_AXI_awqos,M07_AXI_awvalid,M07_AXI_awready,M07_AXI_wdata,M07_AXI_wstrb,M07_AXI_wlast,M07_AXI_wvalid,M07_AXI_wready,M07_AXI_bresp,M07_AXI_bvalid,M07_AXI_bready,M07_AXI_araddr,M07_AXI_arlen,M07_AXI_arsize,M07_AXI_arburst,M07_AXI_arlock,M07_AXI_arcache,M07_AXI_arprot,M07_AXI_arqos,M07_AXI_arvalid,M07_AXI_arready,M07_AXI_rdata,M07_AXI_rresp,M07_AXI_rlast,M07_AXI_rvalid,M07_AXI_rready,M08_AXI_awaddr,M08_AXI_awlen,M08_AXI_awsize,M08_AXI_awburst,M08_AXI_awlock,M08_AXI_awcache,M08_AXI_awprot,M08_AXI_awqos,M08_AXI_awvalid,M08_AXI_awready,M08_AXI_wdata,M08_AXI_wstrb,M08_AXI_wlast,M08_AXI_wvalid,M08_AXI_wready,M08_AXI_bresp,M08_AXI_bvalid,M08_AXI_bready,M08_AXI_araddr,M08_AXI_arlen,M08_AXI_arsize,M08_AXI_arburst,M08_AXI_arlock,M08_AXI_arcache,M08_AXI_arprot,M08_AXI_arqos,M08_AXI_arvalid,M08_AXI_arready,M08_AXI_rdata,M08_AXI_rresp,M08_AXI_rlast,M08_AXI_rvalid,M08_AXI_rready,M09_AXI_awaddr,M09_AXI_awlen,M09_AXI_awsize,M09_AXI_awburst,M09_AXI_awlock,M09_AXI_awcache,M09_AXI_awprot,M09_AXI_awqos,M09_AXI_awvalid,M09_AXI_awready,M09_AXI_wdata,M09_AXI_wstrb,M09_AXI_wlast,M09_AXI_wvalid,M09_AXI_wready,M09_AXI_bresp,M09_AXI_bvalid,M09_AXI_bready,M09_AXI_araddr,M09_AXI_arlen,M09_AXI_arsize,M09_AXI_arburst,M09_AXI_arlock,M09_AXI_arcache,M09_AXI_arprot,M09_AXI_arqos,M09_AXI_arvalid,M09_AXI_arready,M09_AXI_rdata,M09_AXI_rresp,M09_AXI_rlast,M09_AXI_rvalid,M09_AXI_rready,M10_AXI_awaddr,M10_AXI_awlen,M10_AXI_awsize,M10_AXI_awburst,M10_AXI_awlock,M10_AXI_awcache,M10_AXI_awprot,M10_AXI_awqos,M10_AXI_awvalid,M10_AXI_awready,M10_AXI_wdata,M10_AXI_wstrb,M10_AXI_wlast,M10_AXI_wvalid,M10_AXI_wready,M10_AXI_bresp,M10_AXI_bvalid,M10_AXI_bready,M10_AXI_araddr,M10_AXI_arlen,M10_AXI_arsize,M10_AXI_arburst,M10_AXI_arlock,M10_AXI_arcache,M10_AXI_arprot,M10_AXI_arqos,M10_AXI_arvalid,M10_AXI_arready,M10_AXI_rdata,M10_AXI_rresp,M10_AXI_rlast,M10_AXI_rvalid,M10_AXI_rready,M11_AXI_awaddr,M11_AXI_awlen,M11_AXI_awsize,M11_AXI_awburst,M11_AXI_awlock,M11_AXI_awcache,M11_AXI_awprot,M11_AXI_awqos,M11_AXI_awvalid,M11_AXI_awready,M11_AXI_wdata,M11_AXI_wstrb,M11_AXI_wlast,M11_AXI_wvalid,M11_AXI_wready,M11_AXI_bresp,M11_AXI_bvalid,M11_AXI_bready,M11_AXI_araddr,M11_AXI_arlen,M11_AXI_arsize,M11_AXI_arburst,M11_AXI_arlock,M11_AXI_arcache,M11_AXI_arprot,M11_AXI_arqos,M11_AXI_arvalid,M11_AXI_arready,M11_AXI_rdata,M11_AXI_rresp,M11_AXI_rlast,M11_AXI_rvalid,M11_AXI_rready,M12_AXI_awaddr,M12_AXI_awlen,M12_AXI_awsize,M12_AXI_awburst,M12_AXI_awlock,M12_AXI_awcache,M12_AXI_awprot,M12_AXI_awqos,M12_AXI_awvalid,M12_AXI_awready,M12_AXI_wdata,M12_AXI_wstrb,M12_AXI_wlast,M12_AXI_wvalid,M12_AXI_wready,M12_AXI_bresp,M12_AXI_bvalid,M12_AXI_bready,M12_AXI_araddr,M12_AXI_arlen,M12_AXI_arsize,M12_AXI_arburst,M12_AXI_arlock,M12_AXI_arcache,M12_AXI_arprot,M12_AXI_arqos,M12_AXI_arvalid,M12_AXI_arready,M12_AXI_rdata,M12_AXI_rresp,M12_AXI_rlast,M12_AXI_rvalid,M12_AXI_rready,M13_AXI_awaddr,M13_AXI_awlen,M13_AXI_awsize,M13_AXI_awburst,M13_AXI_awlock,M13_AXI_awcache,M13_AXI_awprot,M13_AXI_awqos,M13_AXI_awvalid,M13_AXI_awready,M13_AXI_wdata,M13_AXI_wstrb,M13_AXI_wlast,M13_AXI_wvalid,M13_AXI_wready,M13_AXI_bresp,M13_AXI_bvalid,M13_AXI_bready,M13_AXI_araddr,M13_AXI_arlen,M13_AXI_arsize,M13_AXI_arburst,M13_AXI_arlock,M13_AXI_arcache,M13_AXI_arprot,M13_AXI_arqos,M13_AXI_arvalid,M13_AXI_arready,M13_AXI_rdata,M13_AXI_rresp,M13_AXI_rlast,M13_AXI_rvalid,M13_AXI_rready,M14_AXI_awaddr,M14_AXI_awlen,M14_AXI_awsize,M14_AXI_awburst,M14_AXI_awlock,M14_AXI_awcache,M14_AXI_awprot,M14_AXI_awqos,M14_AXI_awvalid,M14_AXI_awready,M14_AXI_wdata,M14_AXI_wstrb,M14_AXI_wlast,M14_AXI_wvalid,M14_AXI_wready,M14_AXI_bresp,M14_AXI_bvalid,M14_AXI_bready,M14_AXI_araddr,M14_AXI_arlen,M14_AXI_arsize,M14_AXI_arburst,M14_AXI_arlock,M14_AXI_arcache,M14_AXI_arprot,M14_AXI_arqos,M14_AXI_arvalid,M14_AXI_arready,M14_AXI_rdata,M14_AXI_rresp,M14_AXI_rlast,M14_AXI_rvalid,M14_AXI_rready,M15_AXI_awaddr,M15_AXI_awlen,M15_AXI_awsize,M15_AXI_awburst,M15_AXI_awlock,M15_AXI_awcache,M15_AXI_awprot,M15_AXI_awqos,M15_AXI_awvalid,M15_AXI_awready,M15_AXI_wdata,M15_AXI_wstrb,M15_AXI_wlast,M15_AXI_wvalid,M15_AXI_wready,M15_AXI_bresp,M15_AXI_bvalid,M15_AXI_bready,M15_AXI_araddr,M15_AXI_arlen,M15_AXI_arsize,M15_AXI_arburst,M15_AXI_arlock,M15_AXI_arcache,M15_AXI_arprot,M15_AXI_arqos,M15_AXI_arvalid,M15_AXI_arready,M15_AXI_rdata,M15_AXI_rresp,M15_AXI_rlast,M15_AXI_rvalid,M15_AXI_rready,M16_AXI_awaddr,M16_AXI_awlen,M16_AXI_awsize,M16_AXI_awburst,M16_AXI_awlock,M16_AXI_awcache,M16_AXI_awprot,M16_AXI_awqos,M16_AXI_awvalid,M16_AXI_awready,M16_AXI_wdata,M16_AXI_wstrb,M16_AXI_wlast,M16_AXI_wvalid,M16_AXI_wready,M16_AXI_bresp,M16_AXI_bvalid,M16_AXI_bready,M16_AXI_araddr,M16_AXI_arlen,M16_AXI_arsize,M16_AXI_arburst,M16_AXI_arlock,M16_AXI_arcache,M16_AXI_arprot,M16_AXI_arqos,M16_AXI_arvalid,M16_AXI_arready,M16_AXI_rdata,M16_AXI_rresp,M16_AXI_rlast,M16_AXI_rvalid,M16_AXI_rready,M17_AXI_awaddr,M17_AXI_awlen,M17_AXI_awsize,M17_AXI_awburst,M17_AXI_awlock,M17_AXI_awcache,M17_AXI_awprot,M17_AXI_awqos,M17_AXI_awvalid,M17_AXI_awready,M17_AXI_wdata,M17_AXI_wstrb,M17_AXI_wlast,M17_AXI_wvalid,M17_AXI_wready,M17_AXI_bresp,M17_AXI_bvalid,M17_AXI_bready,M17_AXI_araddr,M17_AXI_arlen,M17_AXI_arsize,M17_AXI_arburst,M17_AXI_arlock,M17_AXI_arcache,M17_AXI_arprot,M17_AXI_arqos,M17_AXI_arvalid,M17_AXI_arready,M17_AXI_rdata,M17_AXI_rresp,M17_AXI_rlast,M17_AXI_rvalid,M17_AXI_rready,M18_AXI_awaddr,M18_AXI_awlen,M18_AXI_awsize,M18_AXI_awburst,M18_AXI_awlock,M18_AXI_awcache,M18_AXI_awprot,M18_AXI_awqos,M18_AXI_awvalid,M18_AXI_awready,M18_AXI_wdata,M18_AXI_wstrb,M18_AXI_wlast,M18_AXI_wvalid,M18_AXI_wready,M18_AXI_bresp,M18_AXI_bvalid,M18_AXI_bready,M18_AXI_araddr,M18_AXI_arlen,M18_AXI_arsize,M18_AXI_arburst,M18_AXI_arlock,M18_AXI_arcache,M18_AXI_arprot,M18_AXI_arqos,M18_AXI_arvalid,M18_AXI_arready,M18_AXI_rdata,M18_AXI_rresp,M18_AXI_rlast,M18_AXI_rvalid,M18_AXI_rready,M19_AXI_awaddr,M19_AXI_awlen,M19_AXI_awsize,M19_AXI_awburst,M19_AXI_awlock,M19_AXI_awcache,M19_AXI_awprot,M19_AXI_awqos,M19_AXI_awvalid,M19_AXI_awready,M19_AXI_wdata,M19_AXI_wstrb,M19_AXI_wlast,M19_AXI_wvalid,M19_AXI_wready,M19_AXI_bresp,M19_AXI_bvalid,M19_AXI_bready,M19_AXI_araddr,M19_AXI_arlen,M19_AXI_arsize,M19_AXI_arburst,M19_AXI_arlock,M19_AXI_arcache,M19_AXI_arprot,M19_AXI_arqos,M19_AXI_arvalid,M19_AXI_arready,M19_AXI_rdata,M19_AXI_rresp,M19_AXI_rlast,M19_AXI_rvalid,M19_AXI_rready,M20_AXI_awaddr,M20_AXI_awlen,M20_AXI_awsize,M20_AXI_awburst,M20_AXI_awlock,M20_AXI_awcache,M20_AXI_awprot,M20_AXI_awqos,M20_AXI_awvalid,M20_AXI_awready,M20_AXI_wdata,M20_AXI_wstrb,M20_AXI_wlast,M20_AXI_wvalid,M20_AXI_wready,M20_AXI_bresp,M20_AXI_bvalid,M20_AXI_bready,M20_AXI_araddr,M20_AXI_arlen,M20_AXI_arsize,M20_AXI_arburst,M20_AXI_arlock,M20_AXI_arcache,M20_AXI_arprot,M20_AXI_arqos,M20_AXI_arvalid,M20_AXI_arready,M20_AXI_rdata,M20_AXI_rresp,M20_AXI_rlast,M20_AXI_rvalid,M20_AXI_rready,M21_AXI_awaddr,M21_AXI_awlen,M21_AXI_awsize,M21_AXI_awburst,M21_AXI_awlock,M21_AXI_awcache,M21_AXI_awprot,M21_AXI_awqos,M21_AXI_awvalid,M21_AXI_awready,M21_AXI_wdata,M21_AXI_wstrb,M21_AXI_wlast,M21_AXI_wvalid,M21_AXI_wready,M21_AXI_bresp,M21_AXI_bvalid,M21_AXI_bready,M21_AXI_araddr,M21_AXI_arlen,M21_AXI_arsize,M21_AXI_arburst,M21_AXI_arlock,M21_AXI_arcache,M21_AXI_arprot,M21_AXI_arqos,M21_AXI_arvalid,M21_AXI_arready,M21_AXI_rdata,M21_AXI_rresp,M21_AXI_rlast,M21_AXI_rvalid,M21_AXI_rready,M22_AXI_awaddr,M22_AXI_awlen,M22_AXI_awsize,M22_AXI_awburst,M22_AXI_awlock,M22_AXI_awcache,M22_AXI_awprot,M22_AXI_awqos,M22_AXI_awvalid,M22_AXI_awready,M22_AXI_wdata,M22_AXI_wstrb,M22_AXI_wlast,M22_AXI_wvalid,M22_AXI_wready,M22_AXI_bresp,M22_AXI_bvalid,M22_AXI_bready,M22_AXI_araddr,M22_AXI_arlen,M22_AXI_arsize,M22_AXI_arburst,M22_AXI_arlock,M22_AXI_arcache,M22_AXI_arprot,M22_AXI_arqos,M22_AXI_arvalid,M22_AXI_arready,M22_AXI_rdata,M22_AXI_rresp,M22_AXI_rlast,M22_AXI_rvalid,M22_AXI_rready,M23_AXI_awaddr,M23_AXI_awlen,M23_AXI_awsize,M23_AXI_awburst,M23_AXI_awlock,M23_AXI_awcache,M23_AXI_awprot,M23_AXI_awqos,M23_AXI_awvalid,M23_AXI_awready,M23_AXI_wdata,M23_AXI_wstrb,M23_AXI_wlast,M23_AXI_wvalid,M23_AXI_wready,M23_AXI_bresp,M23_AXI_bvalid,M23_AXI_bready,M23_AXI_araddr,M23_AXI_arlen,M23_AXI_arsize,M23_AXI_arburst,M23_AXI_arlock,M23_AXI_arcache,M23_AXI_arprot,M23_AXI_arqos,M23_AXI_arvalid,M23_AXI_arready,M23_AXI_rdata,M23_AXI_rresp,M23_AXI_rlast,M23_AXI_rvalid,M23_AXI_rready)
  input bit aclk;
  input bit aresetn;
  input bit [31 : 0] S00_AXI_awaddr;
  input bit [7 : 0] S00_AXI_awlen;
  input bit [2 : 0] S00_AXI_awsize;
  input bit [1 : 0] S00_AXI_awburst;
  input bit [0 : 0] S00_AXI_awlock;
  input bit [3 : 0] S00_AXI_awcache;
  input bit [2 : 0] S00_AXI_awprot;
  input bit [3 : 0] S00_AXI_awqos;
  input bit S00_AXI_awvalid;
  output wire S00_AXI_awready;
  input bit [31 : 0] S00_AXI_wdata;
  input bit [3 : 0] S00_AXI_wstrb;
  input bit S00_AXI_wlast;
  input bit S00_AXI_wvalid;
  output wire S00_AXI_wready;
  output wire [1 : 0] S00_AXI_bresp;
  output wire S00_AXI_bvalid;
  input bit S00_AXI_bready;
  input bit [31 : 0] S00_AXI_araddr;
  input bit [7 : 0] S00_AXI_arlen;
  input bit [2 : 0] S00_AXI_arsize;
  input bit [1 : 0] S00_AXI_arburst;
  input bit [0 : 0] S00_AXI_arlock;
  input bit [3 : 0] S00_AXI_arcache;
  input bit [2 : 0] S00_AXI_arprot;
  input bit [3 : 0] S00_AXI_arqos;
  input bit S00_AXI_arvalid;
  output wire S00_AXI_arready;
  output wire [31 : 0] S00_AXI_rdata;
  output wire [1 : 0] S00_AXI_rresp;
  output wire S00_AXI_rlast;
  output wire S00_AXI_rvalid;
  input bit S00_AXI_rready;
  output wire [11 : 0] M00_AXI_awaddr;
  output wire [7 : 0] M00_AXI_awlen;
  output wire [2 : 0] M00_AXI_awsize;
  output wire [1 : 0] M00_AXI_awburst;
  output wire [0 : 0] M00_AXI_awlock;
  output wire [3 : 0] M00_AXI_awcache;
  output wire [2 : 0] M00_AXI_awprot;
  output wire [3 : 0] M00_AXI_awqos;
  output wire M00_AXI_awvalid;
  input bit M00_AXI_awready;
  output wire [31 : 0] M00_AXI_wdata;
  output wire [3 : 0] M00_AXI_wstrb;
  output wire M00_AXI_wlast;
  output wire M00_AXI_wvalid;
  input bit M00_AXI_wready;
  input bit [1 : 0] M00_AXI_bresp;
  input bit M00_AXI_bvalid;
  output wire M00_AXI_bready;
  output wire [11 : 0] M00_AXI_araddr;
  output wire [7 : 0] M00_AXI_arlen;
  output wire [2 : 0] M00_AXI_arsize;
  output wire [1 : 0] M00_AXI_arburst;
  output wire [0 : 0] M00_AXI_arlock;
  output wire [3 : 0] M00_AXI_arcache;
  output wire [2 : 0] M00_AXI_arprot;
  output wire [3 : 0] M00_AXI_arqos;
  output wire M00_AXI_arvalid;
  input bit M00_AXI_arready;
  input bit [31 : 0] M00_AXI_rdata;
  input bit [1 : 0] M00_AXI_rresp;
  input bit M00_AXI_rlast;
  input bit M00_AXI_rvalid;
  output wire M00_AXI_rready;
  output wire [11 : 0] M01_AXI_awaddr;
  output wire [7 : 0] M01_AXI_awlen;
  output wire [2 : 0] M01_AXI_awsize;
  output wire [1 : 0] M01_AXI_awburst;
  output wire [0 : 0] M01_AXI_awlock;
  output wire [3 : 0] M01_AXI_awcache;
  output wire [2 : 0] M01_AXI_awprot;
  output wire [3 : 0] M01_AXI_awqos;
  output wire M01_AXI_awvalid;
  input bit M01_AXI_awready;
  output wire [31 : 0] M01_AXI_wdata;
  output wire [3 : 0] M01_AXI_wstrb;
  output wire M01_AXI_wlast;
  output wire M01_AXI_wvalid;
  input bit M01_AXI_wready;
  input bit [1 : 0] M01_AXI_bresp;
  input bit M01_AXI_bvalid;
  output wire M01_AXI_bready;
  output wire [11 : 0] M01_AXI_araddr;
  output wire [7 : 0] M01_AXI_arlen;
  output wire [2 : 0] M01_AXI_arsize;
  output wire [1 : 0] M01_AXI_arburst;
  output wire [0 : 0] M01_AXI_arlock;
  output wire [3 : 0] M01_AXI_arcache;
  output wire [2 : 0] M01_AXI_arprot;
  output wire [3 : 0] M01_AXI_arqos;
  output wire M01_AXI_arvalid;
  input bit M01_AXI_arready;
  input bit [31 : 0] M01_AXI_rdata;
  input bit [1 : 0] M01_AXI_rresp;
  input bit M01_AXI_rlast;
  input bit M01_AXI_rvalid;
  output wire M01_AXI_rready;
  output wire [11 : 0] M02_AXI_awaddr;
  output wire [7 : 0] M02_AXI_awlen;
  output wire [2 : 0] M02_AXI_awsize;
  output wire [1 : 0] M02_AXI_awburst;
  output wire [0 : 0] M02_AXI_awlock;
  output wire [3 : 0] M02_AXI_awcache;
  output wire [2 : 0] M02_AXI_awprot;
  output wire [3 : 0] M02_AXI_awqos;
  output wire M02_AXI_awvalid;
  input bit M02_AXI_awready;
  output wire [31 : 0] M02_AXI_wdata;
  output wire [3 : 0] M02_AXI_wstrb;
  output wire M02_AXI_wlast;
  output wire M02_AXI_wvalid;
  input bit M02_AXI_wready;
  input bit [1 : 0] M02_AXI_bresp;
  input bit M02_AXI_bvalid;
  output wire M02_AXI_bready;
  output wire [11 : 0] M02_AXI_araddr;
  output wire [7 : 0] M02_AXI_arlen;
  output wire [2 : 0] M02_AXI_arsize;
  output wire [1 : 0] M02_AXI_arburst;
  output wire [0 : 0] M02_AXI_arlock;
  output wire [3 : 0] M02_AXI_arcache;
  output wire [2 : 0] M02_AXI_arprot;
  output wire [3 : 0] M02_AXI_arqos;
  output wire M02_AXI_arvalid;
  input bit M02_AXI_arready;
  input bit [31 : 0] M02_AXI_rdata;
  input bit [1 : 0] M02_AXI_rresp;
  input bit M02_AXI_rlast;
  input bit M02_AXI_rvalid;
  output wire M02_AXI_rready;
  output wire [11 : 0] M03_AXI_awaddr;
  output wire [7 : 0] M03_AXI_awlen;
  output wire [2 : 0] M03_AXI_awsize;
  output wire [1 : 0] M03_AXI_awburst;
  output wire [0 : 0] M03_AXI_awlock;
  output wire [3 : 0] M03_AXI_awcache;
  output wire [2 : 0] M03_AXI_awprot;
  output wire [3 : 0] M03_AXI_awqos;
  output wire M03_AXI_awvalid;
  input bit M03_AXI_awready;
  output wire [31 : 0] M03_AXI_wdata;
  output wire [3 : 0] M03_AXI_wstrb;
  output wire M03_AXI_wlast;
  output wire M03_AXI_wvalid;
  input bit M03_AXI_wready;
  input bit [1 : 0] M03_AXI_bresp;
  input bit M03_AXI_bvalid;
  output wire M03_AXI_bready;
  output wire [11 : 0] M03_AXI_araddr;
  output wire [7 : 0] M03_AXI_arlen;
  output wire [2 : 0] M03_AXI_arsize;
  output wire [1 : 0] M03_AXI_arburst;
  output wire [0 : 0] M03_AXI_arlock;
  output wire [3 : 0] M03_AXI_arcache;
  output wire [2 : 0] M03_AXI_arprot;
  output wire [3 : 0] M03_AXI_arqos;
  output wire M03_AXI_arvalid;
  input bit M03_AXI_arready;
  input bit [31 : 0] M03_AXI_rdata;
  input bit [1 : 0] M03_AXI_rresp;
  input bit M03_AXI_rlast;
  input bit M03_AXI_rvalid;
  output wire M03_AXI_rready;
  output wire [11 : 0] M04_AXI_awaddr;
  output wire [7 : 0] M04_AXI_awlen;
  output wire [2 : 0] M04_AXI_awsize;
  output wire [1 : 0] M04_AXI_awburst;
  output wire [0 : 0] M04_AXI_awlock;
  output wire [3 : 0] M04_AXI_awcache;
  output wire [2 : 0] M04_AXI_awprot;
  output wire [3 : 0] M04_AXI_awqos;
  output wire M04_AXI_awvalid;
  input bit M04_AXI_awready;
  output wire [31 : 0] M04_AXI_wdata;
  output wire [3 : 0] M04_AXI_wstrb;
  output wire M04_AXI_wlast;
  output wire M04_AXI_wvalid;
  input bit M04_AXI_wready;
  input bit [1 : 0] M04_AXI_bresp;
  input bit M04_AXI_bvalid;
  output wire M04_AXI_bready;
  output wire [11 : 0] M04_AXI_araddr;
  output wire [7 : 0] M04_AXI_arlen;
  output wire [2 : 0] M04_AXI_arsize;
  output wire [1 : 0] M04_AXI_arburst;
  output wire [0 : 0] M04_AXI_arlock;
  output wire [3 : 0] M04_AXI_arcache;
  output wire [2 : 0] M04_AXI_arprot;
  output wire [3 : 0] M04_AXI_arqos;
  output wire M04_AXI_arvalid;
  input bit M04_AXI_arready;
  input bit [31 : 0] M04_AXI_rdata;
  input bit [1 : 0] M04_AXI_rresp;
  input bit M04_AXI_rlast;
  input bit M04_AXI_rvalid;
  output wire M04_AXI_rready;
  output wire [11 : 0] M05_AXI_awaddr;
  output wire [7 : 0] M05_AXI_awlen;
  output wire [2 : 0] M05_AXI_awsize;
  output wire [1 : 0] M05_AXI_awburst;
  output wire [0 : 0] M05_AXI_awlock;
  output wire [3 : 0] M05_AXI_awcache;
  output wire [2 : 0] M05_AXI_awprot;
  output wire [3 : 0] M05_AXI_awqos;
  output wire M05_AXI_awvalid;
  input bit M05_AXI_awready;
  output wire [31 : 0] M05_AXI_wdata;
  output wire [3 : 0] M05_AXI_wstrb;
  output wire M05_AXI_wlast;
  output wire M05_AXI_wvalid;
  input bit M05_AXI_wready;
  input bit [1 : 0] M05_AXI_bresp;
  input bit M05_AXI_bvalid;
  output wire M05_AXI_bready;
  output wire [11 : 0] M05_AXI_araddr;
  output wire [7 : 0] M05_AXI_arlen;
  output wire [2 : 0] M05_AXI_arsize;
  output wire [1 : 0] M05_AXI_arburst;
  output wire [0 : 0] M05_AXI_arlock;
  output wire [3 : 0] M05_AXI_arcache;
  output wire [2 : 0] M05_AXI_arprot;
  output wire [3 : 0] M05_AXI_arqos;
  output wire M05_AXI_arvalid;
  input bit M05_AXI_arready;
  input bit [31 : 0] M05_AXI_rdata;
  input bit [1 : 0] M05_AXI_rresp;
  input bit M05_AXI_rlast;
  input bit M05_AXI_rvalid;
  output wire M05_AXI_rready;
  output wire [11 : 0] M06_AXI_awaddr;
  output wire [7 : 0] M06_AXI_awlen;
  output wire [2 : 0] M06_AXI_awsize;
  output wire [1 : 0] M06_AXI_awburst;
  output wire [0 : 0] M06_AXI_awlock;
  output wire [3 : 0] M06_AXI_awcache;
  output wire [2 : 0] M06_AXI_awprot;
  output wire [3 : 0] M06_AXI_awqos;
  output wire M06_AXI_awvalid;
  input bit M06_AXI_awready;
  output wire [31 : 0] M06_AXI_wdata;
  output wire [3 : 0] M06_AXI_wstrb;
  output wire M06_AXI_wlast;
  output wire M06_AXI_wvalid;
  input bit M06_AXI_wready;
  input bit [1 : 0] M06_AXI_bresp;
  input bit M06_AXI_bvalid;
  output wire M06_AXI_bready;
  output wire [11 : 0] M06_AXI_araddr;
  output wire [7 : 0] M06_AXI_arlen;
  output wire [2 : 0] M06_AXI_arsize;
  output wire [1 : 0] M06_AXI_arburst;
  output wire [0 : 0] M06_AXI_arlock;
  output wire [3 : 0] M06_AXI_arcache;
  output wire [2 : 0] M06_AXI_arprot;
  output wire [3 : 0] M06_AXI_arqos;
  output wire M06_AXI_arvalid;
  input bit M06_AXI_arready;
  input bit [31 : 0] M06_AXI_rdata;
  input bit [1 : 0] M06_AXI_rresp;
  input bit M06_AXI_rlast;
  input bit M06_AXI_rvalid;
  output wire M06_AXI_rready;
  output wire [11 : 0] M07_AXI_awaddr;
  output wire [7 : 0] M07_AXI_awlen;
  output wire [2 : 0] M07_AXI_awsize;
  output wire [1 : 0] M07_AXI_awburst;
  output wire [0 : 0] M07_AXI_awlock;
  output wire [3 : 0] M07_AXI_awcache;
  output wire [2 : 0] M07_AXI_awprot;
  output wire [3 : 0] M07_AXI_awqos;
  output wire M07_AXI_awvalid;
  input bit M07_AXI_awready;
  output wire [31 : 0] M07_AXI_wdata;
  output wire [3 : 0] M07_AXI_wstrb;
  output wire M07_AXI_wlast;
  output wire M07_AXI_wvalid;
  input bit M07_AXI_wready;
  input bit [1 : 0] M07_AXI_bresp;
  input bit M07_AXI_bvalid;
  output wire M07_AXI_bready;
  output wire [11 : 0] M07_AXI_araddr;
  output wire [7 : 0] M07_AXI_arlen;
  output wire [2 : 0] M07_AXI_arsize;
  output wire [1 : 0] M07_AXI_arburst;
  output wire [0 : 0] M07_AXI_arlock;
  output wire [3 : 0] M07_AXI_arcache;
  output wire [2 : 0] M07_AXI_arprot;
  output wire [3 : 0] M07_AXI_arqos;
  output wire M07_AXI_arvalid;
  input bit M07_AXI_arready;
  input bit [31 : 0] M07_AXI_rdata;
  input bit [1 : 0] M07_AXI_rresp;
  input bit M07_AXI_rlast;
  input bit M07_AXI_rvalid;
  output wire M07_AXI_rready;
  output wire [11 : 0] M08_AXI_awaddr;
  output wire [7 : 0] M08_AXI_awlen;
  output wire [2 : 0] M08_AXI_awsize;
  output wire [1 : 0] M08_AXI_awburst;
  output wire [0 : 0] M08_AXI_awlock;
  output wire [3 : 0] M08_AXI_awcache;
  output wire [2 : 0] M08_AXI_awprot;
  output wire [3 : 0] M08_AXI_awqos;
  output wire M08_AXI_awvalid;
  input bit M08_AXI_awready;
  output wire [31 : 0] M08_AXI_wdata;
  output wire [3 : 0] M08_AXI_wstrb;
  output wire M08_AXI_wlast;
  output wire M08_AXI_wvalid;
  input bit M08_AXI_wready;
  input bit [1 : 0] M08_AXI_bresp;
  input bit M08_AXI_bvalid;
  output wire M08_AXI_bready;
  output wire [11 : 0] M08_AXI_araddr;
  output wire [7 : 0] M08_AXI_arlen;
  output wire [2 : 0] M08_AXI_arsize;
  output wire [1 : 0] M08_AXI_arburst;
  output wire [0 : 0] M08_AXI_arlock;
  output wire [3 : 0] M08_AXI_arcache;
  output wire [2 : 0] M08_AXI_arprot;
  output wire [3 : 0] M08_AXI_arqos;
  output wire M08_AXI_arvalid;
  input bit M08_AXI_arready;
  input bit [31 : 0] M08_AXI_rdata;
  input bit [1 : 0] M08_AXI_rresp;
  input bit M08_AXI_rlast;
  input bit M08_AXI_rvalid;
  output wire M08_AXI_rready;
  output wire [11 : 0] M09_AXI_awaddr;
  output wire [7 : 0] M09_AXI_awlen;
  output wire [2 : 0] M09_AXI_awsize;
  output wire [1 : 0] M09_AXI_awburst;
  output wire [0 : 0] M09_AXI_awlock;
  output wire [3 : 0] M09_AXI_awcache;
  output wire [2 : 0] M09_AXI_awprot;
  output wire [3 : 0] M09_AXI_awqos;
  output wire M09_AXI_awvalid;
  input bit M09_AXI_awready;
  output wire [31 : 0] M09_AXI_wdata;
  output wire [3 : 0] M09_AXI_wstrb;
  output wire M09_AXI_wlast;
  output wire M09_AXI_wvalid;
  input bit M09_AXI_wready;
  input bit [1 : 0] M09_AXI_bresp;
  input bit M09_AXI_bvalid;
  output wire M09_AXI_bready;
  output wire [11 : 0] M09_AXI_araddr;
  output wire [7 : 0] M09_AXI_arlen;
  output wire [2 : 0] M09_AXI_arsize;
  output wire [1 : 0] M09_AXI_arburst;
  output wire [0 : 0] M09_AXI_arlock;
  output wire [3 : 0] M09_AXI_arcache;
  output wire [2 : 0] M09_AXI_arprot;
  output wire [3 : 0] M09_AXI_arqos;
  output wire M09_AXI_arvalid;
  input bit M09_AXI_arready;
  input bit [31 : 0] M09_AXI_rdata;
  input bit [1 : 0] M09_AXI_rresp;
  input bit M09_AXI_rlast;
  input bit M09_AXI_rvalid;
  output wire M09_AXI_rready;
  output wire [11 : 0] M10_AXI_awaddr;
  output wire [7 : 0] M10_AXI_awlen;
  output wire [2 : 0] M10_AXI_awsize;
  output wire [1 : 0] M10_AXI_awburst;
  output wire [0 : 0] M10_AXI_awlock;
  output wire [3 : 0] M10_AXI_awcache;
  output wire [2 : 0] M10_AXI_awprot;
  output wire [3 : 0] M10_AXI_awqos;
  output wire M10_AXI_awvalid;
  input bit M10_AXI_awready;
  output wire [31 : 0] M10_AXI_wdata;
  output wire [3 : 0] M10_AXI_wstrb;
  output wire M10_AXI_wlast;
  output wire M10_AXI_wvalid;
  input bit M10_AXI_wready;
  input bit [1 : 0] M10_AXI_bresp;
  input bit M10_AXI_bvalid;
  output wire M10_AXI_bready;
  output wire [11 : 0] M10_AXI_araddr;
  output wire [7 : 0] M10_AXI_arlen;
  output wire [2 : 0] M10_AXI_arsize;
  output wire [1 : 0] M10_AXI_arburst;
  output wire [0 : 0] M10_AXI_arlock;
  output wire [3 : 0] M10_AXI_arcache;
  output wire [2 : 0] M10_AXI_arprot;
  output wire [3 : 0] M10_AXI_arqos;
  output wire M10_AXI_arvalid;
  input bit M10_AXI_arready;
  input bit [31 : 0] M10_AXI_rdata;
  input bit [1 : 0] M10_AXI_rresp;
  input bit M10_AXI_rlast;
  input bit M10_AXI_rvalid;
  output wire M10_AXI_rready;
  output wire [11 : 0] M11_AXI_awaddr;
  output wire [7 : 0] M11_AXI_awlen;
  output wire [2 : 0] M11_AXI_awsize;
  output wire [1 : 0] M11_AXI_awburst;
  output wire [0 : 0] M11_AXI_awlock;
  output wire [3 : 0] M11_AXI_awcache;
  output wire [2 : 0] M11_AXI_awprot;
  output wire [3 : 0] M11_AXI_awqos;
  output wire M11_AXI_awvalid;
  input bit M11_AXI_awready;
  output wire [31 : 0] M11_AXI_wdata;
  output wire [3 : 0] M11_AXI_wstrb;
  output wire M11_AXI_wlast;
  output wire M11_AXI_wvalid;
  input bit M11_AXI_wready;
  input bit [1 : 0] M11_AXI_bresp;
  input bit M11_AXI_bvalid;
  output wire M11_AXI_bready;
  output wire [11 : 0] M11_AXI_araddr;
  output wire [7 : 0] M11_AXI_arlen;
  output wire [2 : 0] M11_AXI_arsize;
  output wire [1 : 0] M11_AXI_arburst;
  output wire [0 : 0] M11_AXI_arlock;
  output wire [3 : 0] M11_AXI_arcache;
  output wire [2 : 0] M11_AXI_arprot;
  output wire [3 : 0] M11_AXI_arqos;
  output wire M11_AXI_arvalid;
  input bit M11_AXI_arready;
  input bit [31 : 0] M11_AXI_rdata;
  input bit [1 : 0] M11_AXI_rresp;
  input bit M11_AXI_rlast;
  input bit M11_AXI_rvalid;
  output wire M11_AXI_rready;
  output wire [11 : 0] M12_AXI_awaddr;
  output wire [7 : 0] M12_AXI_awlen;
  output wire [2 : 0] M12_AXI_awsize;
  output wire [1 : 0] M12_AXI_awburst;
  output wire [0 : 0] M12_AXI_awlock;
  output wire [3 : 0] M12_AXI_awcache;
  output wire [2 : 0] M12_AXI_awprot;
  output wire [3 : 0] M12_AXI_awqos;
  output wire M12_AXI_awvalid;
  input bit M12_AXI_awready;
  output wire [31 : 0] M12_AXI_wdata;
  output wire [3 : 0] M12_AXI_wstrb;
  output wire M12_AXI_wlast;
  output wire M12_AXI_wvalid;
  input bit M12_AXI_wready;
  input bit [1 : 0] M12_AXI_bresp;
  input bit M12_AXI_bvalid;
  output wire M12_AXI_bready;
  output wire [11 : 0] M12_AXI_araddr;
  output wire [7 : 0] M12_AXI_arlen;
  output wire [2 : 0] M12_AXI_arsize;
  output wire [1 : 0] M12_AXI_arburst;
  output wire [0 : 0] M12_AXI_arlock;
  output wire [3 : 0] M12_AXI_arcache;
  output wire [2 : 0] M12_AXI_arprot;
  output wire [3 : 0] M12_AXI_arqos;
  output wire M12_AXI_arvalid;
  input bit M12_AXI_arready;
  input bit [31 : 0] M12_AXI_rdata;
  input bit [1 : 0] M12_AXI_rresp;
  input bit M12_AXI_rlast;
  input bit M12_AXI_rvalid;
  output wire M12_AXI_rready;
  output wire [11 : 0] M13_AXI_awaddr;
  output wire [7 : 0] M13_AXI_awlen;
  output wire [2 : 0] M13_AXI_awsize;
  output wire [1 : 0] M13_AXI_awburst;
  output wire [0 : 0] M13_AXI_awlock;
  output wire [3 : 0] M13_AXI_awcache;
  output wire [2 : 0] M13_AXI_awprot;
  output wire [3 : 0] M13_AXI_awqos;
  output wire M13_AXI_awvalid;
  input bit M13_AXI_awready;
  output wire [31 : 0] M13_AXI_wdata;
  output wire [3 : 0] M13_AXI_wstrb;
  output wire M13_AXI_wlast;
  output wire M13_AXI_wvalid;
  input bit M13_AXI_wready;
  input bit [1 : 0] M13_AXI_bresp;
  input bit M13_AXI_bvalid;
  output wire M13_AXI_bready;
  output wire [11 : 0] M13_AXI_araddr;
  output wire [7 : 0] M13_AXI_arlen;
  output wire [2 : 0] M13_AXI_arsize;
  output wire [1 : 0] M13_AXI_arburst;
  output wire [0 : 0] M13_AXI_arlock;
  output wire [3 : 0] M13_AXI_arcache;
  output wire [2 : 0] M13_AXI_arprot;
  output wire [3 : 0] M13_AXI_arqos;
  output wire M13_AXI_arvalid;
  input bit M13_AXI_arready;
  input bit [31 : 0] M13_AXI_rdata;
  input bit [1 : 0] M13_AXI_rresp;
  input bit M13_AXI_rlast;
  input bit M13_AXI_rvalid;
  output wire M13_AXI_rready;
  output wire [11 : 0] M14_AXI_awaddr;
  output wire [7 : 0] M14_AXI_awlen;
  output wire [2 : 0] M14_AXI_awsize;
  output wire [1 : 0] M14_AXI_awburst;
  output wire [0 : 0] M14_AXI_awlock;
  output wire [3 : 0] M14_AXI_awcache;
  output wire [2 : 0] M14_AXI_awprot;
  output wire [3 : 0] M14_AXI_awqos;
  output wire M14_AXI_awvalid;
  input bit M14_AXI_awready;
  output wire [31 : 0] M14_AXI_wdata;
  output wire [3 : 0] M14_AXI_wstrb;
  output wire M14_AXI_wlast;
  output wire M14_AXI_wvalid;
  input bit M14_AXI_wready;
  input bit [1 : 0] M14_AXI_bresp;
  input bit M14_AXI_bvalid;
  output wire M14_AXI_bready;
  output wire [11 : 0] M14_AXI_araddr;
  output wire [7 : 0] M14_AXI_arlen;
  output wire [2 : 0] M14_AXI_arsize;
  output wire [1 : 0] M14_AXI_arburst;
  output wire [0 : 0] M14_AXI_arlock;
  output wire [3 : 0] M14_AXI_arcache;
  output wire [2 : 0] M14_AXI_arprot;
  output wire [3 : 0] M14_AXI_arqos;
  output wire M14_AXI_arvalid;
  input bit M14_AXI_arready;
  input bit [31 : 0] M14_AXI_rdata;
  input bit [1 : 0] M14_AXI_rresp;
  input bit M14_AXI_rlast;
  input bit M14_AXI_rvalid;
  output wire M14_AXI_rready;
  output wire [11 : 0] M15_AXI_awaddr;
  output wire [7 : 0] M15_AXI_awlen;
  output wire [2 : 0] M15_AXI_awsize;
  output wire [1 : 0] M15_AXI_awburst;
  output wire [0 : 0] M15_AXI_awlock;
  output wire [3 : 0] M15_AXI_awcache;
  output wire [2 : 0] M15_AXI_awprot;
  output wire [3 : 0] M15_AXI_awqos;
  output wire M15_AXI_awvalid;
  input bit M15_AXI_awready;
  output wire [31 : 0] M15_AXI_wdata;
  output wire [3 : 0] M15_AXI_wstrb;
  output wire M15_AXI_wlast;
  output wire M15_AXI_wvalid;
  input bit M15_AXI_wready;
  input bit [1 : 0] M15_AXI_bresp;
  input bit M15_AXI_bvalid;
  output wire M15_AXI_bready;
  output wire [11 : 0] M15_AXI_araddr;
  output wire [7 : 0] M15_AXI_arlen;
  output wire [2 : 0] M15_AXI_arsize;
  output wire [1 : 0] M15_AXI_arburst;
  output wire [0 : 0] M15_AXI_arlock;
  output wire [3 : 0] M15_AXI_arcache;
  output wire [2 : 0] M15_AXI_arprot;
  output wire [3 : 0] M15_AXI_arqos;
  output wire M15_AXI_arvalid;
  input bit M15_AXI_arready;
  input bit [31 : 0] M15_AXI_rdata;
  input bit [1 : 0] M15_AXI_rresp;
  input bit M15_AXI_rlast;
  input bit M15_AXI_rvalid;
  output wire M15_AXI_rready;
  output wire [11 : 0] M16_AXI_awaddr;
  output wire [7 : 0] M16_AXI_awlen;
  output wire [2 : 0] M16_AXI_awsize;
  output wire [1 : 0] M16_AXI_awburst;
  output wire [0 : 0] M16_AXI_awlock;
  output wire [3 : 0] M16_AXI_awcache;
  output wire [2 : 0] M16_AXI_awprot;
  output wire [3 : 0] M16_AXI_awqos;
  output wire M16_AXI_awvalid;
  input bit M16_AXI_awready;
  output wire [31 : 0] M16_AXI_wdata;
  output wire [3 : 0] M16_AXI_wstrb;
  output wire M16_AXI_wlast;
  output wire M16_AXI_wvalid;
  input bit M16_AXI_wready;
  input bit [1 : 0] M16_AXI_bresp;
  input bit M16_AXI_bvalid;
  output wire M16_AXI_bready;
  output wire [11 : 0] M16_AXI_araddr;
  output wire [7 : 0] M16_AXI_arlen;
  output wire [2 : 0] M16_AXI_arsize;
  output wire [1 : 0] M16_AXI_arburst;
  output wire [0 : 0] M16_AXI_arlock;
  output wire [3 : 0] M16_AXI_arcache;
  output wire [2 : 0] M16_AXI_arprot;
  output wire [3 : 0] M16_AXI_arqos;
  output wire M16_AXI_arvalid;
  input bit M16_AXI_arready;
  input bit [31 : 0] M16_AXI_rdata;
  input bit [1 : 0] M16_AXI_rresp;
  input bit M16_AXI_rlast;
  input bit M16_AXI_rvalid;
  output wire M16_AXI_rready;
  output wire [11 : 0] M17_AXI_awaddr;
  output wire [7 : 0] M17_AXI_awlen;
  output wire [2 : 0] M17_AXI_awsize;
  output wire [1 : 0] M17_AXI_awburst;
  output wire [0 : 0] M17_AXI_awlock;
  output wire [3 : 0] M17_AXI_awcache;
  output wire [2 : 0] M17_AXI_awprot;
  output wire [3 : 0] M17_AXI_awqos;
  output wire M17_AXI_awvalid;
  input bit M17_AXI_awready;
  output wire [31 : 0] M17_AXI_wdata;
  output wire [3 : 0] M17_AXI_wstrb;
  output wire M17_AXI_wlast;
  output wire M17_AXI_wvalid;
  input bit M17_AXI_wready;
  input bit [1 : 0] M17_AXI_bresp;
  input bit M17_AXI_bvalid;
  output wire M17_AXI_bready;
  output wire [11 : 0] M17_AXI_araddr;
  output wire [7 : 0] M17_AXI_arlen;
  output wire [2 : 0] M17_AXI_arsize;
  output wire [1 : 0] M17_AXI_arburst;
  output wire [0 : 0] M17_AXI_arlock;
  output wire [3 : 0] M17_AXI_arcache;
  output wire [2 : 0] M17_AXI_arprot;
  output wire [3 : 0] M17_AXI_arqos;
  output wire M17_AXI_arvalid;
  input bit M17_AXI_arready;
  input bit [31 : 0] M17_AXI_rdata;
  input bit [1 : 0] M17_AXI_rresp;
  input bit M17_AXI_rlast;
  input bit M17_AXI_rvalid;
  output wire M17_AXI_rready;
  output wire [11 : 0] M18_AXI_awaddr;
  output wire [7 : 0] M18_AXI_awlen;
  output wire [2 : 0] M18_AXI_awsize;
  output wire [1 : 0] M18_AXI_awburst;
  output wire [0 : 0] M18_AXI_awlock;
  output wire [3 : 0] M18_AXI_awcache;
  output wire [2 : 0] M18_AXI_awprot;
  output wire [3 : 0] M18_AXI_awqos;
  output wire M18_AXI_awvalid;
  input bit M18_AXI_awready;
  output wire [31 : 0] M18_AXI_wdata;
  output wire [3 : 0] M18_AXI_wstrb;
  output wire M18_AXI_wlast;
  output wire M18_AXI_wvalid;
  input bit M18_AXI_wready;
  input bit [1 : 0] M18_AXI_bresp;
  input bit M18_AXI_bvalid;
  output wire M18_AXI_bready;
  output wire [11 : 0] M18_AXI_araddr;
  output wire [7 : 0] M18_AXI_arlen;
  output wire [2 : 0] M18_AXI_arsize;
  output wire [1 : 0] M18_AXI_arburst;
  output wire [0 : 0] M18_AXI_arlock;
  output wire [3 : 0] M18_AXI_arcache;
  output wire [2 : 0] M18_AXI_arprot;
  output wire [3 : 0] M18_AXI_arqos;
  output wire M18_AXI_arvalid;
  input bit M18_AXI_arready;
  input bit [31 : 0] M18_AXI_rdata;
  input bit [1 : 0] M18_AXI_rresp;
  input bit M18_AXI_rlast;
  input bit M18_AXI_rvalid;
  output wire M18_AXI_rready;
  output wire [11 : 0] M19_AXI_awaddr;
  output wire [7 : 0] M19_AXI_awlen;
  output wire [2 : 0] M19_AXI_awsize;
  output wire [1 : 0] M19_AXI_awburst;
  output wire [0 : 0] M19_AXI_awlock;
  output wire [3 : 0] M19_AXI_awcache;
  output wire [2 : 0] M19_AXI_awprot;
  output wire [3 : 0] M19_AXI_awqos;
  output wire M19_AXI_awvalid;
  input bit M19_AXI_awready;
  output wire [31 : 0] M19_AXI_wdata;
  output wire [3 : 0] M19_AXI_wstrb;
  output wire M19_AXI_wlast;
  output wire M19_AXI_wvalid;
  input bit M19_AXI_wready;
  input bit [1 : 0] M19_AXI_bresp;
  input bit M19_AXI_bvalid;
  output wire M19_AXI_bready;
  output wire [11 : 0] M19_AXI_araddr;
  output wire [7 : 0] M19_AXI_arlen;
  output wire [2 : 0] M19_AXI_arsize;
  output wire [1 : 0] M19_AXI_arburst;
  output wire [0 : 0] M19_AXI_arlock;
  output wire [3 : 0] M19_AXI_arcache;
  output wire [2 : 0] M19_AXI_arprot;
  output wire [3 : 0] M19_AXI_arqos;
  output wire M19_AXI_arvalid;
  input bit M19_AXI_arready;
  input bit [31 : 0] M19_AXI_rdata;
  input bit [1 : 0] M19_AXI_rresp;
  input bit M19_AXI_rlast;
  input bit M19_AXI_rvalid;
  output wire M19_AXI_rready;
  output wire [11 : 0] M20_AXI_awaddr;
  output wire [7 : 0] M20_AXI_awlen;
  output wire [2 : 0] M20_AXI_awsize;
  output wire [1 : 0] M20_AXI_awburst;
  output wire [0 : 0] M20_AXI_awlock;
  output wire [3 : 0] M20_AXI_awcache;
  output wire [2 : 0] M20_AXI_awprot;
  output wire [3 : 0] M20_AXI_awqos;
  output wire M20_AXI_awvalid;
  input bit M20_AXI_awready;
  output wire [31 : 0] M20_AXI_wdata;
  output wire [3 : 0] M20_AXI_wstrb;
  output wire M20_AXI_wlast;
  output wire M20_AXI_wvalid;
  input bit M20_AXI_wready;
  input bit [1 : 0] M20_AXI_bresp;
  input bit M20_AXI_bvalid;
  output wire M20_AXI_bready;
  output wire [11 : 0] M20_AXI_araddr;
  output wire [7 : 0] M20_AXI_arlen;
  output wire [2 : 0] M20_AXI_arsize;
  output wire [1 : 0] M20_AXI_arburst;
  output wire [0 : 0] M20_AXI_arlock;
  output wire [3 : 0] M20_AXI_arcache;
  output wire [2 : 0] M20_AXI_arprot;
  output wire [3 : 0] M20_AXI_arqos;
  output wire M20_AXI_arvalid;
  input bit M20_AXI_arready;
  input bit [31 : 0] M20_AXI_rdata;
  input bit [1 : 0] M20_AXI_rresp;
  input bit M20_AXI_rlast;
  input bit M20_AXI_rvalid;
  output wire M20_AXI_rready;
  output wire [11 : 0] M21_AXI_awaddr;
  output wire [7 : 0] M21_AXI_awlen;
  output wire [2 : 0] M21_AXI_awsize;
  output wire [1 : 0] M21_AXI_awburst;
  output wire [0 : 0] M21_AXI_awlock;
  output wire [3 : 0] M21_AXI_awcache;
  output wire [2 : 0] M21_AXI_awprot;
  output wire [3 : 0] M21_AXI_awqos;
  output wire M21_AXI_awvalid;
  input bit M21_AXI_awready;
  output wire [31 : 0] M21_AXI_wdata;
  output wire [3 : 0] M21_AXI_wstrb;
  output wire M21_AXI_wlast;
  output wire M21_AXI_wvalid;
  input bit M21_AXI_wready;
  input bit [1 : 0] M21_AXI_bresp;
  input bit M21_AXI_bvalid;
  output wire M21_AXI_bready;
  output wire [11 : 0] M21_AXI_araddr;
  output wire [7 : 0] M21_AXI_arlen;
  output wire [2 : 0] M21_AXI_arsize;
  output wire [1 : 0] M21_AXI_arburst;
  output wire [0 : 0] M21_AXI_arlock;
  output wire [3 : 0] M21_AXI_arcache;
  output wire [2 : 0] M21_AXI_arprot;
  output wire [3 : 0] M21_AXI_arqos;
  output wire M21_AXI_arvalid;
  input bit M21_AXI_arready;
  input bit [31 : 0] M21_AXI_rdata;
  input bit [1 : 0] M21_AXI_rresp;
  input bit M21_AXI_rlast;
  input bit M21_AXI_rvalid;
  output wire M21_AXI_rready;
  output wire [11 : 0] M22_AXI_awaddr;
  output wire [7 : 0] M22_AXI_awlen;
  output wire [2 : 0] M22_AXI_awsize;
  output wire [1 : 0] M22_AXI_awburst;
  output wire [0 : 0] M22_AXI_awlock;
  output wire [3 : 0] M22_AXI_awcache;
  output wire [2 : 0] M22_AXI_awprot;
  output wire [3 : 0] M22_AXI_awqos;
  output wire M22_AXI_awvalid;
  input bit M22_AXI_awready;
  output wire [31 : 0] M22_AXI_wdata;
  output wire [3 : 0] M22_AXI_wstrb;
  output wire M22_AXI_wlast;
  output wire M22_AXI_wvalid;
  input bit M22_AXI_wready;
  input bit [1 : 0] M22_AXI_bresp;
  input bit M22_AXI_bvalid;
  output wire M22_AXI_bready;
  output wire [11 : 0] M22_AXI_araddr;
  output wire [7 : 0] M22_AXI_arlen;
  output wire [2 : 0] M22_AXI_arsize;
  output wire [1 : 0] M22_AXI_arburst;
  output wire [0 : 0] M22_AXI_arlock;
  output wire [3 : 0] M22_AXI_arcache;
  output wire [2 : 0] M22_AXI_arprot;
  output wire [3 : 0] M22_AXI_arqos;
  output wire M22_AXI_arvalid;
  input bit M22_AXI_arready;
  input bit [31 : 0] M22_AXI_rdata;
  input bit [1 : 0] M22_AXI_rresp;
  input bit M22_AXI_rlast;
  input bit M22_AXI_rvalid;
  output wire M22_AXI_rready;
  output wire [11 : 0] M23_AXI_awaddr;
  output wire [7 : 0] M23_AXI_awlen;
  output wire [2 : 0] M23_AXI_awsize;
  output wire [1 : 0] M23_AXI_awburst;
  output wire [0 : 0] M23_AXI_awlock;
  output wire [3 : 0] M23_AXI_awcache;
  output wire [2 : 0] M23_AXI_awprot;
  output wire [3 : 0] M23_AXI_awqos;
  output wire M23_AXI_awvalid;
  input bit M23_AXI_awready;
  output wire [31 : 0] M23_AXI_wdata;
  output wire [3 : 0] M23_AXI_wstrb;
  output wire M23_AXI_wlast;
  output wire M23_AXI_wvalid;
  input bit M23_AXI_wready;
  input bit [1 : 0] M23_AXI_bresp;
  input bit M23_AXI_bvalid;
  output wire M23_AXI_bready;
  output wire [11 : 0] M23_AXI_araddr;
  output wire [7 : 0] M23_AXI_arlen;
  output wire [2 : 0] M23_AXI_arsize;
  output wire [1 : 0] M23_AXI_arburst;
  output wire [0 : 0] M23_AXI_arlock;
  output wire [3 : 0] M23_AXI_arcache;
  output wire [2 : 0] M23_AXI_arprot;
  output wire [3 : 0] M23_AXI_arqos;
  output wire M23_AXI_arvalid;
  input bit M23_AXI_arready;
  input bit [31 : 0] M23_AXI_rdata;
  input bit [1 : 0] M23_AXI_rresp;
  input bit M23_AXI_rlast;
  input bit M23_AXI_rvalid;
  output wire M23_AXI_rready;
endmodule
`endif
