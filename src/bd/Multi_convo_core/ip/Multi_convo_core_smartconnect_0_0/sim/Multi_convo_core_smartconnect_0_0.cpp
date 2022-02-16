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


#include "Multi_convo_core_smartconnect_0_0_sc.h"

#include "Multi_convo_core_smartconnect_0_0.h"

#include "smartconnect.h"

#include <map>
#include <string>





#ifdef XILINX_SIMULATOR
Multi_convo_core_smartconnect_0_0::Multi_convo_core_smartconnect_0_0(const sc_core::sc_module_name& nm) : Multi_convo_core_smartconnect_0_0_sc(nm), aclk("aclk"), aresetn("aresetn"), S00_AXI_awaddr("S00_AXI_awaddr"), S00_AXI_awlen("S00_AXI_awlen"), S00_AXI_awsize("S00_AXI_awsize"), S00_AXI_awburst("S00_AXI_awburst"), S00_AXI_awlock("S00_AXI_awlock"), S00_AXI_awcache("S00_AXI_awcache"), S00_AXI_awprot("S00_AXI_awprot"), S00_AXI_awqos("S00_AXI_awqos"), S00_AXI_awvalid("S00_AXI_awvalid"), S00_AXI_awready("S00_AXI_awready"), S00_AXI_wdata("S00_AXI_wdata"), S00_AXI_wstrb("S00_AXI_wstrb"), S00_AXI_wlast("S00_AXI_wlast"), S00_AXI_wvalid("S00_AXI_wvalid"), S00_AXI_wready("S00_AXI_wready"), S00_AXI_bresp("S00_AXI_bresp"), S00_AXI_bvalid("S00_AXI_bvalid"), S00_AXI_bready("S00_AXI_bready"), S00_AXI_araddr("S00_AXI_araddr"), S00_AXI_arlen("S00_AXI_arlen"), S00_AXI_arsize("S00_AXI_arsize"), S00_AXI_arburst("S00_AXI_arburst"), S00_AXI_arlock("S00_AXI_arlock"), S00_AXI_arcache("S00_AXI_arcache"), S00_AXI_arprot("S00_AXI_arprot"), S00_AXI_arqos("S00_AXI_arqos"), S00_AXI_arvalid("S00_AXI_arvalid"), S00_AXI_arready("S00_AXI_arready"), S00_AXI_rdata("S00_AXI_rdata"), S00_AXI_rresp("S00_AXI_rresp"), S00_AXI_rlast("S00_AXI_rlast"), S00_AXI_rvalid("S00_AXI_rvalid"), S00_AXI_rready("S00_AXI_rready"), M00_AXI_awaddr("M00_AXI_awaddr"), M00_AXI_awlen("M00_AXI_awlen"), M00_AXI_awsize("M00_AXI_awsize"), M00_AXI_awburst("M00_AXI_awburst"), M00_AXI_awlock("M00_AXI_awlock"), M00_AXI_awcache("M00_AXI_awcache"), M00_AXI_awprot("M00_AXI_awprot"), M00_AXI_awqos("M00_AXI_awqos"), M00_AXI_awvalid("M00_AXI_awvalid"), M00_AXI_awready("M00_AXI_awready"), M00_AXI_wdata("M00_AXI_wdata"), M00_AXI_wstrb("M00_AXI_wstrb"), M00_AXI_wlast("M00_AXI_wlast"), M00_AXI_wvalid("M00_AXI_wvalid"), M00_AXI_wready("M00_AXI_wready"), M00_AXI_bresp("M00_AXI_bresp"), M00_AXI_bvalid("M00_AXI_bvalid"), M00_AXI_bready("M00_AXI_bready"), M00_AXI_araddr("M00_AXI_araddr"), M00_AXI_arlen("M00_AXI_arlen"), M00_AXI_arsize("M00_AXI_arsize"), M00_AXI_arburst("M00_AXI_arburst"), M00_AXI_arlock("M00_AXI_arlock"), M00_AXI_arcache("M00_AXI_arcache"), M00_AXI_arprot("M00_AXI_arprot"), M00_AXI_arqos("M00_AXI_arqos"), M00_AXI_arvalid("M00_AXI_arvalid"), M00_AXI_arready("M00_AXI_arready"), M00_AXI_rdata("M00_AXI_rdata"), M00_AXI_rresp("M00_AXI_rresp"), M00_AXI_rlast("M00_AXI_rlast"), M00_AXI_rvalid("M00_AXI_rvalid"), M00_AXI_rready("M00_AXI_rready"), M01_AXI_awaddr("M01_AXI_awaddr"), M01_AXI_awlen("M01_AXI_awlen"), M01_AXI_awsize("M01_AXI_awsize"), M01_AXI_awburst("M01_AXI_awburst"), M01_AXI_awlock("M01_AXI_awlock"), M01_AXI_awcache("M01_AXI_awcache"), M01_AXI_awprot("M01_AXI_awprot"), M01_AXI_awqos("M01_AXI_awqos"), M01_AXI_awvalid("M01_AXI_awvalid"), M01_AXI_awready("M01_AXI_awready"), M01_AXI_wdata("M01_AXI_wdata"), M01_AXI_wstrb("M01_AXI_wstrb"), M01_AXI_wlast("M01_AXI_wlast"), M01_AXI_wvalid("M01_AXI_wvalid"), M01_AXI_wready("M01_AXI_wready"), M01_AXI_bresp("M01_AXI_bresp"), M01_AXI_bvalid("M01_AXI_bvalid"), M01_AXI_bready("M01_AXI_bready"), M01_AXI_araddr("M01_AXI_araddr"), M01_AXI_arlen("M01_AXI_arlen"), M01_AXI_arsize("M01_AXI_arsize"), M01_AXI_arburst("M01_AXI_arburst"), M01_AXI_arlock("M01_AXI_arlock"), M01_AXI_arcache("M01_AXI_arcache"), M01_AXI_arprot("M01_AXI_arprot"), M01_AXI_arqos("M01_AXI_arqos"), M01_AXI_arvalid("M01_AXI_arvalid"), M01_AXI_arready("M01_AXI_arready"), M01_AXI_rdata("M01_AXI_rdata"), M01_AXI_rresp("M01_AXI_rresp"), M01_AXI_rlast("M01_AXI_rlast"), M01_AXI_rvalid("M01_AXI_rvalid"), M01_AXI_rready("M01_AXI_rready"), M02_AXI_awaddr("M02_AXI_awaddr"), M02_AXI_awlen("M02_AXI_awlen"), M02_AXI_awsize("M02_AXI_awsize"), M02_AXI_awburst("M02_AXI_awburst"), M02_AXI_awlock("M02_AXI_awlock"), M02_AXI_awcache("M02_AXI_awcache"), M02_AXI_awprot("M02_AXI_awprot"), M02_AXI_awqos("M02_AXI_awqos"), M02_AXI_awvalid("M02_AXI_awvalid"), M02_AXI_awready("M02_AXI_awready"), M02_AXI_wdata("M02_AXI_wdata"), M02_AXI_wstrb("M02_AXI_wstrb"), M02_AXI_wlast("M02_AXI_wlast"), M02_AXI_wvalid("M02_AXI_wvalid"), M02_AXI_wready("M02_AXI_wready"), M02_AXI_bresp("M02_AXI_bresp"), M02_AXI_bvalid("M02_AXI_bvalid"), M02_AXI_bready("M02_AXI_bready"), M02_AXI_araddr("M02_AXI_araddr"), M02_AXI_arlen("M02_AXI_arlen"), M02_AXI_arsize("M02_AXI_arsize"), M02_AXI_arburst("M02_AXI_arburst"), M02_AXI_arlock("M02_AXI_arlock"), M02_AXI_arcache("M02_AXI_arcache"), M02_AXI_arprot("M02_AXI_arprot"), M02_AXI_arqos("M02_AXI_arqos"), M02_AXI_arvalid("M02_AXI_arvalid"), M02_AXI_arready("M02_AXI_arready"), M02_AXI_rdata("M02_AXI_rdata"), M02_AXI_rresp("M02_AXI_rresp"), M02_AXI_rlast("M02_AXI_rlast"), M02_AXI_rvalid("M02_AXI_rvalid"), M02_AXI_rready("M02_AXI_rready"), M03_AXI_awaddr("M03_AXI_awaddr"), M03_AXI_awlen("M03_AXI_awlen"), M03_AXI_awsize("M03_AXI_awsize"), M03_AXI_awburst("M03_AXI_awburst"), M03_AXI_awlock("M03_AXI_awlock"), M03_AXI_awcache("M03_AXI_awcache"), M03_AXI_awprot("M03_AXI_awprot"), M03_AXI_awqos("M03_AXI_awqos"), M03_AXI_awvalid("M03_AXI_awvalid"), M03_AXI_awready("M03_AXI_awready"), M03_AXI_wdata("M03_AXI_wdata"), M03_AXI_wstrb("M03_AXI_wstrb"), M03_AXI_wlast("M03_AXI_wlast"), M03_AXI_wvalid("M03_AXI_wvalid"), M03_AXI_wready("M03_AXI_wready"), M03_AXI_bresp("M03_AXI_bresp"), M03_AXI_bvalid("M03_AXI_bvalid"), M03_AXI_bready("M03_AXI_bready"), M03_AXI_araddr("M03_AXI_araddr"), M03_AXI_arlen("M03_AXI_arlen"), M03_AXI_arsize("M03_AXI_arsize"), M03_AXI_arburst("M03_AXI_arburst"), M03_AXI_arlock("M03_AXI_arlock"), M03_AXI_arcache("M03_AXI_arcache"), M03_AXI_arprot("M03_AXI_arprot"), M03_AXI_arqos("M03_AXI_arqos"), M03_AXI_arvalid("M03_AXI_arvalid"), M03_AXI_arready("M03_AXI_arready"), M03_AXI_rdata("M03_AXI_rdata"), M03_AXI_rresp("M03_AXI_rresp"), M03_AXI_rlast("M03_AXI_rlast"), M03_AXI_rvalid("M03_AXI_rvalid"), M03_AXI_rready("M03_AXI_rready"), M04_AXI_awaddr("M04_AXI_awaddr"), M04_AXI_awlen("M04_AXI_awlen"), M04_AXI_awsize("M04_AXI_awsize"), M04_AXI_awburst("M04_AXI_awburst"), M04_AXI_awlock("M04_AXI_awlock"), M04_AXI_awcache("M04_AXI_awcache"), M04_AXI_awprot("M04_AXI_awprot"), M04_AXI_awqos("M04_AXI_awqos"), M04_AXI_awvalid("M04_AXI_awvalid"), M04_AXI_awready("M04_AXI_awready"), M04_AXI_wdata("M04_AXI_wdata"), M04_AXI_wstrb("M04_AXI_wstrb"), M04_AXI_wlast("M04_AXI_wlast"), M04_AXI_wvalid("M04_AXI_wvalid"), M04_AXI_wready("M04_AXI_wready"), M04_AXI_bresp("M04_AXI_bresp"), M04_AXI_bvalid("M04_AXI_bvalid"), M04_AXI_bready("M04_AXI_bready"), M04_AXI_araddr("M04_AXI_araddr"), M04_AXI_arlen("M04_AXI_arlen"), M04_AXI_arsize("M04_AXI_arsize"), M04_AXI_arburst("M04_AXI_arburst"), M04_AXI_arlock("M04_AXI_arlock"), M04_AXI_arcache("M04_AXI_arcache"), M04_AXI_arprot("M04_AXI_arprot"), M04_AXI_arqos("M04_AXI_arqos"), M04_AXI_arvalid("M04_AXI_arvalid"), M04_AXI_arready("M04_AXI_arready"), M04_AXI_rdata("M04_AXI_rdata"), M04_AXI_rresp("M04_AXI_rresp"), M04_AXI_rlast("M04_AXI_rlast"), M04_AXI_rvalid("M04_AXI_rvalid"), M04_AXI_rready("M04_AXI_rready"), M05_AXI_awaddr("M05_AXI_awaddr"), M05_AXI_awlen("M05_AXI_awlen"), M05_AXI_awsize("M05_AXI_awsize"), M05_AXI_awburst("M05_AXI_awburst"), M05_AXI_awlock("M05_AXI_awlock"), M05_AXI_awcache("M05_AXI_awcache"), M05_AXI_awprot("M05_AXI_awprot"), M05_AXI_awqos("M05_AXI_awqos"), M05_AXI_awvalid("M05_AXI_awvalid"), M05_AXI_awready("M05_AXI_awready"), M05_AXI_wdata("M05_AXI_wdata"), M05_AXI_wstrb("M05_AXI_wstrb"), M05_AXI_wlast("M05_AXI_wlast"), M05_AXI_wvalid("M05_AXI_wvalid"), M05_AXI_wready("M05_AXI_wready"), M05_AXI_bresp("M05_AXI_bresp"), M05_AXI_bvalid("M05_AXI_bvalid"), M05_AXI_bready("M05_AXI_bready"), M05_AXI_araddr("M05_AXI_araddr"), M05_AXI_arlen("M05_AXI_arlen"), M05_AXI_arsize("M05_AXI_arsize"), M05_AXI_arburst("M05_AXI_arburst"), M05_AXI_arlock("M05_AXI_arlock"), M05_AXI_arcache("M05_AXI_arcache"), M05_AXI_arprot("M05_AXI_arprot"), M05_AXI_arqos("M05_AXI_arqos"), M05_AXI_arvalid("M05_AXI_arvalid"), M05_AXI_arready("M05_AXI_arready"), M05_AXI_rdata("M05_AXI_rdata"), M05_AXI_rresp("M05_AXI_rresp"), M05_AXI_rlast("M05_AXI_rlast"), M05_AXI_rvalid("M05_AXI_rvalid"), M05_AXI_rready("M05_AXI_rready"), M06_AXI_awaddr("M06_AXI_awaddr"), M06_AXI_awlen("M06_AXI_awlen"), M06_AXI_awsize("M06_AXI_awsize"), M06_AXI_awburst("M06_AXI_awburst"), M06_AXI_awlock("M06_AXI_awlock"), M06_AXI_awcache("M06_AXI_awcache"), M06_AXI_awprot("M06_AXI_awprot"), M06_AXI_awqos("M06_AXI_awqos"), M06_AXI_awvalid("M06_AXI_awvalid"), M06_AXI_awready("M06_AXI_awready"), M06_AXI_wdata("M06_AXI_wdata"), M06_AXI_wstrb("M06_AXI_wstrb"), M06_AXI_wlast("M06_AXI_wlast"), M06_AXI_wvalid("M06_AXI_wvalid"), M06_AXI_wready("M06_AXI_wready"), M06_AXI_bresp("M06_AXI_bresp"), M06_AXI_bvalid("M06_AXI_bvalid"), M06_AXI_bready("M06_AXI_bready"), M06_AXI_araddr("M06_AXI_araddr"), M06_AXI_arlen("M06_AXI_arlen"), M06_AXI_arsize("M06_AXI_arsize"), M06_AXI_arburst("M06_AXI_arburst"), M06_AXI_arlock("M06_AXI_arlock"), M06_AXI_arcache("M06_AXI_arcache"), M06_AXI_arprot("M06_AXI_arprot"), M06_AXI_arqos("M06_AXI_arqos"), M06_AXI_arvalid("M06_AXI_arvalid"), M06_AXI_arready("M06_AXI_arready"), M06_AXI_rdata("M06_AXI_rdata"), M06_AXI_rresp("M06_AXI_rresp"), M06_AXI_rlast("M06_AXI_rlast"), M06_AXI_rvalid("M06_AXI_rvalid"), M06_AXI_rready("M06_AXI_rready"), M07_AXI_awaddr("M07_AXI_awaddr"), M07_AXI_awlen("M07_AXI_awlen"), M07_AXI_awsize("M07_AXI_awsize"), M07_AXI_awburst("M07_AXI_awburst"), M07_AXI_awlock("M07_AXI_awlock"), M07_AXI_awcache("M07_AXI_awcache"), M07_AXI_awprot("M07_AXI_awprot"), M07_AXI_awqos("M07_AXI_awqos"), M07_AXI_awvalid("M07_AXI_awvalid"), M07_AXI_awready("M07_AXI_awready"), M07_AXI_wdata("M07_AXI_wdata"), M07_AXI_wstrb("M07_AXI_wstrb"), M07_AXI_wlast("M07_AXI_wlast"), M07_AXI_wvalid("M07_AXI_wvalid"), M07_AXI_wready("M07_AXI_wready"), M07_AXI_bresp("M07_AXI_bresp"), M07_AXI_bvalid("M07_AXI_bvalid"), M07_AXI_bready("M07_AXI_bready"), M07_AXI_araddr("M07_AXI_araddr"), M07_AXI_arlen("M07_AXI_arlen"), M07_AXI_arsize("M07_AXI_arsize"), M07_AXI_arburst("M07_AXI_arburst"), M07_AXI_arlock("M07_AXI_arlock"), M07_AXI_arcache("M07_AXI_arcache"), M07_AXI_arprot("M07_AXI_arprot"), M07_AXI_arqos("M07_AXI_arqos"), M07_AXI_arvalid("M07_AXI_arvalid"), M07_AXI_arready("M07_AXI_arready"), M07_AXI_rdata("M07_AXI_rdata"), M07_AXI_rresp("M07_AXI_rresp"), M07_AXI_rlast("M07_AXI_rlast"), M07_AXI_rvalid("M07_AXI_rvalid"), M07_AXI_rready("M07_AXI_rready"), M08_AXI_awaddr("M08_AXI_awaddr"), M08_AXI_awlen("M08_AXI_awlen"), M08_AXI_awsize("M08_AXI_awsize"), M08_AXI_awburst("M08_AXI_awburst"), M08_AXI_awlock("M08_AXI_awlock"), M08_AXI_awcache("M08_AXI_awcache"), M08_AXI_awprot("M08_AXI_awprot"), M08_AXI_awqos("M08_AXI_awqos"), M08_AXI_awvalid("M08_AXI_awvalid"), M08_AXI_awready("M08_AXI_awready"), M08_AXI_wdata("M08_AXI_wdata"), M08_AXI_wstrb("M08_AXI_wstrb"), M08_AXI_wlast("M08_AXI_wlast"), M08_AXI_wvalid("M08_AXI_wvalid"), M08_AXI_wready("M08_AXI_wready"), M08_AXI_bresp("M08_AXI_bresp"), M08_AXI_bvalid("M08_AXI_bvalid"), M08_AXI_bready("M08_AXI_bready"), M08_AXI_araddr("M08_AXI_araddr"), M08_AXI_arlen("M08_AXI_arlen"), M08_AXI_arsize("M08_AXI_arsize"), M08_AXI_arburst("M08_AXI_arburst"), M08_AXI_arlock("M08_AXI_arlock"), M08_AXI_arcache("M08_AXI_arcache"), M08_AXI_arprot("M08_AXI_arprot"), M08_AXI_arqos("M08_AXI_arqos"), M08_AXI_arvalid("M08_AXI_arvalid"), M08_AXI_arready("M08_AXI_arready"), M08_AXI_rdata("M08_AXI_rdata"), M08_AXI_rresp("M08_AXI_rresp"), M08_AXI_rlast("M08_AXI_rlast"), M08_AXI_rvalid("M08_AXI_rvalid"), M08_AXI_rready("M08_AXI_rready"), M09_AXI_awaddr("M09_AXI_awaddr"), M09_AXI_awlen("M09_AXI_awlen"), M09_AXI_awsize("M09_AXI_awsize"), M09_AXI_awburst("M09_AXI_awburst"), M09_AXI_awlock("M09_AXI_awlock"), M09_AXI_awcache("M09_AXI_awcache"), M09_AXI_awprot("M09_AXI_awprot"), M09_AXI_awqos("M09_AXI_awqos"), M09_AXI_awvalid("M09_AXI_awvalid"), M09_AXI_awready("M09_AXI_awready"), M09_AXI_wdata("M09_AXI_wdata"), M09_AXI_wstrb("M09_AXI_wstrb"), M09_AXI_wlast("M09_AXI_wlast"), M09_AXI_wvalid("M09_AXI_wvalid"), M09_AXI_wready("M09_AXI_wready"), M09_AXI_bresp("M09_AXI_bresp"), M09_AXI_bvalid("M09_AXI_bvalid"), M09_AXI_bready("M09_AXI_bready"), M09_AXI_araddr("M09_AXI_araddr"), M09_AXI_arlen("M09_AXI_arlen"), M09_AXI_arsize("M09_AXI_arsize"), M09_AXI_arburst("M09_AXI_arburst"), M09_AXI_arlock("M09_AXI_arlock"), M09_AXI_arcache("M09_AXI_arcache"), M09_AXI_arprot("M09_AXI_arprot"), M09_AXI_arqos("M09_AXI_arqos"), M09_AXI_arvalid("M09_AXI_arvalid"), M09_AXI_arready("M09_AXI_arready"), M09_AXI_rdata("M09_AXI_rdata"), M09_AXI_rresp("M09_AXI_rresp"), M09_AXI_rlast("M09_AXI_rlast"), M09_AXI_rvalid("M09_AXI_rvalid"), M09_AXI_rready("M09_AXI_rready"), M10_AXI_awaddr("M10_AXI_awaddr"), M10_AXI_awlen("M10_AXI_awlen"), M10_AXI_awsize("M10_AXI_awsize"), M10_AXI_awburst("M10_AXI_awburst"), M10_AXI_awlock("M10_AXI_awlock"), M10_AXI_awcache("M10_AXI_awcache"), M10_AXI_awprot("M10_AXI_awprot"), M10_AXI_awqos("M10_AXI_awqos"), M10_AXI_awvalid("M10_AXI_awvalid"), M10_AXI_awready("M10_AXI_awready"), M10_AXI_wdata("M10_AXI_wdata"), M10_AXI_wstrb("M10_AXI_wstrb"), M10_AXI_wlast("M10_AXI_wlast"), M10_AXI_wvalid("M10_AXI_wvalid"), M10_AXI_wready("M10_AXI_wready"), M10_AXI_bresp("M10_AXI_bresp"), M10_AXI_bvalid("M10_AXI_bvalid"), M10_AXI_bready("M10_AXI_bready"), M10_AXI_araddr("M10_AXI_araddr"), M10_AXI_arlen("M10_AXI_arlen"), M10_AXI_arsize("M10_AXI_arsize"), M10_AXI_arburst("M10_AXI_arburst"), M10_AXI_arlock("M10_AXI_arlock"), M10_AXI_arcache("M10_AXI_arcache"), M10_AXI_arprot("M10_AXI_arprot"), M10_AXI_arqos("M10_AXI_arqos"), M10_AXI_arvalid("M10_AXI_arvalid"), M10_AXI_arready("M10_AXI_arready"), M10_AXI_rdata("M10_AXI_rdata"), M10_AXI_rresp("M10_AXI_rresp"), M10_AXI_rlast("M10_AXI_rlast"), M10_AXI_rvalid("M10_AXI_rvalid"), M10_AXI_rready("M10_AXI_rready"), M11_AXI_awaddr("M11_AXI_awaddr"), M11_AXI_awlen("M11_AXI_awlen"), M11_AXI_awsize("M11_AXI_awsize"), M11_AXI_awburst("M11_AXI_awburst"), M11_AXI_awlock("M11_AXI_awlock"), M11_AXI_awcache("M11_AXI_awcache"), M11_AXI_awprot("M11_AXI_awprot"), M11_AXI_awqos("M11_AXI_awqos"), M11_AXI_awvalid("M11_AXI_awvalid"), M11_AXI_awready("M11_AXI_awready"), M11_AXI_wdata("M11_AXI_wdata"), M11_AXI_wstrb("M11_AXI_wstrb"), M11_AXI_wlast("M11_AXI_wlast"), M11_AXI_wvalid("M11_AXI_wvalid"), M11_AXI_wready("M11_AXI_wready"), M11_AXI_bresp("M11_AXI_bresp"), M11_AXI_bvalid("M11_AXI_bvalid"), M11_AXI_bready("M11_AXI_bready"), M11_AXI_araddr("M11_AXI_araddr"), M11_AXI_arlen("M11_AXI_arlen"), M11_AXI_arsize("M11_AXI_arsize"), M11_AXI_arburst("M11_AXI_arburst"), M11_AXI_arlock("M11_AXI_arlock"), M11_AXI_arcache("M11_AXI_arcache"), M11_AXI_arprot("M11_AXI_arprot"), M11_AXI_arqos("M11_AXI_arqos"), M11_AXI_arvalid("M11_AXI_arvalid"), M11_AXI_arready("M11_AXI_arready"), M11_AXI_rdata("M11_AXI_rdata"), M11_AXI_rresp("M11_AXI_rresp"), M11_AXI_rlast("M11_AXI_rlast"), M11_AXI_rvalid("M11_AXI_rvalid"), M11_AXI_rready("M11_AXI_rready"), M12_AXI_awaddr("M12_AXI_awaddr"), M12_AXI_awlen("M12_AXI_awlen"), M12_AXI_awsize("M12_AXI_awsize"), M12_AXI_awburst("M12_AXI_awburst"), M12_AXI_awlock("M12_AXI_awlock"), M12_AXI_awcache("M12_AXI_awcache"), M12_AXI_awprot("M12_AXI_awprot"), M12_AXI_awqos("M12_AXI_awqos"), M12_AXI_awvalid("M12_AXI_awvalid"), M12_AXI_awready("M12_AXI_awready"), M12_AXI_wdata("M12_AXI_wdata"), M12_AXI_wstrb("M12_AXI_wstrb"), M12_AXI_wlast("M12_AXI_wlast"), M12_AXI_wvalid("M12_AXI_wvalid"), M12_AXI_wready("M12_AXI_wready"), M12_AXI_bresp("M12_AXI_bresp"), M12_AXI_bvalid("M12_AXI_bvalid"), M12_AXI_bready("M12_AXI_bready"), M12_AXI_araddr("M12_AXI_araddr"), M12_AXI_arlen("M12_AXI_arlen"), M12_AXI_arsize("M12_AXI_arsize"), M12_AXI_arburst("M12_AXI_arburst"), M12_AXI_arlock("M12_AXI_arlock"), M12_AXI_arcache("M12_AXI_arcache"), M12_AXI_arprot("M12_AXI_arprot"), M12_AXI_arqos("M12_AXI_arqos"), M12_AXI_arvalid("M12_AXI_arvalid"), M12_AXI_arready("M12_AXI_arready"), M12_AXI_rdata("M12_AXI_rdata"), M12_AXI_rresp("M12_AXI_rresp"), M12_AXI_rlast("M12_AXI_rlast"), M12_AXI_rvalid("M12_AXI_rvalid"), M12_AXI_rready("M12_AXI_rready"), M13_AXI_awaddr("M13_AXI_awaddr"), M13_AXI_awlen("M13_AXI_awlen"), M13_AXI_awsize("M13_AXI_awsize"), M13_AXI_awburst("M13_AXI_awburst"), M13_AXI_awlock("M13_AXI_awlock"), M13_AXI_awcache("M13_AXI_awcache"), M13_AXI_awprot("M13_AXI_awprot"), M13_AXI_awqos("M13_AXI_awqos"), M13_AXI_awvalid("M13_AXI_awvalid"), M13_AXI_awready("M13_AXI_awready"), M13_AXI_wdata("M13_AXI_wdata"), M13_AXI_wstrb("M13_AXI_wstrb"), M13_AXI_wlast("M13_AXI_wlast"), M13_AXI_wvalid("M13_AXI_wvalid"), M13_AXI_wready("M13_AXI_wready"), M13_AXI_bresp("M13_AXI_bresp"), M13_AXI_bvalid("M13_AXI_bvalid"), M13_AXI_bready("M13_AXI_bready"), M13_AXI_araddr("M13_AXI_araddr"), M13_AXI_arlen("M13_AXI_arlen"), M13_AXI_arsize("M13_AXI_arsize"), M13_AXI_arburst("M13_AXI_arburst"), M13_AXI_arlock("M13_AXI_arlock"), M13_AXI_arcache("M13_AXI_arcache"), M13_AXI_arprot("M13_AXI_arprot"), M13_AXI_arqos("M13_AXI_arqos"), M13_AXI_arvalid("M13_AXI_arvalid"), M13_AXI_arready("M13_AXI_arready"), M13_AXI_rdata("M13_AXI_rdata"), M13_AXI_rresp("M13_AXI_rresp"), M13_AXI_rlast("M13_AXI_rlast"), M13_AXI_rvalid("M13_AXI_rvalid"), M13_AXI_rready("M13_AXI_rready"), M14_AXI_awaddr("M14_AXI_awaddr"), M14_AXI_awlen("M14_AXI_awlen"), M14_AXI_awsize("M14_AXI_awsize"), M14_AXI_awburst("M14_AXI_awburst"), M14_AXI_awlock("M14_AXI_awlock"), M14_AXI_awcache("M14_AXI_awcache"), M14_AXI_awprot("M14_AXI_awprot"), M14_AXI_awqos("M14_AXI_awqos"), M14_AXI_awvalid("M14_AXI_awvalid"), M14_AXI_awready("M14_AXI_awready"), M14_AXI_wdata("M14_AXI_wdata"), M14_AXI_wstrb("M14_AXI_wstrb"), M14_AXI_wlast("M14_AXI_wlast"), M14_AXI_wvalid("M14_AXI_wvalid"), M14_AXI_wready("M14_AXI_wready"), M14_AXI_bresp("M14_AXI_bresp"), M14_AXI_bvalid("M14_AXI_bvalid"), M14_AXI_bready("M14_AXI_bready"), M14_AXI_araddr("M14_AXI_araddr"), M14_AXI_arlen("M14_AXI_arlen"), M14_AXI_arsize("M14_AXI_arsize"), M14_AXI_arburst("M14_AXI_arburst"), M14_AXI_arlock("M14_AXI_arlock"), M14_AXI_arcache("M14_AXI_arcache"), M14_AXI_arprot("M14_AXI_arprot"), M14_AXI_arqos("M14_AXI_arqos"), M14_AXI_arvalid("M14_AXI_arvalid"), M14_AXI_arready("M14_AXI_arready"), M14_AXI_rdata("M14_AXI_rdata"), M14_AXI_rresp("M14_AXI_rresp"), M14_AXI_rlast("M14_AXI_rlast"), M14_AXI_rvalid("M14_AXI_rvalid"), M14_AXI_rready("M14_AXI_rready"), M15_AXI_awaddr("M15_AXI_awaddr"), M15_AXI_awlen("M15_AXI_awlen"), M15_AXI_awsize("M15_AXI_awsize"), M15_AXI_awburst("M15_AXI_awburst"), M15_AXI_awlock("M15_AXI_awlock"), M15_AXI_awcache("M15_AXI_awcache"), M15_AXI_awprot("M15_AXI_awprot"), M15_AXI_awqos("M15_AXI_awqos"), M15_AXI_awvalid("M15_AXI_awvalid"), M15_AXI_awready("M15_AXI_awready"), M15_AXI_wdata("M15_AXI_wdata"), M15_AXI_wstrb("M15_AXI_wstrb"), M15_AXI_wlast("M15_AXI_wlast"), M15_AXI_wvalid("M15_AXI_wvalid"), M15_AXI_wready("M15_AXI_wready"), M15_AXI_bresp("M15_AXI_bresp"), M15_AXI_bvalid("M15_AXI_bvalid"), M15_AXI_bready("M15_AXI_bready"), M15_AXI_araddr("M15_AXI_araddr"), M15_AXI_arlen("M15_AXI_arlen"), M15_AXI_arsize("M15_AXI_arsize"), M15_AXI_arburst("M15_AXI_arburst"), M15_AXI_arlock("M15_AXI_arlock"), M15_AXI_arcache("M15_AXI_arcache"), M15_AXI_arprot("M15_AXI_arprot"), M15_AXI_arqos("M15_AXI_arqos"), M15_AXI_arvalid("M15_AXI_arvalid"), M15_AXI_arready("M15_AXI_arready"), M15_AXI_rdata("M15_AXI_rdata"), M15_AXI_rresp("M15_AXI_rresp"), M15_AXI_rlast("M15_AXI_rlast"), M15_AXI_rvalid("M15_AXI_rvalid"), M15_AXI_rready("M15_AXI_rready"), M16_AXI_awaddr("M16_AXI_awaddr"), M16_AXI_awlen("M16_AXI_awlen"), M16_AXI_awsize("M16_AXI_awsize"), M16_AXI_awburst("M16_AXI_awburst"), M16_AXI_awlock("M16_AXI_awlock"), M16_AXI_awcache("M16_AXI_awcache"), M16_AXI_awprot("M16_AXI_awprot"), M16_AXI_awqos("M16_AXI_awqos"), M16_AXI_awvalid("M16_AXI_awvalid"), M16_AXI_awready("M16_AXI_awready"), M16_AXI_wdata("M16_AXI_wdata"), M16_AXI_wstrb("M16_AXI_wstrb"), M16_AXI_wlast("M16_AXI_wlast"), M16_AXI_wvalid("M16_AXI_wvalid"), M16_AXI_wready("M16_AXI_wready"), M16_AXI_bresp("M16_AXI_bresp"), M16_AXI_bvalid("M16_AXI_bvalid"), M16_AXI_bready("M16_AXI_bready"), M16_AXI_araddr("M16_AXI_araddr"), M16_AXI_arlen("M16_AXI_arlen"), M16_AXI_arsize("M16_AXI_arsize"), M16_AXI_arburst("M16_AXI_arburst"), M16_AXI_arlock("M16_AXI_arlock"), M16_AXI_arcache("M16_AXI_arcache"), M16_AXI_arprot("M16_AXI_arprot"), M16_AXI_arqos("M16_AXI_arqos"), M16_AXI_arvalid("M16_AXI_arvalid"), M16_AXI_arready("M16_AXI_arready"), M16_AXI_rdata("M16_AXI_rdata"), M16_AXI_rresp("M16_AXI_rresp"), M16_AXI_rlast("M16_AXI_rlast"), M16_AXI_rvalid("M16_AXI_rvalid"), M16_AXI_rready("M16_AXI_rready"), M17_AXI_awaddr("M17_AXI_awaddr"), M17_AXI_awlen("M17_AXI_awlen"), M17_AXI_awsize("M17_AXI_awsize"), M17_AXI_awburst("M17_AXI_awburst"), M17_AXI_awlock("M17_AXI_awlock"), M17_AXI_awcache("M17_AXI_awcache"), M17_AXI_awprot("M17_AXI_awprot"), M17_AXI_awqos("M17_AXI_awqos"), M17_AXI_awvalid("M17_AXI_awvalid"), M17_AXI_awready("M17_AXI_awready"), M17_AXI_wdata("M17_AXI_wdata"), M17_AXI_wstrb("M17_AXI_wstrb"), M17_AXI_wlast("M17_AXI_wlast"), M17_AXI_wvalid("M17_AXI_wvalid"), M17_AXI_wready("M17_AXI_wready"), M17_AXI_bresp("M17_AXI_bresp"), M17_AXI_bvalid("M17_AXI_bvalid"), M17_AXI_bready("M17_AXI_bready"), M17_AXI_araddr("M17_AXI_araddr"), M17_AXI_arlen("M17_AXI_arlen"), M17_AXI_arsize("M17_AXI_arsize"), M17_AXI_arburst("M17_AXI_arburst"), M17_AXI_arlock("M17_AXI_arlock"), M17_AXI_arcache("M17_AXI_arcache"), M17_AXI_arprot("M17_AXI_arprot"), M17_AXI_arqos("M17_AXI_arqos"), M17_AXI_arvalid("M17_AXI_arvalid"), M17_AXI_arready("M17_AXI_arready"), M17_AXI_rdata("M17_AXI_rdata"), M17_AXI_rresp("M17_AXI_rresp"), M17_AXI_rlast("M17_AXI_rlast"), M17_AXI_rvalid("M17_AXI_rvalid"), M17_AXI_rready("M17_AXI_rready"), M18_AXI_awaddr("M18_AXI_awaddr"), M18_AXI_awlen("M18_AXI_awlen"), M18_AXI_awsize("M18_AXI_awsize"), M18_AXI_awburst("M18_AXI_awburst"), M18_AXI_awlock("M18_AXI_awlock"), M18_AXI_awcache("M18_AXI_awcache"), M18_AXI_awprot("M18_AXI_awprot"), M18_AXI_awqos("M18_AXI_awqos"), M18_AXI_awvalid("M18_AXI_awvalid"), M18_AXI_awready("M18_AXI_awready"), M18_AXI_wdata("M18_AXI_wdata"), M18_AXI_wstrb("M18_AXI_wstrb"), M18_AXI_wlast("M18_AXI_wlast"), M18_AXI_wvalid("M18_AXI_wvalid"), M18_AXI_wready("M18_AXI_wready"), M18_AXI_bresp("M18_AXI_bresp"), M18_AXI_bvalid("M18_AXI_bvalid"), M18_AXI_bready("M18_AXI_bready"), M18_AXI_araddr("M18_AXI_araddr"), M18_AXI_arlen("M18_AXI_arlen"), M18_AXI_arsize("M18_AXI_arsize"), M18_AXI_arburst("M18_AXI_arburst"), M18_AXI_arlock("M18_AXI_arlock"), M18_AXI_arcache("M18_AXI_arcache"), M18_AXI_arprot("M18_AXI_arprot"), M18_AXI_arqos("M18_AXI_arqos"), M18_AXI_arvalid("M18_AXI_arvalid"), M18_AXI_arready("M18_AXI_arready"), M18_AXI_rdata("M18_AXI_rdata"), M18_AXI_rresp("M18_AXI_rresp"), M18_AXI_rlast("M18_AXI_rlast"), M18_AXI_rvalid("M18_AXI_rvalid"), M18_AXI_rready("M18_AXI_rready"), M19_AXI_awaddr("M19_AXI_awaddr"), M19_AXI_awlen("M19_AXI_awlen"), M19_AXI_awsize("M19_AXI_awsize"), M19_AXI_awburst("M19_AXI_awburst"), M19_AXI_awlock("M19_AXI_awlock"), M19_AXI_awcache("M19_AXI_awcache"), M19_AXI_awprot("M19_AXI_awprot"), M19_AXI_awqos("M19_AXI_awqos"), M19_AXI_awvalid("M19_AXI_awvalid"), M19_AXI_awready("M19_AXI_awready"), M19_AXI_wdata("M19_AXI_wdata"), M19_AXI_wstrb("M19_AXI_wstrb"), M19_AXI_wlast("M19_AXI_wlast"), M19_AXI_wvalid("M19_AXI_wvalid"), M19_AXI_wready("M19_AXI_wready"), M19_AXI_bresp("M19_AXI_bresp"), M19_AXI_bvalid("M19_AXI_bvalid"), M19_AXI_bready("M19_AXI_bready"), M19_AXI_araddr("M19_AXI_araddr"), M19_AXI_arlen("M19_AXI_arlen"), M19_AXI_arsize("M19_AXI_arsize"), M19_AXI_arburst("M19_AXI_arburst"), M19_AXI_arlock("M19_AXI_arlock"), M19_AXI_arcache("M19_AXI_arcache"), M19_AXI_arprot("M19_AXI_arprot"), M19_AXI_arqos("M19_AXI_arqos"), M19_AXI_arvalid("M19_AXI_arvalid"), M19_AXI_arready("M19_AXI_arready"), M19_AXI_rdata("M19_AXI_rdata"), M19_AXI_rresp("M19_AXI_rresp"), M19_AXI_rlast("M19_AXI_rlast"), M19_AXI_rvalid("M19_AXI_rvalid"), M19_AXI_rready("M19_AXI_rready"), M20_AXI_awaddr("M20_AXI_awaddr"), M20_AXI_awlen("M20_AXI_awlen"), M20_AXI_awsize("M20_AXI_awsize"), M20_AXI_awburst("M20_AXI_awburst"), M20_AXI_awlock("M20_AXI_awlock"), M20_AXI_awcache("M20_AXI_awcache"), M20_AXI_awprot("M20_AXI_awprot"), M20_AXI_awqos("M20_AXI_awqos"), M20_AXI_awvalid("M20_AXI_awvalid"), M20_AXI_awready("M20_AXI_awready"), M20_AXI_wdata("M20_AXI_wdata"), M20_AXI_wstrb("M20_AXI_wstrb"), M20_AXI_wlast("M20_AXI_wlast"), M20_AXI_wvalid("M20_AXI_wvalid"), M20_AXI_wready("M20_AXI_wready"), M20_AXI_bresp("M20_AXI_bresp"), M20_AXI_bvalid("M20_AXI_bvalid"), M20_AXI_bready("M20_AXI_bready"), M20_AXI_araddr("M20_AXI_araddr"), M20_AXI_arlen("M20_AXI_arlen"), M20_AXI_arsize("M20_AXI_arsize"), M20_AXI_arburst("M20_AXI_arburst"), M20_AXI_arlock("M20_AXI_arlock"), M20_AXI_arcache("M20_AXI_arcache"), M20_AXI_arprot("M20_AXI_arprot"), M20_AXI_arqos("M20_AXI_arqos"), M20_AXI_arvalid("M20_AXI_arvalid"), M20_AXI_arready("M20_AXI_arready"), M20_AXI_rdata("M20_AXI_rdata"), M20_AXI_rresp("M20_AXI_rresp"), M20_AXI_rlast("M20_AXI_rlast"), M20_AXI_rvalid("M20_AXI_rvalid"), M20_AXI_rready("M20_AXI_rready"), M21_AXI_awaddr("M21_AXI_awaddr"), M21_AXI_awlen("M21_AXI_awlen"), M21_AXI_awsize("M21_AXI_awsize"), M21_AXI_awburst("M21_AXI_awburst"), M21_AXI_awlock("M21_AXI_awlock"), M21_AXI_awcache("M21_AXI_awcache"), M21_AXI_awprot("M21_AXI_awprot"), M21_AXI_awqos("M21_AXI_awqos"), M21_AXI_awvalid("M21_AXI_awvalid"), M21_AXI_awready("M21_AXI_awready"), M21_AXI_wdata("M21_AXI_wdata"), M21_AXI_wstrb("M21_AXI_wstrb"), M21_AXI_wlast("M21_AXI_wlast"), M21_AXI_wvalid("M21_AXI_wvalid"), M21_AXI_wready("M21_AXI_wready"), M21_AXI_bresp("M21_AXI_bresp"), M21_AXI_bvalid("M21_AXI_bvalid"), M21_AXI_bready("M21_AXI_bready"), M21_AXI_araddr("M21_AXI_araddr"), M21_AXI_arlen("M21_AXI_arlen"), M21_AXI_arsize("M21_AXI_arsize"), M21_AXI_arburst("M21_AXI_arburst"), M21_AXI_arlock("M21_AXI_arlock"), M21_AXI_arcache("M21_AXI_arcache"), M21_AXI_arprot("M21_AXI_arprot"), M21_AXI_arqos("M21_AXI_arqos"), M21_AXI_arvalid("M21_AXI_arvalid"), M21_AXI_arready("M21_AXI_arready"), M21_AXI_rdata("M21_AXI_rdata"), M21_AXI_rresp("M21_AXI_rresp"), M21_AXI_rlast("M21_AXI_rlast"), M21_AXI_rvalid("M21_AXI_rvalid"), M21_AXI_rready("M21_AXI_rready"), M22_AXI_awaddr("M22_AXI_awaddr"), M22_AXI_awlen("M22_AXI_awlen"), M22_AXI_awsize("M22_AXI_awsize"), M22_AXI_awburst("M22_AXI_awburst"), M22_AXI_awlock("M22_AXI_awlock"), M22_AXI_awcache("M22_AXI_awcache"), M22_AXI_awprot("M22_AXI_awprot"), M22_AXI_awqos("M22_AXI_awqos"), M22_AXI_awvalid("M22_AXI_awvalid"), M22_AXI_awready("M22_AXI_awready"), M22_AXI_wdata("M22_AXI_wdata"), M22_AXI_wstrb("M22_AXI_wstrb"), M22_AXI_wlast("M22_AXI_wlast"), M22_AXI_wvalid("M22_AXI_wvalid"), M22_AXI_wready("M22_AXI_wready"), M22_AXI_bresp("M22_AXI_bresp"), M22_AXI_bvalid("M22_AXI_bvalid"), M22_AXI_bready("M22_AXI_bready"), M22_AXI_araddr("M22_AXI_araddr"), M22_AXI_arlen("M22_AXI_arlen"), M22_AXI_arsize("M22_AXI_arsize"), M22_AXI_arburst("M22_AXI_arburst"), M22_AXI_arlock("M22_AXI_arlock"), M22_AXI_arcache("M22_AXI_arcache"), M22_AXI_arprot("M22_AXI_arprot"), M22_AXI_arqos("M22_AXI_arqos"), M22_AXI_arvalid("M22_AXI_arvalid"), M22_AXI_arready("M22_AXI_arready"), M22_AXI_rdata("M22_AXI_rdata"), M22_AXI_rresp("M22_AXI_rresp"), M22_AXI_rlast("M22_AXI_rlast"), M22_AXI_rvalid("M22_AXI_rvalid"), M22_AXI_rready("M22_AXI_rready"), M23_AXI_awaddr("M23_AXI_awaddr"), M23_AXI_awlen("M23_AXI_awlen"), M23_AXI_awsize("M23_AXI_awsize"), M23_AXI_awburst("M23_AXI_awburst"), M23_AXI_awlock("M23_AXI_awlock"), M23_AXI_awcache("M23_AXI_awcache"), M23_AXI_awprot("M23_AXI_awprot"), M23_AXI_awqos("M23_AXI_awqos"), M23_AXI_awvalid("M23_AXI_awvalid"), M23_AXI_awready("M23_AXI_awready"), M23_AXI_wdata("M23_AXI_wdata"), M23_AXI_wstrb("M23_AXI_wstrb"), M23_AXI_wlast("M23_AXI_wlast"), M23_AXI_wvalid("M23_AXI_wvalid"), M23_AXI_wready("M23_AXI_wready"), M23_AXI_bresp("M23_AXI_bresp"), M23_AXI_bvalid("M23_AXI_bvalid"), M23_AXI_bready("M23_AXI_bready"), M23_AXI_araddr("M23_AXI_araddr"), M23_AXI_arlen("M23_AXI_arlen"), M23_AXI_arsize("M23_AXI_arsize"), M23_AXI_arburst("M23_AXI_arburst"), M23_AXI_arlock("M23_AXI_arlock"), M23_AXI_arcache("M23_AXI_arcache"), M23_AXI_arprot("M23_AXI_arprot"), M23_AXI_arqos("M23_AXI_arqos"), M23_AXI_arvalid("M23_AXI_arvalid"), M23_AXI_arready("M23_AXI_arready"), M23_AXI_rdata("M23_AXI_rdata"), M23_AXI_rresp("M23_AXI_rresp"), M23_AXI_rlast("M23_AXI_rlast"), M23_AXI_rvalid("M23_AXI_rvalid"), M23_AXI_rready("M23_AXI_rready")
{

  // initialize pins
  mp_impl->aclk(aclk);
  mp_impl->aresetn(aresetn);

  // initialize transactors
  mp_S00_AXI_transactor = NULL;
  mp_S00_AXI_awlock_converter = NULL;
  mp_S00_AXI_arlock_converter = NULL;
  mp_M00_AXI_transactor = NULL;
  mp_M00_AXI_awlock_converter = NULL;
  mp_M00_AXI_arlock_converter = NULL;
  mp_M01_AXI_transactor = NULL;
  mp_M01_AXI_awlock_converter = NULL;
  mp_M01_AXI_arlock_converter = NULL;
  mp_M02_AXI_transactor = NULL;
  mp_M02_AXI_awlock_converter = NULL;
  mp_M02_AXI_arlock_converter = NULL;
  mp_M03_AXI_transactor = NULL;
  mp_M03_AXI_awlock_converter = NULL;
  mp_M03_AXI_arlock_converter = NULL;
  mp_M04_AXI_transactor = NULL;
  mp_M04_AXI_awlock_converter = NULL;
  mp_M04_AXI_arlock_converter = NULL;
  mp_M05_AXI_transactor = NULL;
  mp_M05_AXI_awlock_converter = NULL;
  mp_M05_AXI_arlock_converter = NULL;
  mp_M06_AXI_transactor = NULL;
  mp_M06_AXI_awlock_converter = NULL;
  mp_M06_AXI_arlock_converter = NULL;
  mp_M07_AXI_transactor = NULL;
  mp_M07_AXI_awlock_converter = NULL;
  mp_M07_AXI_arlock_converter = NULL;
  mp_M08_AXI_transactor = NULL;
  mp_M08_AXI_awlock_converter = NULL;
  mp_M08_AXI_arlock_converter = NULL;
  mp_M09_AXI_transactor = NULL;
  mp_M09_AXI_awlock_converter = NULL;
  mp_M09_AXI_arlock_converter = NULL;
  mp_M10_AXI_transactor = NULL;
  mp_M10_AXI_awlock_converter = NULL;
  mp_M10_AXI_arlock_converter = NULL;
  mp_M11_AXI_transactor = NULL;
  mp_M11_AXI_awlock_converter = NULL;
  mp_M11_AXI_arlock_converter = NULL;
  mp_M12_AXI_transactor = NULL;
  mp_M12_AXI_awlock_converter = NULL;
  mp_M12_AXI_arlock_converter = NULL;
  mp_M13_AXI_transactor = NULL;
  mp_M13_AXI_awlock_converter = NULL;
  mp_M13_AXI_arlock_converter = NULL;
  mp_M14_AXI_transactor = NULL;
  mp_M14_AXI_awlock_converter = NULL;
  mp_M14_AXI_arlock_converter = NULL;
  mp_M15_AXI_transactor = NULL;
  mp_M15_AXI_awlock_converter = NULL;
  mp_M15_AXI_arlock_converter = NULL;
  mp_M16_AXI_transactor = NULL;
  mp_M16_AXI_awlock_converter = NULL;
  mp_M16_AXI_arlock_converter = NULL;
  mp_M17_AXI_transactor = NULL;
  mp_M17_AXI_awlock_converter = NULL;
  mp_M17_AXI_arlock_converter = NULL;
  mp_M18_AXI_transactor = NULL;
  mp_M18_AXI_awlock_converter = NULL;
  mp_M18_AXI_arlock_converter = NULL;
  mp_M19_AXI_transactor = NULL;
  mp_M19_AXI_awlock_converter = NULL;
  mp_M19_AXI_arlock_converter = NULL;
  mp_M20_AXI_transactor = NULL;
  mp_M20_AXI_awlock_converter = NULL;
  mp_M20_AXI_arlock_converter = NULL;
  mp_M21_AXI_transactor = NULL;
  mp_M21_AXI_awlock_converter = NULL;
  mp_M21_AXI_arlock_converter = NULL;
  mp_M22_AXI_transactor = NULL;
  mp_M22_AXI_awlock_converter = NULL;
  mp_M22_AXI_arlock_converter = NULL;
  mp_M23_AXI_transactor = NULL;
  mp_M23_AXI_awlock_converter = NULL;
  mp_M23_AXI_arlock_converter = NULL;

  // initialize socket stubs

}

void Multi_convo_core_smartconnect_0_0::before_end_of_elaboration()
{
  // configure 'S00_AXI' transactor

  if (xsc::utils::xsc_sim_manager::getInstanceParameterInt("Multi_convo_core_smartconnect_0_0", "S00_AXI_TLM_MODE") != 1)
  {
    // Instantiate Socket Stubs

  // 'S00_AXI' transactor parameters
    xsc::common_cpp::properties S00_AXI_transactor_param_props;
    S00_AXI_transactor_param_props.addLong("DATA_WIDTH", "32");
    S00_AXI_transactor_param_props.addLong("FREQ_HZ", "100000000");
    S00_AXI_transactor_param_props.addLong("ID_WIDTH", "0");
    S00_AXI_transactor_param_props.addLong("ADDR_WIDTH", "32");
    S00_AXI_transactor_param_props.addLong("AWUSER_WIDTH", "0");
    S00_AXI_transactor_param_props.addLong("ARUSER_WIDTH", "0");
    S00_AXI_transactor_param_props.addLong("WUSER_WIDTH", "0");
    S00_AXI_transactor_param_props.addLong("RUSER_WIDTH", "0");
    S00_AXI_transactor_param_props.addLong("BUSER_WIDTH", "0");
    S00_AXI_transactor_param_props.addLong("HAS_BURST", "1");
    S00_AXI_transactor_param_props.addLong("HAS_LOCK", "1");
    S00_AXI_transactor_param_props.addLong("HAS_PROT", "1");
    S00_AXI_transactor_param_props.addLong("HAS_CACHE", "1");
    S00_AXI_transactor_param_props.addLong("HAS_QOS", "1");
    S00_AXI_transactor_param_props.addLong("HAS_REGION", "0");
    S00_AXI_transactor_param_props.addLong("HAS_WSTRB", "1");
    S00_AXI_transactor_param_props.addLong("HAS_BRESP", "1");
    S00_AXI_transactor_param_props.addLong("HAS_RRESP", "1");
    S00_AXI_transactor_param_props.addLong("SUPPORTS_NARROW_BURST", "0");
    S00_AXI_transactor_param_props.addLong("NUM_READ_OUTSTANDING", "2");
    S00_AXI_transactor_param_props.addLong("NUM_WRITE_OUTSTANDING", "2");
    S00_AXI_transactor_param_props.addLong("MAX_BURST_LENGTH", "32");
    S00_AXI_transactor_param_props.addLong("NUM_READ_THREADS", "1");
    S00_AXI_transactor_param_props.addLong("NUM_WRITE_THREADS", "1");
    S00_AXI_transactor_param_props.addLong("RUSER_BITS_PER_BYTE", "0");
    S00_AXI_transactor_param_props.addLong("WUSER_BITS_PER_BYTE", "0");
    S00_AXI_transactor_param_props.addLong("HAS_SIZE", "1");
    S00_AXI_transactor_param_props.addLong("HAS_RESET", "1");
    S00_AXI_transactor_param_props.addFloat("PHASE", "0.0");
    S00_AXI_transactor_param_props.addString("PROTOCOL", "AXI4");
    S00_AXI_transactor_param_props.addString("READ_WRITE_MODE", "READ_WRITE");
    S00_AXI_transactor_param_props.addString("CLK_DOMAIN", "Multi_convo_core_processing_system7_0_0_FCLK_CLK0");

    mp_S00_AXI_transactor = new xtlm::xaximm_pin2xtlm_t<32,32,1,1,1,1,1,1>("S00_AXI_transactor", S00_AXI_transactor_param_props);

    // S00_AXI' transactor ports

    mp_S00_AXI_transactor->AWADDR(S00_AXI_awaddr);
    mp_S00_AXI_transactor->AWLEN(S00_AXI_awlen);
    mp_S00_AXI_transactor->AWSIZE(S00_AXI_awsize);
    mp_S00_AXI_transactor->AWBURST(S00_AXI_awburst);
    mp_S00_AXI_awlock_converter = new xsc::common::vectorN2scalar_converter<1>("S00_AXI_awlock_converter");
    mp_S00_AXI_awlock_converter->vector_in(S00_AXI_awlock);
    mp_S00_AXI_awlock_converter->scalar_out(m_S00_AXI_awlock_converter_signal);
    mp_S00_AXI_transactor->AWLOCK(m_S00_AXI_awlock_converter_signal);
    mp_S00_AXI_transactor->AWCACHE(S00_AXI_awcache);
    mp_S00_AXI_transactor->AWPROT(S00_AXI_awprot);
    mp_S00_AXI_transactor->AWQOS(S00_AXI_awqos);
    mp_S00_AXI_transactor->AWVALID(S00_AXI_awvalid);
    mp_S00_AXI_transactor->AWREADY(S00_AXI_awready);
    mp_S00_AXI_transactor->WDATA(S00_AXI_wdata);
    mp_S00_AXI_transactor->WSTRB(S00_AXI_wstrb);
    mp_S00_AXI_transactor->WLAST(S00_AXI_wlast);
    mp_S00_AXI_transactor->WVALID(S00_AXI_wvalid);
    mp_S00_AXI_transactor->WREADY(S00_AXI_wready);
    mp_S00_AXI_transactor->BRESP(S00_AXI_bresp);
    mp_S00_AXI_transactor->BVALID(S00_AXI_bvalid);
    mp_S00_AXI_transactor->BREADY(S00_AXI_bready);
    mp_S00_AXI_transactor->ARADDR(S00_AXI_araddr);
    mp_S00_AXI_transactor->ARLEN(S00_AXI_arlen);
    mp_S00_AXI_transactor->ARSIZE(S00_AXI_arsize);
    mp_S00_AXI_transactor->ARBURST(S00_AXI_arburst);
    mp_S00_AXI_arlock_converter = new xsc::common::vectorN2scalar_converter<1>("S00_AXI_arlock_converter");
    mp_S00_AXI_arlock_converter->vector_in(S00_AXI_arlock);
    mp_S00_AXI_arlock_converter->scalar_out(m_S00_AXI_arlock_converter_signal);
    mp_S00_AXI_transactor->ARLOCK(m_S00_AXI_arlock_converter_signal);
    mp_S00_AXI_transactor->ARCACHE(S00_AXI_arcache);
    mp_S00_AXI_transactor->ARPROT(S00_AXI_arprot);
    mp_S00_AXI_transactor->ARQOS(S00_AXI_arqos);
    mp_S00_AXI_transactor->ARVALID(S00_AXI_arvalid);
    mp_S00_AXI_transactor->ARREADY(S00_AXI_arready);
    mp_S00_AXI_transactor->RDATA(S00_AXI_rdata);
    mp_S00_AXI_transactor->RRESP(S00_AXI_rresp);
    mp_S00_AXI_transactor->RLAST(S00_AXI_rlast);
    mp_S00_AXI_transactor->RVALID(S00_AXI_rvalid);
    mp_S00_AXI_transactor->RREADY(S00_AXI_rready);
    mp_S00_AXI_transactor->CLK(aclk);
    mp_S00_AXI_transactor->RST(aresetn);

    // S00_AXI' transactor sockets

    mp_impl->S00_AXI_tlm_aximm_read_socket->bind(*(mp_S00_AXI_transactor->rd_socket));
    mp_impl->S00_AXI_tlm_aximm_write_socket->bind(*(mp_S00_AXI_transactor->wr_socket));
  }
  else
  {
  }

  // configure 'M00_AXI' transactor

  if (xsc::utils::xsc_sim_manager::getInstanceParameterInt("Multi_convo_core_smartconnect_0_0", "M00_AXI_TLM_MODE") != 1)
  {
    // Instantiate Socket Stubs

  // 'M00_AXI' transactor parameters
    xsc::common_cpp::properties M00_AXI_transactor_param_props;
    M00_AXI_transactor_param_props.addLong("DATA_WIDTH", "32");
    M00_AXI_transactor_param_props.addLong("FREQ_HZ", "100000000");
    M00_AXI_transactor_param_props.addLong("ID_WIDTH", "0");
    M00_AXI_transactor_param_props.addLong("ADDR_WIDTH", "12");
    M00_AXI_transactor_param_props.addLong("AWUSER_WIDTH", "0");
    M00_AXI_transactor_param_props.addLong("ARUSER_WIDTH", "0");
    M00_AXI_transactor_param_props.addLong("WUSER_WIDTH", "0");
    M00_AXI_transactor_param_props.addLong("RUSER_WIDTH", "0");
    M00_AXI_transactor_param_props.addLong("BUSER_WIDTH", "0");
    M00_AXI_transactor_param_props.addLong("HAS_BURST", "1");
    M00_AXI_transactor_param_props.addLong("HAS_LOCK", "1");
    M00_AXI_transactor_param_props.addLong("HAS_PROT", "1");
    M00_AXI_transactor_param_props.addLong("HAS_CACHE", "1");
    M00_AXI_transactor_param_props.addLong("HAS_QOS", "1");
    M00_AXI_transactor_param_props.addLong("HAS_REGION", "0");
    M00_AXI_transactor_param_props.addLong("HAS_WSTRB", "1");
    M00_AXI_transactor_param_props.addLong("HAS_BRESP", "1");
    M00_AXI_transactor_param_props.addLong("HAS_RRESP", "1");
    M00_AXI_transactor_param_props.addLong("SUPPORTS_NARROW_BURST", "0");
    M00_AXI_transactor_param_props.addLong("NUM_READ_OUTSTANDING", "2");
    M00_AXI_transactor_param_props.addLong("NUM_WRITE_OUTSTANDING", "2");
    M00_AXI_transactor_param_props.addLong("MAX_BURST_LENGTH", "256");
    M00_AXI_transactor_param_props.addLong("NUM_READ_THREADS", "1");
    M00_AXI_transactor_param_props.addLong("NUM_WRITE_THREADS", "1");
    M00_AXI_transactor_param_props.addLong("RUSER_BITS_PER_BYTE", "0");
    M00_AXI_transactor_param_props.addLong("WUSER_BITS_PER_BYTE", "0");
    M00_AXI_transactor_param_props.addLong("HAS_SIZE", "1");
    M00_AXI_transactor_param_props.addLong("HAS_RESET", "1");
    M00_AXI_transactor_param_props.addFloat("PHASE", "0.0");
    M00_AXI_transactor_param_props.addString("PROTOCOL", "AXI4");
    M00_AXI_transactor_param_props.addString("READ_WRITE_MODE", "READ_WRITE");
    M00_AXI_transactor_param_props.addString("CLK_DOMAIN", "Multi_convo_core_processing_system7_0_0_FCLK_CLK0");

    mp_M00_AXI_transactor = new xtlm::xaximm_xtlm2pin_t<32,12,1,1,1,1,1,1>("M00_AXI_transactor", M00_AXI_transactor_param_props);

    // M00_AXI' transactor ports

    mp_M00_AXI_transactor->AWADDR(M00_AXI_awaddr);
    mp_M00_AXI_transactor->AWLEN(M00_AXI_awlen);
    mp_M00_AXI_transactor->AWSIZE(M00_AXI_awsize);
    mp_M00_AXI_transactor->AWBURST(M00_AXI_awburst);
    mp_M00_AXI_awlock_converter = new xsc::common::scalar2vectorN_converter<1>("M00_AXI_awlock_converter");
    mp_M00_AXI_awlock_converter->scalar_in(m_M00_AXI_awlock_converter_signal);
    mp_M00_AXI_awlock_converter->vector_out(M00_AXI_awlock);
    mp_M00_AXI_transactor->AWLOCK(m_M00_AXI_awlock_converter_signal);
    mp_M00_AXI_transactor->AWCACHE(M00_AXI_awcache);
    mp_M00_AXI_transactor->AWPROT(M00_AXI_awprot);
    mp_M00_AXI_transactor->AWQOS(M00_AXI_awqos);
    mp_M00_AXI_transactor->AWVALID(M00_AXI_awvalid);
    mp_M00_AXI_transactor->AWREADY(M00_AXI_awready);
    mp_M00_AXI_transactor->WDATA(M00_AXI_wdata);
    mp_M00_AXI_transactor->WSTRB(M00_AXI_wstrb);
    mp_M00_AXI_transactor->WLAST(M00_AXI_wlast);
    mp_M00_AXI_transactor->WVALID(M00_AXI_wvalid);
    mp_M00_AXI_transactor->WREADY(M00_AXI_wready);
    mp_M00_AXI_transactor->BRESP(M00_AXI_bresp);
    mp_M00_AXI_transactor->BVALID(M00_AXI_bvalid);
    mp_M00_AXI_transactor->BREADY(M00_AXI_bready);
    mp_M00_AXI_transactor->ARADDR(M00_AXI_araddr);
    mp_M00_AXI_transactor->ARLEN(M00_AXI_arlen);
    mp_M00_AXI_transactor->ARSIZE(M00_AXI_arsize);
    mp_M00_AXI_transactor->ARBURST(M00_AXI_arburst);
    mp_M00_AXI_arlock_converter = new xsc::common::scalar2vectorN_converter<1>("M00_AXI_arlock_converter");
    mp_M00_AXI_arlock_converter->scalar_in(m_M00_AXI_arlock_converter_signal);
    mp_M00_AXI_arlock_converter->vector_out(M00_AXI_arlock);
    mp_M00_AXI_transactor->ARLOCK(m_M00_AXI_arlock_converter_signal);
    mp_M00_AXI_transactor->ARCACHE(M00_AXI_arcache);
    mp_M00_AXI_transactor->ARPROT(M00_AXI_arprot);
    mp_M00_AXI_transactor->ARQOS(M00_AXI_arqos);
    mp_M00_AXI_transactor->ARVALID(M00_AXI_arvalid);
    mp_M00_AXI_transactor->ARREADY(M00_AXI_arready);
    mp_M00_AXI_transactor->RDATA(M00_AXI_rdata);
    mp_M00_AXI_transactor->RRESP(M00_AXI_rresp);
    mp_M00_AXI_transactor->RLAST(M00_AXI_rlast);
    mp_M00_AXI_transactor->RVALID(M00_AXI_rvalid);
    mp_M00_AXI_transactor->RREADY(M00_AXI_rready);
    mp_M00_AXI_transactor->CLK(aclk);
    mp_M00_AXI_transactor->RST(aresetn);

    // M00_AXI' transactor sockets

    mp_impl->M00_AXI_tlm_aximm_read_socket->bind(*(mp_M00_AXI_transactor->rd_socket));
    mp_impl->M00_AXI_tlm_aximm_write_socket->bind(*(mp_M00_AXI_transactor->wr_socket));
  }
  else
  {
  }

  // configure 'M01_AXI' transactor

  if (xsc::utils::xsc_sim_manager::getInstanceParameterInt("Multi_convo_core_smartconnect_0_0", "M01_AXI_TLM_MODE") != 1)
  {
    // Instantiate Socket Stubs

  // 'M01_AXI' transactor parameters
    xsc::common_cpp::properties M01_AXI_transactor_param_props;
    M01_AXI_transactor_param_props.addLong("DATA_WIDTH", "32");
    M01_AXI_transactor_param_props.addLong("FREQ_HZ", "100000000");
    M01_AXI_transactor_param_props.addLong("ID_WIDTH", "0");
    M01_AXI_transactor_param_props.addLong("ADDR_WIDTH", "12");
    M01_AXI_transactor_param_props.addLong("AWUSER_WIDTH", "0");
    M01_AXI_transactor_param_props.addLong("ARUSER_WIDTH", "0");
    M01_AXI_transactor_param_props.addLong("WUSER_WIDTH", "0");
    M01_AXI_transactor_param_props.addLong("RUSER_WIDTH", "0");
    M01_AXI_transactor_param_props.addLong("BUSER_WIDTH", "0");
    M01_AXI_transactor_param_props.addLong("HAS_BURST", "1");
    M01_AXI_transactor_param_props.addLong("HAS_LOCK", "1");
    M01_AXI_transactor_param_props.addLong("HAS_PROT", "1");
    M01_AXI_transactor_param_props.addLong("HAS_CACHE", "1");
    M01_AXI_transactor_param_props.addLong("HAS_QOS", "1");
    M01_AXI_transactor_param_props.addLong("HAS_REGION", "0");
    M01_AXI_transactor_param_props.addLong("HAS_WSTRB", "1");
    M01_AXI_transactor_param_props.addLong("HAS_BRESP", "1");
    M01_AXI_transactor_param_props.addLong("HAS_RRESP", "1");
    M01_AXI_transactor_param_props.addLong("SUPPORTS_NARROW_BURST", "0");
    M01_AXI_transactor_param_props.addLong("NUM_READ_OUTSTANDING", "2");
    M01_AXI_transactor_param_props.addLong("NUM_WRITE_OUTSTANDING", "2");
    M01_AXI_transactor_param_props.addLong("MAX_BURST_LENGTH", "256");
    M01_AXI_transactor_param_props.addLong("NUM_READ_THREADS", "1");
    M01_AXI_transactor_param_props.addLong("NUM_WRITE_THREADS", "1");
    M01_AXI_transactor_param_props.addLong("RUSER_BITS_PER_BYTE", "0");
    M01_AXI_transactor_param_props.addLong("WUSER_BITS_PER_BYTE", "0");
    M01_AXI_transactor_param_props.addLong("HAS_SIZE", "1");
    M01_AXI_transactor_param_props.addLong("HAS_RESET", "1");
    M01_AXI_transactor_param_props.addFloat("PHASE", "0.0");
    M01_AXI_transactor_param_props.addString("PROTOCOL", "AXI4");
    M01_AXI_transactor_param_props.addString("READ_WRITE_MODE", "READ_WRITE");
    M01_AXI_transactor_param_props.addString("CLK_DOMAIN", "Multi_convo_core_processing_system7_0_0_FCLK_CLK0");

    mp_M01_AXI_transactor = new xtlm::xaximm_xtlm2pin_t<32,12,1,1,1,1,1,1>("M01_AXI_transactor", M01_AXI_transactor_param_props);

    // M01_AXI' transactor ports

    mp_M01_AXI_transactor->AWADDR(M01_AXI_awaddr);
    mp_M01_AXI_transactor->AWLEN(M01_AXI_awlen);
    mp_M01_AXI_transactor->AWSIZE(M01_AXI_awsize);
    mp_M01_AXI_transactor->AWBURST(M01_AXI_awburst);
    mp_M01_AXI_awlock_converter = new xsc::common::scalar2vectorN_converter<1>("M01_AXI_awlock_converter");
    mp_M01_AXI_awlock_converter->scalar_in(m_M01_AXI_awlock_converter_signal);
    mp_M01_AXI_awlock_converter->vector_out(M01_AXI_awlock);
    mp_M01_AXI_transactor->AWLOCK(m_M01_AXI_awlock_converter_signal);
    mp_M01_AXI_transactor->AWCACHE(M01_AXI_awcache);
    mp_M01_AXI_transactor->AWPROT(M01_AXI_awprot);
    mp_M01_AXI_transactor->AWQOS(M01_AXI_awqos);
    mp_M01_AXI_transactor->AWVALID(M01_AXI_awvalid);
    mp_M01_AXI_transactor->AWREADY(M01_AXI_awready);
    mp_M01_AXI_transactor->WDATA(M01_AXI_wdata);
    mp_M01_AXI_transactor->WSTRB(M01_AXI_wstrb);
    mp_M01_AXI_transactor->WLAST(M01_AXI_wlast);
    mp_M01_AXI_transactor->WVALID(M01_AXI_wvalid);
    mp_M01_AXI_transactor->WREADY(M01_AXI_wready);
    mp_M01_AXI_transactor->BRESP(M01_AXI_bresp);
    mp_M01_AXI_transactor->BVALID(M01_AXI_bvalid);
    mp_M01_AXI_transactor->BREADY(M01_AXI_bready);
    mp_M01_AXI_transactor->ARADDR(M01_AXI_araddr);
    mp_M01_AXI_transactor->ARLEN(M01_AXI_arlen);
    mp_M01_AXI_transactor->ARSIZE(M01_AXI_arsize);
    mp_M01_AXI_transactor->ARBURST(M01_AXI_arburst);
    mp_M01_AXI_arlock_converter = new xsc::common::scalar2vectorN_converter<1>("M01_AXI_arlock_converter");
    mp_M01_AXI_arlock_converter->scalar_in(m_M01_AXI_arlock_converter_signal);
    mp_M01_AXI_arlock_converter->vector_out(M01_AXI_arlock);
    mp_M01_AXI_transactor->ARLOCK(m_M01_AXI_arlock_converter_signal);
    mp_M01_AXI_transactor->ARCACHE(M01_AXI_arcache);
    mp_M01_AXI_transactor->ARPROT(M01_AXI_arprot);
    mp_M01_AXI_transactor->ARQOS(M01_AXI_arqos);
    mp_M01_AXI_transactor->ARVALID(M01_AXI_arvalid);
    mp_M01_AXI_transactor->ARREADY(M01_AXI_arready);
    mp_M01_AXI_transactor->RDATA(M01_AXI_rdata);
    mp_M01_AXI_transactor->RRESP(M01_AXI_rresp);
    mp_M01_AXI_transactor->RLAST(M01_AXI_rlast);
    mp_M01_AXI_transactor->RVALID(M01_AXI_rvalid);
    mp_M01_AXI_transactor->RREADY(M01_AXI_rready);
    mp_M01_AXI_transactor->CLK(aclk);
    mp_M01_AXI_transactor->RST(aresetn);

    // M01_AXI' transactor sockets

    mp_impl->M01_AXI_tlm_aximm_read_socket->bind(*(mp_M01_AXI_transactor->rd_socket));
    mp_impl->M01_AXI_tlm_aximm_write_socket->bind(*(mp_M01_AXI_transactor->wr_socket));
  }
  else
  {
  }

  // configure 'M02_AXI' transactor

  if (xsc::utils::xsc_sim_manager::getInstanceParameterInt("Multi_convo_core_smartconnect_0_0", "M02_AXI_TLM_MODE") != 1)
  {
    // Instantiate Socket Stubs

  // 'M02_AXI' transactor parameters
    xsc::common_cpp::properties M02_AXI_transactor_param_props;
    M02_AXI_transactor_param_props.addLong("DATA_WIDTH", "32");
    M02_AXI_transactor_param_props.addLong("FREQ_HZ", "100000000");
    M02_AXI_transactor_param_props.addLong("ID_WIDTH", "0");
    M02_AXI_transactor_param_props.addLong("ADDR_WIDTH", "12");
    M02_AXI_transactor_param_props.addLong("AWUSER_WIDTH", "0");
    M02_AXI_transactor_param_props.addLong("ARUSER_WIDTH", "0");
    M02_AXI_transactor_param_props.addLong("WUSER_WIDTH", "0");
    M02_AXI_transactor_param_props.addLong("RUSER_WIDTH", "0");
    M02_AXI_transactor_param_props.addLong("BUSER_WIDTH", "0");
    M02_AXI_transactor_param_props.addLong("HAS_BURST", "1");
    M02_AXI_transactor_param_props.addLong("HAS_LOCK", "1");
    M02_AXI_transactor_param_props.addLong("HAS_PROT", "1");
    M02_AXI_transactor_param_props.addLong("HAS_CACHE", "1");
    M02_AXI_transactor_param_props.addLong("HAS_QOS", "1");
    M02_AXI_transactor_param_props.addLong("HAS_REGION", "0");
    M02_AXI_transactor_param_props.addLong("HAS_WSTRB", "1");
    M02_AXI_transactor_param_props.addLong("HAS_BRESP", "1");
    M02_AXI_transactor_param_props.addLong("HAS_RRESP", "1");
    M02_AXI_transactor_param_props.addLong("SUPPORTS_NARROW_BURST", "0");
    M02_AXI_transactor_param_props.addLong("NUM_READ_OUTSTANDING", "2");
    M02_AXI_transactor_param_props.addLong("NUM_WRITE_OUTSTANDING", "2");
    M02_AXI_transactor_param_props.addLong("MAX_BURST_LENGTH", "256");
    M02_AXI_transactor_param_props.addLong("NUM_READ_THREADS", "1");
    M02_AXI_transactor_param_props.addLong("NUM_WRITE_THREADS", "1");
    M02_AXI_transactor_param_props.addLong("RUSER_BITS_PER_BYTE", "0");
    M02_AXI_transactor_param_props.addLong("WUSER_BITS_PER_BYTE", "0");
    M02_AXI_transactor_param_props.addLong("HAS_SIZE", "1");
    M02_AXI_transactor_param_props.addLong("HAS_RESET", "1");
    M02_AXI_transactor_param_props.addFloat("PHASE", "0.0");
    M02_AXI_transactor_param_props.addString("PROTOCOL", "AXI4");
    M02_AXI_transactor_param_props.addString("READ_WRITE_MODE", "READ_WRITE");
    M02_AXI_transactor_param_props.addString("CLK_DOMAIN", "Multi_convo_core_processing_system7_0_0_FCLK_CLK0");

    mp_M02_AXI_transactor = new xtlm::xaximm_xtlm2pin_t<32,12,1,1,1,1,1,1>("M02_AXI_transactor", M02_AXI_transactor_param_props);

    // M02_AXI' transactor ports

    mp_M02_AXI_transactor->AWADDR(M02_AXI_awaddr);
    mp_M02_AXI_transactor->AWLEN(M02_AXI_awlen);
    mp_M02_AXI_transactor->AWSIZE(M02_AXI_awsize);
    mp_M02_AXI_transactor->AWBURST(M02_AXI_awburst);
    mp_M02_AXI_awlock_converter = new xsc::common::scalar2vectorN_converter<1>("M02_AXI_awlock_converter");
    mp_M02_AXI_awlock_converter->scalar_in(m_M02_AXI_awlock_converter_signal);
    mp_M02_AXI_awlock_converter->vector_out(M02_AXI_awlock);
    mp_M02_AXI_transactor->AWLOCK(m_M02_AXI_awlock_converter_signal);
    mp_M02_AXI_transactor->AWCACHE(M02_AXI_awcache);
    mp_M02_AXI_transactor->AWPROT(M02_AXI_awprot);
    mp_M02_AXI_transactor->AWQOS(M02_AXI_awqos);
    mp_M02_AXI_transactor->AWVALID(M02_AXI_awvalid);
    mp_M02_AXI_transactor->AWREADY(M02_AXI_awready);
    mp_M02_AXI_transactor->WDATA(M02_AXI_wdata);
    mp_M02_AXI_transactor->WSTRB(M02_AXI_wstrb);
    mp_M02_AXI_transactor->WLAST(M02_AXI_wlast);
    mp_M02_AXI_transactor->WVALID(M02_AXI_wvalid);
    mp_M02_AXI_transactor->WREADY(M02_AXI_wready);
    mp_M02_AXI_transactor->BRESP(M02_AXI_bresp);
    mp_M02_AXI_transactor->BVALID(M02_AXI_bvalid);
    mp_M02_AXI_transactor->BREADY(M02_AXI_bready);
    mp_M02_AXI_transactor->ARADDR(M02_AXI_araddr);
    mp_M02_AXI_transactor->ARLEN(M02_AXI_arlen);
    mp_M02_AXI_transactor->ARSIZE(M02_AXI_arsize);
    mp_M02_AXI_transactor->ARBURST(M02_AXI_arburst);
    mp_M02_AXI_arlock_converter = new xsc::common::scalar2vectorN_converter<1>("M02_AXI_arlock_converter");
    mp_M02_AXI_arlock_converter->scalar_in(m_M02_AXI_arlock_converter_signal);
    mp_M02_AXI_arlock_converter->vector_out(M02_AXI_arlock);
    mp_M02_AXI_transactor->ARLOCK(m_M02_AXI_arlock_converter_signal);
    mp_M02_AXI_transactor->ARCACHE(M02_AXI_arcache);
    mp_M02_AXI_transactor->ARPROT(M02_AXI_arprot);
    mp_M02_AXI_transactor->ARQOS(M02_AXI_arqos);
    mp_M02_AXI_transactor->ARVALID(M02_AXI_arvalid);
    mp_M02_AXI_transactor->ARREADY(M02_AXI_arready);
    mp_M02_AXI_transactor->RDATA(M02_AXI_rdata);
    mp_M02_AXI_transactor->RRESP(M02_AXI_rresp);
    mp_M02_AXI_transactor->RLAST(M02_AXI_rlast);
    mp_M02_AXI_transactor->RVALID(M02_AXI_rvalid);
    mp_M02_AXI_transactor->RREADY(M02_AXI_rready);
    mp_M02_AXI_transactor->CLK(aclk);
    mp_M02_AXI_transactor->RST(aresetn);

    // M02_AXI' transactor sockets

    mp_impl->M02_AXI_tlm_aximm_read_socket->bind(*(mp_M02_AXI_transactor->rd_socket));
    mp_impl->M02_AXI_tlm_aximm_write_socket->bind(*(mp_M02_AXI_transactor->wr_socket));
  }
  else
  {
  }

  // configure 'M03_AXI' transactor

  if (xsc::utils::xsc_sim_manager::getInstanceParameterInt("Multi_convo_core_smartconnect_0_0", "M03_AXI_TLM_MODE") != 1)
  {
    // Instantiate Socket Stubs

  // 'M03_AXI' transactor parameters
    xsc::common_cpp::properties M03_AXI_transactor_param_props;
    M03_AXI_transactor_param_props.addLong("DATA_WIDTH", "32");
    M03_AXI_transactor_param_props.addLong("FREQ_HZ", "100000000");
    M03_AXI_transactor_param_props.addLong("ID_WIDTH", "0");
    M03_AXI_transactor_param_props.addLong("ADDR_WIDTH", "12");
    M03_AXI_transactor_param_props.addLong("AWUSER_WIDTH", "0");
    M03_AXI_transactor_param_props.addLong("ARUSER_WIDTH", "0");
    M03_AXI_transactor_param_props.addLong("WUSER_WIDTH", "0");
    M03_AXI_transactor_param_props.addLong("RUSER_WIDTH", "0");
    M03_AXI_transactor_param_props.addLong("BUSER_WIDTH", "0");
    M03_AXI_transactor_param_props.addLong("HAS_BURST", "1");
    M03_AXI_transactor_param_props.addLong("HAS_LOCK", "1");
    M03_AXI_transactor_param_props.addLong("HAS_PROT", "1");
    M03_AXI_transactor_param_props.addLong("HAS_CACHE", "1");
    M03_AXI_transactor_param_props.addLong("HAS_QOS", "1");
    M03_AXI_transactor_param_props.addLong("HAS_REGION", "0");
    M03_AXI_transactor_param_props.addLong("HAS_WSTRB", "1");
    M03_AXI_transactor_param_props.addLong("HAS_BRESP", "1");
    M03_AXI_transactor_param_props.addLong("HAS_RRESP", "1");
    M03_AXI_transactor_param_props.addLong("SUPPORTS_NARROW_BURST", "0");
    M03_AXI_transactor_param_props.addLong("NUM_READ_OUTSTANDING", "2");
    M03_AXI_transactor_param_props.addLong("NUM_WRITE_OUTSTANDING", "2");
    M03_AXI_transactor_param_props.addLong("MAX_BURST_LENGTH", "256");
    M03_AXI_transactor_param_props.addLong("NUM_READ_THREADS", "1");
    M03_AXI_transactor_param_props.addLong("NUM_WRITE_THREADS", "1");
    M03_AXI_transactor_param_props.addLong("RUSER_BITS_PER_BYTE", "0");
    M03_AXI_transactor_param_props.addLong("WUSER_BITS_PER_BYTE", "0");
    M03_AXI_transactor_param_props.addLong("HAS_SIZE", "1");
    M03_AXI_transactor_param_props.addLong("HAS_RESET", "1");
    M03_AXI_transactor_param_props.addFloat("PHASE", "0.0");
    M03_AXI_transactor_param_props.addString("PROTOCOL", "AXI4");
    M03_AXI_transactor_param_props.addString("READ_WRITE_MODE", "READ_WRITE");
    M03_AXI_transactor_param_props.addString("CLK_DOMAIN", "Multi_convo_core_processing_system7_0_0_FCLK_CLK0");

    mp_M03_AXI_transactor = new xtlm::xaximm_xtlm2pin_t<32,12,1,1,1,1,1,1>("M03_AXI_transactor", M03_AXI_transactor_param_props);

    // M03_AXI' transactor ports

    mp_M03_AXI_transactor->AWADDR(M03_AXI_awaddr);
    mp_M03_AXI_transactor->AWLEN(M03_AXI_awlen);
    mp_M03_AXI_transactor->AWSIZE(M03_AXI_awsize);
    mp_M03_AXI_transactor->AWBURST(M03_AXI_awburst);
    mp_M03_AXI_awlock_converter = new xsc::common::scalar2vectorN_converter<1>("M03_AXI_awlock_converter");
    mp_M03_AXI_awlock_converter->scalar_in(m_M03_AXI_awlock_converter_signal);
    mp_M03_AXI_awlock_converter->vector_out(M03_AXI_awlock);
    mp_M03_AXI_transactor->AWLOCK(m_M03_AXI_awlock_converter_signal);
    mp_M03_AXI_transactor->AWCACHE(M03_AXI_awcache);
    mp_M03_AXI_transactor->AWPROT(M03_AXI_awprot);
    mp_M03_AXI_transactor->AWQOS(M03_AXI_awqos);
    mp_M03_AXI_transactor->AWVALID(M03_AXI_awvalid);
    mp_M03_AXI_transactor->AWREADY(M03_AXI_awready);
    mp_M03_AXI_transactor->WDATA(M03_AXI_wdata);
    mp_M03_AXI_transactor->WSTRB(M03_AXI_wstrb);
    mp_M03_AXI_transactor->WLAST(M03_AXI_wlast);
    mp_M03_AXI_transactor->WVALID(M03_AXI_wvalid);
    mp_M03_AXI_transactor->WREADY(M03_AXI_wready);
    mp_M03_AXI_transactor->BRESP(M03_AXI_bresp);
    mp_M03_AXI_transactor->BVALID(M03_AXI_bvalid);
    mp_M03_AXI_transactor->BREADY(M03_AXI_bready);
    mp_M03_AXI_transactor->ARADDR(M03_AXI_araddr);
    mp_M03_AXI_transactor->ARLEN(M03_AXI_arlen);
    mp_M03_AXI_transactor->ARSIZE(M03_AXI_arsize);
    mp_M03_AXI_transactor->ARBURST(M03_AXI_arburst);
    mp_M03_AXI_arlock_converter = new xsc::common::scalar2vectorN_converter<1>("M03_AXI_arlock_converter");
    mp_M03_AXI_arlock_converter->scalar_in(m_M03_AXI_arlock_converter_signal);
    mp_M03_AXI_arlock_converter->vector_out(M03_AXI_arlock);
    mp_M03_AXI_transactor->ARLOCK(m_M03_AXI_arlock_converter_signal);
    mp_M03_AXI_transactor->ARCACHE(M03_AXI_arcache);
    mp_M03_AXI_transactor->ARPROT(M03_AXI_arprot);
    mp_M03_AXI_transactor->ARQOS(M03_AXI_arqos);
    mp_M03_AXI_transactor->ARVALID(M03_AXI_arvalid);
    mp_M03_AXI_transactor->ARREADY(M03_AXI_arready);
    mp_M03_AXI_transactor->RDATA(M03_AXI_rdata);
    mp_M03_AXI_transactor->RRESP(M03_AXI_rresp);
    mp_M03_AXI_transactor->RLAST(M03_AXI_rlast);
    mp_M03_AXI_transactor->RVALID(M03_AXI_rvalid);
    mp_M03_AXI_transactor->RREADY(M03_AXI_rready);
    mp_M03_AXI_transactor->CLK(aclk);
    mp_M03_AXI_transactor->RST(aresetn);

    // M03_AXI' transactor sockets

    mp_impl->M03_AXI_tlm_aximm_read_socket->bind(*(mp_M03_AXI_transactor->rd_socket));
    mp_impl->M03_AXI_tlm_aximm_write_socket->bind(*(mp_M03_AXI_transactor->wr_socket));
  }
  else
  {
  }

  // configure 'M04_AXI' transactor

  if (xsc::utils::xsc_sim_manager::getInstanceParameterInt("Multi_convo_core_smartconnect_0_0", "M04_AXI_TLM_MODE") != 1)
  {
    // Instantiate Socket Stubs

  // 'M04_AXI' transactor parameters
    xsc::common_cpp::properties M04_AXI_transactor_param_props;
    M04_AXI_transactor_param_props.addLong("DATA_WIDTH", "32");
    M04_AXI_transactor_param_props.addLong("FREQ_HZ", "100000000");
    M04_AXI_transactor_param_props.addLong("ID_WIDTH", "0");
    M04_AXI_transactor_param_props.addLong("ADDR_WIDTH", "12");
    M04_AXI_transactor_param_props.addLong("AWUSER_WIDTH", "0");
    M04_AXI_transactor_param_props.addLong("ARUSER_WIDTH", "0");
    M04_AXI_transactor_param_props.addLong("WUSER_WIDTH", "0");
    M04_AXI_transactor_param_props.addLong("RUSER_WIDTH", "0");
    M04_AXI_transactor_param_props.addLong("BUSER_WIDTH", "0");
    M04_AXI_transactor_param_props.addLong("HAS_BURST", "1");
    M04_AXI_transactor_param_props.addLong("HAS_LOCK", "1");
    M04_AXI_transactor_param_props.addLong("HAS_PROT", "1");
    M04_AXI_transactor_param_props.addLong("HAS_CACHE", "1");
    M04_AXI_transactor_param_props.addLong("HAS_QOS", "1");
    M04_AXI_transactor_param_props.addLong("HAS_REGION", "0");
    M04_AXI_transactor_param_props.addLong("HAS_WSTRB", "1");
    M04_AXI_transactor_param_props.addLong("HAS_BRESP", "1");
    M04_AXI_transactor_param_props.addLong("HAS_RRESP", "1");
    M04_AXI_transactor_param_props.addLong("SUPPORTS_NARROW_BURST", "0");
    M04_AXI_transactor_param_props.addLong("NUM_READ_OUTSTANDING", "2");
    M04_AXI_transactor_param_props.addLong("NUM_WRITE_OUTSTANDING", "2");
    M04_AXI_transactor_param_props.addLong("MAX_BURST_LENGTH", "256");
    M04_AXI_transactor_param_props.addLong("NUM_READ_THREADS", "1");
    M04_AXI_transactor_param_props.addLong("NUM_WRITE_THREADS", "1");
    M04_AXI_transactor_param_props.addLong("RUSER_BITS_PER_BYTE", "0");
    M04_AXI_transactor_param_props.addLong("WUSER_BITS_PER_BYTE", "0");
    M04_AXI_transactor_param_props.addLong("HAS_SIZE", "1");
    M04_AXI_transactor_param_props.addLong("HAS_RESET", "1");
    M04_AXI_transactor_param_props.addFloat("PHASE", "0.0");
    M04_AXI_transactor_param_props.addString("PROTOCOL", "AXI4");
    M04_AXI_transactor_param_props.addString("READ_WRITE_MODE", "READ_WRITE");
    M04_AXI_transactor_param_props.addString("CLK_DOMAIN", "Multi_convo_core_processing_system7_0_0_FCLK_CLK0");

    mp_M04_AXI_transactor = new xtlm::xaximm_xtlm2pin_t<32,12,1,1,1,1,1,1>("M04_AXI_transactor", M04_AXI_transactor_param_props);

    // M04_AXI' transactor ports

    mp_M04_AXI_transactor->AWADDR(M04_AXI_awaddr);
    mp_M04_AXI_transactor->AWLEN(M04_AXI_awlen);
    mp_M04_AXI_transactor->AWSIZE(M04_AXI_awsize);
    mp_M04_AXI_transactor->AWBURST(M04_AXI_awburst);
    mp_M04_AXI_awlock_converter = new xsc::common::scalar2vectorN_converter<1>("M04_AXI_awlock_converter");
    mp_M04_AXI_awlock_converter->scalar_in(m_M04_AXI_awlock_converter_signal);
    mp_M04_AXI_awlock_converter->vector_out(M04_AXI_awlock);
    mp_M04_AXI_transactor->AWLOCK(m_M04_AXI_awlock_converter_signal);
    mp_M04_AXI_transactor->AWCACHE(M04_AXI_awcache);
    mp_M04_AXI_transactor->AWPROT(M04_AXI_awprot);
    mp_M04_AXI_transactor->AWQOS(M04_AXI_awqos);
    mp_M04_AXI_transactor->AWVALID(M04_AXI_awvalid);
    mp_M04_AXI_transactor->AWREADY(M04_AXI_awready);
    mp_M04_AXI_transactor->WDATA(M04_AXI_wdata);
    mp_M04_AXI_transactor->WSTRB(M04_AXI_wstrb);
    mp_M04_AXI_transactor->WLAST(M04_AXI_wlast);
    mp_M04_AXI_transactor->WVALID(M04_AXI_wvalid);
    mp_M04_AXI_transactor->WREADY(M04_AXI_wready);
    mp_M04_AXI_transactor->BRESP(M04_AXI_bresp);
    mp_M04_AXI_transactor->BVALID(M04_AXI_bvalid);
    mp_M04_AXI_transactor->BREADY(M04_AXI_bready);
    mp_M04_AXI_transactor->ARADDR(M04_AXI_araddr);
    mp_M04_AXI_transactor->ARLEN(M04_AXI_arlen);
    mp_M04_AXI_transactor->ARSIZE(M04_AXI_arsize);
    mp_M04_AXI_transactor->ARBURST(M04_AXI_arburst);
    mp_M04_AXI_arlock_converter = new xsc::common::scalar2vectorN_converter<1>("M04_AXI_arlock_converter");
    mp_M04_AXI_arlock_converter->scalar_in(m_M04_AXI_arlock_converter_signal);
    mp_M04_AXI_arlock_converter->vector_out(M04_AXI_arlock);
    mp_M04_AXI_transactor->ARLOCK(m_M04_AXI_arlock_converter_signal);
    mp_M04_AXI_transactor->ARCACHE(M04_AXI_arcache);
    mp_M04_AXI_transactor->ARPROT(M04_AXI_arprot);
    mp_M04_AXI_transactor->ARQOS(M04_AXI_arqos);
    mp_M04_AXI_transactor->ARVALID(M04_AXI_arvalid);
    mp_M04_AXI_transactor->ARREADY(M04_AXI_arready);
    mp_M04_AXI_transactor->RDATA(M04_AXI_rdata);
    mp_M04_AXI_transactor->RRESP(M04_AXI_rresp);
    mp_M04_AXI_transactor->RLAST(M04_AXI_rlast);
    mp_M04_AXI_transactor->RVALID(M04_AXI_rvalid);
    mp_M04_AXI_transactor->RREADY(M04_AXI_rready);
    mp_M04_AXI_transactor->CLK(aclk);
    mp_M04_AXI_transactor->RST(aresetn);

    // M04_AXI' transactor sockets

    mp_impl->M04_AXI_tlm_aximm_read_socket->bind(*(mp_M04_AXI_transactor->rd_socket));
    mp_impl->M04_AXI_tlm_aximm_write_socket->bind(*(mp_M04_AXI_transactor->wr_socket));
  }
  else
  {
  }

  // configure 'M05_AXI' transactor

  if (xsc::utils::xsc_sim_manager::getInstanceParameterInt("Multi_convo_core_smartconnect_0_0", "M05_AXI_TLM_MODE") != 1)
  {
    // Instantiate Socket Stubs

  // 'M05_AXI' transactor parameters
    xsc::common_cpp::properties M05_AXI_transactor_param_props;
    M05_AXI_transactor_param_props.addLong("DATA_WIDTH", "32");
    M05_AXI_transactor_param_props.addLong("FREQ_HZ", "100000000");
    M05_AXI_transactor_param_props.addLong("ID_WIDTH", "0");
    M05_AXI_transactor_param_props.addLong("ADDR_WIDTH", "12");
    M05_AXI_transactor_param_props.addLong("AWUSER_WIDTH", "0");
    M05_AXI_transactor_param_props.addLong("ARUSER_WIDTH", "0");
    M05_AXI_transactor_param_props.addLong("WUSER_WIDTH", "0");
    M05_AXI_transactor_param_props.addLong("RUSER_WIDTH", "0");
    M05_AXI_transactor_param_props.addLong("BUSER_WIDTH", "0");
    M05_AXI_transactor_param_props.addLong("HAS_BURST", "1");
    M05_AXI_transactor_param_props.addLong("HAS_LOCK", "1");
    M05_AXI_transactor_param_props.addLong("HAS_PROT", "1");
    M05_AXI_transactor_param_props.addLong("HAS_CACHE", "1");
    M05_AXI_transactor_param_props.addLong("HAS_QOS", "1");
    M05_AXI_transactor_param_props.addLong("HAS_REGION", "0");
    M05_AXI_transactor_param_props.addLong("HAS_WSTRB", "1");
    M05_AXI_transactor_param_props.addLong("HAS_BRESP", "1");
    M05_AXI_transactor_param_props.addLong("HAS_RRESP", "1");
    M05_AXI_transactor_param_props.addLong("SUPPORTS_NARROW_BURST", "0");
    M05_AXI_transactor_param_props.addLong("NUM_READ_OUTSTANDING", "2");
    M05_AXI_transactor_param_props.addLong("NUM_WRITE_OUTSTANDING", "2");
    M05_AXI_transactor_param_props.addLong("MAX_BURST_LENGTH", "256");
    M05_AXI_transactor_param_props.addLong("NUM_READ_THREADS", "1");
    M05_AXI_transactor_param_props.addLong("NUM_WRITE_THREADS", "1");
    M05_AXI_transactor_param_props.addLong("RUSER_BITS_PER_BYTE", "0");
    M05_AXI_transactor_param_props.addLong("WUSER_BITS_PER_BYTE", "0");
    M05_AXI_transactor_param_props.addLong("HAS_SIZE", "1");
    M05_AXI_transactor_param_props.addLong("HAS_RESET", "1");
    M05_AXI_transactor_param_props.addFloat("PHASE", "0.0");
    M05_AXI_transactor_param_props.addString("PROTOCOL", "AXI4");
    M05_AXI_transactor_param_props.addString("READ_WRITE_MODE", "READ_WRITE");
    M05_AXI_transactor_param_props.addString("CLK_DOMAIN", "Multi_convo_core_processing_system7_0_0_FCLK_CLK0");

    mp_M05_AXI_transactor = new xtlm::xaximm_xtlm2pin_t<32,12,1,1,1,1,1,1>("M05_AXI_transactor", M05_AXI_transactor_param_props);

    // M05_AXI' transactor ports

    mp_M05_AXI_transactor->AWADDR(M05_AXI_awaddr);
    mp_M05_AXI_transactor->AWLEN(M05_AXI_awlen);
    mp_M05_AXI_transactor->AWSIZE(M05_AXI_awsize);
    mp_M05_AXI_transactor->AWBURST(M05_AXI_awburst);
    mp_M05_AXI_awlock_converter = new xsc::common::scalar2vectorN_converter<1>("M05_AXI_awlock_converter");
    mp_M05_AXI_awlock_converter->scalar_in(m_M05_AXI_awlock_converter_signal);
    mp_M05_AXI_awlock_converter->vector_out(M05_AXI_awlock);
    mp_M05_AXI_transactor->AWLOCK(m_M05_AXI_awlock_converter_signal);
    mp_M05_AXI_transactor->AWCACHE(M05_AXI_awcache);
    mp_M05_AXI_transactor->AWPROT(M05_AXI_awprot);
    mp_M05_AXI_transactor->AWQOS(M05_AXI_awqos);
    mp_M05_AXI_transactor->AWVALID(M05_AXI_awvalid);
    mp_M05_AXI_transactor->AWREADY(M05_AXI_awready);
    mp_M05_AXI_transactor->WDATA(M05_AXI_wdata);
    mp_M05_AXI_transactor->WSTRB(M05_AXI_wstrb);
    mp_M05_AXI_transactor->WLAST(M05_AXI_wlast);
    mp_M05_AXI_transactor->WVALID(M05_AXI_wvalid);
    mp_M05_AXI_transactor->WREADY(M05_AXI_wready);
    mp_M05_AXI_transactor->BRESP(M05_AXI_bresp);
    mp_M05_AXI_transactor->BVALID(M05_AXI_bvalid);
    mp_M05_AXI_transactor->BREADY(M05_AXI_bready);
    mp_M05_AXI_transactor->ARADDR(M05_AXI_araddr);
    mp_M05_AXI_transactor->ARLEN(M05_AXI_arlen);
    mp_M05_AXI_transactor->ARSIZE(M05_AXI_arsize);
    mp_M05_AXI_transactor->ARBURST(M05_AXI_arburst);
    mp_M05_AXI_arlock_converter = new xsc::common::scalar2vectorN_converter<1>("M05_AXI_arlock_converter");
    mp_M05_AXI_arlock_converter->scalar_in(m_M05_AXI_arlock_converter_signal);
    mp_M05_AXI_arlock_converter->vector_out(M05_AXI_arlock);
    mp_M05_AXI_transactor->ARLOCK(m_M05_AXI_arlock_converter_signal);
    mp_M05_AXI_transactor->ARCACHE(M05_AXI_arcache);
    mp_M05_AXI_transactor->ARPROT(M05_AXI_arprot);
    mp_M05_AXI_transactor->ARQOS(M05_AXI_arqos);
    mp_M05_AXI_transactor->ARVALID(M05_AXI_arvalid);
    mp_M05_AXI_transactor->ARREADY(M05_AXI_arready);
    mp_M05_AXI_transactor->RDATA(M05_AXI_rdata);
    mp_M05_AXI_transactor->RRESP(M05_AXI_rresp);
    mp_M05_AXI_transactor->RLAST(M05_AXI_rlast);
    mp_M05_AXI_transactor->RVALID(M05_AXI_rvalid);
    mp_M05_AXI_transactor->RREADY(M05_AXI_rready);
    mp_M05_AXI_transactor->CLK(aclk);
    mp_M05_AXI_transactor->RST(aresetn);

    // M05_AXI' transactor sockets

    mp_impl->M05_AXI_tlm_aximm_read_socket->bind(*(mp_M05_AXI_transactor->rd_socket));
    mp_impl->M05_AXI_tlm_aximm_write_socket->bind(*(mp_M05_AXI_transactor->wr_socket));
  }
  else
  {
  }

  // configure 'M06_AXI' transactor

  if (xsc::utils::xsc_sim_manager::getInstanceParameterInt("Multi_convo_core_smartconnect_0_0", "M06_AXI_TLM_MODE") != 1)
  {
    // Instantiate Socket Stubs

  // 'M06_AXI' transactor parameters
    xsc::common_cpp::properties M06_AXI_transactor_param_props;
    M06_AXI_transactor_param_props.addLong("DATA_WIDTH", "32");
    M06_AXI_transactor_param_props.addLong("FREQ_HZ", "100000000");
    M06_AXI_transactor_param_props.addLong("ID_WIDTH", "0");
    M06_AXI_transactor_param_props.addLong("ADDR_WIDTH", "12");
    M06_AXI_transactor_param_props.addLong("AWUSER_WIDTH", "0");
    M06_AXI_transactor_param_props.addLong("ARUSER_WIDTH", "0");
    M06_AXI_transactor_param_props.addLong("WUSER_WIDTH", "0");
    M06_AXI_transactor_param_props.addLong("RUSER_WIDTH", "0");
    M06_AXI_transactor_param_props.addLong("BUSER_WIDTH", "0");
    M06_AXI_transactor_param_props.addLong("HAS_BURST", "1");
    M06_AXI_transactor_param_props.addLong("HAS_LOCK", "1");
    M06_AXI_transactor_param_props.addLong("HAS_PROT", "1");
    M06_AXI_transactor_param_props.addLong("HAS_CACHE", "1");
    M06_AXI_transactor_param_props.addLong("HAS_QOS", "1");
    M06_AXI_transactor_param_props.addLong("HAS_REGION", "0");
    M06_AXI_transactor_param_props.addLong("HAS_WSTRB", "1");
    M06_AXI_transactor_param_props.addLong("HAS_BRESP", "1");
    M06_AXI_transactor_param_props.addLong("HAS_RRESP", "1");
    M06_AXI_transactor_param_props.addLong("SUPPORTS_NARROW_BURST", "0");
    M06_AXI_transactor_param_props.addLong("NUM_READ_OUTSTANDING", "2");
    M06_AXI_transactor_param_props.addLong("NUM_WRITE_OUTSTANDING", "2");
    M06_AXI_transactor_param_props.addLong("MAX_BURST_LENGTH", "256");
    M06_AXI_transactor_param_props.addLong("NUM_READ_THREADS", "1");
    M06_AXI_transactor_param_props.addLong("NUM_WRITE_THREADS", "1");
    M06_AXI_transactor_param_props.addLong("RUSER_BITS_PER_BYTE", "0");
    M06_AXI_transactor_param_props.addLong("WUSER_BITS_PER_BYTE", "0");
    M06_AXI_transactor_param_props.addLong("HAS_SIZE", "1");
    M06_AXI_transactor_param_props.addLong("HAS_RESET", "1");
    M06_AXI_transactor_param_props.addFloat("PHASE", "0.0");
    M06_AXI_transactor_param_props.addString("PROTOCOL", "AXI4");
    M06_AXI_transactor_param_props.addString("READ_WRITE_MODE", "READ_WRITE");
    M06_AXI_transactor_param_props.addString("CLK_DOMAIN", "Multi_convo_core_processing_system7_0_0_FCLK_CLK0");

    mp_M06_AXI_transactor = new xtlm::xaximm_xtlm2pin_t<32,12,1,1,1,1,1,1>("M06_AXI_transactor", M06_AXI_transactor_param_props);

    // M06_AXI' transactor ports

    mp_M06_AXI_transactor->AWADDR(M06_AXI_awaddr);
    mp_M06_AXI_transactor->AWLEN(M06_AXI_awlen);
    mp_M06_AXI_transactor->AWSIZE(M06_AXI_awsize);
    mp_M06_AXI_transactor->AWBURST(M06_AXI_awburst);
    mp_M06_AXI_awlock_converter = new xsc::common::scalar2vectorN_converter<1>("M06_AXI_awlock_converter");
    mp_M06_AXI_awlock_converter->scalar_in(m_M06_AXI_awlock_converter_signal);
    mp_M06_AXI_awlock_converter->vector_out(M06_AXI_awlock);
    mp_M06_AXI_transactor->AWLOCK(m_M06_AXI_awlock_converter_signal);
    mp_M06_AXI_transactor->AWCACHE(M06_AXI_awcache);
    mp_M06_AXI_transactor->AWPROT(M06_AXI_awprot);
    mp_M06_AXI_transactor->AWQOS(M06_AXI_awqos);
    mp_M06_AXI_transactor->AWVALID(M06_AXI_awvalid);
    mp_M06_AXI_transactor->AWREADY(M06_AXI_awready);
    mp_M06_AXI_transactor->WDATA(M06_AXI_wdata);
    mp_M06_AXI_transactor->WSTRB(M06_AXI_wstrb);
    mp_M06_AXI_transactor->WLAST(M06_AXI_wlast);
    mp_M06_AXI_transactor->WVALID(M06_AXI_wvalid);
    mp_M06_AXI_transactor->WREADY(M06_AXI_wready);
    mp_M06_AXI_transactor->BRESP(M06_AXI_bresp);
    mp_M06_AXI_transactor->BVALID(M06_AXI_bvalid);
    mp_M06_AXI_transactor->BREADY(M06_AXI_bready);
    mp_M06_AXI_transactor->ARADDR(M06_AXI_araddr);
    mp_M06_AXI_transactor->ARLEN(M06_AXI_arlen);
    mp_M06_AXI_transactor->ARSIZE(M06_AXI_arsize);
    mp_M06_AXI_transactor->ARBURST(M06_AXI_arburst);
    mp_M06_AXI_arlock_converter = new xsc::common::scalar2vectorN_converter<1>("M06_AXI_arlock_converter");
    mp_M06_AXI_arlock_converter->scalar_in(m_M06_AXI_arlock_converter_signal);
    mp_M06_AXI_arlock_converter->vector_out(M06_AXI_arlock);
    mp_M06_AXI_transactor->ARLOCK(m_M06_AXI_arlock_converter_signal);
    mp_M06_AXI_transactor->ARCACHE(M06_AXI_arcache);
    mp_M06_AXI_transactor->ARPROT(M06_AXI_arprot);
    mp_M06_AXI_transactor->ARQOS(M06_AXI_arqos);
    mp_M06_AXI_transactor->ARVALID(M06_AXI_arvalid);
    mp_M06_AXI_transactor->ARREADY(M06_AXI_arready);
    mp_M06_AXI_transactor->RDATA(M06_AXI_rdata);
    mp_M06_AXI_transactor->RRESP(M06_AXI_rresp);
    mp_M06_AXI_transactor->RLAST(M06_AXI_rlast);
    mp_M06_AXI_transactor->RVALID(M06_AXI_rvalid);
    mp_M06_AXI_transactor->RREADY(M06_AXI_rready);
    mp_M06_AXI_transactor->CLK(aclk);
    mp_M06_AXI_transactor->RST(aresetn);

    // M06_AXI' transactor sockets

    mp_impl->M06_AXI_tlm_aximm_read_socket->bind(*(mp_M06_AXI_transactor->rd_socket));
    mp_impl->M06_AXI_tlm_aximm_write_socket->bind(*(mp_M06_AXI_transactor->wr_socket));
  }
  else
  {
  }

  // configure 'M07_AXI' transactor

  if (xsc::utils::xsc_sim_manager::getInstanceParameterInt("Multi_convo_core_smartconnect_0_0", "M07_AXI_TLM_MODE") != 1)
  {
    // Instantiate Socket Stubs

  // 'M07_AXI' transactor parameters
    xsc::common_cpp::properties M07_AXI_transactor_param_props;
    M07_AXI_transactor_param_props.addLong("DATA_WIDTH", "32");
    M07_AXI_transactor_param_props.addLong("FREQ_HZ", "100000000");
    M07_AXI_transactor_param_props.addLong("ID_WIDTH", "0");
    M07_AXI_transactor_param_props.addLong("ADDR_WIDTH", "12");
    M07_AXI_transactor_param_props.addLong("AWUSER_WIDTH", "0");
    M07_AXI_transactor_param_props.addLong("ARUSER_WIDTH", "0");
    M07_AXI_transactor_param_props.addLong("WUSER_WIDTH", "0");
    M07_AXI_transactor_param_props.addLong("RUSER_WIDTH", "0");
    M07_AXI_transactor_param_props.addLong("BUSER_WIDTH", "0");
    M07_AXI_transactor_param_props.addLong("HAS_BURST", "1");
    M07_AXI_transactor_param_props.addLong("HAS_LOCK", "1");
    M07_AXI_transactor_param_props.addLong("HAS_PROT", "1");
    M07_AXI_transactor_param_props.addLong("HAS_CACHE", "1");
    M07_AXI_transactor_param_props.addLong("HAS_QOS", "1");
    M07_AXI_transactor_param_props.addLong("HAS_REGION", "0");
    M07_AXI_transactor_param_props.addLong("HAS_WSTRB", "1");
    M07_AXI_transactor_param_props.addLong("HAS_BRESP", "1");
    M07_AXI_transactor_param_props.addLong("HAS_RRESP", "1");
    M07_AXI_transactor_param_props.addLong("SUPPORTS_NARROW_BURST", "0");
    M07_AXI_transactor_param_props.addLong("NUM_READ_OUTSTANDING", "2");
    M07_AXI_transactor_param_props.addLong("NUM_WRITE_OUTSTANDING", "2");
    M07_AXI_transactor_param_props.addLong("MAX_BURST_LENGTH", "256");
    M07_AXI_transactor_param_props.addLong("NUM_READ_THREADS", "1");
    M07_AXI_transactor_param_props.addLong("NUM_WRITE_THREADS", "1");
    M07_AXI_transactor_param_props.addLong("RUSER_BITS_PER_BYTE", "0");
    M07_AXI_transactor_param_props.addLong("WUSER_BITS_PER_BYTE", "0");
    M07_AXI_transactor_param_props.addLong("HAS_SIZE", "1");
    M07_AXI_transactor_param_props.addLong("HAS_RESET", "1");
    M07_AXI_transactor_param_props.addFloat("PHASE", "0.0");
    M07_AXI_transactor_param_props.addString("PROTOCOL", "AXI4");
    M07_AXI_transactor_param_props.addString("READ_WRITE_MODE", "READ_WRITE");
    M07_AXI_transactor_param_props.addString("CLK_DOMAIN", "Multi_convo_core_processing_system7_0_0_FCLK_CLK0");

    mp_M07_AXI_transactor = new xtlm::xaximm_xtlm2pin_t<32,12,1,1,1,1,1,1>("M07_AXI_transactor", M07_AXI_transactor_param_props);

    // M07_AXI' transactor ports

    mp_M07_AXI_transactor->AWADDR(M07_AXI_awaddr);
    mp_M07_AXI_transactor->AWLEN(M07_AXI_awlen);
    mp_M07_AXI_transactor->AWSIZE(M07_AXI_awsize);
    mp_M07_AXI_transactor->AWBURST(M07_AXI_awburst);
    mp_M07_AXI_awlock_converter = new xsc::common::scalar2vectorN_converter<1>("M07_AXI_awlock_converter");
    mp_M07_AXI_awlock_converter->scalar_in(m_M07_AXI_awlock_converter_signal);
    mp_M07_AXI_awlock_converter->vector_out(M07_AXI_awlock);
    mp_M07_AXI_transactor->AWLOCK(m_M07_AXI_awlock_converter_signal);
    mp_M07_AXI_transactor->AWCACHE(M07_AXI_awcache);
    mp_M07_AXI_transactor->AWPROT(M07_AXI_awprot);
    mp_M07_AXI_transactor->AWQOS(M07_AXI_awqos);
    mp_M07_AXI_transactor->AWVALID(M07_AXI_awvalid);
    mp_M07_AXI_transactor->AWREADY(M07_AXI_awready);
    mp_M07_AXI_transactor->WDATA(M07_AXI_wdata);
    mp_M07_AXI_transactor->WSTRB(M07_AXI_wstrb);
    mp_M07_AXI_transactor->WLAST(M07_AXI_wlast);
    mp_M07_AXI_transactor->WVALID(M07_AXI_wvalid);
    mp_M07_AXI_transactor->WREADY(M07_AXI_wready);
    mp_M07_AXI_transactor->BRESP(M07_AXI_bresp);
    mp_M07_AXI_transactor->BVALID(M07_AXI_bvalid);
    mp_M07_AXI_transactor->BREADY(M07_AXI_bready);
    mp_M07_AXI_transactor->ARADDR(M07_AXI_araddr);
    mp_M07_AXI_transactor->ARLEN(M07_AXI_arlen);
    mp_M07_AXI_transactor->ARSIZE(M07_AXI_arsize);
    mp_M07_AXI_transactor->ARBURST(M07_AXI_arburst);
    mp_M07_AXI_arlock_converter = new xsc::common::scalar2vectorN_converter<1>("M07_AXI_arlock_converter");
    mp_M07_AXI_arlock_converter->scalar_in(m_M07_AXI_arlock_converter_signal);
    mp_M07_AXI_arlock_converter->vector_out(M07_AXI_arlock);
    mp_M07_AXI_transactor->ARLOCK(m_M07_AXI_arlock_converter_signal);
    mp_M07_AXI_transactor->ARCACHE(M07_AXI_arcache);
    mp_M07_AXI_transactor->ARPROT(M07_AXI_arprot);
    mp_M07_AXI_transactor->ARQOS(M07_AXI_arqos);
    mp_M07_AXI_transactor->ARVALID(M07_AXI_arvalid);
    mp_M07_AXI_transactor->ARREADY(M07_AXI_arready);
    mp_M07_AXI_transactor->RDATA(M07_AXI_rdata);
    mp_M07_AXI_transactor->RRESP(M07_AXI_rresp);
    mp_M07_AXI_transactor->RLAST(M07_AXI_rlast);
    mp_M07_AXI_transactor->RVALID(M07_AXI_rvalid);
    mp_M07_AXI_transactor->RREADY(M07_AXI_rready);
    mp_M07_AXI_transactor->CLK(aclk);
    mp_M07_AXI_transactor->RST(aresetn);

    // M07_AXI' transactor sockets

    mp_impl->M07_AXI_tlm_aximm_read_socket->bind(*(mp_M07_AXI_transactor->rd_socket));
    mp_impl->M07_AXI_tlm_aximm_write_socket->bind(*(mp_M07_AXI_transactor->wr_socket));
  }
  else
  {
  }

  // configure 'M08_AXI' transactor

  if (xsc::utils::xsc_sim_manager::getInstanceParameterInt("Multi_convo_core_smartconnect_0_0", "M08_AXI_TLM_MODE") != 1)
  {
    // Instantiate Socket Stubs

  // 'M08_AXI' transactor parameters
    xsc::common_cpp::properties M08_AXI_transactor_param_props;
    M08_AXI_transactor_param_props.addLong("DATA_WIDTH", "32");
    M08_AXI_transactor_param_props.addLong("FREQ_HZ", "100000000");
    M08_AXI_transactor_param_props.addLong("ID_WIDTH", "0");
    M08_AXI_transactor_param_props.addLong("ADDR_WIDTH", "12");
    M08_AXI_transactor_param_props.addLong("AWUSER_WIDTH", "0");
    M08_AXI_transactor_param_props.addLong("ARUSER_WIDTH", "0");
    M08_AXI_transactor_param_props.addLong("WUSER_WIDTH", "0");
    M08_AXI_transactor_param_props.addLong("RUSER_WIDTH", "0");
    M08_AXI_transactor_param_props.addLong("BUSER_WIDTH", "0");
    M08_AXI_transactor_param_props.addLong("HAS_BURST", "1");
    M08_AXI_transactor_param_props.addLong("HAS_LOCK", "1");
    M08_AXI_transactor_param_props.addLong("HAS_PROT", "1");
    M08_AXI_transactor_param_props.addLong("HAS_CACHE", "1");
    M08_AXI_transactor_param_props.addLong("HAS_QOS", "1");
    M08_AXI_transactor_param_props.addLong("HAS_REGION", "0");
    M08_AXI_transactor_param_props.addLong("HAS_WSTRB", "1");
    M08_AXI_transactor_param_props.addLong("HAS_BRESP", "1");
    M08_AXI_transactor_param_props.addLong("HAS_RRESP", "1");
    M08_AXI_transactor_param_props.addLong("SUPPORTS_NARROW_BURST", "0");
    M08_AXI_transactor_param_props.addLong("NUM_READ_OUTSTANDING", "2");
    M08_AXI_transactor_param_props.addLong("NUM_WRITE_OUTSTANDING", "2");
    M08_AXI_transactor_param_props.addLong("MAX_BURST_LENGTH", "256");
    M08_AXI_transactor_param_props.addLong("NUM_READ_THREADS", "1");
    M08_AXI_transactor_param_props.addLong("NUM_WRITE_THREADS", "1");
    M08_AXI_transactor_param_props.addLong("RUSER_BITS_PER_BYTE", "0");
    M08_AXI_transactor_param_props.addLong("WUSER_BITS_PER_BYTE", "0");
    M08_AXI_transactor_param_props.addLong("HAS_SIZE", "1");
    M08_AXI_transactor_param_props.addLong("HAS_RESET", "1");
    M08_AXI_transactor_param_props.addFloat("PHASE", "0.0");
    M08_AXI_transactor_param_props.addString("PROTOCOL", "AXI4");
    M08_AXI_transactor_param_props.addString("READ_WRITE_MODE", "READ_WRITE");
    M08_AXI_transactor_param_props.addString("CLK_DOMAIN", "Multi_convo_core_processing_system7_0_0_FCLK_CLK0");

    mp_M08_AXI_transactor = new xtlm::xaximm_xtlm2pin_t<32,12,1,1,1,1,1,1>("M08_AXI_transactor", M08_AXI_transactor_param_props);

    // M08_AXI' transactor ports

    mp_M08_AXI_transactor->AWADDR(M08_AXI_awaddr);
    mp_M08_AXI_transactor->AWLEN(M08_AXI_awlen);
    mp_M08_AXI_transactor->AWSIZE(M08_AXI_awsize);
    mp_M08_AXI_transactor->AWBURST(M08_AXI_awburst);
    mp_M08_AXI_awlock_converter = new xsc::common::scalar2vectorN_converter<1>("M08_AXI_awlock_converter");
    mp_M08_AXI_awlock_converter->scalar_in(m_M08_AXI_awlock_converter_signal);
    mp_M08_AXI_awlock_converter->vector_out(M08_AXI_awlock);
    mp_M08_AXI_transactor->AWLOCK(m_M08_AXI_awlock_converter_signal);
    mp_M08_AXI_transactor->AWCACHE(M08_AXI_awcache);
    mp_M08_AXI_transactor->AWPROT(M08_AXI_awprot);
    mp_M08_AXI_transactor->AWQOS(M08_AXI_awqos);
    mp_M08_AXI_transactor->AWVALID(M08_AXI_awvalid);
    mp_M08_AXI_transactor->AWREADY(M08_AXI_awready);
    mp_M08_AXI_transactor->WDATA(M08_AXI_wdata);
    mp_M08_AXI_transactor->WSTRB(M08_AXI_wstrb);
    mp_M08_AXI_transactor->WLAST(M08_AXI_wlast);
    mp_M08_AXI_transactor->WVALID(M08_AXI_wvalid);
    mp_M08_AXI_transactor->WREADY(M08_AXI_wready);
    mp_M08_AXI_transactor->BRESP(M08_AXI_bresp);
    mp_M08_AXI_transactor->BVALID(M08_AXI_bvalid);
    mp_M08_AXI_transactor->BREADY(M08_AXI_bready);
    mp_M08_AXI_transactor->ARADDR(M08_AXI_araddr);
    mp_M08_AXI_transactor->ARLEN(M08_AXI_arlen);
    mp_M08_AXI_transactor->ARSIZE(M08_AXI_arsize);
    mp_M08_AXI_transactor->ARBURST(M08_AXI_arburst);
    mp_M08_AXI_arlock_converter = new xsc::common::scalar2vectorN_converter<1>("M08_AXI_arlock_converter");
    mp_M08_AXI_arlock_converter->scalar_in(m_M08_AXI_arlock_converter_signal);
    mp_M08_AXI_arlock_converter->vector_out(M08_AXI_arlock);
    mp_M08_AXI_transactor->ARLOCK(m_M08_AXI_arlock_converter_signal);
    mp_M08_AXI_transactor->ARCACHE(M08_AXI_arcache);
    mp_M08_AXI_transactor->ARPROT(M08_AXI_arprot);
    mp_M08_AXI_transactor->ARQOS(M08_AXI_arqos);
    mp_M08_AXI_transactor->ARVALID(M08_AXI_arvalid);
    mp_M08_AXI_transactor->ARREADY(M08_AXI_arready);
    mp_M08_AXI_transactor->RDATA(M08_AXI_rdata);
    mp_M08_AXI_transactor->RRESP(M08_AXI_rresp);
    mp_M08_AXI_transactor->RLAST(M08_AXI_rlast);
    mp_M08_AXI_transactor->RVALID(M08_AXI_rvalid);
    mp_M08_AXI_transactor->RREADY(M08_AXI_rready);
    mp_M08_AXI_transactor->CLK(aclk);
    mp_M08_AXI_transactor->RST(aresetn);

    // M08_AXI' transactor sockets

    mp_impl->M08_AXI_tlm_aximm_read_socket->bind(*(mp_M08_AXI_transactor->rd_socket));
    mp_impl->M08_AXI_tlm_aximm_write_socket->bind(*(mp_M08_AXI_transactor->wr_socket));
  }
  else
  {
  }

  // configure 'M09_AXI' transactor

  if (xsc::utils::xsc_sim_manager::getInstanceParameterInt("Multi_convo_core_smartconnect_0_0", "M09_AXI_TLM_MODE") != 1)
  {
    // Instantiate Socket Stubs

  // 'M09_AXI' transactor parameters
    xsc::common_cpp::properties M09_AXI_transactor_param_props;
    M09_AXI_transactor_param_props.addLong("DATA_WIDTH", "32");
    M09_AXI_transactor_param_props.addLong("FREQ_HZ", "100000000");
    M09_AXI_transactor_param_props.addLong("ID_WIDTH", "0");
    M09_AXI_transactor_param_props.addLong("ADDR_WIDTH", "12");
    M09_AXI_transactor_param_props.addLong("AWUSER_WIDTH", "0");
    M09_AXI_transactor_param_props.addLong("ARUSER_WIDTH", "0");
    M09_AXI_transactor_param_props.addLong("WUSER_WIDTH", "0");
    M09_AXI_transactor_param_props.addLong("RUSER_WIDTH", "0");
    M09_AXI_transactor_param_props.addLong("BUSER_WIDTH", "0");
    M09_AXI_transactor_param_props.addLong("HAS_BURST", "1");
    M09_AXI_transactor_param_props.addLong("HAS_LOCK", "1");
    M09_AXI_transactor_param_props.addLong("HAS_PROT", "1");
    M09_AXI_transactor_param_props.addLong("HAS_CACHE", "1");
    M09_AXI_transactor_param_props.addLong("HAS_QOS", "1");
    M09_AXI_transactor_param_props.addLong("HAS_REGION", "0");
    M09_AXI_transactor_param_props.addLong("HAS_WSTRB", "1");
    M09_AXI_transactor_param_props.addLong("HAS_BRESP", "1");
    M09_AXI_transactor_param_props.addLong("HAS_RRESP", "1");
    M09_AXI_transactor_param_props.addLong("SUPPORTS_NARROW_BURST", "0");
    M09_AXI_transactor_param_props.addLong("NUM_READ_OUTSTANDING", "2");
    M09_AXI_transactor_param_props.addLong("NUM_WRITE_OUTSTANDING", "2");
    M09_AXI_transactor_param_props.addLong("MAX_BURST_LENGTH", "256");
    M09_AXI_transactor_param_props.addLong("NUM_READ_THREADS", "1");
    M09_AXI_transactor_param_props.addLong("NUM_WRITE_THREADS", "1");
    M09_AXI_transactor_param_props.addLong("RUSER_BITS_PER_BYTE", "0");
    M09_AXI_transactor_param_props.addLong("WUSER_BITS_PER_BYTE", "0");
    M09_AXI_transactor_param_props.addLong("HAS_SIZE", "1");
    M09_AXI_transactor_param_props.addLong("HAS_RESET", "1");
    M09_AXI_transactor_param_props.addFloat("PHASE", "0.0");
    M09_AXI_transactor_param_props.addString("PROTOCOL", "AXI4");
    M09_AXI_transactor_param_props.addString("READ_WRITE_MODE", "READ_WRITE");
    M09_AXI_transactor_param_props.addString("CLK_DOMAIN", "Multi_convo_core_processing_system7_0_0_FCLK_CLK0");

    mp_M09_AXI_transactor = new xtlm::xaximm_xtlm2pin_t<32,12,1,1,1,1,1,1>("M09_AXI_transactor", M09_AXI_transactor_param_props);

    // M09_AXI' transactor ports

    mp_M09_AXI_transactor->AWADDR(M09_AXI_awaddr);
    mp_M09_AXI_transactor->AWLEN(M09_AXI_awlen);
    mp_M09_AXI_transactor->AWSIZE(M09_AXI_awsize);
    mp_M09_AXI_transactor->AWBURST(M09_AXI_awburst);
    mp_M09_AXI_awlock_converter = new xsc::common::scalar2vectorN_converter<1>("M09_AXI_awlock_converter");
    mp_M09_AXI_awlock_converter->scalar_in(m_M09_AXI_awlock_converter_signal);
    mp_M09_AXI_awlock_converter->vector_out(M09_AXI_awlock);
    mp_M09_AXI_transactor->AWLOCK(m_M09_AXI_awlock_converter_signal);
    mp_M09_AXI_transactor->AWCACHE(M09_AXI_awcache);
    mp_M09_AXI_transactor->AWPROT(M09_AXI_awprot);
    mp_M09_AXI_transactor->AWQOS(M09_AXI_awqos);
    mp_M09_AXI_transactor->AWVALID(M09_AXI_awvalid);
    mp_M09_AXI_transactor->AWREADY(M09_AXI_awready);
    mp_M09_AXI_transactor->WDATA(M09_AXI_wdata);
    mp_M09_AXI_transactor->WSTRB(M09_AXI_wstrb);
    mp_M09_AXI_transactor->WLAST(M09_AXI_wlast);
    mp_M09_AXI_transactor->WVALID(M09_AXI_wvalid);
    mp_M09_AXI_transactor->WREADY(M09_AXI_wready);
    mp_M09_AXI_transactor->BRESP(M09_AXI_bresp);
    mp_M09_AXI_transactor->BVALID(M09_AXI_bvalid);
    mp_M09_AXI_transactor->BREADY(M09_AXI_bready);
    mp_M09_AXI_transactor->ARADDR(M09_AXI_araddr);
    mp_M09_AXI_transactor->ARLEN(M09_AXI_arlen);
    mp_M09_AXI_transactor->ARSIZE(M09_AXI_arsize);
    mp_M09_AXI_transactor->ARBURST(M09_AXI_arburst);
    mp_M09_AXI_arlock_converter = new xsc::common::scalar2vectorN_converter<1>("M09_AXI_arlock_converter");
    mp_M09_AXI_arlock_converter->scalar_in(m_M09_AXI_arlock_converter_signal);
    mp_M09_AXI_arlock_converter->vector_out(M09_AXI_arlock);
    mp_M09_AXI_transactor->ARLOCK(m_M09_AXI_arlock_converter_signal);
    mp_M09_AXI_transactor->ARCACHE(M09_AXI_arcache);
    mp_M09_AXI_transactor->ARPROT(M09_AXI_arprot);
    mp_M09_AXI_transactor->ARQOS(M09_AXI_arqos);
    mp_M09_AXI_transactor->ARVALID(M09_AXI_arvalid);
    mp_M09_AXI_transactor->ARREADY(M09_AXI_arready);
    mp_M09_AXI_transactor->RDATA(M09_AXI_rdata);
    mp_M09_AXI_transactor->RRESP(M09_AXI_rresp);
    mp_M09_AXI_transactor->RLAST(M09_AXI_rlast);
    mp_M09_AXI_transactor->RVALID(M09_AXI_rvalid);
    mp_M09_AXI_transactor->RREADY(M09_AXI_rready);
    mp_M09_AXI_transactor->CLK(aclk);
    mp_M09_AXI_transactor->RST(aresetn);

    // M09_AXI' transactor sockets

    mp_impl->M09_AXI_tlm_aximm_read_socket->bind(*(mp_M09_AXI_transactor->rd_socket));
    mp_impl->M09_AXI_tlm_aximm_write_socket->bind(*(mp_M09_AXI_transactor->wr_socket));
  }
  else
  {
  }

  // configure 'M10_AXI' transactor

  if (xsc::utils::xsc_sim_manager::getInstanceParameterInt("Multi_convo_core_smartconnect_0_0", "M10_AXI_TLM_MODE") != 1)
  {
    // Instantiate Socket Stubs

  // 'M10_AXI' transactor parameters
    xsc::common_cpp::properties M10_AXI_transactor_param_props;
    M10_AXI_transactor_param_props.addLong("DATA_WIDTH", "32");
    M10_AXI_transactor_param_props.addLong("FREQ_HZ", "100000000");
    M10_AXI_transactor_param_props.addLong("ID_WIDTH", "0");
    M10_AXI_transactor_param_props.addLong("ADDR_WIDTH", "12");
    M10_AXI_transactor_param_props.addLong("AWUSER_WIDTH", "0");
    M10_AXI_transactor_param_props.addLong("ARUSER_WIDTH", "0");
    M10_AXI_transactor_param_props.addLong("WUSER_WIDTH", "0");
    M10_AXI_transactor_param_props.addLong("RUSER_WIDTH", "0");
    M10_AXI_transactor_param_props.addLong("BUSER_WIDTH", "0");
    M10_AXI_transactor_param_props.addLong("HAS_BURST", "1");
    M10_AXI_transactor_param_props.addLong("HAS_LOCK", "1");
    M10_AXI_transactor_param_props.addLong("HAS_PROT", "1");
    M10_AXI_transactor_param_props.addLong("HAS_CACHE", "1");
    M10_AXI_transactor_param_props.addLong("HAS_QOS", "1");
    M10_AXI_transactor_param_props.addLong("HAS_REGION", "0");
    M10_AXI_transactor_param_props.addLong("HAS_WSTRB", "1");
    M10_AXI_transactor_param_props.addLong("HAS_BRESP", "1");
    M10_AXI_transactor_param_props.addLong("HAS_RRESP", "1");
    M10_AXI_transactor_param_props.addLong("SUPPORTS_NARROW_BURST", "0");
    M10_AXI_transactor_param_props.addLong("NUM_READ_OUTSTANDING", "2");
    M10_AXI_transactor_param_props.addLong("NUM_WRITE_OUTSTANDING", "2");
    M10_AXI_transactor_param_props.addLong("MAX_BURST_LENGTH", "256");
    M10_AXI_transactor_param_props.addLong("NUM_READ_THREADS", "1");
    M10_AXI_transactor_param_props.addLong("NUM_WRITE_THREADS", "1");
    M10_AXI_transactor_param_props.addLong("RUSER_BITS_PER_BYTE", "0");
    M10_AXI_transactor_param_props.addLong("WUSER_BITS_PER_BYTE", "0");
    M10_AXI_transactor_param_props.addLong("HAS_SIZE", "1");
    M10_AXI_transactor_param_props.addLong("HAS_RESET", "1");
    M10_AXI_transactor_param_props.addFloat("PHASE", "0.0");
    M10_AXI_transactor_param_props.addString("PROTOCOL", "AXI4");
    M10_AXI_transactor_param_props.addString("READ_WRITE_MODE", "READ_WRITE");
    M10_AXI_transactor_param_props.addString("CLK_DOMAIN", "Multi_convo_core_processing_system7_0_0_FCLK_CLK0");

    mp_M10_AXI_transactor = new xtlm::xaximm_xtlm2pin_t<32,12,1,1,1,1,1,1>("M10_AXI_transactor", M10_AXI_transactor_param_props);

    // M10_AXI' transactor ports

    mp_M10_AXI_transactor->AWADDR(M10_AXI_awaddr);
    mp_M10_AXI_transactor->AWLEN(M10_AXI_awlen);
    mp_M10_AXI_transactor->AWSIZE(M10_AXI_awsize);
    mp_M10_AXI_transactor->AWBURST(M10_AXI_awburst);
    mp_M10_AXI_awlock_converter = new xsc::common::scalar2vectorN_converter<1>("M10_AXI_awlock_converter");
    mp_M10_AXI_awlock_converter->scalar_in(m_M10_AXI_awlock_converter_signal);
    mp_M10_AXI_awlock_converter->vector_out(M10_AXI_awlock);
    mp_M10_AXI_transactor->AWLOCK(m_M10_AXI_awlock_converter_signal);
    mp_M10_AXI_transactor->AWCACHE(M10_AXI_awcache);
    mp_M10_AXI_transactor->AWPROT(M10_AXI_awprot);
    mp_M10_AXI_transactor->AWQOS(M10_AXI_awqos);
    mp_M10_AXI_transactor->AWVALID(M10_AXI_awvalid);
    mp_M10_AXI_transactor->AWREADY(M10_AXI_awready);
    mp_M10_AXI_transactor->WDATA(M10_AXI_wdata);
    mp_M10_AXI_transactor->WSTRB(M10_AXI_wstrb);
    mp_M10_AXI_transactor->WLAST(M10_AXI_wlast);
    mp_M10_AXI_transactor->WVALID(M10_AXI_wvalid);
    mp_M10_AXI_transactor->WREADY(M10_AXI_wready);
    mp_M10_AXI_transactor->BRESP(M10_AXI_bresp);
    mp_M10_AXI_transactor->BVALID(M10_AXI_bvalid);
    mp_M10_AXI_transactor->BREADY(M10_AXI_bready);
    mp_M10_AXI_transactor->ARADDR(M10_AXI_araddr);
    mp_M10_AXI_transactor->ARLEN(M10_AXI_arlen);
    mp_M10_AXI_transactor->ARSIZE(M10_AXI_arsize);
    mp_M10_AXI_transactor->ARBURST(M10_AXI_arburst);
    mp_M10_AXI_arlock_converter = new xsc::common::scalar2vectorN_converter<1>("M10_AXI_arlock_converter");
    mp_M10_AXI_arlock_converter->scalar_in(m_M10_AXI_arlock_converter_signal);
    mp_M10_AXI_arlock_converter->vector_out(M10_AXI_arlock);
    mp_M10_AXI_transactor->ARLOCK(m_M10_AXI_arlock_converter_signal);
    mp_M10_AXI_transactor->ARCACHE(M10_AXI_arcache);
    mp_M10_AXI_transactor->ARPROT(M10_AXI_arprot);
    mp_M10_AXI_transactor->ARQOS(M10_AXI_arqos);
    mp_M10_AXI_transactor->ARVALID(M10_AXI_arvalid);
    mp_M10_AXI_transactor->ARREADY(M10_AXI_arready);
    mp_M10_AXI_transactor->RDATA(M10_AXI_rdata);
    mp_M10_AXI_transactor->RRESP(M10_AXI_rresp);
    mp_M10_AXI_transactor->RLAST(M10_AXI_rlast);
    mp_M10_AXI_transactor->RVALID(M10_AXI_rvalid);
    mp_M10_AXI_transactor->RREADY(M10_AXI_rready);
    mp_M10_AXI_transactor->CLK(aclk);
    mp_M10_AXI_transactor->RST(aresetn);

    // M10_AXI' transactor sockets

    mp_impl->M10_AXI_tlm_aximm_read_socket->bind(*(mp_M10_AXI_transactor->rd_socket));
    mp_impl->M10_AXI_tlm_aximm_write_socket->bind(*(mp_M10_AXI_transactor->wr_socket));
  }
  else
  {
  }

  // configure 'M11_AXI' transactor

  if (xsc::utils::xsc_sim_manager::getInstanceParameterInt("Multi_convo_core_smartconnect_0_0", "M11_AXI_TLM_MODE") != 1)
  {
    // Instantiate Socket Stubs

  // 'M11_AXI' transactor parameters
    xsc::common_cpp::properties M11_AXI_transactor_param_props;
    M11_AXI_transactor_param_props.addLong("DATA_WIDTH", "32");
    M11_AXI_transactor_param_props.addLong("FREQ_HZ", "100000000");
    M11_AXI_transactor_param_props.addLong("ID_WIDTH", "0");
    M11_AXI_transactor_param_props.addLong("ADDR_WIDTH", "12");
    M11_AXI_transactor_param_props.addLong("AWUSER_WIDTH", "0");
    M11_AXI_transactor_param_props.addLong("ARUSER_WIDTH", "0");
    M11_AXI_transactor_param_props.addLong("WUSER_WIDTH", "0");
    M11_AXI_transactor_param_props.addLong("RUSER_WIDTH", "0");
    M11_AXI_transactor_param_props.addLong("BUSER_WIDTH", "0");
    M11_AXI_transactor_param_props.addLong("HAS_BURST", "1");
    M11_AXI_transactor_param_props.addLong("HAS_LOCK", "1");
    M11_AXI_transactor_param_props.addLong("HAS_PROT", "1");
    M11_AXI_transactor_param_props.addLong("HAS_CACHE", "1");
    M11_AXI_transactor_param_props.addLong("HAS_QOS", "1");
    M11_AXI_transactor_param_props.addLong("HAS_REGION", "0");
    M11_AXI_transactor_param_props.addLong("HAS_WSTRB", "1");
    M11_AXI_transactor_param_props.addLong("HAS_BRESP", "1");
    M11_AXI_transactor_param_props.addLong("HAS_RRESP", "1");
    M11_AXI_transactor_param_props.addLong("SUPPORTS_NARROW_BURST", "0");
    M11_AXI_transactor_param_props.addLong("NUM_READ_OUTSTANDING", "2");
    M11_AXI_transactor_param_props.addLong("NUM_WRITE_OUTSTANDING", "2");
    M11_AXI_transactor_param_props.addLong("MAX_BURST_LENGTH", "256");
    M11_AXI_transactor_param_props.addLong("NUM_READ_THREADS", "1");
    M11_AXI_transactor_param_props.addLong("NUM_WRITE_THREADS", "1");
    M11_AXI_transactor_param_props.addLong("RUSER_BITS_PER_BYTE", "0");
    M11_AXI_transactor_param_props.addLong("WUSER_BITS_PER_BYTE", "0");
    M11_AXI_transactor_param_props.addLong("HAS_SIZE", "1");
    M11_AXI_transactor_param_props.addLong("HAS_RESET", "1");
    M11_AXI_transactor_param_props.addFloat("PHASE", "0.0");
    M11_AXI_transactor_param_props.addString("PROTOCOL", "AXI4");
    M11_AXI_transactor_param_props.addString("READ_WRITE_MODE", "READ_WRITE");
    M11_AXI_transactor_param_props.addString("CLK_DOMAIN", "Multi_convo_core_processing_system7_0_0_FCLK_CLK0");

    mp_M11_AXI_transactor = new xtlm::xaximm_xtlm2pin_t<32,12,1,1,1,1,1,1>("M11_AXI_transactor", M11_AXI_transactor_param_props);

    // M11_AXI' transactor ports

    mp_M11_AXI_transactor->AWADDR(M11_AXI_awaddr);
    mp_M11_AXI_transactor->AWLEN(M11_AXI_awlen);
    mp_M11_AXI_transactor->AWSIZE(M11_AXI_awsize);
    mp_M11_AXI_transactor->AWBURST(M11_AXI_awburst);
    mp_M11_AXI_awlock_converter = new xsc::common::scalar2vectorN_converter<1>("M11_AXI_awlock_converter");
    mp_M11_AXI_awlock_converter->scalar_in(m_M11_AXI_awlock_converter_signal);
    mp_M11_AXI_awlock_converter->vector_out(M11_AXI_awlock);
    mp_M11_AXI_transactor->AWLOCK(m_M11_AXI_awlock_converter_signal);
    mp_M11_AXI_transactor->AWCACHE(M11_AXI_awcache);
    mp_M11_AXI_transactor->AWPROT(M11_AXI_awprot);
    mp_M11_AXI_transactor->AWQOS(M11_AXI_awqos);
    mp_M11_AXI_transactor->AWVALID(M11_AXI_awvalid);
    mp_M11_AXI_transactor->AWREADY(M11_AXI_awready);
    mp_M11_AXI_transactor->WDATA(M11_AXI_wdata);
    mp_M11_AXI_transactor->WSTRB(M11_AXI_wstrb);
    mp_M11_AXI_transactor->WLAST(M11_AXI_wlast);
    mp_M11_AXI_transactor->WVALID(M11_AXI_wvalid);
    mp_M11_AXI_transactor->WREADY(M11_AXI_wready);
    mp_M11_AXI_transactor->BRESP(M11_AXI_bresp);
    mp_M11_AXI_transactor->BVALID(M11_AXI_bvalid);
    mp_M11_AXI_transactor->BREADY(M11_AXI_bready);
    mp_M11_AXI_transactor->ARADDR(M11_AXI_araddr);
    mp_M11_AXI_transactor->ARLEN(M11_AXI_arlen);
    mp_M11_AXI_transactor->ARSIZE(M11_AXI_arsize);
    mp_M11_AXI_transactor->ARBURST(M11_AXI_arburst);
    mp_M11_AXI_arlock_converter = new xsc::common::scalar2vectorN_converter<1>("M11_AXI_arlock_converter");
    mp_M11_AXI_arlock_converter->scalar_in(m_M11_AXI_arlock_converter_signal);
    mp_M11_AXI_arlock_converter->vector_out(M11_AXI_arlock);
    mp_M11_AXI_transactor->ARLOCK(m_M11_AXI_arlock_converter_signal);
    mp_M11_AXI_transactor->ARCACHE(M11_AXI_arcache);
    mp_M11_AXI_transactor->ARPROT(M11_AXI_arprot);
    mp_M11_AXI_transactor->ARQOS(M11_AXI_arqos);
    mp_M11_AXI_transactor->ARVALID(M11_AXI_arvalid);
    mp_M11_AXI_transactor->ARREADY(M11_AXI_arready);
    mp_M11_AXI_transactor->RDATA(M11_AXI_rdata);
    mp_M11_AXI_transactor->RRESP(M11_AXI_rresp);
    mp_M11_AXI_transactor->RLAST(M11_AXI_rlast);
    mp_M11_AXI_transactor->RVALID(M11_AXI_rvalid);
    mp_M11_AXI_transactor->RREADY(M11_AXI_rready);
    mp_M11_AXI_transactor->CLK(aclk);
    mp_M11_AXI_transactor->RST(aresetn);

    // M11_AXI' transactor sockets

    mp_impl->M11_AXI_tlm_aximm_read_socket->bind(*(mp_M11_AXI_transactor->rd_socket));
    mp_impl->M11_AXI_tlm_aximm_write_socket->bind(*(mp_M11_AXI_transactor->wr_socket));
  }
  else
  {
  }

  // configure 'M12_AXI' transactor

  if (xsc::utils::xsc_sim_manager::getInstanceParameterInt("Multi_convo_core_smartconnect_0_0", "M12_AXI_TLM_MODE") != 1)
  {
    // Instantiate Socket Stubs

  // 'M12_AXI' transactor parameters
    xsc::common_cpp::properties M12_AXI_transactor_param_props;
    M12_AXI_transactor_param_props.addLong("DATA_WIDTH", "32");
    M12_AXI_transactor_param_props.addLong("FREQ_HZ", "100000000");
    M12_AXI_transactor_param_props.addLong("ID_WIDTH", "0");
    M12_AXI_transactor_param_props.addLong("ADDR_WIDTH", "12");
    M12_AXI_transactor_param_props.addLong("AWUSER_WIDTH", "0");
    M12_AXI_transactor_param_props.addLong("ARUSER_WIDTH", "0");
    M12_AXI_transactor_param_props.addLong("WUSER_WIDTH", "0");
    M12_AXI_transactor_param_props.addLong("RUSER_WIDTH", "0");
    M12_AXI_transactor_param_props.addLong("BUSER_WIDTH", "0");
    M12_AXI_transactor_param_props.addLong("HAS_BURST", "1");
    M12_AXI_transactor_param_props.addLong("HAS_LOCK", "1");
    M12_AXI_transactor_param_props.addLong("HAS_PROT", "1");
    M12_AXI_transactor_param_props.addLong("HAS_CACHE", "1");
    M12_AXI_transactor_param_props.addLong("HAS_QOS", "1");
    M12_AXI_transactor_param_props.addLong("HAS_REGION", "0");
    M12_AXI_transactor_param_props.addLong("HAS_WSTRB", "1");
    M12_AXI_transactor_param_props.addLong("HAS_BRESP", "1");
    M12_AXI_transactor_param_props.addLong("HAS_RRESP", "1");
    M12_AXI_transactor_param_props.addLong("SUPPORTS_NARROW_BURST", "0");
    M12_AXI_transactor_param_props.addLong("NUM_READ_OUTSTANDING", "2");
    M12_AXI_transactor_param_props.addLong("NUM_WRITE_OUTSTANDING", "2");
    M12_AXI_transactor_param_props.addLong("MAX_BURST_LENGTH", "256");
    M12_AXI_transactor_param_props.addLong("NUM_READ_THREADS", "1");
    M12_AXI_transactor_param_props.addLong("NUM_WRITE_THREADS", "1");
    M12_AXI_transactor_param_props.addLong("RUSER_BITS_PER_BYTE", "0");
    M12_AXI_transactor_param_props.addLong("WUSER_BITS_PER_BYTE", "0");
    M12_AXI_transactor_param_props.addLong("HAS_SIZE", "1");
    M12_AXI_transactor_param_props.addLong("HAS_RESET", "1");
    M12_AXI_transactor_param_props.addFloat("PHASE", "0.0");
    M12_AXI_transactor_param_props.addString("PROTOCOL", "AXI4");
    M12_AXI_transactor_param_props.addString("READ_WRITE_MODE", "READ_WRITE");
    M12_AXI_transactor_param_props.addString("CLK_DOMAIN", "Multi_convo_core_processing_system7_0_0_FCLK_CLK0");

    mp_M12_AXI_transactor = new xtlm::xaximm_xtlm2pin_t<32,12,1,1,1,1,1,1>("M12_AXI_transactor", M12_AXI_transactor_param_props);

    // M12_AXI' transactor ports

    mp_M12_AXI_transactor->AWADDR(M12_AXI_awaddr);
    mp_M12_AXI_transactor->AWLEN(M12_AXI_awlen);
    mp_M12_AXI_transactor->AWSIZE(M12_AXI_awsize);
    mp_M12_AXI_transactor->AWBURST(M12_AXI_awburst);
    mp_M12_AXI_awlock_converter = new xsc::common::scalar2vectorN_converter<1>("M12_AXI_awlock_converter");
    mp_M12_AXI_awlock_converter->scalar_in(m_M12_AXI_awlock_converter_signal);
    mp_M12_AXI_awlock_converter->vector_out(M12_AXI_awlock);
    mp_M12_AXI_transactor->AWLOCK(m_M12_AXI_awlock_converter_signal);
    mp_M12_AXI_transactor->AWCACHE(M12_AXI_awcache);
    mp_M12_AXI_transactor->AWPROT(M12_AXI_awprot);
    mp_M12_AXI_transactor->AWQOS(M12_AXI_awqos);
    mp_M12_AXI_transactor->AWVALID(M12_AXI_awvalid);
    mp_M12_AXI_transactor->AWREADY(M12_AXI_awready);
    mp_M12_AXI_transactor->WDATA(M12_AXI_wdata);
    mp_M12_AXI_transactor->WSTRB(M12_AXI_wstrb);
    mp_M12_AXI_transactor->WLAST(M12_AXI_wlast);
    mp_M12_AXI_transactor->WVALID(M12_AXI_wvalid);
    mp_M12_AXI_transactor->WREADY(M12_AXI_wready);
    mp_M12_AXI_transactor->BRESP(M12_AXI_bresp);
    mp_M12_AXI_transactor->BVALID(M12_AXI_bvalid);
    mp_M12_AXI_transactor->BREADY(M12_AXI_bready);
    mp_M12_AXI_transactor->ARADDR(M12_AXI_araddr);
    mp_M12_AXI_transactor->ARLEN(M12_AXI_arlen);
    mp_M12_AXI_transactor->ARSIZE(M12_AXI_arsize);
    mp_M12_AXI_transactor->ARBURST(M12_AXI_arburst);
    mp_M12_AXI_arlock_converter = new xsc::common::scalar2vectorN_converter<1>("M12_AXI_arlock_converter");
    mp_M12_AXI_arlock_converter->scalar_in(m_M12_AXI_arlock_converter_signal);
    mp_M12_AXI_arlock_converter->vector_out(M12_AXI_arlock);
    mp_M12_AXI_transactor->ARLOCK(m_M12_AXI_arlock_converter_signal);
    mp_M12_AXI_transactor->ARCACHE(M12_AXI_arcache);
    mp_M12_AXI_transactor->ARPROT(M12_AXI_arprot);
    mp_M12_AXI_transactor->ARQOS(M12_AXI_arqos);
    mp_M12_AXI_transactor->ARVALID(M12_AXI_arvalid);
    mp_M12_AXI_transactor->ARREADY(M12_AXI_arready);
    mp_M12_AXI_transactor->RDATA(M12_AXI_rdata);
    mp_M12_AXI_transactor->RRESP(M12_AXI_rresp);
    mp_M12_AXI_transactor->RLAST(M12_AXI_rlast);
    mp_M12_AXI_transactor->RVALID(M12_AXI_rvalid);
    mp_M12_AXI_transactor->RREADY(M12_AXI_rready);
    mp_M12_AXI_transactor->CLK(aclk);
    mp_M12_AXI_transactor->RST(aresetn);

    // M12_AXI' transactor sockets

    mp_impl->M12_AXI_tlm_aximm_read_socket->bind(*(mp_M12_AXI_transactor->rd_socket));
    mp_impl->M12_AXI_tlm_aximm_write_socket->bind(*(mp_M12_AXI_transactor->wr_socket));
  }
  else
  {
  }

  // configure 'M13_AXI' transactor

  if (xsc::utils::xsc_sim_manager::getInstanceParameterInt("Multi_convo_core_smartconnect_0_0", "M13_AXI_TLM_MODE") != 1)
  {
    // Instantiate Socket Stubs

  // 'M13_AXI' transactor parameters
    xsc::common_cpp::properties M13_AXI_transactor_param_props;
    M13_AXI_transactor_param_props.addLong("DATA_WIDTH", "32");
    M13_AXI_transactor_param_props.addLong("FREQ_HZ", "100000000");
    M13_AXI_transactor_param_props.addLong("ID_WIDTH", "0");
    M13_AXI_transactor_param_props.addLong("ADDR_WIDTH", "12");
    M13_AXI_transactor_param_props.addLong("AWUSER_WIDTH", "0");
    M13_AXI_transactor_param_props.addLong("ARUSER_WIDTH", "0");
    M13_AXI_transactor_param_props.addLong("WUSER_WIDTH", "0");
    M13_AXI_transactor_param_props.addLong("RUSER_WIDTH", "0");
    M13_AXI_transactor_param_props.addLong("BUSER_WIDTH", "0");
    M13_AXI_transactor_param_props.addLong("HAS_BURST", "1");
    M13_AXI_transactor_param_props.addLong("HAS_LOCK", "1");
    M13_AXI_transactor_param_props.addLong("HAS_PROT", "1");
    M13_AXI_transactor_param_props.addLong("HAS_CACHE", "1");
    M13_AXI_transactor_param_props.addLong("HAS_QOS", "1");
    M13_AXI_transactor_param_props.addLong("HAS_REGION", "0");
    M13_AXI_transactor_param_props.addLong("HAS_WSTRB", "1");
    M13_AXI_transactor_param_props.addLong("HAS_BRESP", "1");
    M13_AXI_transactor_param_props.addLong("HAS_RRESP", "1");
    M13_AXI_transactor_param_props.addLong("SUPPORTS_NARROW_BURST", "0");
    M13_AXI_transactor_param_props.addLong("NUM_READ_OUTSTANDING", "2");
    M13_AXI_transactor_param_props.addLong("NUM_WRITE_OUTSTANDING", "2");
    M13_AXI_transactor_param_props.addLong("MAX_BURST_LENGTH", "256");
    M13_AXI_transactor_param_props.addLong("NUM_READ_THREADS", "1");
    M13_AXI_transactor_param_props.addLong("NUM_WRITE_THREADS", "1");
    M13_AXI_transactor_param_props.addLong("RUSER_BITS_PER_BYTE", "0");
    M13_AXI_transactor_param_props.addLong("WUSER_BITS_PER_BYTE", "0");
    M13_AXI_transactor_param_props.addLong("HAS_SIZE", "1");
    M13_AXI_transactor_param_props.addLong("HAS_RESET", "1");
    M13_AXI_transactor_param_props.addFloat("PHASE", "0.0");
    M13_AXI_transactor_param_props.addString("PROTOCOL", "AXI4");
    M13_AXI_transactor_param_props.addString("READ_WRITE_MODE", "READ_WRITE");
    M13_AXI_transactor_param_props.addString("CLK_DOMAIN", "Multi_convo_core_processing_system7_0_0_FCLK_CLK0");

    mp_M13_AXI_transactor = new xtlm::xaximm_xtlm2pin_t<32,12,1,1,1,1,1,1>("M13_AXI_transactor", M13_AXI_transactor_param_props);

    // M13_AXI' transactor ports

    mp_M13_AXI_transactor->AWADDR(M13_AXI_awaddr);
    mp_M13_AXI_transactor->AWLEN(M13_AXI_awlen);
    mp_M13_AXI_transactor->AWSIZE(M13_AXI_awsize);
    mp_M13_AXI_transactor->AWBURST(M13_AXI_awburst);
    mp_M13_AXI_awlock_converter = new xsc::common::scalar2vectorN_converter<1>("M13_AXI_awlock_converter");
    mp_M13_AXI_awlock_converter->scalar_in(m_M13_AXI_awlock_converter_signal);
    mp_M13_AXI_awlock_converter->vector_out(M13_AXI_awlock);
    mp_M13_AXI_transactor->AWLOCK(m_M13_AXI_awlock_converter_signal);
    mp_M13_AXI_transactor->AWCACHE(M13_AXI_awcache);
    mp_M13_AXI_transactor->AWPROT(M13_AXI_awprot);
    mp_M13_AXI_transactor->AWQOS(M13_AXI_awqos);
    mp_M13_AXI_transactor->AWVALID(M13_AXI_awvalid);
    mp_M13_AXI_transactor->AWREADY(M13_AXI_awready);
    mp_M13_AXI_transactor->WDATA(M13_AXI_wdata);
    mp_M13_AXI_transactor->WSTRB(M13_AXI_wstrb);
    mp_M13_AXI_transactor->WLAST(M13_AXI_wlast);
    mp_M13_AXI_transactor->WVALID(M13_AXI_wvalid);
    mp_M13_AXI_transactor->WREADY(M13_AXI_wready);
    mp_M13_AXI_transactor->BRESP(M13_AXI_bresp);
    mp_M13_AXI_transactor->BVALID(M13_AXI_bvalid);
    mp_M13_AXI_transactor->BREADY(M13_AXI_bready);
    mp_M13_AXI_transactor->ARADDR(M13_AXI_araddr);
    mp_M13_AXI_transactor->ARLEN(M13_AXI_arlen);
    mp_M13_AXI_transactor->ARSIZE(M13_AXI_arsize);
    mp_M13_AXI_transactor->ARBURST(M13_AXI_arburst);
    mp_M13_AXI_arlock_converter = new xsc::common::scalar2vectorN_converter<1>("M13_AXI_arlock_converter");
    mp_M13_AXI_arlock_converter->scalar_in(m_M13_AXI_arlock_converter_signal);
    mp_M13_AXI_arlock_converter->vector_out(M13_AXI_arlock);
    mp_M13_AXI_transactor->ARLOCK(m_M13_AXI_arlock_converter_signal);
    mp_M13_AXI_transactor->ARCACHE(M13_AXI_arcache);
    mp_M13_AXI_transactor->ARPROT(M13_AXI_arprot);
    mp_M13_AXI_transactor->ARQOS(M13_AXI_arqos);
    mp_M13_AXI_transactor->ARVALID(M13_AXI_arvalid);
    mp_M13_AXI_transactor->ARREADY(M13_AXI_arready);
    mp_M13_AXI_transactor->RDATA(M13_AXI_rdata);
    mp_M13_AXI_transactor->RRESP(M13_AXI_rresp);
    mp_M13_AXI_transactor->RLAST(M13_AXI_rlast);
    mp_M13_AXI_transactor->RVALID(M13_AXI_rvalid);
    mp_M13_AXI_transactor->RREADY(M13_AXI_rready);
    mp_M13_AXI_transactor->CLK(aclk);
    mp_M13_AXI_transactor->RST(aresetn);

    // M13_AXI' transactor sockets

    mp_impl->M13_AXI_tlm_aximm_read_socket->bind(*(mp_M13_AXI_transactor->rd_socket));
    mp_impl->M13_AXI_tlm_aximm_write_socket->bind(*(mp_M13_AXI_transactor->wr_socket));
  }
  else
  {
  }

  // configure 'M14_AXI' transactor

  if (xsc::utils::xsc_sim_manager::getInstanceParameterInt("Multi_convo_core_smartconnect_0_0", "M14_AXI_TLM_MODE") != 1)
  {
    // Instantiate Socket Stubs

  // 'M14_AXI' transactor parameters
    xsc::common_cpp::properties M14_AXI_transactor_param_props;
    M14_AXI_transactor_param_props.addLong("DATA_WIDTH", "32");
    M14_AXI_transactor_param_props.addLong("FREQ_HZ", "100000000");
    M14_AXI_transactor_param_props.addLong("ID_WIDTH", "0");
    M14_AXI_transactor_param_props.addLong("ADDR_WIDTH", "12");
    M14_AXI_transactor_param_props.addLong("AWUSER_WIDTH", "0");
    M14_AXI_transactor_param_props.addLong("ARUSER_WIDTH", "0");
    M14_AXI_transactor_param_props.addLong("WUSER_WIDTH", "0");
    M14_AXI_transactor_param_props.addLong("RUSER_WIDTH", "0");
    M14_AXI_transactor_param_props.addLong("BUSER_WIDTH", "0");
    M14_AXI_transactor_param_props.addLong("HAS_BURST", "1");
    M14_AXI_transactor_param_props.addLong("HAS_LOCK", "1");
    M14_AXI_transactor_param_props.addLong("HAS_PROT", "1");
    M14_AXI_transactor_param_props.addLong("HAS_CACHE", "1");
    M14_AXI_transactor_param_props.addLong("HAS_QOS", "1");
    M14_AXI_transactor_param_props.addLong("HAS_REGION", "0");
    M14_AXI_transactor_param_props.addLong("HAS_WSTRB", "1");
    M14_AXI_transactor_param_props.addLong("HAS_BRESP", "1");
    M14_AXI_transactor_param_props.addLong("HAS_RRESP", "1");
    M14_AXI_transactor_param_props.addLong("SUPPORTS_NARROW_BURST", "0");
    M14_AXI_transactor_param_props.addLong("NUM_READ_OUTSTANDING", "2");
    M14_AXI_transactor_param_props.addLong("NUM_WRITE_OUTSTANDING", "2");
    M14_AXI_transactor_param_props.addLong("MAX_BURST_LENGTH", "256");
    M14_AXI_transactor_param_props.addLong("NUM_READ_THREADS", "1");
    M14_AXI_transactor_param_props.addLong("NUM_WRITE_THREADS", "1");
    M14_AXI_transactor_param_props.addLong("RUSER_BITS_PER_BYTE", "0");
    M14_AXI_transactor_param_props.addLong("WUSER_BITS_PER_BYTE", "0");
    M14_AXI_transactor_param_props.addLong("HAS_SIZE", "1");
    M14_AXI_transactor_param_props.addLong("HAS_RESET", "1");
    M14_AXI_transactor_param_props.addFloat("PHASE", "0.0");
    M14_AXI_transactor_param_props.addString("PROTOCOL", "AXI4");
    M14_AXI_transactor_param_props.addString("READ_WRITE_MODE", "READ_WRITE");
    M14_AXI_transactor_param_props.addString("CLK_DOMAIN", "Multi_convo_core_processing_system7_0_0_FCLK_CLK0");

    mp_M14_AXI_transactor = new xtlm::xaximm_xtlm2pin_t<32,12,1,1,1,1,1,1>("M14_AXI_transactor", M14_AXI_transactor_param_props);

    // M14_AXI' transactor ports

    mp_M14_AXI_transactor->AWADDR(M14_AXI_awaddr);
    mp_M14_AXI_transactor->AWLEN(M14_AXI_awlen);
    mp_M14_AXI_transactor->AWSIZE(M14_AXI_awsize);
    mp_M14_AXI_transactor->AWBURST(M14_AXI_awburst);
    mp_M14_AXI_awlock_converter = new xsc::common::scalar2vectorN_converter<1>("M14_AXI_awlock_converter");
    mp_M14_AXI_awlock_converter->scalar_in(m_M14_AXI_awlock_converter_signal);
    mp_M14_AXI_awlock_converter->vector_out(M14_AXI_awlock);
    mp_M14_AXI_transactor->AWLOCK(m_M14_AXI_awlock_converter_signal);
    mp_M14_AXI_transactor->AWCACHE(M14_AXI_awcache);
    mp_M14_AXI_transactor->AWPROT(M14_AXI_awprot);
    mp_M14_AXI_transactor->AWQOS(M14_AXI_awqos);
    mp_M14_AXI_transactor->AWVALID(M14_AXI_awvalid);
    mp_M14_AXI_transactor->AWREADY(M14_AXI_awready);
    mp_M14_AXI_transactor->WDATA(M14_AXI_wdata);
    mp_M14_AXI_transactor->WSTRB(M14_AXI_wstrb);
    mp_M14_AXI_transactor->WLAST(M14_AXI_wlast);
    mp_M14_AXI_transactor->WVALID(M14_AXI_wvalid);
    mp_M14_AXI_transactor->WREADY(M14_AXI_wready);
    mp_M14_AXI_transactor->BRESP(M14_AXI_bresp);
    mp_M14_AXI_transactor->BVALID(M14_AXI_bvalid);
    mp_M14_AXI_transactor->BREADY(M14_AXI_bready);
    mp_M14_AXI_transactor->ARADDR(M14_AXI_araddr);
    mp_M14_AXI_transactor->ARLEN(M14_AXI_arlen);
    mp_M14_AXI_transactor->ARSIZE(M14_AXI_arsize);
    mp_M14_AXI_transactor->ARBURST(M14_AXI_arburst);
    mp_M14_AXI_arlock_converter = new xsc::common::scalar2vectorN_converter<1>("M14_AXI_arlock_converter");
    mp_M14_AXI_arlock_converter->scalar_in(m_M14_AXI_arlock_converter_signal);
    mp_M14_AXI_arlock_converter->vector_out(M14_AXI_arlock);
    mp_M14_AXI_transactor->ARLOCK(m_M14_AXI_arlock_converter_signal);
    mp_M14_AXI_transactor->ARCACHE(M14_AXI_arcache);
    mp_M14_AXI_transactor->ARPROT(M14_AXI_arprot);
    mp_M14_AXI_transactor->ARQOS(M14_AXI_arqos);
    mp_M14_AXI_transactor->ARVALID(M14_AXI_arvalid);
    mp_M14_AXI_transactor->ARREADY(M14_AXI_arready);
    mp_M14_AXI_transactor->RDATA(M14_AXI_rdata);
    mp_M14_AXI_transactor->RRESP(M14_AXI_rresp);
    mp_M14_AXI_transactor->RLAST(M14_AXI_rlast);
    mp_M14_AXI_transactor->RVALID(M14_AXI_rvalid);
    mp_M14_AXI_transactor->RREADY(M14_AXI_rready);
    mp_M14_AXI_transactor->CLK(aclk);
    mp_M14_AXI_transactor->RST(aresetn);

    // M14_AXI' transactor sockets

    mp_impl->M14_AXI_tlm_aximm_read_socket->bind(*(mp_M14_AXI_transactor->rd_socket));
    mp_impl->M14_AXI_tlm_aximm_write_socket->bind(*(mp_M14_AXI_transactor->wr_socket));
  }
  else
  {
  }

  // configure 'M15_AXI' transactor

  if (xsc::utils::xsc_sim_manager::getInstanceParameterInt("Multi_convo_core_smartconnect_0_0", "M15_AXI_TLM_MODE") != 1)
  {
    // Instantiate Socket Stubs

  // 'M15_AXI' transactor parameters
    xsc::common_cpp::properties M15_AXI_transactor_param_props;
    M15_AXI_transactor_param_props.addLong("DATA_WIDTH", "32");
    M15_AXI_transactor_param_props.addLong("FREQ_HZ", "100000000");
    M15_AXI_transactor_param_props.addLong("ID_WIDTH", "0");
    M15_AXI_transactor_param_props.addLong("ADDR_WIDTH", "12");
    M15_AXI_transactor_param_props.addLong("AWUSER_WIDTH", "0");
    M15_AXI_transactor_param_props.addLong("ARUSER_WIDTH", "0");
    M15_AXI_transactor_param_props.addLong("WUSER_WIDTH", "0");
    M15_AXI_transactor_param_props.addLong("RUSER_WIDTH", "0");
    M15_AXI_transactor_param_props.addLong("BUSER_WIDTH", "0");
    M15_AXI_transactor_param_props.addLong("HAS_BURST", "1");
    M15_AXI_transactor_param_props.addLong("HAS_LOCK", "1");
    M15_AXI_transactor_param_props.addLong("HAS_PROT", "1");
    M15_AXI_transactor_param_props.addLong("HAS_CACHE", "1");
    M15_AXI_transactor_param_props.addLong("HAS_QOS", "1");
    M15_AXI_transactor_param_props.addLong("HAS_REGION", "0");
    M15_AXI_transactor_param_props.addLong("HAS_WSTRB", "1");
    M15_AXI_transactor_param_props.addLong("HAS_BRESP", "1");
    M15_AXI_transactor_param_props.addLong("HAS_RRESP", "1");
    M15_AXI_transactor_param_props.addLong("SUPPORTS_NARROW_BURST", "0");
    M15_AXI_transactor_param_props.addLong("NUM_READ_OUTSTANDING", "2");
    M15_AXI_transactor_param_props.addLong("NUM_WRITE_OUTSTANDING", "2");
    M15_AXI_transactor_param_props.addLong("MAX_BURST_LENGTH", "256");
    M15_AXI_transactor_param_props.addLong("NUM_READ_THREADS", "1");
    M15_AXI_transactor_param_props.addLong("NUM_WRITE_THREADS", "1");
    M15_AXI_transactor_param_props.addLong("RUSER_BITS_PER_BYTE", "0");
    M15_AXI_transactor_param_props.addLong("WUSER_BITS_PER_BYTE", "0");
    M15_AXI_transactor_param_props.addLong("HAS_SIZE", "1");
    M15_AXI_transactor_param_props.addLong("HAS_RESET", "1");
    M15_AXI_transactor_param_props.addFloat("PHASE", "0.0");
    M15_AXI_transactor_param_props.addString("PROTOCOL", "AXI4");
    M15_AXI_transactor_param_props.addString("READ_WRITE_MODE", "READ_WRITE");
    M15_AXI_transactor_param_props.addString("CLK_DOMAIN", "Multi_convo_core_processing_system7_0_0_FCLK_CLK0");

    mp_M15_AXI_transactor = new xtlm::xaximm_xtlm2pin_t<32,12,1,1,1,1,1,1>("M15_AXI_transactor", M15_AXI_transactor_param_props);

    // M15_AXI' transactor ports

    mp_M15_AXI_transactor->AWADDR(M15_AXI_awaddr);
    mp_M15_AXI_transactor->AWLEN(M15_AXI_awlen);
    mp_M15_AXI_transactor->AWSIZE(M15_AXI_awsize);
    mp_M15_AXI_transactor->AWBURST(M15_AXI_awburst);
    mp_M15_AXI_awlock_converter = new xsc::common::scalar2vectorN_converter<1>("M15_AXI_awlock_converter");
    mp_M15_AXI_awlock_converter->scalar_in(m_M15_AXI_awlock_converter_signal);
    mp_M15_AXI_awlock_converter->vector_out(M15_AXI_awlock);
    mp_M15_AXI_transactor->AWLOCK(m_M15_AXI_awlock_converter_signal);
    mp_M15_AXI_transactor->AWCACHE(M15_AXI_awcache);
    mp_M15_AXI_transactor->AWPROT(M15_AXI_awprot);
    mp_M15_AXI_transactor->AWQOS(M15_AXI_awqos);
    mp_M15_AXI_transactor->AWVALID(M15_AXI_awvalid);
    mp_M15_AXI_transactor->AWREADY(M15_AXI_awready);
    mp_M15_AXI_transactor->WDATA(M15_AXI_wdata);
    mp_M15_AXI_transactor->WSTRB(M15_AXI_wstrb);
    mp_M15_AXI_transactor->WLAST(M15_AXI_wlast);
    mp_M15_AXI_transactor->WVALID(M15_AXI_wvalid);
    mp_M15_AXI_transactor->WREADY(M15_AXI_wready);
    mp_M15_AXI_transactor->BRESP(M15_AXI_bresp);
    mp_M15_AXI_transactor->BVALID(M15_AXI_bvalid);
    mp_M15_AXI_transactor->BREADY(M15_AXI_bready);
    mp_M15_AXI_transactor->ARADDR(M15_AXI_araddr);
    mp_M15_AXI_transactor->ARLEN(M15_AXI_arlen);
    mp_M15_AXI_transactor->ARSIZE(M15_AXI_arsize);
    mp_M15_AXI_transactor->ARBURST(M15_AXI_arburst);
    mp_M15_AXI_arlock_converter = new xsc::common::scalar2vectorN_converter<1>("M15_AXI_arlock_converter");
    mp_M15_AXI_arlock_converter->scalar_in(m_M15_AXI_arlock_converter_signal);
    mp_M15_AXI_arlock_converter->vector_out(M15_AXI_arlock);
    mp_M15_AXI_transactor->ARLOCK(m_M15_AXI_arlock_converter_signal);
    mp_M15_AXI_transactor->ARCACHE(M15_AXI_arcache);
    mp_M15_AXI_transactor->ARPROT(M15_AXI_arprot);
    mp_M15_AXI_transactor->ARQOS(M15_AXI_arqos);
    mp_M15_AXI_transactor->ARVALID(M15_AXI_arvalid);
    mp_M15_AXI_transactor->ARREADY(M15_AXI_arready);
    mp_M15_AXI_transactor->RDATA(M15_AXI_rdata);
    mp_M15_AXI_transactor->RRESP(M15_AXI_rresp);
    mp_M15_AXI_transactor->RLAST(M15_AXI_rlast);
    mp_M15_AXI_transactor->RVALID(M15_AXI_rvalid);
    mp_M15_AXI_transactor->RREADY(M15_AXI_rready);
    mp_M15_AXI_transactor->CLK(aclk);
    mp_M15_AXI_transactor->RST(aresetn);

    // M15_AXI' transactor sockets

    mp_impl->M15_AXI_tlm_aximm_read_socket->bind(*(mp_M15_AXI_transactor->rd_socket));
    mp_impl->M15_AXI_tlm_aximm_write_socket->bind(*(mp_M15_AXI_transactor->wr_socket));
  }
  else
  {
  }

  // configure 'M16_AXI' transactor

  if (xsc::utils::xsc_sim_manager::getInstanceParameterInt("Multi_convo_core_smartconnect_0_0", "M16_AXI_TLM_MODE") != 1)
  {
    // Instantiate Socket Stubs

  // 'M16_AXI' transactor parameters
    xsc::common_cpp::properties M16_AXI_transactor_param_props;
    M16_AXI_transactor_param_props.addLong("DATA_WIDTH", "32");
    M16_AXI_transactor_param_props.addLong("FREQ_HZ", "100000000");
    M16_AXI_transactor_param_props.addLong("ID_WIDTH", "0");
    M16_AXI_transactor_param_props.addLong("ADDR_WIDTH", "12");
    M16_AXI_transactor_param_props.addLong("AWUSER_WIDTH", "0");
    M16_AXI_transactor_param_props.addLong("ARUSER_WIDTH", "0");
    M16_AXI_transactor_param_props.addLong("WUSER_WIDTH", "0");
    M16_AXI_transactor_param_props.addLong("RUSER_WIDTH", "0");
    M16_AXI_transactor_param_props.addLong("BUSER_WIDTH", "0");
    M16_AXI_transactor_param_props.addLong("HAS_BURST", "1");
    M16_AXI_transactor_param_props.addLong("HAS_LOCK", "1");
    M16_AXI_transactor_param_props.addLong("HAS_PROT", "1");
    M16_AXI_transactor_param_props.addLong("HAS_CACHE", "1");
    M16_AXI_transactor_param_props.addLong("HAS_QOS", "1");
    M16_AXI_transactor_param_props.addLong("HAS_REGION", "0");
    M16_AXI_transactor_param_props.addLong("HAS_WSTRB", "1");
    M16_AXI_transactor_param_props.addLong("HAS_BRESP", "1");
    M16_AXI_transactor_param_props.addLong("HAS_RRESP", "1");
    M16_AXI_transactor_param_props.addLong("SUPPORTS_NARROW_BURST", "0");
    M16_AXI_transactor_param_props.addLong("NUM_READ_OUTSTANDING", "2");
    M16_AXI_transactor_param_props.addLong("NUM_WRITE_OUTSTANDING", "2");
    M16_AXI_transactor_param_props.addLong("MAX_BURST_LENGTH", "256");
    M16_AXI_transactor_param_props.addLong("NUM_READ_THREADS", "1");
    M16_AXI_transactor_param_props.addLong("NUM_WRITE_THREADS", "1");
    M16_AXI_transactor_param_props.addLong("RUSER_BITS_PER_BYTE", "0");
    M16_AXI_transactor_param_props.addLong("WUSER_BITS_PER_BYTE", "0");
    M16_AXI_transactor_param_props.addLong("HAS_SIZE", "1");
    M16_AXI_transactor_param_props.addLong("HAS_RESET", "1");
    M16_AXI_transactor_param_props.addFloat("PHASE", "0.0");
    M16_AXI_transactor_param_props.addString("PROTOCOL", "AXI4");
    M16_AXI_transactor_param_props.addString("READ_WRITE_MODE", "READ_WRITE");
    M16_AXI_transactor_param_props.addString("CLK_DOMAIN", "Multi_convo_core_processing_system7_0_0_FCLK_CLK0");

    mp_M16_AXI_transactor = new xtlm::xaximm_xtlm2pin_t<32,12,1,1,1,1,1,1>("M16_AXI_transactor", M16_AXI_transactor_param_props);

    // M16_AXI' transactor ports

    mp_M16_AXI_transactor->AWADDR(M16_AXI_awaddr);
    mp_M16_AXI_transactor->AWLEN(M16_AXI_awlen);
    mp_M16_AXI_transactor->AWSIZE(M16_AXI_awsize);
    mp_M16_AXI_transactor->AWBURST(M16_AXI_awburst);
    mp_M16_AXI_awlock_converter = new xsc::common::scalar2vectorN_converter<1>("M16_AXI_awlock_converter");
    mp_M16_AXI_awlock_converter->scalar_in(m_M16_AXI_awlock_converter_signal);
    mp_M16_AXI_awlock_converter->vector_out(M16_AXI_awlock);
    mp_M16_AXI_transactor->AWLOCK(m_M16_AXI_awlock_converter_signal);
    mp_M16_AXI_transactor->AWCACHE(M16_AXI_awcache);
    mp_M16_AXI_transactor->AWPROT(M16_AXI_awprot);
    mp_M16_AXI_transactor->AWQOS(M16_AXI_awqos);
    mp_M16_AXI_transactor->AWVALID(M16_AXI_awvalid);
    mp_M16_AXI_transactor->AWREADY(M16_AXI_awready);
    mp_M16_AXI_transactor->WDATA(M16_AXI_wdata);
    mp_M16_AXI_transactor->WSTRB(M16_AXI_wstrb);
    mp_M16_AXI_transactor->WLAST(M16_AXI_wlast);
    mp_M16_AXI_transactor->WVALID(M16_AXI_wvalid);
    mp_M16_AXI_transactor->WREADY(M16_AXI_wready);
    mp_M16_AXI_transactor->BRESP(M16_AXI_bresp);
    mp_M16_AXI_transactor->BVALID(M16_AXI_bvalid);
    mp_M16_AXI_transactor->BREADY(M16_AXI_bready);
    mp_M16_AXI_transactor->ARADDR(M16_AXI_araddr);
    mp_M16_AXI_transactor->ARLEN(M16_AXI_arlen);
    mp_M16_AXI_transactor->ARSIZE(M16_AXI_arsize);
    mp_M16_AXI_transactor->ARBURST(M16_AXI_arburst);
    mp_M16_AXI_arlock_converter = new xsc::common::scalar2vectorN_converter<1>("M16_AXI_arlock_converter");
    mp_M16_AXI_arlock_converter->scalar_in(m_M16_AXI_arlock_converter_signal);
    mp_M16_AXI_arlock_converter->vector_out(M16_AXI_arlock);
    mp_M16_AXI_transactor->ARLOCK(m_M16_AXI_arlock_converter_signal);
    mp_M16_AXI_transactor->ARCACHE(M16_AXI_arcache);
    mp_M16_AXI_transactor->ARPROT(M16_AXI_arprot);
    mp_M16_AXI_transactor->ARQOS(M16_AXI_arqos);
    mp_M16_AXI_transactor->ARVALID(M16_AXI_arvalid);
    mp_M16_AXI_transactor->ARREADY(M16_AXI_arready);
    mp_M16_AXI_transactor->RDATA(M16_AXI_rdata);
    mp_M16_AXI_transactor->RRESP(M16_AXI_rresp);
    mp_M16_AXI_transactor->RLAST(M16_AXI_rlast);
    mp_M16_AXI_transactor->RVALID(M16_AXI_rvalid);
    mp_M16_AXI_transactor->RREADY(M16_AXI_rready);
    mp_M16_AXI_transactor->CLK(aclk);
    mp_M16_AXI_transactor->RST(aresetn);

    // M16_AXI' transactor sockets

    mp_impl->M16_AXI_tlm_aximm_read_socket->bind(*(mp_M16_AXI_transactor->rd_socket));
    mp_impl->M16_AXI_tlm_aximm_write_socket->bind(*(mp_M16_AXI_transactor->wr_socket));
  }
  else
  {
  }

  // configure 'M17_AXI' transactor

  if (xsc::utils::xsc_sim_manager::getInstanceParameterInt("Multi_convo_core_smartconnect_0_0", "M17_AXI_TLM_MODE") != 1)
  {
    // Instantiate Socket Stubs

  // 'M17_AXI' transactor parameters
    xsc::common_cpp::properties M17_AXI_transactor_param_props;
    M17_AXI_transactor_param_props.addLong("DATA_WIDTH", "32");
    M17_AXI_transactor_param_props.addLong("FREQ_HZ", "100000000");
    M17_AXI_transactor_param_props.addLong("ID_WIDTH", "0");
    M17_AXI_transactor_param_props.addLong("ADDR_WIDTH", "12");
    M17_AXI_transactor_param_props.addLong("AWUSER_WIDTH", "0");
    M17_AXI_transactor_param_props.addLong("ARUSER_WIDTH", "0");
    M17_AXI_transactor_param_props.addLong("WUSER_WIDTH", "0");
    M17_AXI_transactor_param_props.addLong("RUSER_WIDTH", "0");
    M17_AXI_transactor_param_props.addLong("BUSER_WIDTH", "0");
    M17_AXI_transactor_param_props.addLong("HAS_BURST", "1");
    M17_AXI_transactor_param_props.addLong("HAS_LOCK", "1");
    M17_AXI_transactor_param_props.addLong("HAS_PROT", "1");
    M17_AXI_transactor_param_props.addLong("HAS_CACHE", "1");
    M17_AXI_transactor_param_props.addLong("HAS_QOS", "1");
    M17_AXI_transactor_param_props.addLong("HAS_REGION", "0");
    M17_AXI_transactor_param_props.addLong("HAS_WSTRB", "1");
    M17_AXI_transactor_param_props.addLong("HAS_BRESP", "1");
    M17_AXI_transactor_param_props.addLong("HAS_RRESP", "1");
    M17_AXI_transactor_param_props.addLong("SUPPORTS_NARROW_BURST", "0");
    M17_AXI_transactor_param_props.addLong("NUM_READ_OUTSTANDING", "2");
    M17_AXI_transactor_param_props.addLong("NUM_WRITE_OUTSTANDING", "2");
    M17_AXI_transactor_param_props.addLong("MAX_BURST_LENGTH", "256");
    M17_AXI_transactor_param_props.addLong("NUM_READ_THREADS", "1");
    M17_AXI_transactor_param_props.addLong("NUM_WRITE_THREADS", "1");
    M17_AXI_transactor_param_props.addLong("RUSER_BITS_PER_BYTE", "0");
    M17_AXI_transactor_param_props.addLong("WUSER_BITS_PER_BYTE", "0");
    M17_AXI_transactor_param_props.addLong("HAS_SIZE", "1");
    M17_AXI_transactor_param_props.addLong("HAS_RESET", "1");
    M17_AXI_transactor_param_props.addFloat("PHASE", "0.0");
    M17_AXI_transactor_param_props.addString("PROTOCOL", "AXI4");
    M17_AXI_transactor_param_props.addString("READ_WRITE_MODE", "READ_WRITE");
    M17_AXI_transactor_param_props.addString("CLK_DOMAIN", "Multi_convo_core_processing_system7_0_0_FCLK_CLK0");

    mp_M17_AXI_transactor = new xtlm::xaximm_xtlm2pin_t<32,12,1,1,1,1,1,1>("M17_AXI_transactor", M17_AXI_transactor_param_props);

    // M17_AXI' transactor ports

    mp_M17_AXI_transactor->AWADDR(M17_AXI_awaddr);
    mp_M17_AXI_transactor->AWLEN(M17_AXI_awlen);
    mp_M17_AXI_transactor->AWSIZE(M17_AXI_awsize);
    mp_M17_AXI_transactor->AWBURST(M17_AXI_awburst);
    mp_M17_AXI_awlock_converter = new xsc::common::scalar2vectorN_converter<1>("M17_AXI_awlock_converter");
    mp_M17_AXI_awlock_converter->scalar_in(m_M17_AXI_awlock_converter_signal);
    mp_M17_AXI_awlock_converter->vector_out(M17_AXI_awlock);
    mp_M17_AXI_transactor->AWLOCK(m_M17_AXI_awlock_converter_signal);
    mp_M17_AXI_transactor->AWCACHE(M17_AXI_awcache);
    mp_M17_AXI_transactor->AWPROT(M17_AXI_awprot);
    mp_M17_AXI_transactor->AWQOS(M17_AXI_awqos);
    mp_M17_AXI_transactor->AWVALID(M17_AXI_awvalid);
    mp_M17_AXI_transactor->AWREADY(M17_AXI_awready);
    mp_M17_AXI_transactor->WDATA(M17_AXI_wdata);
    mp_M17_AXI_transactor->WSTRB(M17_AXI_wstrb);
    mp_M17_AXI_transactor->WLAST(M17_AXI_wlast);
    mp_M17_AXI_transactor->WVALID(M17_AXI_wvalid);
    mp_M17_AXI_transactor->WREADY(M17_AXI_wready);
    mp_M17_AXI_transactor->BRESP(M17_AXI_bresp);
    mp_M17_AXI_transactor->BVALID(M17_AXI_bvalid);
    mp_M17_AXI_transactor->BREADY(M17_AXI_bready);
    mp_M17_AXI_transactor->ARADDR(M17_AXI_araddr);
    mp_M17_AXI_transactor->ARLEN(M17_AXI_arlen);
    mp_M17_AXI_transactor->ARSIZE(M17_AXI_arsize);
    mp_M17_AXI_transactor->ARBURST(M17_AXI_arburst);
    mp_M17_AXI_arlock_converter = new xsc::common::scalar2vectorN_converter<1>("M17_AXI_arlock_converter");
    mp_M17_AXI_arlock_converter->scalar_in(m_M17_AXI_arlock_converter_signal);
    mp_M17_AXI_arlock_converter->vector_out(M17_AXI_arlock);
    mp_M17_AXI_transactor->ARLOCK(m_M17_AXI_arlock_converter_signal);
    mp_M17_AXI_transactor->ARCACHE(M17_AXI_arcache);
    mp_M17_AXI_transactor->ARPROT(M17_AXI_arprot);
    mp_M17_AXI_transactor->ARQOS(M17_AXI_arqos);
    mp_M17_AXI_transactor->ARVALID(M17_AXI_arvalid);
    mp_M17_AXI_transactor->ARREADY(M17_AXI_arready);
    mp_M17_AXI_transactor->RDATA(M17_AXI_rdata);
    mp_M17_AXI_transactor->RRESP(M17_AXI_rresp);
    mp_M17_AXI_transactor->RLAST(M17_AXI_rlast);
    mp_M17_AXI_transactor->RVALID(M17_AXI_rvalid);
    mp_M17_AXI_transactor->RREADY(M17_AXI_rready);
    mp_M17_AXI_transactor->CLK(aclk);
    mp_M17_AXI_transactor->RST(aresetn);

    // M17_AXI' transactor sockets

    mp_impl->M17_AXI_tlm_aximm_read_socket->bind(*(mp_M17_AXI_transactor->rd_socket));
    mp_impl->M17_AXI_tlm_aximm_write_socket->bind(*(mp_M17_AXI_transactor->wr_socket));
  }
  else
  {
  }

  // configure 'M18_AXI' transactor

  if (xsc::utils::xsc_sim_manager::getInstanceParameterInt("Multi_convo_core_smartconnect_0_0", "M18_AXI_TLM_MODE") != 1)
  {
    // Instantiate Socket Stubs

  // 'M18_AXI' transactor parameters
    xsc::common_cpp::properties M18_AXI_transactor_param_props;
    M18_AXI_transactor_param_props.addLong("DATA_WIDTH", "32");
    M18_AXI_transactor_param_props.addLong("FREQ_HZ", "100000000");
    M18_AXI_transactor_param_props.addLong("ID_WIDTH", "0");
    M18_AXI_transactor_param_props.addLong("ADDR_WIDTH", "12");
    M18_AXI_transactor_param_props.addLong("AWUSER_WIDTH", "0");
    M18_AXI_transactor_param_props.addLong("ARUSER_WIDTH", "0");
    M18_AXI_transactor_param_props.addLong("WUSER_WIDTH", "0");
    M18_AXI_transactor_param_props.addLong("RUSER_WIDTH", "0");
    M18_AXI_transactor_param_props.addLong("BUSER_WIDTH", "0");
    M18_AXI_transactor_param_props.addLong("HAS_BURST", "1");
    M18_AXI_transactor_param_props.addLong("HAS_LOCK", "1");
    M18_AXI_transactor_param_props.addLong("HAS_PROT", "1");
    M18_AXI_transactor_param_props.addLong("HAS_CACHE", "1");
    M18_AXI_transactor_param_props.addLong("HAS_QOS", "1");
    M18_AXI_transactor_param_props.addLong("HAS_REGION", "0");
    M18_AXI_transactor_param_props.addLong("HAS_WSTRB", "1");
    M18_AXI_transactor_param_props.addLong("HAS_BRESP", "1");
    M18_AXI_transactor_param_props.addLong("HAS_RRESP", "1");
    M18_AXI_transactor_param_props.addLong("SUPPORTS_NARROW_BURST", "0");
    M18_AXI_transactor_param_props.addLong("NUM_READ_OUTSTANDING", "2");
    M18_AXI_transactor_param_props.addLong("NUM_WRITE_OUTSTANDING", "2");
    M18_AXI_transactor_param_props.addLong("MAX_BURST_LENGTH", "256");
    M18_AXI_transactor_param_props.addLong("NUM_READ_THREADS", "1");
    M18_AXI_transactor_param_props.addLong("NUM_WRITE_THREADS", "1");
    M18_AXI_transactor_param_props.addLong("RUSER_BITS_PER_BYTE", "0");
    M18_AXI_transactor_param_props.addLong("WUSER_BITS_PER_BYTE", "0");
    M18_AXI_transactor_param_props.addLong("HAS_SIZE", "1");
    M18_AXI_transactor_param_props.addLong("HAS_RESET", "1");
    M18_AXI_transactor_param_props.addFloat("PHASE", "0.0");
    M18_AXI_transactor_param_props.addString("PROTOCOL", "AXI4");
    M18_AXI_transactor_param_props.addString("READ_WRITE_MODE", "READ_WRITE");
    M18_AXI_transactor_param_props.addString("CLK_DOMAIN", "Multi_convo_core_processing_system7_0_0_FCLK_CLK0");

    mp_M18_AXI_transactor = new xtlm::xaximm_xtlm2pin_t<32,12,1,1,1,1,1,1>("M18_AXI_transactor", M18_AXI_transactor_param_props);

    // M18_AXI' transactor ports

    mp_M18_AXI_transactor->AWADDR(M18_AXI_awaddr);
    mp_M18_AXI_transactor->AWLEN(M18_AXI_awlen);
    mp_M18_AXI_transactor->AWSIZE(M18_AXI_awsize);
    mp_M18_AXI_transactor->AWBURST(M18_AXI_awburst);
    mp_M18_AXI_awlock_converter = new xsc::common::scalar2vectorN_converter<1>("M18_AXI_awlock_converter");
    mp_M18_AXI_awlock_converter->scalar_in(m_M18_AXI_awlock_converter_signal);
    mp_M18_AXI_awlock_converter->vector_out(M18_AXI_awlock);
    mp_M18_AXI_transactor->AWLOCK(m_M18_AXI_awlock_converter_signal);
    mp_M18_AXI_transactor->AWCACHE(M18_AXI_awcache);
    mp_M18_AXI_transactor->AWPROT(M18_AXI_awprot);
    mp_M18_AXI_transactor->AWQOS(M18_AXI_awqos);
    mp_M18_AXI_transactor->AWVALID(M18_AXI_awvalid);
    mp_M18_AXI_transactor->AWREADY(M18_AXI_awready);
    mp_M18_AXI_transactor->WDATA(M18_AXI_wdata);
    mp_M18_AXI_transactor->WSTRB(M18_AXI_wstrb);
    mp_M18_AXI_transactor->WLAST(M18_AXI_wlast);
    mp_M18_AXI_transactor->WVALID(M18_AXI_wvalid);
    mp_M18_AXI_transactor->WREADY(M18_AXI_wready);
    mp_M18_AXI_transactor->BRESP(M18_AXI_bresp);
    mp_M18_AXI_transactor->BVALID(M18_AXI_bvalid);
    mp_M18_AXI_transactor->BREADY(M18_AXI_bready);
    mp_M18_AXI_transactor->ARADDR(M18_AXI_araddr);
    mp_M18_AXI_transactor->ARLEN(M18_AXI_arlen);
    mp_M18_AXI_transactor->ARSIZE(M18_AXI_arsize);
    mp_M18_AXI_transactor->ARBURST(M18_AXI_arburst);
    mp_M18_AXI_arlock_converter = new xsc::common::scalar2vectorN_converter<1>("M18_AXI_arlock_converter");
    mp_M18_AXI_arlock_converter->scalar_in(m_M18_AXI_arlock_converter_signal);
    mp_M18_AXI_arlock_converter->vector_out(M18_AXI_arlock);
    mp_M18_AXI_transactor->ARLOCK(m_M18_AXI_arlock_converter_signal);
    mp_M18_AXI_transactor->ARCACHE(M18_AXI_arcache);
    mp_M18_AXI_transactor->ARPROT(M18_AXI_arprot);
    mp_M18_AXI_transactor->ARQOS(M18_AXI_arqos);
    mp_M18_AXI_transactor->ARVALID(M18_AXI_arvalid);
    mp_M18_AXI_transactor->ARREADY(M18_AXI_arready);
    mp_M18_AXI_transactor->RDATA(M18_AXI_rdata);
    mp_M18_AXI_transactor->RRESP(M18_AXI_rresp);
    mp_M18_AXI_transactor->RLAST(M18_AXI_rlast);
    mp_M18_AXI_transactor->RVALID(M18_AXI_rvalid);
    mp_M18_AXI_transactor->RREADY(M18_AXI_rready);
    mp_M18_AXI_transactor->CLK(aclk);
    mp_M18_AXI_transactor->RST(aresetn);

    // M18_AXI' transactor sockets

    mp_impl->M18_AXI_tlm_aximm_read_socket->bind(*(mp_M18_AXI_transactor->rd_socket));
    mp_impl->M18_AXI_tlm_aximm_write_socket->bind(*(mp_M18_AXI_transactor->wr_socket));
  }
  else
  {
  }

  // configure 'M19_AXI' transactor

  if (xsc::utils::xsc_sim_manager::getInstanceParameterInt("Multi_convo_core_smartconnect_0_0", "M19_AXI_TLM_MODE") != 1)
  {
    // Instantiate Socket Stubs

  // 'M19_AXI' transactor parameters
    xsc::common_cpp::properties M19_AXI_transactor_param_props;
    M19_AXI_transactor_param_props.addLong("DATA_WIDTH", "32");
    M19_AXI_transactor_param_props.addLong("FREQ_HZ", "100000000");
    M19_AXI_transactor_param_props.addLong("ID_WIDTH", "0");
    M19_AXI_transactor_param_props.addLong("ADDR_WIDTH", "12");
    M19_AXI_transactor_param_props.addLong("AWUSER_WIDTH", "0");
    M19_AXI_transactor_param_props.addLong("ARUSER_WIDTH", "0");
    M19_AXI_transactor_param_props.addLong("WUSER_WIDTH", "0");
    M19_AXI_transactor_param_props.addLong("RUSER_WIDTH", "0");
    M19_AXI_transactor_param_props.addLong("BUSER_WIDTH", "0");
    M19_AXI_transactor_param_props.addLong("HAS_BURST", "1");
    M19_AXI_transactor_param_props.addLong("HAS_LOCK", "1");
    M19_AXI_transactor_param_props.addLong("HAS_PROT", "1");
    M19_AXI_transactor_param_props.addLong("HAS_CACHE", "1");
    M19_AXI_transactor_param_props.addLong("HAS_QOS", "1");
    M19_AXI_transactor_param_props.addLong("HAS_REGION", "0");
    M19_AXI_transactor_param_props.addLong("HAS_WSTRB", "1");
    M19_AXI_transactor_param_props.addLong("HAS_BRESP", "1");
    M19_AXI_transactor_param_props.addLong("HAS_RRESP", "1");
    M19_AXI_transactor_param_props.addLong("SUPPORTS_NARROW_BURST", "0");
    M19_AXI_transactor_param_props.addLong("NUM_READ_OUTSTANDING", "2");
    M19_AXI_transactor_param_props.addLong("NUM_WRITE_OUTSTANDING", "2");
    M19_AXI_transactor_param_props.addLong("MAX_BURST_LENGTH", "256");
    M19_AXI_transactor_param_props.addLong("NUM_READ_THREADS", "1");
    M19_AXI_transactor_param_props.addLong("NUM_WRITE_THREADS", "1");
    M19_AXI_transactor_param_props.addLong("RUSER_BITS_PER_BYTE", "0");
    M19_AXI_transactor_param_props.addLong("WUSER_BITS_PER_BYTE", "0");
    M19_AXI_transactor_param_props.addLong("HAS_SIZE", "1");
    M19_AXI_transactor_param_props.addLong("HAS_RESET", "1");
    M19_AXI_transactor_param_props.addFloat("PHASE", "0.0");
    M19_AXI_transactor_param_props.addString("PROTOCOL", "AXI4");
    M19_AXI_transactor_param_props.addString("READ_WRITE_MODE", "READ_WRITE");
    M19_AXI_transactor_param_props.addString("CLK_DOMAIN", "Multi_convo_core_processing_system7_0_0_FCLK_CLK0");

    mp_M19_AXI_transactor = new xtlm::xaximm_xtlm2pin_t<32,12,1,1,1,1,1,1>("M19_AXI_transactor", M19_AXI_transactor_param_props);

    // M19_AXI' transactor ports

    mp_M19_AXI_transactor->AWADDR(M19_AXI_awaddr);
    mp_M19_AXI_transactor->AWLEN(M19_AXI_awlen);
    mp_M19_AXI_transactor->AWSIZE(M19_AXI_awsize);
    mp_M19_AXI_transactor->AWBURST(M19_AXI_awburst);
    mp_M19_AXI_awlock_converter = new xsc::common::scalar2vectorN_converter<1>("M19_AXI_awlock_converter");
    mp_M19_AXI_awlock_converter->scalar_in(m_M19_AXI_awlock_converter_signal);
    mp_M19_AXI_awlock_converter->vector_out(M19_AXI_awlock);
    mp_M19_AXI_transactor->AWLOCK(m_M19_AXI_awlock_converter_signal);
    mp_M19_AXI_transactor->AWCACHE(M19_AXI_awcache);
    mp_M19_AXI_transactor->AWPROT(M19_AXI_awprot);
    mp_M19_AXI_transactor->AWQOS(M19_AXI_awqos);
    mp_M19_AXI_transactor->AWVALID(M19_AXI_awvalid);
    mp_M19_AXI_transactor->AWREADY(M19_AXI_awready);
    mp_M19_AXI_transactor->WDATA(M19_AXI_wdata);
    mp_M19_AXI_transactor->WSTRB(M19_AXI_wstrb);
    mp_M19_AXI_transactor->WLAST(M19_AXI_wlast);
    mp_M19_AXI_transactor->WVALID(M19_AXI_wvalid);
    mp_M19_AXI_transactor->WREADY(M19_AXI_wready);
    mp_M19_AXI_transactor->BRESP(M19_AXI_bresp);
    mp_M19_AXI_transactor->BVALID(M19_AXI_bvalid);
    mp_M19_AXI_transactor->BREADY(M19_AXI_bready);
    mp_M19_AXI_transactor->ARADDR(M19_AXI_araddr);
    mp_M19_AXI_transactor->ARLEN(M19_AXI_arlen);
    mp_M19_AXI_transactor->ARSIZE(M19_AXI_arsize);
    mp_M19_AXI_transactor->ARBURST(M19_AXI_arburst);
    mp_M19_AXI_arlock_converter = new xsc::common::scalar2vectorN_converter<1>("M19_AXI_arlock_converter");
    mp_M19_AXI_arlock_converter->scalar_in(m_M19_AXI_arlock_converter_signal);
    mp_M19_AXI_arlock_converter->vector_out(M19_AXI_arlock);
    mp_M19_AXI_transactor->ARLOCK(m_M19_AXI_arlock_converter_signal);
    mp_M19_AXI_transactor->ARCACHE(M19_AXI_arcache);
    mp_M19_AXI_transactor->ARPROT(M19_AXI_arprot);
    mp_M19_AXI_transactor->ARQOS(M19_AXI_arqos);
    mp_M19_AXI_transactor->ARVALID(M19_AXI_arvalid);
    mp_M19_AXI_transactor->ARREADY(M19_AXI_arready);
    mp_M19_AXI_transactor->RDATA(M19_AXI_rdata);
    mp_M19_AXI_transactor->RRESP(M19_AXI_rresp);
    mp_M19_AXI_transactor->RLAST(M19_AXI_rlast);
    mp_M19_AXI_transactor->RVALID(M19_AXI_rvalid);
    mp_M19_AXI_transactor->RREADY(M19_AXI_rready);
    mp_M19_AXI_transactor->CLK(aclk);
    mp_M19_AXI_transactor->RST(aresetn);

    // M19_AXI' transactor sockets

    mp_impl->M19_AXI_tlm_aximm_read_socket->bind(*(mp_M19_AXI_transactor->rd_socket));
    mp_impl->M19_AXI_tlm_aximm_write_socket->bind(*(mp_M19_AXI_transactor->wr_socket));
  }
  else
  {
  }

  // configure 'M20_AXI' transactor

  if (xsc::utils::xsc_sim_manager::getInstanceParameterInt("Multi_convo_core_smartconnect_0_0", "M20_AXI_TLM_MODE") != 1)
  {
    // Instantiate Socket Stubs

  // 'M20_AXI' transactor parameters
    xsc::common_cpp::properties M20_AXI_transactor_param_props;
    M20_AXI_transactor_param_props.addLong("DATA_WIDTH", "32");
    M20_AXI_transactor_param_props.addLong("FREQ_HZ", "100000000");
    M20_AXI_transactor_param_props.addLong("ID_WIDTH", "0");
    M20_AXI_transactor_param_props.addLong("ADDR_WIDTH", "12");
    M20_AXI_transactor_param_props.addLong("AWUSER_WIDTH", "0");
    M20_AXI_transactor_param_props.addLong("ARUSER_WIDTH", "0");
    M20_AXI_transactor_param_props.addLong("WUSER_WIDTH", "0");
    M20_AXI_transactor_param_props.addLong("RUSER_WIDTH", "0");
    M20_AXI_transactor_param_props.addLong("BUSER_WIDTH", "0");
    M20_AXI_transactor_param_props.addLong("HAS_BURST", "1");
    M20_AXI_transactor_param_props.addLong("HAS_LOCK", "1");
    M20_AXI_transactor_param_props.addLong("HAS_PROT", "1");
    M20_AXI_transactor_param_props.addLong("HAS_CACHE", "1");
    M20_AXI_transactor_param_props.addLong("HAS_QOS", "1");
    M20_AXI_transactor_param_props.addLong("HAS_REGION", "0");
    M20_AXI_transactor_param_props.addLong("HAS_WSTRB", "1");
    M20_AXI_transactor_param_props.addLong("HAS_BRESP", "1");
    M20_AXI_transactor_param_props.addLong("HAS_RRESP", "1");
    M20_AXI_transactor_param_props.addLong("SUPPORTS_NARROW_BURST", "0");
    M20_AXI_transactor_param_props.addLong("NUM_READ_OUTSTANDING", "2");
    M20_AXI_transactor_param_props.addLong("NUM_WRITE_OUTSTANDING", "2");
    M20_AXI_transactor_param_props.addLong("MAX_BURST_LENGTH", "256");
    M20_AXI_transactor_param_props.addLong("NUM_READ_THREADS", "1");
    M20_AXI_transactor_param_props.addLong("NUM_WRITE_THREADS", "1");
    M20_AXI_transactor_param_props.addLong("RUSER_BITS_PER_BYTE", "0");
    M20_AXI_transactor_param_props.addLong("WUSER_BITS_PER_BYTE", "0");
    M20_AXI_transactor_param_props.addLong("HAS_SIZE", "1");
    M20_AXI_transactor_param_props.addLong("HAS_RESET", "1");
    M20_AXI_transactor_param_props.addFloat("PHASE", "0.0");
    M20_AXI_transactor_param_props.addString("PROTOCOL", "AXI4");
    M20_AXI_transactor_param_props.addString("READ_WRITE_MODE", "READ_WRITE");
    M20_AXI_transactor_param_props.addString("CLK_DOMAIN", "Multi_convo_core_processing_system7_0_0_FCLK_CLK0");

    mp_M20_AXI_transactor = new xtlm::xaximm_xtlm2pin_t<32,12,1,1,1,1,1,1>("M20_AXI_transactor", M20_AXI_transactor_param_props);

    // M20_AXI' transactor ports

    mp_M20_AXI_transactor->AWADDR(M20_AXI_awaddr);
    mp_M20_AXI_transactor->AWLEN(M20_AXI_awlen);
    mp_M20_AXI_transactor->AWSIZE(M20_AXI_awsize);
    mp_M20_AXI_transactor->AWBURST(M20_AXI_awburst);
    mp_M20_AXI_awlock_converter = new xsc::common::scalar2vectorN_converter<1>("M20_AXI_awlock_converter");
    mp_M20_AXI_awlock_converter->scalar_in(m_M20_AXI_awlock_converter_signal);
    mp_M20_AXI_awlock_converter->vector_out(M20_AXI_awlock);
    mp_M20_AXI_transactor->AWLOCK(m_M20_AXI_awlock_converter_signal);
    mp_M20_AXI_transactor->AWCACHE(M20_AXI_awcache);
    mp_M20_AXI_transactor->AWPROT(M20_AXI_awprot);
    mp_M20_AXI_transactor->AWQOS(M20_AXI_awqos);
    mp_M20_AXI_transactor->AWVALID(M20_AXI_awvalid);
    mp_M20_AXI_transactor->AWREADY(M20_AXI_awready);
    mp_M20_AXI_transactor->WDATA(M20_AXI_wdata);
    mp_M20_AXI_transactor->WSTRB(M20_AXI_wstrb);
    mp_M20_AXI_transactor->WLAST(M20_AXI_wlast);
    mp_M20_AXI_transactor->WVALID(M20_AXI_wvalid);
    mp_M20_AXI_transactor->WREADY(M20_AXI_wready);
    mp_M20_AXI_transactor->BRESP(M20_AXI_bresp);
    mp_M20_AXI_transactor->BVALID(M20_AXI_bvalid);
    mp_M20_AXI_transactor->BREADY(M20_AXI_bready);
    mp_M20_AXI_transactor->ARADDR(M20_AXI_araddr);
    mp_M20_AXI_transactor->ARLEN(M20_AXI_arlen);
    mp_M20_AXI_transactor->ARSIZE(M20_AXI_arsize);
    mp_M20_AXI_transactor->ARBURST(M20_AXI_arburst);
    mp_M20_AXI_arlock_converter = new xsc::common::scalar2vectorN_converter<1>("M20_AXI_arlock_converter");
    mp_M20_AXI_arlock_converter->scalar_in(m_M20_AXI_arlock_converter_signal);
    mp_M20_AXI_arlock_converter->vector_out(M20_AXI_arlock);
    mp_M20_AXI_transactor->ARLOCK(m_M20_AXI_arlock_converter_signal);
    mp_M20_AXI_transactor->ARCACHE(M20_AXI_arcache);
    mp_M20_AXI_transactor->ARPROT(M20_AXI_arprot);
    mp_M20_AXI_transactor->ARQOS(M20_AXI_arqos);
    mp_M20_AXI_transactor->ARVALID(M20_AXI_arvalid);
    mp_M20_AXI_transactor->ARREADY(M20_AXI_arready);
    mp_M20_AXI_transactor->RDATA(M20_AXI_rdata);
    mp_M20_AXI_transactor->RRESP(M20_AXI_rresp);
    mp_M20_AXI_transactor->RLAST(M20_AXI_rlast);
    mp_M20_AXI_transactor->RVALID(M20_AXI_rvalid);
    mp_M20_AXI_transactor->RREADY(M20_AXI_rready);
    mp_M20_AXI_transactor->CLK(aclk);
    mp_M20_AXI_transactor->RST(aresetn);

    // M20_AXI' transactor sockets

    mp_impl->M20_AXI_tlm_aximm_read_socket->bind(*(mp_M20_AXI_transactor->rd_socket));
    mp_impl->M20_AXI_tlm_aximm_write_socket->bind(*(mp_M20_AXI_transactor->wr_socket));
  }
  else
  {
  }

  // configure 'M21_AXI' transactor

  if (xsc::utils::xsc_sim_manager::getInstanceParameterInt("Multi_convo_core_smartconnect_0_0", "M21_AXI_TLM_MODE") != 1)
  {
    // Instantiate Socket Stubs

  // 'M21_AXI' transactor parameters
    xsc::common_cpp::properties M21_AXI_transactor_param_props;
    M21_AXI_transactor_param_props.addLong("DATA_WIDTH", "32");
    M21_AXI_transactor_param_props.addLong("FREQ_HZ", "100000000");
    M21_AXI_transactor_param_props.addLong("ID_WIDTH", "0");
    M21_AXI_transactor_param_props.addLong("ADDR_WIDTH", "12");
    M21_AXI_transactor_param_props.addLong("AWUSER_WIDTH", "0");
    M21_AXI_transactor_param_props.addLong("ARUSER_WIDTH", "0");
    M21_AXI_transactor_param_props.addLong("WUSER_WIDTH", "0");
    M21_AXI_transactor_param_props.addLong("RUSER_WIDTH", "0");
    M21_AXI_transactor_param_props.addLong("BUSER_WIDTH", "0");
    M21_AXI_transactor_param_props.addLong("HAS_BURST", "1");
    M21_AXI_transactor_param_props.addLong("HAS_LOCK", "1");
    M21_AXI_transactor_param_props.addLong("HAS_PROT", "1");
    M21_AXI_transactor_param_props.addLong("HAS_CACHE", "1");
    M21_AXI_transactor_param_props.addLong("HAS_QOS", "1");
    M21_AXI_transactor_param_props.addLong("HAS_REGION", "0");
    M21_AXI_transactor_param_props.addLong("HAS_WSTRB", "1");
    M21_AXI_transactor_param_props.addLong("HAS_BRESP", "1");
    M21_AXI_transactor_param_props.addLong("HAS_RRESP", "1");
    M21_AXI_transactor_param_props.addLong("SUPPORTS_NARROW_BURST", "0");
    M21_AXI_transactor_param_props.addLong("NUM_READ_OUTSTANDING", "2");
    M21_AXI_transactor_param_props.addLong("NUM_WRITE_OUTSTANDING", "2");
    M21_AXI_transactor_param_props.addLong("MAX_BURST_LENGTH", "256");
    M21_AXI_transactor_param_props.addLong("NUM_READ_THREADS", "1");
    M21_AXI_transactor_param_props.addLong("NUM_WRITE_THREADS", "1");
    M21_AXI_transactor_param_props.addLong("RUSER_BITS_PER_BYTE", "0");
    M21_AXI_transactor_param_props.addLong("WUSER_BITS_PER_BYTE", "0");
    M21_AXI_transactor_param_props.addLong("HAS_SIZE", "1");
    M21_AXI_transactor_param_props.addLong("HAS_RESET", "1");
    M21_AXI_transactor_param_props.addFloat("PHASE", "0.0");
    M21_AXI_transactor_param_props.addString("PROTOCOL", "AXI4");
    M21_AXI_transactor_param_props.addString("READ_WRITE_MODE", "READ_WRITE");
    M21_AXI_transactor_param_props.addString("CLK_DOMAIN", "Multi_convo_core_processing_system7_0_0_FCLK_CLK0");

    mp_M21_AXI_transactor = new xtlm::xaximm_xtlm2pin_t<32,12,1,1,1,1,1,1>("M21_AXI_transactor", M21_AXI_transactor_param_props);

    // M21_AXI' transactor ports

    mp_M21_AXI_transactor->AWADDR(M21_AXI_awaddr);
    mp_M21_AXI_transactor->AWLEN(M21_AXI_awlen);
    mp_M21_AXI_transactor->AWSIZE(M21_AXI_awsize);
    mp_M21_AXI_transactor->AWBURST(M21_AXI_awburst);
    mp_M21_AXI_awlock_converter = new xsc::common::scalar2vectorN_converter<1>("M21_AXI_awlock_converter");
    mp_M21_AXI_awlock_converter->scalar_in(m_M21_AXI_awlock_converter_signal);
    mp_M21_AXI_awlock_converter->vector_out(M21_AXI_awlock);
    mp_M21_AXI_transactor->AWLOCK(m_M21_AXI_awlock_converter_signal);
    mp_M21_AXI_transactor->AWCACHE(M21_AXI_awcache);
    mp_M21_AXI_transactor->AWPROT(M21_AXI_awprot);
    mp_M21_AXI_transactor->AWQOS(M21_AXI_awqos);
    mp_M21_AXI_transactor->AWVALID(M21_AXI_awvalid);
    mp_M21_AXI_transactor->AWREADY(M21_AXI_awready);
    mp_M21_AXI_transactor->WDATA(M21_AXI_wdata);
    mp_M21_AXI_transactor->WSTRB(M21_AXI_wstrb);
    mp_M21_AXI_transactor->WLAST(M21_AXI_wlast);
    mp_M21_AXI_transactor->WVALID(M21_AXI_wvalid);
    mp_M21_AXI_transactor->WREADY(M21_AXI_wready);
    mp_M21_AXI_transactor->BRESP(M21_AXI_bresp);
    mp_M21_AXI_transactor->BVALID(M21_AXI_bvalid);
    mp_M21_AXI_transactor->BREADY(M21_AXI_bready);
    mp_M21_AXI_transactor->ARADDR(M21_AXI_araddr);
    mp_M21_AXI_transactor->ARLEN(M21_AXI_arlen);
    mp_M21_AXI_transactor->ARSIZE(M21_AXI_arsize);
    mp_M21_AXI_transactor->ARBURST(M21_AXI_arburst);
    mp_M21_AXI_arlock_converter = new xsc::common::scalar2vectorN_converter<1>("M21_AXI_arlock_converter");
    mp_M21_AXI_arlock_converter->scalar_in(m_M21_AXI_arlock_converter_signal);
    mp_M21_AXI_arlock_converter->vector_out(M21_AXI_arlock);
    mp_M21_AXI_transactor->ARLOCK(m_M21_AXI_arlock_converter_signal);
    mp_M21_AXI_transactor->ARCACHE(M21_AXI_arcache);
    mp_M21_AXI_transactor->ARPROT(M21_AXI_arprot);
    mp_M21_AXI_transactor->ARQOS(M21_AXI_arqos);
    mp_M21_AXI_transactor->ARVALID(M21_AXI_arvalid);
    mp_M21_AXI_transactor->ARREADY(M21_AXI_arready);
    mp_M21_AXI_transactor->RDATA(M21_AXI_rdata);
    mp_M21_AXI_transactor->RRESP(M21_AXI_rresp);
    mp_M21_AXI_transactor->RLAST(M21_AXI_rlast);
    mp_M21_AXI_transactor->RVALID(M21_AXI_rvalid);
    mp_M21_AXI_transactor->RREADY(M21_AXI_rready);
    mp_M21_AXI_transactor->CLK(aclk);
    mp_M21_AXI_transactor->RST(aresetn);

    // M21_AXI' transactor sockets

    mp_impl->M21_AXI_tlm_aximm_read_socket->bind(*(mp_M21_AXI_transactor->rd_socket));
    mp_impl->M21_AXI_tlm_aximm_write_socket->bind(*(mp_M21_AXI_transactor->wr_socket));
  }
  else
  {
  }

  // configure 'M22_AXI' transactor

  if (xsc::utils::xsc_sim_manager::getInstanceParameterInt("Multi_convo_core_smartconnect_0_0", "M22_AXI_TLM_MODE") != 1)
  {
    // Instantiate Socket Stubs

  // 'M22_AXI' transactor parameters
    xsc::common_cpp::properties M22_AXI_transactor_param_props;
    M22_AXI_transactor_param_props.addLong("DATA_WIDTH", "32");
    M22_AXI_transactor_param_props.addLong("FREQ_HZ", "100000000");
    M22_AXI_transactor_param_props.addLong("ID_WIDTH", "0");
    M22_AXI_transactor_param_props.addLong("ADDR_WIDTH", "12");
    M22_AXI_transactor_param_props.addLong("AWUSER_WIDTH", "0");
    M22_AXI_transactor_param_props.addLong("ARUSER_WIDTH", "0");
    M22_AXI_transactor_param_props.addLong("WUSER_WIDTH", "0");
    M22_AXI_transactor_param_props.addLong("RUSER_WIDTH", "0");
    M22_AXI_transactor_param_props.addLong("BUSER_WIDTH", "0");
    M22_AXI_transactor_param_props.addLong("HAS_BURST", "1");
    M22_AXI_transactor_param_props.addLong("HAS_LOCK", "1");
    M22_AXI_transactor_param_props.addLong("HAS_PROT", "1");
    M22_AXI_transactor_param_props.addLong("HAS_CACHE", "1");
    M22_AXI_transactor_param_props.addLong("HAS_QOS", "1");
    M22_AXI_transactor_param_props.addLong("HAS_REGION", "0");
    M22_AXI_transactor_param_props.addLong("HAS_WSTRB", "1");
    M22_AXI_transactor_param_props.addLong("HAS_BRESP", "1");
    M22_AXI_transactor_param_props.addLong("HAS_RRESP", "1");
    M22_AXI_transactor_param_props.addLong("SUPPORTS_NARROW_BURST", "0");
    M22_AXI_transactor_param_props.addLong("NUM_READ_OUTSTANDING", "2");
    M22_AXI_transactor_param_props.addLong("NUM_WRITE_OUTSTANDING", "2");
    M22_AXI_transactor_param_props.addLong("MAX_BURST_LENGTH", "256");
    M22_AXI_transactor_param_props.addLong("NUM_READ_THREADS", "1");
    M22_AXI_transactor_param_props.addLong("NUM_WRITE_THREADS", "1");
    M22_AXI_transactor_param_props.addLong("RUSER_BITS_PER_BYTE", "0");
    M22_AXI_transactor_param_props.addLong("WUSER_BITS_PER_BYTE", "0");
    M22_AXI_transactor_param_props.addLong("HAS_SIZE", "1");
    M22_AXI_transactor_param_props.addLong("HAS_RESET", "1");
    M22_AXI_transactor_param_props.addFloat("PHASE", "0.0");
    M22_AXI_transactor_param_props.addString("PROTOCOL", "AXI4");
    M22_AXI_transactor_param_props.addString("READ_WRITE_MODE", "READ_WRITE");
    M22_AXI_transactor_param_props.addString("CLK_DOMAIN", "Multi_convo_core_processing_system7_0_0_FCLK_CLK0");

    mp_M22_AXI_transactor = new xtlm::xaximm_xtlm2pin_t<32,12,1,1,1,1,1,1>("M22_AXI_transactor", M22_AXI_transactor_param_props);

    // M22_AXI' transactor ports

    mp_M22_AXI_transactor->AWADDR(M22_AXI_awaddr);
    mp_M22_AXI_transactor->AWLEN(M22_AXI_awlen);
    mp_M22_AXI_transactor->AWSIZE(M22_AXI_awsize);
    mp_M22_AXI_transactor->AWBURST(M22_AXI_awburst);
    mp_M22_AXI_awlock_converter = new xsc::common::scalar2vectorN_converter<1>("M22_AXI_awlock_converter");
    mp_M22_AXI_awlock_converter->scalar_in(m_M22_AXI_awlock_converter_signal);
    mp_M22_AXI_awlock_converter->vector_out(M22_AXI_awlock);
    mp_M22_AXI_transactor->AWLOCK(m_M22_AXI_awlock_converter_signal);
    mp_M22_AXI_transactor->AWCACHE(M22_AXI_awcache);
    mp_M22_AXI_transactor->AWPROT(M22_AXI_awprot);
    mp_M22_AXI_transactor->AWQOS(M22_AXI_awqos);
    mp_M22_AXI_transactor->AWVALID(M22_AXI_awvalid);
    mp_M22_AXI_transactor->AWREADY(M22_AXI_awready);
    mp_M22_AXI_transactor->WDATA(M22_AXI_wdata);
    mp_M22_AXI_transactor->WSTRB(M22_AXI_wstrb);
    mp_M22_AXI_transactor->WLAST(M22_AXI_wlast);
    mp_M22_AXI_transactor->WVALID(M22_AXI_wvalid);
    mp_M22_AXI_transactor->WREADY(M22_AXI_wready);
    mp_M22_AXI_transactor->BRESP(M22_AXI_bresp);
    mp_M22_AXI_transactor->BVALID(M22_AXI_bvalid);
    mp_M22_AXI_transactor->BREADY(M22_AXI_bready);
    mp_M22_AXI_transactor->ARADDR(M22_AXI_araddr);
    mp_M22_AXI_transactor->ARLEN(M22_AXI_arlen);
    mp_M22_AXI_transactor->ARSIZE(M22_AXI_arsize);
    mp_M22_AXI_transactor->ARBURST(M22_AXI_arburst);
    mp_M22_AXI_arlock_converter = new xsc::common::scalar2vectorN_converter<1>("M22_AXI_arlock_converter");
    mp_M22_AXI_arlock_converter->scalar_in(m_M22_AXI_arlock_converter_signal);
    mp_M22_AXI_arlock_converter->vector_out(M22_AXI_arlock);
    mp_M22_AXI_transactor->ARLOCK(m_M22_AXI_arlock_converter_signal);
    mp_M22_AXI_transactor->ARCACHE(M22_AXI_arcache);
    mp_M22_AXI_transactor->ARPROT(M22_AXI_arprot);
    mp_M22_AXI_transactor->ARQOS(M22_AXI_arqos);
    mp_M22_AXI_transactor->ARVALID(M22_AXI_arvalid);
    mp_M22_AXI_transactor->ARREADY(M22_AXI_arready);
    mp_M22_AXI_transactor->RDATA(M22_AXI_rdata);
    mp_M22_AXI_transactor->RRESP(M22_AXI_rresp);
    mp_M22_AXI_transactor->RLAST(M22_AXI_rlast);
    mp_M22_AXI_transactor->RVALID(M22_AXI_rvalid);
    mp_M22_AXI_transactor->RREADY(M22_AXI_rready);
    mp_M22_AXI_transactor->CLK(aclk);
    mp_M22_AXI_transactor->RST(aresetn);

    // M22_AXI' transactor sockets

    mp_impl->M22_AXI_tlm_aximm_read_socket->bind(*(mp_M22_AXI_transactor->rd_socket));
    mp_impl->M22_AXI_tlm_aximm_write_socket->bind(*(mp_M22_AXI_transactor->wr_socket));
  }
  else
  {
  }

  // configure 'M23_AXI' transactor

  if (xsc::utils::xsc_sim_manager::getInstanceParameterInt("Multi_convo_core_smartconnect_0_0", "M23_AXI_TLM_MODE") != 1)
  {
    // Instantiate Socket Stubs

  // 'M23_AXI' transactor parameters
    xsc::common_cpp::properties M23_AXI_transactor_param_props;
    M23_AXI_transactor_param_props.addLong("DATA_WIDTH", "32");
    M23_AXI_transactor_param_props.addLong("FREQ_HZ", "100000000");
    M23_AXI_transactor_param_props.addLong("ID_WIDTH", "0");
    M23_AXI_transactor_param_props.addLong("ADDR_WIDTH", "12");
    M23_AXI_transactor_param_props.addLong("AWUSER_WIDTH", "0");
    M23_AXI_transactor_param_props.addLong("ARUSER_WIDTH", "0");
    M23_AXI_transactor_param_props.addLong("WUSER_WIDTH", "0");
    M23_AXI_transactor_param_props.addLong("RUSER_WIDTH", "0");
    M23_AXI_transactor_param_props.addLong("BUSER_WIDTH", "0");
    M23_AXI_transactor_param_props.addLong("HAS_BURST", "1");
    M23_AXI_transactor_param_props.addLong("HAS_LOCK", "1");
    M23_AXI_transactor_param_props.addLong("HAS_PROT", "1");
    M23_AXI_transactor_param_props.addLong("HAS_CACHE", "1");
    M23_AXI_transactor_param_props.addLong("HAS_QOS", "1");
    M23_AXI_transactor_param_props.addLong("HAS_REGION", "0");
    M23_AXI_transactor_param_props.addLong("HAS_WSTRB", "1");
    M23_AXI_transactor_param_props.addLong("HAS_BRESP", "1");
    M23_AXI_transactor_param_props.addLong("HAS_RRESP", "1");
    M23_AXI_transactor_param_props.addLong("SUPPORTS_NARROW_BURST", "0");
    M23_AXI_transactor_param_props.addLong("NUM_READ_OUTSTANDING", "2");
    M23_AXI_transactor_param_props.addLong("NUM_WRITE_OUTSTANDING", "2");
    M23_AXI_transactor_param_props.addLong("MAX_BURST_LENGTH", "256");
    M23_AXI_transactor_param_props.addLong("NUM_READ_THREADS", "1");
    M23_AXI_transactor_param_props.addLong("NUM_WRITE_THREADS", "1");
    M23_AXI_transactor_param_props.addLong("RUSER_BITS_PER_BYTE", "0");
    M23_AXI_transactor_param_props.addLong("WUSER_BITS_PER_BYTE", "0");
    M23_AXI_transactor_param_props.addLong("HAS_SIZE", "1");
    M23_AXI_transactor_param_props.addLong("HAS_RESET", "1");
    M23_AXI_transactor_param_props.addFloat("PHASE", "0.0");
    M23_AXI_transactor_param_props.addString("PROTOCOL", "AXI4");
    M23_AXI_transactor_param_props.addString("READ_WRITE_MODE", "READ_WRITE");
    M23_AXI_transactor_param_props.addString("CLK_DOMAIN", "Multi_convo_core_processing_system7_0_0_FCLK_CLK0");

    mp_M23_AXI_transactor = new xtlm::xaximm_xtlm2pin_t<32,12,1,1,1,1,1,1>("M23_AXI_transactor", M23_AXI_transactor_param_props);

    // M23_AXI' transactor ports

    mp_M23_AXI_transactor->AWADDR(M23_AXI_awaddr);
    mp_M23_AXI_transactor->AWLEN(M23_AXI_awlen);
    mp_M23_AXI_transactor->AWSIZE(M23_AXI_awsize);
    mp_M23_AXI_transactor->AWBURST(M23_AXI_awburst);
    mp_M23_AXI_awlock_converter = new xsc::common::scalar2vectorN_converter<1>("M23_AXI_awlock_converter");
    mp_M23_AXI_awlock_converter->scalar_in(m_M23_AXI_awlock_converter_signal);
    mp_M23_AXI_awlock_converter->vector_out(M23_AXI_awlock);
    mp_M23_AXI_transactor->AWLOCK(m_M23_AXI_awlock_converter_signal);
    mp_M23_AXI_transactor->AWCACHE(M23_AXI_awcache);
    mp_M23_AXI_transactor->AWPROT(M23_AXI_awprot);
    mp_M23_AXI_transactor->AWQOS(M23_AXI_awqos);
    mp_M23_AXI_transactor->AWVALID(M23_AXI_awvalid);
    mp_M23_AXI_transactor->AWREADY(M23_AXI_awready);
    mp_M23_AXI_transactor->WDATA(M23_AXI_wdata);
    mp_M23_AXI_transactor->WSTRB(M23_AXI_wstrb);
    mp_M23_AXI_transactor->WLAST(M23_AXI_wlast);
    mp_M23_AXI_transactor->WVALID(M23_AXI_wvalid);
    mp_M23_AXI_transactor->WREADY(M23_AXI_wready);
    mp_M23_AXI_transactor->BRESP(M23_AXI_bresp);
    mp_M23_AXI_transactor->BVALID(M23_AXI_bvalid);
    mp_M23_AXI_transactor->BREADY(M23_AXI_bready);
    mp_M23_AXI_transactor->ARADDR(M23_AXI_araddr);
    mp_M23_AXI_transactor->ARLEN(M23_AXI_arlen);
    mp_M23_AXI_transactor->ARSIZE(M23_AXI_arsize);
    mp_M23_AXI_transactor->ARBURST(M23_AXI_arburst);
    mp_M23_AXI_arlock_converter = new xsc::common::scalar2vectorN_converter<1>("M23_AXI_arlock_converter");
    mp_M23_AXI_arlock_converter->scalar_in(m_M23_AXI_arlock_converter_signal);
    mp_M23_AXI_arlock_converter->vector_out(M23_AXI_arlock);
    mp_M23_AXI_transactor->ARLOCK(m_M23_AXI_arlock_converter_signal);
    mp_M23_AXI_transactor->ARCACHE(M23_AXI_arcache);
    mp_M23_AXI_transactor->ARPROT(M23_AXI_arprot);
    mp_M23_AXI_transactor->ARQOS(M23_AXI_arqos);
    mp_M23_AXI_transactor->ARVALID(M23_AXI_arvalid);
    mp_M23_AXI_transactor->ARREADY(M23_AXI_arready);
    mp_M23_AXI_transactor->RDATA(M23_AXI_rdata);
    mp_M23_AXI_transactor->RRESP(M23_AXI_rresp);
    mp_M23_AXI_transactor->RLAST(M23_AXI_rlast);
    mp_M23_AXI_transactor->RVALID(M23_AXI_rvalid);
    mp_M23_AXI_transactor->RREADY(M23_AXI_rready);
    mp_M23_AXI_transactor->CLK(aclk);
    mp_M23_AXI_transactor->RST(aresetn);

    // M23_AXI' transactor sockets

    mp_impl->M23_AXI_tlm_aximm_read_socket->bind(*(mp_M23_AXI_transactor->rd_socket));
    mp_impl->M23_AXI_tlm_aximm_write_socket->bind(*(mp_M23_AXI_transactor->wr_socket));
  }
  else
  {
  }

}

#endif // XILINX_SIMULATOR




#ifdef XM_SYSTEMC
Multi_convo_core_smartconnect_0_0::Multi_convo_core_smartconnect_0_0(const sc_core::sc_module_name& nm) : Multi_convo_core_smartconnect_0_0_sc(nm), aclk("aclk"), aresetn("aresetn"), S00_AXI_awaddr("S00_AXI_awaddr"), S00_AXI_awlen("S00_AXI_awlen"), S00_AXI_awsize("S00_AXI_awsize"), S00_AXI_awburst("S00_AXI_awburst"), S00_AXI_awlock("S00_AXI_awlock"), S00_AXI_awcache("S00_AXI_awcache"), S00_AXI_awprot("S00_AXI_awprot"), S00_AXI_awqos("S00_AXI_awqos"), S00_AXI_awvalid("S00_AXI_awvalid"), S00_AXI_awready("S00_AXI_awready"), S00_AXI_wdata("S00_AXI_wdata"), S00_AXI_wstrb("S00_AXI_wstrb"), S00_AXI_wlast("S00_AXI_wlast"), S00_AXI_wvalid("S00_AXI_wvalid"), S00_AXI_wready("S00_AXI_wready"), S00_AXI_bresp("S00_AXI_bresp"), S00_AXI_bvalid("S00_AXI_bvalid"), S00_AXI_bready("S00_AXI_bready"), S00_AXI_araddr("S00_AXI_araddr"), S00_AXI_arlen("S00_AXI_arlen"), S00_AXI_arsize("S00_AXI_arsize"), S00_AXI_arburst("S00_AXI_arburst"), S00_AXI_arlock("S00_AXI_arlock"), S00_AXI_arcache("S00_AXI_arcache"), S00_AXI_arprot("S00_AXI_arprot"), S00_AXI_arqos("S00_AXI_arqos"), S00_AXI_arvalid("S00_AXI_arvalid"), S00_AXI_arready("S00_AXI_arready"), S00_AXI_rdata("S00_AXI_rdata"), S00_AXI_rresp("S00_AXI_rresp"), S00_AXI_rlast("S00_AXI_rlast"), S00_AXI_rvalid("S00_AXI_rvalid"), S00_AXI_rready("S00_AXI_rready"), M00_AXI_awaddr("M00_AXI_awaddr"), M00_AXI_awlen("M00_AXI_awlen"), M00_AXI_awsize("M00_AXI_awsize"), M00_AXI_awburst("M00_AXI_awburst"), M00_AXI_awlock("M00_AXI_awlock"), M00_AXI_awcache("M00_AXI_awcache"), M00_AXI_awprot("M00_AXI_awprot"), M00_AXI_awqos("M00_AXI_awqos"), M00_AXI_awvalid("M00_AXI_awvalid"), M00_AXI_awready("M00_AXI_awready"), M00_AXI_wdata("M00_AXI_wdata"), M00_AXI_wstrb("M00_AXI_wstrb"), M00_AXI_wlast("M00_AXI_wlast"), M00_AXI_wvalid("M00_AXI_wvalid"), M00_AXI_wready("M00_AXI_wready"), M00_AXI_bresp("M00_AXI_bresp"), M00_AXI_bvalid("M00_AXI_bvalid"), M00_AXI_bready("M00_AXI_bready"), M00_AXI_araddr("M00_AXI_araddr"), M00_AXI_arlen("M00_AXI_arlen"), M00_AXI_arsize("M00_AXI_arsize"), M00_AXI_arburst("M00_AXI_arburst"), M00_AXI_arlock("M00_AXI_arlock"), M00_AXI_arcache("M00_AXI_arcache"), M00_AXI_arprot("M00_AXI_arprot"), M00_AXI_arqos("M00_AXI_arqos"), M00_AXI_arvalid("M00_AXI_arvalid"), M00_AXI_arready("M00_AXI_arready"), M00_AXI_rdata("M00_AXI_rdata"), M00_AXI_rresp("M00_AXI_rresp"), M00_AXI_rlast("M00_AXI_rlast"), M00_AXI_rvalid("M00_AXI_rvalid"), M00_AXI_rready("M00_AXI_rready"), M01_AXI_awaddr("M01_AXI_awaddr"), M01_AXI_awlen("M01_AXI_awlen"), M01_AXI_awsize("M01_AXI_awsize"), M01_AXI_awburst("M01_AXI_awburst"), M01_AXI_awlock("M01_AXI_awlock"), M01_AXI_awcache("M01_AXI_awcache"), M01_AXI_awprot("M01_AXI_awprot"), M01_AXI_awqos("M01_AXI_awqos"), M01_AXI_awvalid("M01_AXI_awvalid"), M01_AXI_awready("M01_AXI_awready"), M01_AXI_wdata("M01_AXI_wdata"), M01_AXI_wstrb("M01_AXI_wstrb"), M01_AXI_wlast("M01_AXI_wlast"), M01_AXI_wvalid("M01_AXI_wvalid"), M01_AXI_wready("M01_AXI_wready"), M01_AXI_bresp("M01_AXI_bresp"), M01_AXI_bvalid("M01_AXI_bvalid"), M01_AXI_bready("M01_AXI_bready"), M01_AXI_araddr("M01_AXI_araddr"), M01_AXI_arlen("M01_AXI_arlen"), M01_AXI_arsize("M01_AXI_arsize"), M01_AXI_arburst("M01_AXI_arburst"), M01_AXI_arlock("M01_AXI_arlock"), M01_AXI_arcache("M01_AXI_arcache"), M01_AXI_arprot("M01_AXI_arprot"), M01_AXI_arqos("M01_AXI_arqos"), M01_AXI_arvalid("M01_AXI_arvalid"), M01_AXI_arready("M01_AXI_arready"), M01_AXI_rdata("M01_AXI_rdata"), M01_AXI_rresp("M01_AXI_rresp"), M01_AXI_rlast("M01_AXI_rlast"), M01_AXI_rvalid("M01_AXI_rvalid"), M01_AXI_rready("M01_AXI_rready"), M02_AXI_awaddr("M02_AXI_awaddr"), M02_AXI_awlen("M02_AXI_awlen"), M02_AXI_awsize("M02_AXI_awsize"), M02_AXI_awburst("M02_AXI_awburst"), M02_AXI_awlock("M02_AXI_awlock"), M02_AXI_awcache("M02_AXI_awcache"), M02_AXI_awprot("M02_AXI_awprot"), M02_AXI_awqos("M02_AXI_awqos"), M02_AXI_awvalid("M02_AXI_awvalid"), M02_AXI_awready("M02_AXI_awready"), M02_AXI_wdata("M02_AXI_wdata"), M02_AXI_wstrb("M02_AXI_wstrb"), M02_AXI_wlast("M02_AXI_wlast"), M02_AXI_wvalid("M02_AXI_wvalid"), M02_AXI_wready("M02_AXI_wready"), M02_AXI_bresp("M02_AXI_bresp"), M02_AXI_bvalid("M02_AXI_bvalid"), M02_AXI_bready("M02_AXI_bready"), M02_AXI_araddr("M02_AXI_araddr"), M02_AXI_arlen("M02_AXI_arlen"), M02_AXI_arsize("M02_AXI_arsize"), M02_AXI_arburst("M02_AXI_arburst"), M02_AXI_arlock("M02_AXI_arlock"), M02_AXI_arcache("M02_AXI_arcache"), M02_AXI_arprot("M02_AXI_arprot"), M02_AXI_arqos("M02_AXI_arqos"), M02_AXI_arvalid("M02_AXI_arvalid"), M02_AXI_arready("M02_AXI_arready"), M02_AXI_rdata("M02_AXI_rdata"), M02_AXI_rresp("M02_AXI_rresp"), M02_AXI_rlast("M02_AXI_rlast"), M02_AXI_rvalid("M02_AXI_rvalid"), M02_AXI_rready("M02_AXI_rready"), M03_AXI_awaddr("M03_AXI_awaddr"), M03_AXI_awlen("M03_AXI_awlen"), M03_AXI_awsize("M03_AXI_awsize"), M03_AXI_awburst("M03_AXI_awburst"), M03_AXI_awlock("M03_AXI_awlock"), M03_AXI_awcache("M03_AXI_awcache"), M03_AXI_awprot("M03_AXI_awprot"), M03_AXI_awqos("M03_AXI_awqos"), M03_AXI_awvalid("M03_AXI_awvalid"), M03_AXI_awready("M03_AXI_awready"), M03_AXI_wdata("M03_AXI_wdata"), M03_AXI_wstrb("M03_AXI_wstrb"), M03_AXI_wlast("M03_AXI_wlast"), M03_AXI_wvalid("M03_AXI_wvalid"), M03_AXI_wready("M03_AXI_wready"), M03_AXI_bresp("M03_AXI_bresp"), M03_AXI_bvalid("M03_AXI_bvalid"), M03_AXI_bready("M03_AXI_bready"), M03_AXI_araddr("M03_AXI_araddr"), M03_AXI_arlen("M03_AXI_arlen"), M03_AXI_arsize("M03_AXI_arsize"), M03_AXI_arburst("M03_AXI_arburst"), M03_AXI_arlock("M03_AXI_arlock"), M03_AXI_arcache("M03_AXI_arcache"), M03_AXI_arprot("M03_AXI_arprot"), M03_AXI_arqos("M03_AXI_arqos"), M03_AXI_arvalid("M03_AXI_arvalid"), M03_AXI_arready("M03_AXI_arready"), M03_AXI_rdata("M03_AXI_rdata"), M03_AXI_rresp("M03_AXI_rresp"), M03_AXI_rlast("M03_AXI_rlast"), M03_AXI_rvalid("M03_AXI_rvalid"), M03_AXI_rready("M03_AXI_rready"), M04_AXI_awaddr("M04_AXI_awaddr"), M04_AXI_awlen("M04_AXI_awlen"), M04_AXI_awsize("M04_AXI_awsize"), M04_AXI_awburst("M04_AXI_awburst"), M04_AXI_awlock("M04_AXI_awlock"), M04_AXI_awcache("M04_AXI_awcache"), M04_AXI_awprot("M04_AXI_awprot"), M04_AXI_awqos("M04_AXI_awqos"), M04_AXI_awvalid("M04_AXI_awvalid"), M04_AXI_awready("M04_AXI_awready"), M04_AXI_wdata("M04_AXI_wdata"), M04_AXI_wstrb("M04_AXI_wstrb"), M04_AXI_wlast("M04_AXI_wlast"), M04_AXI_wvalid("M04_AXI_wvalid"), M04_AXI_wready("M04_AXI_wready"), M04_AXI_bresp("M04_AXI_bresp"), M04_AXI_bvalid("M04_AXI_bvalid"), M04_AXI_bready("M04_AXI_bready"), M04_AXI_araddr("M04_AXI_araddr"), M04_AXI_arlen("M04_AXI_arlen"), M04_AXI_arsize("M04_AXI_arsize"), M04_AXI_arburst("M04_AXI_arburst"), M04_AXI_arlock("M04_AXI_arlock"), M04_AXI_arcache("M04_AXI_arcache"), M04_AXI_arprot("M04_AXI_arprot"), M04_AXI_arqos("M04_AXI_arqos"), M04_AXI_arvalid("M04_AXI_arvalid"), M04_AXI_arready("M04_AXI_arready"), M04_AXI_rdata("M04_AXI_rdata"), M04_AXI_rresp("M04_AXI_rresp"), M04_AXI_rlast("M04_AXI_rlast"), M04_AXI_rvalid("M04_AXI_rvalid"), M04_AXI_rready("M04_AXI_rready"), M05_AXI_awaddr("M05_AXI_awaddr"), M05_AXI_awlen("M05_AXI_awlen"), M05_AXI_awsize("M05_AXI_awsize"), M05_AXI_awburst("M05_AXI_awburst"), M05_AXI_awlock("M05_AXI_awlock"), M05_AXI_awcache("M05_AXI_awcache"), M05_AXI_awprot("M05_AXI_awprot"), M05_AXI_awqos("M05_AXI_awqos"), M05_AXI_awvalid("M05_AXI_awvalid"), M05_AXI_awready("M05_AXI_awready"), M05_AXI_wdata("M05_AXI_wdata"), M05_AXI_wstrb("M05_AXI_wstrb"), M05_AXI_wlast("M05_AXI_wlast"), M05_AXI_wvalid("M05_AXI_wvalid"), M05_AXI_wready("M05_AXI_wready"), M05_AXI_bresp("M05_AXI_bresp"), M05_AXI_bvalid("M05_AXI_bvalid"), M05_AXI_bready("M05_AXI_bready"), M05_AXI_araddr("M05_AXI_araddr"), M05_AXI_arlen("M05_AXI_arlen"), M05_AXI_arsize("M05_AXI_arsize"), M05_AXI_arburst("M05_AXI_arburst"), M05_AXI_arlock("M05_AXI_arlock"), M05_AXI_arcache("M05_AXI_arcache"), M05_AXI_arprot("M05_AXI_arprot"), M05_AXI_arqos("M05_AXI_arqos"), M05_AXI_arvalid("M05_AXI_arvalid"), M05_AXI_arready("M05_AXI_arready"), M05_AXI_rdata("M05_AXI_rdata"), M05_AXI_rresp("M05_AXI_rresp"), M05_AXI_rlast("M05_AXI_rlast"), M05_AXI_rvalid("M05_AXI_rvalid"), M05_AXI_rready("M05_AXI_rready"), M06_AXI_awaddr("M06_AXI_awaddr"), M06_AXI_awlen("M06_AXI_awlen"), M06_AXI_awsize("M06_AXI_awsize"), M06_AXI_awburst("M06_AXI_awburst"), M06_AXI_awlock("M06_AXI_awlock"), M06_AXI_awcache("M06_AXI_awcache"), M06_AXI_awprot("M06_AXI_awprot"), M06_AXI_awqos("M06_AXI_awqos"), M06_AXI_awvalid("M06_AXI_awvalid"), M06_AXI_awready("M06_AXI_awready"), M06_AXI_wdata("M06_AXI_wdata"), M06_AXI_wstrb("M06_AXI_wstrb"), M06_AXI_wlast("M06_AXI_wlast"), M06_AXI_wvalid("M06_AXI_wvalid"), M06_AXI_wready("M06_AXI_wready"), M06_AXI_bresp("M06_AXI_bresp"), M06_AXI_bvalid("M06_AXI_bvalid"), M06_AXI_bready("M06_AXI_bready"), M06_AXI_araddr("M06_AXI_araddr"), M06_AXI_arlen("M06_AXI_arlen"), M06_AXI_arsize("M06_AXI_arsize"), M06_AXI_arburst("M06_AXI_arburst"), M06_AXI_arlock("M06_AXI_arlock"), M06_AXI_arcache("M06_AXI_arcache"), M06_AXI_arprot("M06_AXI_arprot"), M06_AXI_arqos("M06_AXI_arqos"), M06_AXI_arvalid("M06_AXI_arvalid"), M06_AXI_arready("M06_AXI_arready"), M06_AXI_rdata("M06_AXI_rdata"), M06_AXI_rresp("M06_AXI_rresp"), M06_AXI_rlast("M06_AXI_rlast"), M06_AXI_rvalid("M06_AXI_rvalid"), M06_AXI_rready("M06_AXI_rready"), M07_AXI_awaddr("M07_AXI_awaddr"), M07_AXI_awlen("M07_AXI_awlen"), M07_AXI_awsize("M07_AXI_awsize"), M07_AXI_awburst("M07_AXI_awburst"), M07_AXI_awlock("M07_AXI_awlock"), M07_AXI_awcache("M07_AXI_awcache"), M07_AXI_awprot("M07_AXI_awprot"), M07_AXI_awqos("M07_AXI_awqos"), M07_AXI_awvalid("M07_AXI_awvalid"), M07_AXI_awready("M07_AXI_awready"), M07_AXI_wdata("M07_AXI_wdata"), M07_AXI_wstrb("M07_AXI_wstrb"), M07_AXI_wlast("M07_AXI_wlast"), M07_AXI_wvalid("M07_AXI_wvalid"), M07_AXI_wready("M07_AXI_wready"), M07_AXI_bresp("M07_AXI_bresp"), M07_AXI_bvalid("M07_AXI_bvalid"), M07_AXI_bready("M07_AXI_bready"), M07_AXI_araddr("M07_AXI_araddr"), M07_AXI_arlen("M07_AXI_arlen"), M07_AXI_arsize("M07_AXI_arsize"), M07_AXI_arburst("M07_AXI_arburst"), M07_AXI_arlock("M07_AXI_arlock"), M07_AXI_arcache("M07_AXI_arcache"), M07_AXI_arprot("M07_AXI_arprot"), M07_AXI_arqos("M07_AXI_arqos"), M07_AXI_arvalid("M07_AXI_arvalid"), M07_AXI_arready("M07_AXI_arready"), M07_AXI_rdata("M07_AXI_rdata"), M07_AXI_rresp("M07_AXI_rresp"), M07_AXI_rlast("M07_AXI_rlast"), M07_AXI_rvalid("M07_AXI_rvalid"), M07_AXI_rready("M07_AXI_rready"), M08_AXI_awaddr("M08_AXI_awaddr"), M08_AXI_awlen("M08_AXI_awlen"), M08_AXI_awsize("M08_AXI_awsize"), M08_AXI_awburst("M08_AXI_awburst"), M08_AXI_awlock("M08_AXI_awlock"), M08_AXI_awcache("M08_AXI_awcache"), M08_AXI_awprot("M08_AXI_awprot"), M08_AXI_awqos("M08_AXI_awqos"), M08_AXI_awvalid("M08_AXI_awvalid"), M08_AXI_awready("M08_AXI_awready"), M08_AXI_wdata("M08_AXI_wdata"), M08_AXI_wstrb("M08_AXI_wstrb"), M08_AXI_wlast("M08_AXI_wlast"), M08_AXI_wvalid("M08_AXI_wvalid"), M08_AXI_wready("M08_AXI_wready"), M08_AXI_bresp("M08_AXI_bresp"), M08_AXI_bvalid("M08_AXI_bvalid"), M08_AXI_bready("M08_AXI_bready"), M08_AXI_araddr("M08_AXI_araddr"), M08_AXI_arlen("M08_AXI_arlen"), M08_AXI_arsize("M08_AXI_arsize"), M08_AXI_arburst("M08_AXI_arburst"), M08_AXI_arlock("M08_AXI_arlock"), M08_AXI_arcache("M08_AXI_arcache"), M08_AXI_arprot("M08_AXI_arprot"), M08_AXI_arqos("M08_AXI_arqos"), M08_AXI_arvalid("M08_AXI_arvalid"), M08_AXI_arready("M08_AXI_arready"), M08_AXI_rdata("M08_AXI_rdata"), M08_AXI_rresp("M08_AXI_rresp"), M08_AXI_rlast("M08_AXI_rlast"), M08_AXI_rvalid("M08_AXI_rvalid"), M08_AXI_rready("M08_AXI_rready"), M09_AXI_awaddr("M09_AXI_awaddr"), M09_AXI_awlen("M09_AXI_awlen"), M09_AXI_awsize("M09_AXI_awsize"), M09_AXI_awburst("M09_AXI_awburst"), M09_AXI_awlock("M09_AXI_awlock"), M09_AXI_awcache("M09_AXI_awcache"), M09_AXI_awprot("M09_AXI_awprot"), M09_AXI_awqos("M09_AXI_awqos"), M09_AXI_awvalid("M09_AXI_awvalid"), M09_AXI_awready("M09_AXI_awready"), M09_AXI_wdata("M09_AXI_wdata"), M09_AXI_wstrb("M09_AXI_wstrb"), M09_AXI_wlast("M09_AXI_wlast"), M09_AXI_wvalid("M09_AXI_wvalid"), M09_AXI_wready("M09_AXI_wready"), M09_AXI_bresp("M09_AXI_bresp"), M09_AXI_bvalid("M09_AXI_bvalid"), M09_AXI_bready("M09_AXI_bready"), M09_AXI_araddr("M09_AXI_araddr"), M09_AXI_arlen("M09_AXI_arlen"), M09_AXI_arsize("M09_AXI_arsize"), M09_AXI_arburst("M09_AXI_arburst"), M09_AXI_arlock("M09_AXI_arlock"), M09_AXI_arcache("M09_AXI_arcache"), M09_AXI_arprot("M09_AXI_arprot"), M09_AXI_arqos("M09_AXI_arqos"), M09_AXI_arvalid("M09_AXI_arvalid"), M09_AXI_arready("M09_AXI_arready"), M09_AXI_rdata("M09_AXI_rdata"), M09_AXI_rresp("M09_AXI_rresp"), M09_AXI_rlast("M09_AXI_rlast"), M09_AXI_rvalid("M09_AXI_rvalid"), M09_AXI_rready("M09_AXI_rready"), M10_AXI_awaddr("M10_AXI_awaddr"), M10_AXI_awlen("M10_AXI_awlen"), M10_AXI_awsize("M10_AXI_awsize"), M10_AXI_awburst("M10_AXI_awburst"), M10_AXI_awlock("M10_AXI_awlock"), M10_AXI_awcache("M10_AXI_awcache"), M10_AXI_awprot("M10_AXI_awprot"), M10_AXI_awqos("M10_AXI_awqos"), M10_AXI_awvalid("M10_AXI_awvalid"), M10_AXI_awready("M10_AXI_awready"), M10_AXI_wdata("M10_AXI_wdata"), M10_AXI_wstrb("M10_AXI_wstrb"), M10_AXI_wlast("M10_AXI_wlast"), M10_AXI_wvalid("M10_AXI_wvalid"), M10_AXI_wready("M10_AXI_wready"), M10_AXI_bresp("M10_AXI_bresp"), M10_AXI_bvalid("M10_AXI_bvalid"), M10_AXI_bready("M10_AXI_bready"), M10_AXI_araddr("M10_AXI_araddr"), M10_AXI_arlen("M10_AXI_arlen"), M10_AXI_arsize("M10_AXI_arsize"), M10_AXI_arburst("M10_AXI_arburst"), M10_AXI_arlock("M10_AXI_arlock"), M10_AXI_arcache("M10_AXI_arcache"), M10_AXI_arprot("M10_AXI_arprot"), M10_AXI_arqos("M10_AXI_arqos"), M10_AXI_arvalid("M10_AXI_arvalid"), M10_AXI_arready("M10_AXI_arready"), M10_AXI_rdata("M10_AXI_rdata"), M10_AXI_rresp("M10_AXI_rresp"), M10_AXI_rlast("M10_AXI_rlast"), M10_AXI_rvalid("M10_AXI_rvalid"), M10_AXI_rready("M10_AXI_rready"), M11_AXI_awaddr("M11_AXI_awaddr"), M11_AXI_awlen("M11_AXI_awlen"), M11_AXI_awsize("M11_AXI_awsize"), M11_AXI_awburst("M11_AXI_awburst"), M11_AXI_awlock("M11_AXI_awlock"), M11_AXI_awcache("M11_AXI_awcache"), M11_AXI_awprot("M11_AXI_awprot"), M11_AXI_awqos("M11_AXI_awqos"), M11_AXI_awvalid("M11_AXI_awvalid"), M11_AXI_awready("M11_AXI_awready"), M11_AXI_wdata("M11_AXI_wdata"), M11_AXI_wstrb("M11_AXI_wstrb"), M11_AXI_wlast("M11_AXI_wlast"), M11_AXI_wvalid("M11_AXI_wvalid"), M11_AXI_wready("M11_AXI_wready"), M11_AXI_bresp("M11_AXI_bresp"), M11_AXI_bvalid("M11_AXI_bvalid"), M11_AXI_bready("M11_AXI_bready"), M11_AXI_araddr("M11_AXI_araddr"), M11_AXI_arlen("M11_AXI_arlen"), M11_AXI_arsize("M11_AXI_arsize"), M11_AXI_arburst("M11_AXI_arburst"), M11_AXI_arlock("M11_AXI_arlock"), M11_AXI_arcache("M11_AXI_arcache"), M11_AXI_arprot("M11_AXI_arprot"), M11_AXI_arqos("M11_AXI_arqos"), M11_AXI_arvalid("M11_AXI_arvalid"), M11_AXI_arready("M11_AXI_arready"), M11_AXI_rdata("M11_AXI_rdata"), M11_AXI_rresp("M11_AXI_rresp"), M11_AXI_rlast("M11_AXI_rlast"), M11_AXI_rvalid("M11_AXI_rvalid"), M11_AXI_rready("M11_AXI_rready"), M12_AXI_awaddr("M12_AXI_awaddr"), M12_AXI_awlen("M12_AXI_awlen"), M12_AXI_awsize("M12_AXI_awsize"), M12_AXI_awburst("M12_AXI_awburst"), M12_AXI_awlock("M12_AXI_awlock"), M12_AXI_awcache("M12_AXI_awcache"), M12_AXI_awprot("M12_AXI_awprot"), M12_AXI_awqos("M12_AXI_awqos"), M12_AXI_awvalid("M12_AXI_awvalid"), M12_AXI_awready("M12_AXI_awready"), M12_AXI_wdata("M12_AXI_wdata"), M12_AXI_wstrb("M12_AXI_wstrb"), M12_AXI_wlast("M12_AXI_wlast"), M12_AXI_wvalid("M12_AXI_wvalid"), M12_AXI_wready("M12_AXI_wready"), M12_AXI_bresp("M12_AXI_bresp"), M12_AXI_bvalid("M12_AXI_bvalid"), M12_AXI_bready("M12_AXI_bready"), M12_AXI_araddr("M12_AXI_araddr"), M12_AXI_arlen("M12_AXI_arlen"), M12_AXI_arsize("M12_AXI_arsize"), M12_AXI_arburst("M12_AXI_arburst"), M12_AXI_arlock("M12_AXI_arlock"), M12_AXI_arcache("M12_AXI_arcache"), M12_AXI_arprot("M12_AXI_arprot"), M12_AXI_arqos("M12_AXI_arqos"), M12_AXI_arvalid("M12_AXI_arvalid"), M12_AXI_arready("M12_AXI_arready"), M12_AXI_rdata("M12_AXI_rdata"), M12_AXI_rresp("M12_AXI_rresp"), M12_AXI_rlast("M12_AXI_rlast"), M12_AXI_rvalid("M12_AXI_rvalid"), M12_AXI_rready("M12_AXI_rready"), M13_AXI_awaddr("M13_AXI_awaddr"), M13_AXI_awlen("M13_AXI_awlen"), M13_AXI_awsize("M13_AXI_awsize"), M13_AXI_awburst("M13_AXI_awburst"), M13_AXI_awlock("M13_AXI_awlock"), M13_AXI_awcache("M13_AXI_awcache"), M13_AXI_awprot("M13_AXI_awprot"), M13_AXI_awqos("M13_AXI_awqos"), M13_AXI_awvalid("M13_AXI_awvalid"), M13_AXI_awready("M13_AXI_awready"), M13_AXI_wdata("M13_AXI_wdata"), M13_AXI_wstrb("M13_AXI_wstrb"), M13_AXI_wlast("M13_AXI_wlast"), M13_AXI_wvalid("M13_AXI_wvalid"), M13_AXI_wready("M13_AXI_wready"), M13_AXI_bresp("M13_AXI_bresp"), M13_AXI_bvalid("M13_AXI_bvalid"), M13_AXI_bready("M13_AXI_bready"), M13_AXI_araddr("M13_AXI_araddr"), M13_AXI_arlen("M13_AXI_arlen"), M13_AXI_arsize("M13_AXI_arsize"), M13_AXI_arburst("M13_AXI_arburst"), M13_AXI_arlock("M13_AXI_arlock"), M13_AXI_arcache("M13_AXI_arcache"), M13_AXI_arprot("M13_AXI_arprot"), M13_AXI_arqos("M13_AXI_arqos"), M13_AXI_arvalid("M13_AXI_arvalid"), M13_AXI_arready("M13_AXI_arready"), M13_AXI_rdata("M13_AXI_rdata"), M13_AXI_rresp("M13_AXI_rresp"), M13_AXI_rlast("M13_AXI_rlast"), M13_AXI_rvalid("M13_AXI_rvalid"), M13_AXI_rready("M13_AXI_rready"), M14_AXI_awaddr("M14_AXI_awaddr"), M14_AXI_awlen("M14_AXI_awlen"), M14_AXI_awsize("M14_AXI_awsize"), M14_AXI_awburst("M14_AXI_awburst"), M14_AXI_awlock("M14_AXI_awlock"), M14_AXI_awcache("M14_AXI_awcache"), M14_AXI_awprot("M14_AXI_awprot"), M14_AXI_awqos("M14_AXI_awqos"), M14_AXI_awvalid("M14_AXI_awvalid"), M14_AXI_awready("M14_AXI_awready"), M14_AXI_wdata("M14_AXI_wdata"), M14_AXI_wstrb("M14_AXI_wstrb"), M14_AXI_wlast("M14_AXI_wlast"), M14_AXI_wvalid("M14_AXI_wvalid"), M14_AXI_wready("M14_AXI_wready"), M14_AXI_bresp("M14_AXI_bresp"), M14_AXI_bvalid("M14_AXI_bvalid"), M14_AXI_bready("M14_AXI_bready"), M14_AXI_araddr("M14_AXI_araddr"), M14_AXI_arlen("M14_AXI_arlen"), M14_AXI_arsize("M14_AXI_arsize"), M14_AXI_arburst("M14_AXI_arburst"), M14_AXI_arlock("M14_AXI_arlock"), M14_AXI_arcache("M14_AXI_arcache"), M14_AXI_arprot("M14_AXI_arprot"), M14_AXI_arqos("M14_AXI_arqos"), M14_AXI_arvalid("M14_AXI_arvalid"), M14_AXI_arready("M14_AXI_arready"), M14_AXI_rdata("M14_AXI_rdata"), M14_AXI_rresp("M14_AXI_rresp"), M14_AXI_rlast("M14_AXI_rlast"), M14_AXI_rvalid("M14_AXI_rvalid"), M14_AXI_rready("M14_AXI_rready"), M15_AXI_awaddr("M15_AXI_awaddr"), M15_AXI_awlen("M15_AXI_awlen"), M15_AXI_awsize("M15_AXI_awsize"), M15_AXI_awburst("M15_AXI_awburst"), M15_AXI_awlock("M15_AXI_awlock"), M15_AXI_awcache("M15_AXI_awcache"), M15_AXI_awprot("M15_AXI_awprot"), M15_AXI_awqos("M15_AXI_awqos"), M15_AXI_awvalid("M15_AXI_awvalid"), M15_AXI_awready("M15_AXI_awready"), M15_AXI_wdata("M15_AXI_wdata"), M15_AXI_wstrb("M15_AXI_wstrb"), M15_AXI_wlast("M15_AXI_wlast"), M15_AXI_wvalid("M15_AXI_wvalid"), M15_AXI_wready("M15_AXI_wready"), M15_AXI_bresp("M15_AXI_bresp"), M15_AXI_bvalid("M15_AXI_bvalid"), M15_AXI_bready("M15_AXI_bready"), M15_AXI_araddr("M15_AXI_araddr"), M15_AXI_arlen("M15_AXI_arlen"), M15_AXI_arsize("M15_AXI_arsize"), M15_AXI_arburst("M15_AXI_arburst"), M15_AXI_arlock("M15_AXI_arlock"), M15_AXI_arcache("M15_AXI_arcache"), M15_AXI_arprot("M15_AXI_arprot"), M15_AXI_arqos("M15_AXI_arqos"), M15_AXI_arvalid("M15_AXI_arvalid"), M15_AXI_arready("M15_AXI_arready"), M15_AXI_rdata("M15_AXI_rdata"), M15_AXI_rresp("M15_AXI_rresp"), M15_AXI_rlast("M15_AXI_rlast"), M15_AXI_rvalid("M15_AXI_rvalid"), M15_AXI_rready("M15_AXI_rready"), M16_AXI_awaddr("M16_AXI_awaddr"), M16_AXI_awlen("M16_AXI_awlen"), M16_AXI_awsize("M16_AXI_awsize"), M16_AXI_awburst("M16_AXI_awburst"), M16_AXI_awlock("M16_AXI_awlock"), M16_AXI_awcache("M16_AXI_awcache"), M16_AXI_awprot("M16_AXI_awprot"), M16_AXI_awqos("M16_AXI_awqos"), M16_AXI_awvalid("M16_AXI_awvalid"), M16_AXI_awready("M16_AXI_awready"), M16_AXI_wdata("M16_AXI_wdata"), M16_AXI_wstrb("M16_AXI_wstrb"), M16_AXI_wlast("M16_AXI_wlast"), M16_AXI_wvalid("M16_AXI_wvalid"), M16_AXI_wready("M16_AXI_wready"), M16_AXI_bresp("M16_AXI_bresp"), M16_AXI_bvalid("M16_AXI_bvalid"), M16_AXI_bready("M16_AXI_bready"), M16_AXI_araddr("M16_AXI_araddr"), M16_AXI_arlen("M16_AXI_arlen"), M16_AXI_arsize("M16_AXI_arsize"), M16_AXI_arburst("M16_AXI_arburst"), M16_AXI_arlock("M16_AXI_arlock"), M16_AXI_arcache("M16_AXI_arcache"), M16_AXI_arprot("M16_AXI_arprot"), M16_AXI_arqos("M16_AXI_arqos"), M16_AXI_arvalid("M16_AXI_arvalid"), M16_AXI_arready("M16_AXI_arready"), M16_AXI_rdata("M16_AXI_rdata"), M16_AXI_rresp("M16_AXI_rresp"), M16_AXI_rlast("M16_AXI_rlast"), M16_AXI_rvalid("M16_AXI_rvalid"), M16_AXI_rready("M16_AXI_rready"), M17_AXI_awaddr("M17_AXI_awaddr"), M17_AXI_awlen("M17_AXI_awlen"), M17_AXI_awsize("M17_AXI_awsize"), M17_AXI_awburst("M17_AXI_awburst"), M17_AXI_awlock("M17_AXI_awlock"), M17_AXI_awcache("M17_AXI_awcache"), M17_AXI_awprot("M17_AXI_awprot"), M17_AXI_awqos("M17_AXI_awqos"), M17_AXI_awvalid("M17_AXI_awvalid"), M17_AXI_awready("M17_AXI_awready"), M17_AXI_wdata("M17_AXI_wdata"), M17_AXI_wstrb("M17_AXI_wstrb"), M17_AXI_wlast("M17_AXI_wlast"), M17_AXI_wvalid("M17_AXI_wvalid"), M17_AXI_wready("M17_AXI_wready"), M17_AXI_bresp("M17_AXI_bresp"), M17_AXI_bvalid("M17_AXI_bvalid"), M17_AXI_bready("M17_AXI_bready"), M17_AXI_araddr("M17_AXI_araddr"), M17_AXI_arlen("M17_AXI_arlen"), M17_AXI_arsize("M17_AXI_arsize"), M17_AXI_arburst("M17_AXI_arburst"), M17_AXI_arlock("M17_AXI_arlock"), M17_AXI_arcache("M17_AXI_arcache"), M17_AXI_arprot("M17_AXI_arprot"), M17_AXI_arqos("M17_AXI_arqos"), M17_AXI_arvalid("M17_AXI_arvalid"), M17_AXI_arready("M17_AXI_arready"), M17_AXI_rdata("M17_AXI_rdata"), M17_AXI_rresp("M17_AXI_rresp"), M17_AXI_rlast("M17_AXI_rlast"), M17_AXI_rvalid("M17_AXI_rvalid"), M17_AXI_rready("M17_AXI_rready"), M18_AXI_awaddr("M18_AXI_awaddr"), M18_AXI_awlen("M18_AXI_awlen"), M18_AXI_awsize("M18_AXI_awsize"), M18_AXI_awburst("M18_AXI_awburst"), M18_AXI_awlock("M18_AXI_awlock"), M18_AXI_awcache("M18_AXI_awcache"), M18_AXI_awprot("M18_AXI_awprot"), M18_AXI_awqos("M18_AXI_awqos"), M18_AXI_awvalid("M18_AXI_awvalid"), M18_AXI_awready("M18_AXI_awready"), M18_AXI_wdata("M18_AXI_wdata"), M18_AXI_wstrb("M18_AXI_wstrb"), M18_AXI_wlast("M18_AXI_wlast"), M18_AXI_wvalid("M18_AXI_wvalid"), M18_AXI_wready("M18_AXI_wready"), M18_AXI_bresp("M18_AXI_bresp"), M18_AXI_bvalid("M18_AXI_bvalid"), M18_AXI_bready("M18_AXI_bready"), M18_AXI_araddr("M18_AXI_araddr"), M18_AXI_arlen("M18_AXI_arlen"), M18_AXI_arsize("M18_AXI_arsize"), M18_AXI_arburst("M18_AXI_arburst"), M18_AXI_arlock("M18_AXI_arlock"), M18_AXI_arcache("M18_AXI_arcache"), M18_AXI_arprot("M18_AXI_arprot"), M18_AXI_arqos("M18_AXI_arqos"), M18_AXI_arvalid("M18_AXI_arvalid"), M18_AXI_arready("M18_AXI_arready"), M18_AXI_rdata("M18_AXI_rdata"), M18_AXI_rresp("M18_AXI_rresp"), M18_AXI_rlast("M18_AXI_rlast"), M18_AXI_rvalid("M18_AXI_rvalid"), M18_AXI_rready("M18_AXI_rready"), M19_AXI_awaddr("M19_AXI_awaddr"), M19_AXI_awlen("M19_AXI_awlen"), M19_AXI_awsize("M19_AXI_awsize"), M19_AXI_awburst("M19_AXI_awburst"), M19_AXI_awlock("M19_AXI_awlock"), M19_AXI_awcache("M19_AXI_awcache"), M19_AXI_awprot("M19_AXI_awprot"), M19_AXI_awqos("M19_AXI_awqos"), M19_AXI_awvalid("M19_AXI_awvalid"), M19_AXI_awready("M19_AXI_awready"), M19_AXI_wdata("M19_AXI_wdata"), M19_AXI_wstrb("M19_AXI_wstrb"), M19_AXI_wlast("M19_AXI_wlast"), M19_AXI_wvalid("M19_AXI_wvalid"), M19_AXI_wready("M19_AXI_wready"), M19_AXI_bresp("M19_AXI_bresp"), M19_AXI_bvalid("M19_AXI_bvalid"), M19_AXI_bready("M19_AXI_bready"), M19_AXI_araddr("M19_AXI_araddr"), M19_AXI_arlen("M19_AXI_arlen"), M19_AXI_arsize("M19_AXI_arsize"), M19_AXI_arburst("M19_AXI_arburst"), M19_AXI_arlock("M19_AXI_arlock"), M19_AXI_arcache("M19_AXI_arcache"), M19_AXI_arprot("M19_AXI_arprot"), M19_AXI_arqos("M19_AXI_arqos"), M19_AXI_arvalid("M19_AXI_arvalid"), M19_AXI_arready("M19_AXI_arready"), M19_AXI_rdata("M19_AXI_rdata"), M19_AXI_rresp("M19_AXI_rresp"), M19_AXI_rlast("M19_AXI_rlast"), M19_AXI_rvalid("M19_AXI_rvalid"), M19_AXI_rready("M19_AXI_rready"), M20_AXI_awaddr("M20_AXI_awaddr"), M20_AXI_awlen("M20_AXI_awlen"), M20_AXI_awsize("M20_AXI_awsize"), M20_AXI_awburst("M20_AXI_awburst"), M20_AXI_awlock("M20_AXI_awlock"), M20_AXI_awcache("M20_AXI_awcache"), M20_AXI_awprot("M20_AXI_awprot"), M20_AXI_awqos("M20_AXI_awqos"), M20_AXI_awvalid("M20_AXI_awvalid"), M20_AXI_awready("M20_AXI_awready"), M20_AXI_wdata("M20_AXI_wdata"), M20_AXI_wstrb("M20_AXI_wstrb"), M20_AXI_wlast("M20_AXI_wlast"), M20_AXI_wvalid("M20_AXI_wvalid"), M20_AXI_wready("M20_AXI_wready"), M20_AXI_bresp("M20_AXI_bresp"), M20_AXI_bvalid("M20_AXI_bvalid"), M20_AXI_bready("M20_AXI_bready"), M20_AXI_araddr("M20_AXI_araddr"), M20_AXI_arlen("M20_AXI_arlen"), M20_AXI_arsize("M20_AXI_arsize"), M20_AXI_arburst("M20_AXI_arburst"), M20_AXI_arlock("M20_AXI_arlock"), M20_AXI_arcache("M20_AXI_arcache"), M20_AXI_arprot("M20_AXI_arprot"), M20_AXI_arqos("M20_AXI_arqos"), M20_AXI_arvalid("M20_AXI_arvalid"), M20_AXI_arready("M20_AXI_arready"), M20_AXI_rdata("M20_AXI_rdata"), M20_AXI_rresp("M20_AXI_rresp"), M20_AXI_rlast("M20_AXI_rlast"), M20_AXI_rvalid("M20_AXI_rvalid"), M20_AXI_rready("M20_AXI_rready"), M21_AXI_awaddr("M21_AXI_awaddr"), M21_AXI_awlen("M21_AXI_awlen"), M21_AXI_awsize("M21_AXI_awsize"), M21_AXI_awburst("M21_AXI_awburst"), M21_AXI_awlock("M21_AXI_awlock"), M21_AXI_awcache("M21_AXI_awcache"), M21_AXI_awprot("M21_AXI_awprot"), M21_AXI_awqos("M21_AXI_awqos"), M21_AXI_awvalid("M21_AXI_awvalid"), M21_AXI_awready("M21_AXI_awready"), M21_AXI_wdata("M21_AXI_wdata"), M21_AXI_wstrb("M21_AXI_wstrb"), M21_AXI_wlast("M21_AXI_wlast"), M21_AXI_wvalid("M21_AXI_wvalid"), M21_AXI_wready("M21_AXI_wready"), M21_AXI_bresp("M21_AXI_bresp"), M21_AXI_bvalid("M21_AXI_bvalid"), M21_AXI_bready("M21_AXI_bready"), M21_AXI_araddr("M21_AXI_araddr"), M21_AXI_arlen("M21_AXI_arlen"), M21_AXI_arsize("M21_AXI_arsize"), M21_AXI_arburst("M21_AXI_arburst"), M21_AXI_arlock("M21_AXI_arlock"), M21_AXI_arcache("M21_AXI_arcache"), M21_AXI_arprot("M21_AXI_arprot"), M21_AXI_arqos("M21_AXI_arqos"), M21_AXI_arvalid("M21_AXI_arvalid"), M21_AXI_arready("M21_AXI_arready"), M21_AXI_rdata("M21_AXI_rdata"), M21_AXI_rresp("M21_AXI_rresp"), M21_AXI_rlast("M21_AXI_rlast"), M21_AXI_rvalid("M21_AXI_rvalid"), M21_AXI_rready("M21_AXI_rready"), M22_AXI_awaddr("M22_AXI_awaddr"), M22_AXI_awlen("M22_AXI_awlen"), M22_AXI_awsize("M22_AXI_awsize"), M22_AXI_awburst("M22_AXI_awburst"), M22_AXI_awlock("M22_AXI_awlock"), M22_AXI_awcache("M22_AXI_awcache"), M22_AXI_awprot("M22_AXI_awprot"), M22_AXI_awqos("M22_AXI_awqos"), M22_AXI_awvalid("M22_AXI_awvalid"), M22_AXI_awready("M22_AXI_awready"), M22_AXI_wdata("M22_AXI_wdata"), M22_AXI_wstrb("M22_AXI_wstrb"), M22_AXI_wlast("M22_AXI_wlast"), M22_AXI_wvalid("M22_AXI_wvalid"), M22_AXI_wready("M22_AXI_wready"), M22_AXI_bresp("M22_AXI_bresp"), M22_AXI_bvalid("M22_AXI_bvalid"), M22_AXI_bready("M22_AXI_bready"), M22_AXI_araddr("M22_AXI_araddr"), M22_AXI_arlen("M22_AXI_arlen"), M22_AXI_arsize("M22_AXI_arsize"), M22_AXI_arburst("M22_AXI_arburst"), M22_AXI_arlock("M22_AXI_arlock"), M22_AXI_arcache("M22_AXI_arcache"), M22_AXI_arprot("M22_AXI_arprot"), M22_AXI_arqos("M22_AXI_arqos"), M22_AXI_arvalid("M22_AXI_arvalid"), M22_AXI_arready("M22_AXI_arready"), M22_AXI_rdata("M22_AXI_rdata"), M22_AXI_rresp("M22_AXI_rresp"), M22_AXI_rlast("M22_AXI_rlast"), M22_AXI_rvalid("M22_AXI_rvalid"), M22_AXI_rready("M22_AXI_rready"), M23_AXI_awaddr("M23_AXI_awaddr"), M23_AXI_awlen("M23_AXI_awlen"), M23_AXI_awsize("M23_AXI_awsize"), M23_AXI_awburst("M23_AXI_awburst"), M23_AXI_awlock("M23_AXI_awlock"), M23_AXI_awcache("M23_AXI_awcache"), M23_AXI_awprot("M23_AXI_awprot"), M23_AXI_awqos("M23_AXI_awqos"), M23_AXI_awvalid("M23_AXI_awvalid"), M23_AXI_awready("M23_AXI_awready"), M23_AXI_wdata("M23_AXI_wdata"), M23_AXI_wstrb("M23_AXI_wstrb"), M23_AXI_wlast("M23_AXI_wlast"), M23_AXI_wvalid("M23_AXI_wvalid"), M23_AXI_wready("M23_AXI_wready"), M23_AXI_bresp("M23_AXI_bresp"), M23_AXI_bvalid("M23_AXI_bvalid"), M23_AXI_bready("M23_AXI_bready"), M23_AXI_araddr("M23_AXI_araddr"), M23_AXI_arlen("M23_AXI_arlen"), M23_AXI_arsize("M23_AXI_arsize"), M23_AXI_arburst("M23_AXI_arburst"), M23_AXI_arlock("M23_AXI_arlock"), M23_AXI_arcache("M23_AXI_arcache"), M23_AXI_arprot("M23_AXI_arprot"), M23_AXI_arqos("M23_AXI_arqos"), M23_AXI_arvalid("M23_AXI_arvalid"), M23_AXI_arready("M23_AXI_arready"), M23_AXI_rdata("M23_AXI_rdata"), M23_AXI_rresp("M23_AXI_rresp"), M23_AXI_rlast("M23_AXI_rlast"), M23_AXI_rvalid("M23_AXI_rvalid"), M23_AXI_rready("M23_AXI_rready")
{

  // initialize pins
  mp_impl->aclk(aclk);
  mp_impl->aresetn(aresetn);

  // initialize transactors
  mp_S00_AXI_transactor = NULL;
  mp_S00_AXI_awlock_converter = NULL;
  mp_S00_AXI_arlock_converter = NULL;
  mp_M00_AXI_transactor = NULL;
  mp_M00_AXI_awlock_converter = NULL;
  mp_M00_AXI_arlock_converter = NULL;
  mp_M01_AXI_transactor = NULL;
  mp_M01_AXI_awlock_converter = NULL;
  mp_M01_AXI_arlock_converter = NULL;
  mp_M02_AXI_transactor = NULL;
  mp_M02_AXI_awlock_converter = NULL;
  mp_M02_AXI_arlock_converter = NULL;
  mp_M03_AXI_transactor = NULL;
  mp_M03_AXI_awlock_converter = NULL;
  mp_M03_AXI_arlock_converter = NULL;
  mp_M04_AXI_transactor = NULL;
  mp_M04_AXI_awlock_converter = NULL;
  mp_M04_AXI_arlock_converter = NULL;
  mp_M05_AXI_transactor = NULL;
  mp_M05_AXI_awlock_converter = NULL;
  mp_M05_AXI_arlock_converter = NULL;
  mp_M06_AXI_transactor = NULL;
  mp_M06_AXI_awlock_converter = NULL;
  mp_M06_AXI_arlock_converter = NULL;
  mp_M07_AXI_transactor = NULL;
  mp_M07_AXI_awlock_converter = NULL;
  mp_M07_AXI_arlock_converter = NULL;
  mp_M08_AXI_transactor = NULL;
  mp_M08_AXI_awlock_converter = NULL;
  mp_M08_AXI_arlock_converter = NULL;
  mp_M09_AXI_transactor = NULL;
  mp_M09_AXI_awlock_converter = NULL;
  mp_M09_AXI_arlock_converter = NULL;
  mp_M10_AXI_transactor = NULL;
  mp_M10_AXI_awlock_converter = NULL;
  mp_M10_AXI_arlock_converter = NULL;
  mp_M11_AXI_transactor = NULL;
  mp_M11_AXI_awlock_converter = NULL;
  mp_M11_AXI_arlock_converter = NULL;
  mp_M12_AXI_transactor = NULL;
  mp_M12_AXI_awlock_converter = NULL;
  mp_M12_AXI_arlock_converter = NULL;
  mp_M13_AXI_transactor = NULL;
  mp_M13_AXI_awlock_converter = NULL;
  mp_M13_AXI_arlock_converter = NULL;
  mp_M14_AXI_transactor = NULL;
  mp_M14_AXI_awlock_converter = NULL;
  mp_M14_AXI_arlock_converter = NULL;
  mp_M15_AXI_transactor = NULL;
  mp_M15_AXI_awlock_converter = NULL;
  mp_M15_AXI_arlock_converter = NULL;
  mp_M16_AXI_transactor = NULL;
  mp_M16_AXI_awlock_converter = NULL;
  mp_M16_AXI_arlock_converter = NULL;
  mp_M17_AXI_transactor = NULL;
  mp_M17_AXI_awlock_converter = NULL;
  mp_M17_AXI_arlock_converter = NULL;
  mp_M18_AXI_transactor = NULL;
  mp_M18_AXI_awlock_converter = NULL;
  mp_M18_AXI_arlock_converter = NULL;
  mp_M19_AXI_transactor = NULL;
  mp_M19_AXI_awlock_converter = NULL;
  mp_M19_AXI_arlock_converter = NULL;
  mp_M20_AXI_transactor = NULL;
  mp_M20_AXI_awlock_converter = NULL;
  mp_M20_AXI_arlock_converter = NULL;
  mp_M21_AXI_transactor = NULL;
  mp_M21_AXI_awlock_converter = NULL;
  mp_M21_AXI_arlock_converter = NULL;
  mp_M22_AXI_transactor = NULL;
  mp_M22_AXI_awlock_converter = NULL;
  mp_M22_AXI_arlock_converter = NULL;
  mp_M23_AXI_transactor = NULL;
  mp_M23_AXI_awlock_converter = NULL;
  mp_M23_AXI_arlock_converter = NULL;

  // initialize socket stubs

}

void Multi_convo_core_smartconnect_0_0::before_end_of_elaboration()
{
  // configure 'S00_AXI' transactor

  if (xsc::utils::xsc_sim_manager::getInstanceParameterInt("Multi_convo_core_smartconnect_0_0", "S00_AXI_TLM_MODE") != 1)
  {
    // Instantiate Socket Stubs

  // 'S00_AXI' transactor parameters
    xsc::common_cpp::properties S00_AXI_transactor_param_props;
    S00_AXI_transactor_param_props.addLong("DATA_WIDTH", "32");
    S00_AXI_transactor_param_props.addLong("FREQ_HZ", "100000000");
    S00_AXI_transactor_param_props.addLong("ID_WIDTH", "0");
    S00_AXI_transactor_param_props.addLong("ADDR_WIDTH", "32");
    S00_AXI_transactor_param_props.addLong("AWUSER_WIDTH", "0");
    S00_AXI_transactor_param_props.addLong("ARUSER_WIDTH", "0");
    S00_AXI_transactor_param_props.addLong("WUSER_WIDTH", "0");
    S00_AXI_transactor_param_props.addLong("RUSER_WIDTH", "0");
    S00_AXI_transactor_param_props.addLong("BUSER_WIDTH", "0");
    S00_AXI_transactor_param_props.addLong("HAS_BURST", "1");
    S00_AXI_transactor_param_props.addLong("HAS_LOCK", "1");
    S00_AXI_transactor_param_props.addLong("HAS_PROT", "1");
    S00_AXI_transactor_param_props.addLong("HAS_CACHE", "1");
    S00_AXI_transactor_param_props.addLong("HAS_QOS", "1");
    S00_AXI_transactor_param_props.addLong("HAS_REGION", "0");
    S00_AXI_transactor_param_props.addLong("HAS_WSTRB", "1");
    S00_AXI_transactor_param_props.addLong("HAS_BRESP", "1");
    S00_AXI_transactor_param_props.addLong("HAS_RRESP", "1");
    S00_AXI_transactor_param_props.addLong("SUPPORTS_NARROW_BURST", "0");
    S00_AXI_transactor_param_props.addLong("NUM_READ_OUTSTANDING", "2");
    S00_AXI_transactor_param_props.addLong("NUM_WRITE_OUTSTANDING", "2");
    S00_AXI_transactor_param_props.addLong("MAX_BURST_LENGTH", "32");
    S00_AXI_transactor_param_props.addLong("NUM_READ_THREADS", "1");
    S00_AXI_transactor_param_props.addLong("NUM_WRITE_THREADS", "1");
    S00_AXI_transactor_param_props.addLong("RUSER_BITS_PER_BYTE", "0");
    S00_AXI_transactor_param_props.addLong("WUSER_BITS_PER_BYTE", "0");
    S00_AXI_transactor_param_props.addLong("HAS_SIZE", "1");
    S00_AXI_transactor_param_props.addLong("HAS_RESET", "1");
    S00_AXI_transactor_param_props.addFloat("PHASE", "0.0");
    S00_AXI_transactor_param_props.addString("PROTOCOL", "AXI4");
    S00_AXI_transactor_param_props.addString("READ_WRITE_MODE", "READ_WRITE");
    S00_AXI_transactor_param_props.addString("CLK_DOMAIN", "Multi_convo_core_processing_system7_0_0_FCLK_CLK0");

    mp_S00_AXI_transactor = new xtlm::xaximm_pin2xtlm_t<32,32,1,1,1,1,1,1>("S00_AXI_transactor", S00_AXI_transactor_param_props);

    // S00_AXI' transactor ports

    mp_S00_AXI_transactor->AWADDR(S00_AXI_awaddr);
    mp_S00_AXI_transactor->AWLEN(S00_AXI_awlen);
    mp_S00_AXI_transactor->AWSIZE(S00_AXI_awsize);
    mp_S00_AXI_transactor->AWBURST(S00_AXI_awburst);
    mp_S00_AXI_awlock_converter = new xsc::common::vectorN2scalar_converter<1>("S00_AXI_awlock_converter");
    mp_S00_AXI_awlock_converter->vector_in(S00_AXI_awlock);
    mp_S00_AXI_awlock_converter->scalar_out(m_S00_AXI_awlock_converter_signal);
    mp_S00_AXI_transactor->AWLOCK(m_S00_AXI_awlock_converter_signal);
    mp_S00_AXI_transactor->AWCACHE(S00_AXI_awcache);
    mp_S00_AXI_transactor->AWPROT(S00_AXI_awprot);
    mp_S00_AXI_transactor->AWQOS(S00_AXI_awqos);
    mp_S00_AXI_transactor->AWVALID(S00_AXI_awvalid);
    mp_S00_AXI_transactor->AWREADY(S00_AXI_awready);
    mp_S00_AXI_transactor->WDATA(S00_AXI_wdata);
    mp_S00_AXI_transactor->WSTRB(S00_AXI_wstrb);
    mp_S00_AXI_transactor->WLAST(S00_AXI_wlast);
    mp_S00_AXI_transactor->WVALID(S00_AXI_wvalid);
    mp_S00_AXI_transactor->WREADY(S00_AXI_wready);
    mp_S00_AXI_transactor->BRESP(S00_AXI_bresp);
    mp_S00_AXI_transactor->BVALID(S00_AXI_bvalid);
    mp_S00_AXI_transactor->BREADY(S00_AXI_bready);
    mp_S00_AXI_transactor->ARADDR(S00_AXI_araddr);
    mp_S00_AXI_transactor->ARLEN(S00_AXI_arlen);
    mp_S00_AXI_transactor->ARSIZE(S00_AXI_arsize);
    mp_S00_AXI_transactor->ARBURST(S00_AXI_arburst);
    mp_S00_AXI_arlock_converter = new xsc::common::vectorN2scalar_converter<1>("S00_AXI_arlock_converter");
    mp_S00_AXI_arlock_converter->vector_in(S00_AXI_arlock);
    mp_S00_AXI_arlock_converter->scalar_out(m_S00_AXI_arlock_converter_signal);
    mp_S00_AXI_transactor->ARLOCK(m_S00_AXI_arlock_converter_signal);
    mp_S00_AXI_transactor->ARCACHE(S00_AXI_arcache);
    mp_S00_AXI_transactor->ARPROT(S00_AXI_arprot);
    mp_S00_AXI_transactor->ARQOS(S00_AXI_arqos);
    mp_S00_AXI_transactor->ARVALID(S00_AXI_arvalid);
    mp_S00_AXI_transactor->ARREADY(S00_AXI_arready);
    mp_S00_AXI_transactor->RDATA(S00_AXI_rdata);
    mp_S00_AXI_transactor->RRESP(S00_AXI_rresp);
    mp_S00_AXI_transactor->RLAST(S00_AXI_rlast);
    mp_S00_AXI_transactor->RVALID(S00_AXI_rvalid);
    mp_S00_AXI_transactor->RREADY(S00_AXI_rready);
    mp_S00_AXI_transactor->CLK(aclk);
    mp_S00_AXI_transactor->RST(aresetn);

    // S00_AXI' transactor sockets

    mp_impl->S00_AXI_tlm_aximm_read_socket->bind(*(mp_S00_AXI_transactor->rd_socket));
    mp_impl->S00_AXI_tlm_aximm_write_socket->bind(*(mp_S00_AXI_transactor->wr_socket));
  }
  else
  {
  }

  // configure 'M00_AXI' transactor

  if (xsc::utils::xsc_sim_manager::getInstanceParameterInt("Multi_convo_core_smartconnect_0_0", "M00_AXI_TLM_MODE") != 1)
  {
    // Instantiate Socket Stubs

  // 'M00_AXI' transactor parameters
    xsc::common_cpp::properties M00_AXI_transactor_param_props;
    M00_AXI_transactor_param_props.addLong("DATA_WIDTH", "32");
    M00_AXI_transactor_param_props.addLong("FREQ_HZ", "100000000");
    M00_AXI_transactor_param_props.addLong("ID_WIDTH", "0");
    M00_AXI_transactor_param_props.addLong("ADDR_WIDTH", "12");
    M00_AXI_transactor_param_props.addLong("AWUSER_WIDTH", "0");
    M00_AXI_transactor_param_props.addLong("ARUSER_WIDTH", "0");
    M00_AXI_transactor_param_props.addLong("WUSER_WIDTH", "0");
    M00_AXI_transactor_param_props.addLong("RUSER_WIDTH", "0");
    M00_AXI_transactor_param_props.addLong("BUSER_WIDTH", "0");
    M00_AXI_transactor_param_props.addLong("HAS_BURST", "1");
    M00_AXI_transactor_param_props.addLong("HAS_LOCK", "1");
    M00_AXI_transactor_param_props.addLong("HAS_PROT", "1");
    M00_AXI_transactor_param_props.addLong("HAS_CACHE", "1");
    M00_AXI_transactor_param_props.addLong("HAS_QOS", "1");
    M00_AXI_transactor_param_props.addLong("HAS_REGION", "0");
    M00_AXI_transactor_param_props.addLong("HAS_WSTRB", "1");
    M00_AXI_transactor_param_props.addLong("HAS_BRESP", "1");
    M00_AXI_transactor_param_props.addLong("HAS_RRESP", "1");
    M00_AXI_transactor_param_props.addLong("SUPPORTS_NARROW_BURST", "0");
    M00_AXI_transactor_param_props.addLong("NUM_READ_OUTSTANDING", "2");
    M00_AXI_transactor_param_props.addLong("NUM_WRITE_OUTSTANDING", "2");
    M00_AXI_transactor_param_props.addLong("MAX_BURST_LENGTH", "256");
    M00_AXI_transactor_param_props.addLong("NUM_READ_THREADS", "1");
    M00_AXI_transactor_param_props.addLong("NUM_WRITE_THREADS", "1");
    M00_AXI_transactor_param_props.addLong("RUSER_BITS_PER_BYTE", "0");
    M00_AXI_transactor_param_props.addLong("WUSER_BITS_PER_BYTE", "0");
    M00_AXI_transactor_param_props.addLong("HAS_SIZE", "1");
    M00_AXI_transactor_param_props.addLong("HAS_RESET", "1");
    M00_AXI_transactor_param_props.addFloat("PHASE", "0.0");
    M00_AXI_transactor_param_props.addString("PROTOCOL", "AXI4");
    M00_AXI_transactor_param_props.addString("READ_WRITE_MODE", "READ_WRITE");
    M00_AXI_transactor_param_props.addString("CLK_DOMAIN", "Multi_convo_core_processing_system7_0_0_FCLK_CLK0");

    mp_M00_AXI_transactor = new xtlm::xaximm_xtlm2pin_t<32,12,1,1,1,1,1,1>("M00_AXI_transactor", M00_AXI_transactor_param_props);

    // M00_AXI' transactor ports

    mp_M00_AXI_transactor->AWADDR(M00_AXI_awaddr);
    mp_M00_AXI_transactor->AWLEN(M00_AXI_awlen);
    mp_M00_AXI_transactor->AWSIZE(M00_AXI_awsize);
    mp_M00_AXI_transactor->AWBURST(M00_AXI_awburst);
    mp_M00_AXI_awlock_converter = new xsc::common::scalar2vectorN_converter<1>("M00_AXI_awlock_converter");
    mp_M00_AXI_awlock_converter->scalar_in(m_M00_AXI_awlock_converter_signal);
    mp_M00_AXI_awlock_converter->vector_out(M00_AXI_awlock);
    mp_M00_AXI_transactor->AWLOCK(m_M00_AXI_awlock_converter_signal);
    mp_M00_AXI_transactor->AWCACHE(M00_AXI_awcache);
    mp_M00_AXI_transactor->AWPROT(M00_AXI_awprot);
    mp_M00_AXI_transactor->AWQOS(M00_AXI_awqos);
    mp_M00_AXI_transactor->AWVALID(M00_AXI_awvalid);
    mp_M00_AXI_transactor->AWREADY(M00_AXI_awready);
    mp_M00_AXI_transactor->WDATA(M00_AXI_wdata);
    mp_M00_AXI_transactor->WSTRB(M00_AXI_wstrb);
    mp_M00_AXI_transactor->WLAST(M00_AXI_wlast);
    mp_M00_AXI_transactor->WVALID(M00_AXI_wvalid);
    mp_M00_AXI_transactor->WREADY(M00_AXI_wready);
    mp_M00_AXI_transactor->BRESP(M00_AXI_bresp);
    mp_M00_AXI_transactor->BVALID(M00_AXI_bvalid);
    mp_M00_AXI_transactor->BREADY(M00_AXI_bready);
    mp_M00_AXI_transactor->ARADDR(M00_AXI_araddr);
    mp_M00_AXI_transactor->ARLEN(M00_AXI_arlen);
    mp_M00_AXI_transactor->ARSIZE(M00_AXI_arsize);
    mp_M00_AXI_transactor->ARBURST(M00_AXI_arburst);
    mp_M00_AXI_arlock_converter = new xsc::common::scalar2vectorN_converter<1>("M00_AXI_arlock_converter");
    mp_M00_AXI_arlock_converter->scalar_in(m_M00_AXI_arlock_converter_signal);
    mp_M00_AXI_arlock_converter->vector_out(M00_AXI_arlock);
    mp_M00_AXI_transactor->ARLOCK(m_M00_AXI_arlock_converter_signal);
    mp_M00_AXI_transactor->ARCACHE(M00_AXI_arcache);
    mp_M00_AXI_transactor->ARPROT(M00_AXI_arprot);
    mp_M00_AXI_transactor->ARQOS(M00_AXI_arqos);
    mp_M00_AXI_transactor->ARVALID(M00_AXI_arvalid);
    mp_M00_AXI_transactor->ARREADY(M00_AXI_arready);
    mp_M00_AXI_transactor->RDATA(M00_AXI_rdata);
    mp_M00_AXI_transactor->RRESP(M00_AXI_rresp);
    mp_M00_AXI_transactor->RLAST(M00_AXI_rlast);
    mp_M00_AXI_transactor->RVALID(M00_AXI_rvalid);
    mp_M00_AXI_transactor->RREADY(M00_AXI_rready);
    mp_M00_AXI_transactor->CLK(aclk);
    mp_M00_AXI_transactor->RST(aresetn);

    // M00_AXI' transactor sockets

    mp_impl->M00_AXI_tlm_aximm_read_socket->bind(*(mp_M00_AXI_transactor->rd_socket));
    mp_impl->M00_AXI_tlm_aximm_write_socket->bind(*(mp_M00_AXI_transactor->wr_socket));
  }
  else
  {
  }

  // configure 'M01_AXI' transactor

  if (xsc::utils::xsc_sim_manager::getInstanceParameterInt("Multi_convo_core_smartconnect_0_0", "M01_AXI_TLM_MODE") != 1)
  {
    // Instantiate Socket Stubs

  // 'M01_AXI' transactor parameters
    xsc::common_cpp::properties M01_AXI_transactor_param_props;
    M01_AXI_transactor_param_props.addLong("DATA_WIDTH", "32");
    M01_AXI_transactor_param_props.addLong("FREQ_HZ", "100000000");
    M01_AXI_transactor_param_props.addLong("ID_WIDTH", "0");
    M01_AXI_transactor_param_props.addLong("ADDR_WIDTH", "12");
    M01_AXI_transactor_param_props.addLong("AWUSER_WIDTH", "0");
    M01_AXI_transactor_param_props.addLong("ARUSER_WIDTH", "0");
    M01_AXI_transactor_param_props.addLong("WUSER_WIDTH", "0");
    M01_AXI_transactor_param_props.addLong("RUSER_WIDTH", "0");
    M01_AXI_transactor_param_props.addLong("BUSER_WIDTH", "0");
    M01_AXI_transactor_param_props.addLong("HAS_BURST", "1");
    M01_AXI_transactor_param_props.addLong("HAS_LOCK", "1");
    M01_AXI_transactor_param_props.addLong("HAS_PROT", "1");
    M01_AXI_transactor_param_props.addLong("HAS_CACHE", "1");
    M01_AXI_transactor_param_props.addLong("HAS_QOS", "1");
    M01_AXI_transactor_param_props.addLong("HAS_REGION", "0");
    M01_AXI_transactor_param_props.addLong("HAS_WSTRB", "1");
    M01_AXI_transactor_param_props.addLong("HAS_BRESP", "1");
    M01_AXI_transactor_param_props.addLong("HAS_RRESP", "1");
    M01_AXI_transactor_param_props.addLong("SUPPORTS_NARROW_BURST", "0");
    M01_AXI_transactor_param_props.addLong("NUM_READ_OUTSTANDING", "2");
    M01_AXI_transactor_param_props.addLong("NUM_WRITE_OUTSTANDING", "2");
    M01_AXI_transactor_param_props.addLong("MAX_BURST_LENGTH", "256");
    M01_AXI_transactor_param_props.addLong("NUM_READ_THREADS", "1");
    M01_AXI_transactor_param_props.addLong("NUM_WRITE_THREADS", "1");
    M01_AXI_transactor_param_props.addLong("RUSER_BITS_PER_BYTE", "0");
    M01_AXI_transactor_param_props.addLong("WUSER_BITS_PER_BYTE", "0");
    M01_AXI_transactor_param_props.addLong("HAS_SIZE", "1");
    M01_AXI_transactor_param_props.addLong("HAS_RESET", "1");
    M01_AXI_transactor_param_props.addFloat("PHASE", "0.0");
    M01_AXI_transactor_param_props.addString("PROTOCOL", "AXI4");
    M01_AXI_transactor_param_props.addString("READ_WRITE_MODE", "READ_WRITE");
    M01_AXI_transactor_param_props.addString("CLK_DOMAIN", "Multi_convo_core_processing_system7_0_0_FCLK_CLK0");

    mp_M01_AXI_transactor = new xtlm::xaximm_xtlm2pin_t<32,12,1,1,1,1,1,1>("M01_AXI_transactor", M01_AXI_transactor_param_props);

    // M01_AXI' transactor ports

    mp_M01_AXI_transactor->AWADDR(M01_AXI_awaddr);
    mp_M01_AXI_transactor->AWLEN(M01_AXI_awlen);
    mp_M01_AXI_transactor->AWSIZE(M01_AXI_awsize);
    mp_M01_AXI_transactor->AWBURST(M01_AXI_awburst);
    mp_M01_AXI_awlock_converter = new xsc::common::scalar2vectorN_converter<1>("M01_AXI_awlock_converter");
    mp_M01_AXI_awlock_converter->scalar_in(m_M01_AXI_awlock_converter_signal);
    mp_M01_AXI_awlock_converter->vector_out(M01_AXI_awlock);
    mp_M01_AXI_transactor->AWLOCK(m_M01_AXI_awlock_converter_signal);
    mp_M01_AXI_transactor->AWCACHE(M01_AXI_awcache);
    mp_M01_AXI_transactor->AWPROT(M01_AXI_awprot);
    mp_M01_AXI_transactor->AWQOS(M01_AXI_awqos);
    mp_M01_AXI_transactor->AWVALID(M01_AXI_awvalid);
    mp_M01_AXI_transactor->AWREADY(M01_AXI_awready);
    mp_M01_AXI_transactor->WDATA(M01_AXI_wdata);
    mp_M01_AXI_transactor->WSTRB(M01_AXI_wstrb);
    mp_M01_AXI_transactor->WLAST(M01_AXI_wlast);
    mp_M01_AXI_transactor->WVALID(M01_AXI_wvalid);
    mp_M01_AXI_transactor->WREADY(M01_AXI_wready);
    mp_M01_AXI_transactor->BRESP(M01_AXI_bresp);
    mp_M01_AXI_transactor->BVALID(M01_AXI_bvalid);
    mp_M01_AXI_transactor->BREADY(M01_AXI_bready);
    mp_M01_AXI_transactor->ARADDR(M01_AXI_araddr);
    mp_M01_AXI_transactor->ARLEN(M01_AXI_arlen);
    mp_M01_AXI_transactor->ARSIZE(M01_AXI_arsize);
    mp_M01_AXI_transactor->ARBURST(M01_AXI_arburst);
    mp_M01_AXI_arlock_converter = new xsc::common::scalar2vectorN_converter<1>("M01_AXI_arlock_converter");
    mp_M01_AXI_arlock_converter->scalar_in(m_M01_AXI_arlock_converter_signal);
    mp_M01_AXI_arlock_converter->vector_out(M01_AXI_arlock);
    mp_M01_AXI_transactor->ARLOCK(m_M01_AXI_arlock_converter_signal);
    mp_M01_AXI_transactor->ARCACHE(M01_AXI_arcache);
    mp_M01_AXI_transactor->ARPROT(M01_AXI_arprot);
    mp_M01_AXI_transactor->ARQOS(M01_AXI_arqos);
    mp_M01_AXI_transactor->ARVALID(M01_AXI_arvalid);
    mp_M01_AXI_transactor->ARREADY(M01_AXI_arready);
    mp_M01_AXI_transactor->RDATA(M01_AXI_rdata);
    mp_M01_AXI_transactor->RRESP(M01_AXI_rresp);
    mp_M01_AXI_transactor->RLAST(M01_AXI_rlast);
    mp_M01_AXI_transactor->RVALID(M01_AXI_rvalid);
    mp_M01_AXI_transactor->RREADY(M01_AXI_rready);
    mp_M01_AXI_transactor->CLK(aclk);
    mp_M01_AXI_transactor->RST(aresetn);

    // M01_AXI' transactor sockets

    mp_impl->M01_AXI_tlm_aximm_read_socket->bind(*(mp_M01_AXI_transactor->rd_socket));
    mp_impl->M01_AXI_tlm_aximm_write_socket->bind(*(mp_M01_AXI_transactor->wr_socket));
  }
  else
  {
  }

  // configure 'M02_AXI' transactor

  if (xsc::utils::xsc_sim_manager::getInstanceParameterInt("Multi_convo_core_smartconnect_0_0", "M02_AXI_TLM_MODE") != 1)
  {
    // Instantiate Socket Stubs

  // 'M02_AXI' transactor parameters
    xsc::common_cpp::properties M02_AXI_transactor_param_props;
    M02_AXI_transactor_param_props.addLong("DATA_WIDTH", "32");
    M02_AXI_transactor_param_props.addLong("FREQ_HZ", "100000000");
    M02_AXI_transactor_param_props.addLong("ID_WIDTH", "0");
    M02_AXI_transactor_param_props.addLong("ADDR_WIDTH", "12");
    M02_AXI_transactor_param_props.addLong("AWUSER_WIDTH", "0");
    M02_AXI_transactor_param_props.addLong("ARUSER_WIDTH", "0");
    M02_AXI_transactor_param_props.addLong("WUSER_WIDTH", "0");
    M02_AXI_transactor_param_props.addLong("RUSER_WIDTH", "0");
    M02_AXI_transactor_param_props.addLong("BUSER_WIDTH", "0");
    M02_AXI_transactor_param_props.addLong("HAS_BURST", "1");
    M02_AXI_transactor_param_props.addLong("HAS_LOCK", "1");
    M02_AXI_transactor_param_props.addLong("HAS_PROT", "1");
    M02_AXI_transactor_param_props.addLong("HAS_CACHE", "1");
    M02_AXI_transactor_param_props.addLong("HAS_QOS", "1");
    M02_AXI_transactor_param_props.addLong("HAS_REGION", "0");
    M02_AXI_transactor_param_props.addLong("HAS_WSTRB", "1");
    M02_AXI_transactor_param_props.addLong("HAS_BRESP", "1");
    M02_AXI_transactor_param_props.addLong("HAS_RRESP", "1");
    M02_AXI_transactor_param_props.addLong("SUPPORTS_NARROW_BURST", "0");
    M02_AXI_transactor_param_props.addLong("NUM_READ_OUTSTANDING", "2");
    M02_AXI_transactor_param_props.addLong("NUM_WRITE_OUTSTANDING", "2");
    M02_AXI_transactor_param_props.addLong("MAX_BURST_LENGTH", "256");
    M02_AXI_transactor_param_props.addLong("NUM_READ_THREADS", "1");
    M02_AXI_transactor_param_props.addLong("NUM_WRITE_THREADS", "1");
    M02_AXI_transactor_param_props.addLong("RUSER_BITS_PER_BYTE", "0");
    M02_AXI_transactor_param_props.addLong("WUSER_BITS_PER_BYTE", "0");
    M02_AXI_transactor_param_props.addLong("HAS_SIZE", "1");
    M02_AXI_transactor_param_props.addLong("HAS_RESET", "1");
    M02_AXI_transactor_param_props.addFloat("PHASE", "0.0");
    M02_AXI_transactor_param_props.addString("PROTOCOL", "AXI4");
    M02_AXI_transactor_param_props.addString("READ_WRITE_MODE", "READ_WRITE");
    M02_AXI_transactor_param_props.addString("CLK_DOMAIN", "Multi_convo_core_processing_system7_0_0_FCLK_CLK0");

    mp_M02_AXI_transactor = new xtlm::xaximm_xtlm2pin_t<32,12,1,1,1,1,1,1>("M02_AXI_transactor", M02_AXI_transactor_param_props);

    // M02_AXI' transactor ports

    mp_M02_AXI_transactor->AWADDR(M02_AXI_awaddr);
    mp_M02_AXI_transactor->AWLEN(M02_AXI_awlen);
    mp_M02_AXI_transactor->AWSIZE(M02_AXI_awsize);
    mp_M02_AXI_transactor->AWBURST(M02_AXI_awburst);
    mp_M02_AXI_awlock_converter = new xsc::common::scalar2vectorN_converter<1>("M02_AXI_awlock_converter");
    mp_M02_AXI_awlock_converter->scalar_in(m_M02_AXI_awlock_converter_signal);
    mp_M02_AXI_awlock_converter->vector_out(M02_AXI_awlock);
    mp_M02_AXI_transactor->AWLOCK(m_M02_AXI_awlock_converter_signal);
    mp_M02_AXI_transactor->AWCACHE(M02_AXI_awcache);
    mp_M02_AXI_transactor->AWPROT(M02_AXI_awprot);
    mp_M02_AXI_transactor->AWQOS(M02_AXI_awqos);
    mp_M02_AXI_transactor->AWVALID(M02_AXI_awvalid);
    mp_M02_AXI_transactor->AWREADY(M02_AXI_awready);
    mp_M02_AXI_transactor->WDATA(M02_AXI_wdata);
    mp_M02_AXI_transactor->WSTRB(M02_AXI_wstrb);
    mp_M02_AXI_transactor->WLAST(M02_AXI_wlast);
    mp_M02_AXI_transactor->WVALID(M02_AXI_wvalid);
    mp_M02_AXI_transactor->WREADY(M02_AXI_wready);
    mp_M02_AXI_transactor->BRESP(M02_AXI_bresp);
    mp_M02_AXI_transactor->BVALID(M02_AXI_bvalid);
    mp_M02_AXI_transactor->BREADY(M02_AXI_bready);
    mp_M02_AXI_transactor->ARADDR(M02_AXI_araddr);
    mp_M02_AXI_transactor->ARLEN(M02_AXI_arlen);
    mp_M02_AXI_transactor->ARSIZE(M02_AXI_arsize);
    mp_M02_AXI_transactor->ARBURST(M02_AXI_arburst);
    mp_M02_AXI_arlock_converter = new xsc::common::scalar2vectorN_converter<1>("M02_AXI_arlock_converter");
    mp_M02_AXI_arlock_converter->scalar_in(m_M02_AXI_arlock_converter_signal);
    mp_M02_AXI_arlock_converter->vector_out(M02_AXI_arlock);
    mp_M02_AXI_transactor->ARLOCK(m_M02_AXI_arlock_converter_signal);
    mp_M02_AXI_transactor->ARCACHE(M02_AXI_arcache);
    mp_M02_AXI_transactor->ARPROT(M02_AXI_arprot);
    mp_M02_AXI_transactor->ARQOS(M02_AXI_arqos);
    mp_M02_AXI_transactor->ARVALID(M02_AXI_arvalid);
    mp_M02_AXI_transactor->ARREADY(M02_AXI_arready);
    mp_M02_AXI_transactor->RDATA(M02_AXI_rdata);
    mp_M02_AXI_transactor->RRESP(M02_AXI_rresp);
    mp_M02_AXI_transactor->RLAST(M02_AXI_rlast);
    mp_M02_AXI_transactor->RVALID(M02_AXI_rvalid);
    mp_M02_AXI_transactor->RREADY(M02_AXI_rready);
    mp_M02_AXI_transactor->CLK(aclk);
    mp_M02_AXI_transactor->RST(aresetn);

    // M02_AXI' transactor sockets

    mp_impl->M02_AXI_tlm_aximm_read_socket->bind(*(mp_M02_AXI_transactor->rd_socket));
    mp_impl->M02_AXI_tlm_aximm_write_socket->bind(*(mp_M02_AXI_transactor->wr_socket));
  }
  else
  {
  }

  // configure 'M03_AXI' transactor

  if (xsc::utils::xsc_sim_manager::getInstanceParameterInt("Multi_convo_core_smartconnect_0_0", "M03_AXI_TLM_MODE") != 1)
  {
    // Instantiate Socket Stubs

  // 'M03_AXI' transactor parameters
    xsc::common_cpp::properties M03_AXI_transactor_param_props;
    M03_AXI_transactor_param_props.addLong("DATA_WIDTH", "32");
    M03_AXI_transactor_param_props.addLong("FREQ_HZ", "100000000");
    M03_AXI_transactor_param_props.addLong("ID_WIDTH", "0");
    M03_AXI_transactor_param_props.addLong("ADDR_WIDTH", "12");
    M03_AXI_transactor_param_props.addLong("AWUSER_WIDTH", "0");
    M03_AXI_transactor_param_props.addLong("ARUSER_WIDTH", "0");
    M03_AXI_transactor_param_props.addLong("WUSER_WIDTH", "0");
    M03_AXI_transactor_param_props.addLong("RUSER_WIDTH", "0");
    M03_AXI_transactor_param_props.addLong("BUSER_WIDTH", "0");
    M03_AXI_transactor_param_props.addLong("HAS_BURST", "1");
    M03_AXI_transactor_param_props.addLong("HAS_LOCK", "1");
    M03_AXI_transactor_param_props.addLong("HAS_PROT", "1");
    M03_AXI_transactor_param_props.addLong("HAS_CACHE", "1");
    M03_AXI_transactor_param_props.addLong("HAS_QOS", "1");
    M03_AXI_transactor_param_props.addLong("HAS_REGION", "0");
    M03_AXI_transactor_param_props.addLong("HAS_WSTRB", "1");
    M03_AXI_transactor_param_props.addLong("HAS_BRESP", "1");
    M03_AXI_transactor_param_props.addLong("HAS_RRESP", "1");
    M03_AXI_transactor_param_props.addLong("SUPPORTS_NARROW_BURST", "0");
    M03_AXI_transactor_param_props.addLong("NUM_READ_OUTSTANDING", "2");
    M03_AXI_transactor_param_props.addLong("NUM_WRITE_OUTSTANDING", "2");
    M03_AXI_transactor_param_props.addLong("MAX_BURST_LENGTH", "256");
    M03_AXI_transactor_param_props.addLong("NUM_READ_THREADS", "1");
    M03_AXI_transactor_param_props.addLong("NUM_WRITE_THREADS", "1");
    M03_AXI_transactor_param_props.addLong("RUSER_BITS_PER_BYTE", "0");
    M03_AXI_transactor_param_props.addLong("WUSER_BITS_PER_BYTE", "0");
    M03_AXI_transactor_param_props.addLong("HAS_SIZE", "1");
    M03_AXI_transactor_param_props.addLong("HAS_RESET", "1");
    M03_AXI_transactor_param_props.addFloat("PHASE", "0.0");
    M03_AXI_transactor_param_props.addString("PROTOCOL", "AXI4");
    M03_AXI_transactor_param_props.addString("READ_WRITE_MODE", "READ_WRITE");
    M03_AXI_transactor_param_props.addString("CLK_DOMAIN", "Multi_convo_core_processing_system7_0_0_FCLK_CLK0");

    mp_M03_AXI_transactor = new xtlm::xaximm_xtlm2pin_t<32,12,1,1,1,1,1,1>("M03_AXI_transactor", M03_AXI_transactor_param_props);

    // M03_AXI' transactor ports

    mp_M03_AXI_transactor->AWADDR(M03_AXI_awaddr);
    mp_M03_AXI_transactor->AWLEN(M03_AXI_awlen);
    mp_M03_AXI_transactor->AWSIZE(M03_AXI_awsize);
    mp_M03_AXI_transactor->AWBURST(M03_AXI_awburst);
    mp_M03_AXI_awlock_converter = new xsc::common::scalar2vectorN_converter<1>("M03_AXI_awlock_converter");
    mp_M03_AXI_awlock_converter->scalar_in(m_M03_AXI_awlock_converter_signal);
    mp_M03_AXI_awlock_converter->vector_out(M03_AXI_awlock);
    mp_M03_AXI_transactor->AWLOCK(m_M03_AXI_awlock_converter_signal);
    mp_M03_AXI_transactor->AWCACHE(M03_AXI_awcache);
    mp_M03_AXI_transactor->AWPROT(M03_AXI_awprot);
    mp_M03_AXI_transactor->AWQOS(M03_AXI_awqos);
    mp_M03_AXI_transactor->AWVALID(M03_AXI_awvalid);
    mp_M03_AXI_transactor->AWREADY(M03_AXI_awready);
    mp_M03_AXI_transactor->WDATA(M03_AXI_wdata);
    mp_M03_AXI_transactor->WSTRB(M03_AXI_wstrb);
    mp_M03_AXI_transactor->WLAST(M03_AXI_wlast);
    mp_M03_AXI_transactor->WVALID(M03_AXI_wvalid);
    mp_M03_AXI_transactor->WREADY(M03_AXI_wready);
    mp_M03_AXI_transactor->BRESP(M03_AXI_bresp);
    mp_M03_AXI_transactor->BVALID(M03_AXI_bvalid);
    mp_M03_AXI_transactor->BREADY(M03_AXI_bready);
    mp_M03_AXI_transactor->ARADDR(M03_AXI_araddr);
    mp_M03_AXI_transactor->ARLEN(M03_AXI_arlen);
    mp_M03_AXI_transactor->ARSIZE(M03_AXI_arsize);
    mp_M03_AXI_transactor->ARBURST(M03_AXI_arburst);
    mp_M03_AXI_arlock_converter = new xsc::common::scalar2vectorN_converter<1>("M03_AXI_arlock_converter");
    mp_M03_AXI_arlock_converter->scalar_in(m_M03_AXI_arlock_converter_signal);
    mp_M03_AXI_arlock_converter->vector_out(M03_AXI_arlock);
    mp_M03_AXI_transactor->ARLOCK(m_M03_AXI_arlock_converter_signal);
    mp_M03_AXI_transactor->ARCACHE(M03_AXI_arcache);
    mp_M03_AXI_transactor->ARPROT(M03_AXI_arprot);
    mp_M03_AXI_transactor->ARQOS(M03_AXI_arqos);
    mp_M03_AXI_transactor->ARVALID(M03_AXI_arvalid);
    mp_M03_AXI_transactor->ARREADY(M03_AXI_arready);
    mp_M03_AXI_transactor->RDATA(M03_AXI_rdata);
    mp_M03_AXI_transactor->RRESP(M03_AXI_rresp);
    mp_M03_AXI_transactor->RLAST(M03_AXI_rlast);
    mp_M03_AXI_transactor->RVALID(M03_AXI_rvalid);
    mp_M03_AXI_transactor->RREADY(M03_AXI_rready);
    mp_M03_AXI_transactor->CLK(aclk);
    mp_M03_AXI_transactor->RST(aresetn);

    // M03_AXI' transactor sockets

    mp_impl->M03_AXI_tlm_aximm_read_socket->bind(*(mp_M03_AXI_transactor->rd_socket));
    mp_impl->M03_AXI_tlm_aximm_write_socket->bind(*(mp_M03_AXI_transactor->wr_socket));
  }
  else
  {
  }

  // configure 'M04_AXI' transactor

  if (xsc::utils::xsc_sim_manager::getInstanceParameterInt("Multi_convo_core_smartconnect_0_0", "M04_AXI_TLM_MODE") != 1)
  {
    // Instantiate Socket Stubs

  // 'M04_AXI' transactor parameters
    xsc::common_cpp::properties M04_AXI_transactor_param_props;
    M04_AXI_transactor_param_props.addLong("DATA_WIDTH", "32");
    M04_AXI_transactor_param_props.addLong("FREQ_HZ", "100000000");
    M04_AXI_transactor_param_props.addLong("ID_WIDTH", "0");
    M04_AXI_transactor_param_props.addLong("ADDR_WIDTH", "12");
    M04_AXI_transactor_param_props.addLong("AWUSER_WIDTH", "0");
    M04_AXI_transactor_param_props.addLong("ARUSER_WIDTH", "0");
    M04_AXI_transactor_param_props.addLong("WUSER_WIDTH", "0");
    M04_AXI_transactor_param_props.addLong("RUSER_WIDTH", "0");
    M04_AXI_transactor_param_props.addLong("BUSER_WIDTH", "0");
    M04_AXI_transactor_param_props.addLong("HAS_BURST", "1");
    M04_AXI_transactor_param_props.addLong("HAS_LOCK", "1");
    M04_AXI_transactor_param_props.addLong("HAS_PROT", "1");
    M04_AXI_transactor_param_props.addLong("HAS_CACHE", "1");
    M04_AXI_transactor_param_props.addLong("HAS_QOS", "1");
    M04_AXI_transactor_param_props.addLong("HAS_REGION", "0");
    M04_AXI_transactor_param_props.addLong("HAS_WSTRB", "1");
    M04_AXI_transactor_param_props.addLong("HAS_BRESP", "1");
    M04_AXI_transactor_param_props.addLong("HAS_RRESP", "1");
    M04_AXI_transactor_param_props.addLong("SUPPORTS_NARROW_BURST", "0");
    M04_AXI_transactor_param_props.addLong("NUM_READ_OUTSTANDING", "2");
    M04_AXI_transactor_param_props.addLong("NUM_WRITE_OUTSTANDING", "2");
    M04_AXI_transactor_param_props.addLong("MAX_BURST_LENGTH", "256");
    M04_AXI_transactor_param_props.addLong("NUM_READ_THREADS", "1");
    M04_AXI_transactor_param_props.addLong("NUM_WRITE_THREADS", "1");
    M04_AXI_transactor_param_props.addLong("RUSER_BITS_PER_BYTE", "0");
    M04_AXI_transactor_param_props.addLong("WUSER_BITS_PER_BYTE", "0");
    M04_AXI_transactor_param_props.addLong("HAS_SIZE", "1");
    M04_AXI_transactor_param_props.addLong("HAS_RESET", "1");
    M04_AXI_transactor_param_props.addFloat("PHASE", "0.0");
    M04_AXI_transactor_param_props.addString("PROTOCOL", "AXI4");
    M04_AXI_transactor_param_props.addString("READ_WRITE_MODE", "READ_WRITE");
    M04_AXI_transactor_param_props.addString("CLK_DOMAIN", "Multi_convo_core_processing_system7_0_0_FCLK_CLK0");

    mp_M04_AXI_transactor = new xtlm::xaximm_xtlm2pin_t<32,12,1,1,1,1,1,1>("M04_AXI_transactor", M04_AXI_transactor_param_props);

    // M04_AXI' transactor ports

    mp_M04_AXI_transactor->AWADDR(M04_AXI_awaddr);
    mp_M04_AXI_transactor->AWLEN(M04_AXI_awlen);
    mp_M04_AXI_transactor->AWSIZE(M04_AXI_awsize);
    mp_M04_AXI_transactor->AWBURST(M04_AXI_awburst);
    mp_M04_AXI_awlock_converter = new xsc::common::scalar2vectorN_converter<1>("M04_AXI_awlock_converter");
    mp_M04_AXI_awlock_converter->scalar_in(m_M04_AXI_awlock_converter_signal);
    mp_M04_AXI_awlock_converter->vector_out(M04_AXI_awlock);
    mp_M04_AXI_transactor->AWLOCK(m_M04_AXI_awlock_converter_signal);
    mp_M04_AXI_transactor->AWCACHE(M04_AXI_awcache);
    mp_M04_AXI_transactor->AWPROT(M04_AXI_awprot);
    mp_M04_AXI_transactor->AWQOS(M04_AXI_awqos);
    mp_M04_AXI_transactor->AWVALID(M04_AXI_awvalid);
    mp_M04_AXI_transactor->AWREADY(M04_AXI_awready);
    mp_M04_AXI_transactor->WDATA(M04_AXI_wdata);
    mp_M04_AXI_transactor->WSTRB(M04_AXI_wstrb);
    mp_M04_AXI_transactor->WLAST(M04_AXI_wlast);
    mp_M04_AXI_transactor->WVALID(M04_AXI_wvalid);
    mp_M04_AXI_transactor->WREADY(M04_AXI_wready);
    mp_M04_AXI_transactor->BRESP(M04_AXI_bresp);
    mp_M04_AXI_transactor->BVALID(M04_AXI_bvalid);
    mp_M04_AXI_transactor->BREADY(M04_AXI_bready);
    mp_M04_AXI_transactor->ARADDR(M04_AXI_araddr);
    mp_M04_AXI_transactor->ARLEN(M04_AXI_arlen);
    mp_M04_AXI_transactor->ARSIZE(M04_AXI_arsize);
    mp_M04_AXI_transactor->ARBURST(M04_AXI_arburst);
    mp_M04_AXI_arlock_converter = new xsc::common::scalar2vectorN_converter<1>("M04_AXI_arlock_converter");
    mp_M04_AXI_arlock_converter->scalar_in(m_M04_AXI_arlock_converter_signal);
    mp_M04_AXI_arlock_converter->vector_out(M04_AXI_arlock);
    mp_M04_AXI_transactor->ARLOCK(m_M04_AXI_arlock_converter_signal);
    mp_M04_AXI_transactor->ARCACHE(M04_AXI_arcache);
    mp_M04_AXI_transactor->ARPROT(M04_AXI_arprot);
    mp_M04_AXI_transactor->ARQOS(M04_AXI_arqos);
    mp_M04_AXI_transactor->ARVALID(M04_AXI_arvalid);
    mp_M04_AXI_transactor->ARREADY(M04_AXI_arready);
    mp_M04_AXI_transactor->RDATA(M04_AXI_rdata);
    mp_M04_AXI_transactor->RRESP(M04_AXI_rresp);
    mp_M04_AXI_transactor->RLAST(M04_AXI_rlast);
    mp_M04_AXI_transactor->RVALID(M04_AXI_rvalid);
    mp_M04_AXI_transactor->RREADY(M04_AXI_rready);
    mp_M04_AXI_transactor->CLK(aclk);
    mp_M04_AXI_transactor->RST(aresetn);

    // M04_AXI' transactor sockets

    mp_impl->M04_AXI_tlm_aximm_read_socket->bind(*(mp_M04_AXI_transactor->rd_socket));
    mp_impl->M04_AXI_tlm_aximm_write_socket->bind(*(mp_M04_AXI_transactor->wr_socket));
  }
  else
  {
  }

  // configure 'M05_AXI' transactor

  if (xsc::utils::xsc_sim_manager::getInstanceParameterInt("Multi_convo_core_smartconnect_0_0", "M05_AXI_TLM_MODE") != 1)
  {
    // Instantiate Socket Stubs

  // 'M05_AXI' transactor parameters
    xsc::common_cpp::properties M05_AXI_transactor_param_props;
    M05_AXI_transactor_param_props.addLong("DATA_WIDTH", "32");
    M05_AXI_transactor_param_props.addLong("FREQ_HZ", "100000000");
    M05_AXI_transactor_param_props.addLong("ID_WIDTH", "0");
    M05_AXI_transactor_param_props.addLong("ADDR_WIDTH", "12");
    M05_AXI_transactor_param_props.addLong("AWUSER_WIDTH", "0");
    M05_AXI_transactor_param_props.addLong("ARUSER_WIDTH", "0");
    M05_AXI_transactor_param_props.addLong("WUSER_WIDTH", "0");
    M05_AXI_transactor_param_props.addLong("RUSER_WIDTH", "0");
    M05_AXI_transactor_param_props.addLong("BUSER_WIDTH", "0");
    M05_AXI_transactor_param_props.addLong("HAS_BURST", "1");
    M05_AXI_transactor_param_props.addLong("HAS_LOCK", "1");
    M05_AXI_transactor_param_props.addLong("HAS_PROT", "1");
    M05_AXI_transactor_param_props.addLong("HAS_CACHE", "1");
    M05_AXI_transactor_param_props.addLong("HAS_QOS", "1");
    M05_AXI_transactor_param_props.addLong("HAS_REGION", "0");
    M05_AXI_transactor_param_props.addLong("HAS_WSTRB", "1");
    M05_AXI_transactor_param_props.addLong("HAS_BRESP", "1");
    M05_AXI_transactor_param_props.addLong("HAS_RRESP", "1");
    M05_AXI_transactor_param_props.addLong("SUPPORTS_NARROW_BURST", "0");
    M05_AXI_transactor_param_props.addLong("NUM_READ_OUTSTANDING", "2");
    M05_AXI_transactor_param_props.addLong("NUM_WRITE_OUTSTANDING", "2");
    M05_AXI_transactor_param_props.addLong("MAX_BURST_LENGTH", "256");
    M05_AXI_transactor_param_props.addLong("NUM_READ_THREADS", "1");
    M05_AXI_transactor_param_props.addLong("NUM_WRITE_THREADS", "1");
    M05_AXI_transactor_param_props.addLong("RUSER_BITS_PER_BYTE", "0");
    M05_AXI_transactor_param_props.addLong("WUSER_BITS_PER_BYTE", "0");
    M05_AXI_transactor_param_props.addLong("HAS_SIZE", "1");
    M05_AXI_transactor_param_props.addLong("HAS_RESET", "1");
    M05_AXI_transactor_param_props.addFloat("PHASE", "0.0");
    M05_AXI_transactor_param_props.addString("PROTOCOL", "AXI4");
    M05_AXI_transactor_param_props.addString("READ_WRITE_MODE", "READ_WRITE");
    M05_AXI_transactor_param_props.addString("CLK_DOMAIN", "Multi_convo_core_processing_system7_0_0_FCLK_CLK0");

    mp_M05_AXI_transactor = new xtlm::xaximm_xtlm2pin_t<32,12,1,1,1,1,1,1>("M05_AXI_transactor", M05_AXI_transactor_param_props);

    // M05_AXI' transactor ports

    mp_M05_AXI_transactor->AWADDR(M05_AXI_awaddr);
    mp_M05_AXI_transactor->AWLEN(M05_AXI_awlen);
    mp_M05_AXI_transactor->AWSIZE(M05_AXI_awsize);
    mp_M05_AXI_transactor->AWBURST(M05_AXI_awburst);
    mp_M05_AXI_awlock_converter = new xsc::common::scalar2vectorN_converter<1>("M05_AXI_awlock_converter");
    mp_M05_AXI_awlock_converter->scalar_in(m_M05_AXI_awlock_converter_signal);
    mp_M05_AXI_awlock_converter->vector_out(M05_AXI_awlock);
    mp_M05_AXI_transactor->AWLOCK(m_M05_AXI_awlock_converter_signal);
    mp_M05_AXI_transactor->AWCACHE(M05_AXI_awcache);
    mp_M05_AXI_transactor->AWPROT(M05_AXI_awprot);
    mp_M05_AXI_transactor->AWQOS(M05_AXI_awqos);
    mp_M05_AXI_transactor->AWVALID(M05_AXI_awvalid);
    mp_M05_AXI_transactor->AWREADY(M05_AXI_awready);
    mp_M05_AXI_transactor->WDATA(M05_AXI_wdata);
    mp_M05_AXI_transactor->WSTRB(M05_AXI_wstrb);
    mp_M05_AXI_transactor->WLAST(M05_AXI_wlast);
    mp_M05_AXI_transactor->WVALID(M05_AXI_wvalid);
    mp_M05_AXI_transactor->WREADY(M05_AXI_wready);
    mp_M05_AXI_transactor->BRESP(M05_AXI_bresp);
    mp_M05_AXI_transactor->BVALID(M05_AXI_bvalid);
    mp_M05_AXI_transactor->BREADY(M05_AXI_bready);
    mp_M05_AXI_transactor->ARADDR(M05_AXI_araddr);
    mp_M05_AXI_transactor->ARLEN(M05_AXI_arlen);
    mp_M05_AXI_transactor->ARSIZE(M05_AXI_arsize);
    mp_M05_AXI_transactor->ARBURST(M05_AXI_arburst);
    mp_M05_AXI_arlock_converter = new xsc::common::scalar2vectorN_converter<1>("M05_AXI_arlock_converter");
    mp_M05_AXI_arlock_converter->scalar_in(m_M05_AXI_arlock_converter_signal);
    mp_M05_AXI_arlock_converter->vector_out(M05_AXI_arlock);
    mp_M05_AXI_transactor->ARLOCK(m_M05_AXI_arlock_converter_signal);
    mp_M05_AXI_transactor->ARCACHE(M05_AXI_arcache);
    mp_M05_AXI_transactor->ARPROT(M05_AXI_arprot);
    mp_M05_AXI_transactor->ARQOS(M05_AXI_arqos);
    mp_M05_AXI_transactor->ARVALID(M05_AXI_arvalid);
    mp_M05_AXI_transactor->ARREADY(M05_AXI_arready);
    mp_M05_AXI_transactor->RDATA(M05_AXI_rdata);
    mp_M05_AXI_transactor->RRESP(M05_AXI_rresp);
    mp_M05_AXI_transactor->RLAST(M05_AXI_rlast);
    mp_M05_AXI_transactor->RVALID(M05_AXI_rvalid);
    mp_M05_AXI_transactor->RREADY(M05_AXI_rready);
    mp_M05_AXI_transactor->CLK(aclk);
    mp_M05_AXI_transactor->RST(aresetn);

    // M05_AXI' transactor sockets

    mp_impl->M05_AXI_tlm_aximm_read_socket->bind(*(mp_M05_AXI_transactor->rd_socket));
    mp_impl->M05_AXI_tlm_aximm_write_socket->bind(*(mp_M05_AXI_transactor->wr_socket));
  }
  else
  {
  }

  // configure 'M06_AXI' transactor

  if (xsc::utils::xsc_sim_manager::getInstanceParameterInt("Multi_convo_core_smartconnect_0_0", "M06_AXI_TLM_MODE") != 1)
  {
    // Instantiate Socket Stubs

  // 'M06_AXI' transactor parameters
    xsc::common_cpp::properties M06_AXI_transactor_param_props;
    M06_AXI_transactor_param_props.addLong("DATA_WIDTH", "32");
    M06_AXI_transactor_param_props.addLong("FREQ_HZ", "100000000");
    M06_AXI_transactor_param_props.addLong("ID_WIDTH", "0");
    M06_AXI_transactor_param_props.addLong("ADDR_WIDTH", "12");
    M06_AXI_transactor_param_props.addLong("AWUSER_WIDTH", "0");
    M06_AXI_transactor_param_props.addLong("ARUSER_WIDTH", "0");
    M06_AXI_transactor_param_props.addLong("WUSER_WIDTH", "0");
    M06_AXI_transactor_param_props.addLong("RUSER_WIDTH", "0");
    M06_AXI_transactor_param_props.addLong("BUSER_WIDTH", "0");
    M06_AXI_transactor_param_props.addLong("HAS_BURST", "1");
    M06_AXI_transactor_param_props.addLong("HAS_LOCK", "1");
    M06_AXI_transactor_param_props.addLong("HAS_PROT", "1");
    M06_AXI_transactor_param_props.addLong("HAS_CACHE", "1");
    M06_AXI_transactor_param_props.addLong("HAS_QOS", "1");
    M06_AXI_transactor_param_props.addLong("HAS_REGION", "0");
    M06_AXI_transactor_param_props.addLong("HAS_WSTRB", "1");
    M06_AXI_transactor_param_props.addLong("HAS_BRESP", "1");
    M06_AXI_transactor_param_props.addLong("HAS_RRESP", "1");
    M06_AXI_transactor_param_props.addLong("SUPPORTS_NARROW_BURST", "0");
    M06_AXI_transactor_param_props.addLong("NUM_READ_OUTSTANDING", "2");
    M06_AXI_transactor_param_props.addLong("NUM_WRITE_OUTSTANDING", "2");
    M06_AXI_transactor_param_props.addLong("MAX_BURST_LENGTH", "256");
    M06_AXI_transactor_param_props.addLong("NUM_READ_THREADS", "1");
    M06_AXI_transactor_param_props.addLong("NUM_WRITE_THREADS", "1");
    M06_AXI_transactor_param_props.addLong("RUSER_BITS_PER_BYTE", "0");
    M06_AXI_transactor_param_props.addLong("WUSER_BITS_PER_BYTE", "0");
    M06_AXI_transactor_param_props.addLong("HAS_SIZE", "1");
    M06_AXI_transactor_param_props.addLong("HAS_RESET", "1");
    M06_AXI_transactor_param_props.addFloat("PHASE", "0.0");
    M06_AXI_transactor_param_props.addString("PROTOCOL", "AXI4");
    M06_AXI_transactor_param_props.addString("READ_WRITE_MODE", "READ_WRITE");
    M06_AXI_transactor_param_props.addString("CLK_DOMAIN", "Multi_convo_core_processing_system7_0_0_FCLK_CLK0");

    mp_M06_AXI_transactor = new xtlm::xaximm_xtlm2pin_t<32,12,1,1,1,1,1,1>("M06_AXI_transactor", M06_AXI_transactor_param_props);

    // M06_AXI' transactor ports

    mp_M06_AXI_transactor->AWADDR(M06_AXI_awaddr);
    mp_M06_AXI_transactor->AWLEN(M06_AXI_awlen);
    mp_M06_AXI_transactor->AWSIZE(M06_AXI_awsize);
    mp_M06_AXI_transactor->AWBURST(M06_AXI_awburst);
    mp_M06_AXI_awlock_converter = new xsc::common::scalar2vectorN_converter<1>("M06_AXI_awlock_converter");
    mp_M06_AXI_awlock_converter->scalar_in(m_M06_AXI_awlock_converter_signal);
    mp_M06_AXI_awlock_converter->vector_out(M06_AXI_awlock);
    mp_M06_AXI_transactor->AWLOCK(m_M06_AXI_awlock_converter_signal);
    mp_M06_AXI_transactor->AWCACHE(M06_AXI_awcache);
    mp_M06_AXI_transactor->AWPROT(M06_AXI_awprot);
    mp_M06_AXI_transactor->AWQOS(M06_AXI_awqos);
    mp_M06_AXI_transactor->AWVALID(M06_AXI_awvalid);
    mp_M06_AXI_transactor->AWREADY(M06_AXI_awready);
    mp_M06_AXI_transactor->WDATA(M06_AXI_wdata);
    mp_M06_AXI_transactor->WSTRB(M06_AXI_wstrb);
    mp_M06_AXI_transactor->WLAST(M06_AXI_wlast);
    mp_M06_AXI_transactor->WVALID(M06_AXI_wvalid);
    mp_M06_AXI_transactor->WREADY(M06_AXI_wready);
    mp_M06_AXI_transactor->BRESP(M06_AXI_bresp);
    mp_M06_AXI_transactor->BVALID(M06_AXI_bvalid);
    mp_M06_AXI_transactor->BREADY(M06_AXI_bready);
    mp_M06_AXI_transactor->ARADDR(M06_AXI_araddr);
    mp_M06_AXI_transactor->ARLEN(M06_AXI_arlen);
    mp_M06_AXI_transactor->ARSIZE(M06_AXI_arsize);
    mp_M06_AXI_transactor->ARBURST(M06_AXI_arburst);
    mp_M06_AXI_arlock_converter = new xsc::common::scalar2vectorN_converter<1>("M06_AXI_arlock_converter");
    mp_M06_AXI_arlock_converter->scalar_in(m_M06_AXI_arlock_converter_signal);
    mp_M06_AXI_arlock_converter->vector_out(M06_AXI_arlock);
    mp_M06_AXI_transactor->ARLOCK(m_M06_AXI_arlock_converter_signal);
    mp_M06_AXI_transactor->ARCACHE(M06_AXI_arcache);
    mp_M06_AXI_transactor->ARPROT(M06_AXI_arprot);
    mp_M06_AXI_transactor->ARQOS(M06_AXI_arqos);
    mp_M06_AXI_transactor->ARVALID(M06_AXI_arvalid);
    mp_M06_AXI_transactor->ARREADY(M06_AXI_arready);
    mp_M06_AXI_transactor->RDATA(M06_AXI_rdata);
    mp_M06_AXI_transactor->RRESP(M06_AXI_rresp);
    mp_M06_AXI_transactor->RLAST(M06_AXI_rlast);
    mp_M06_AXI_transactor->RVALID(M06_AXI_rvalid);
    mp_M06_AXI_transactor->RREADY(M06_AXI_rready);
    mp_M06_AXI_transactor->CLK(aclk);
    mp_M06_AXI_transactor->RST(aresetn);

    // M06_AXI' transactor sockets

    mp_impl->M06_AXI_tlm_aximm_read_socket->bind(*(mp_M06_AXI_transactor->rd_socket));
    mp_impl->M06_AXI_tlm_aximm_write_socket->bind(*(mp_M06_AXI_transactor->wr_socket));
  }
  else
  {
  }

  // configure 'M07_AXI' transactor

  if (xsc::utils::xsc_sim_manager::getInstanceParameterInt("Multi_convo_core_smartconnect_0_0", "M07_AXI_TLM_MODE") != 1)
  {
    // Instantiate Socket Stubs

  // 'M07_AXI' transactor parameters
    xsc::common_cpp::properties M07_AXI_transactor_param_props;
    M07_AXI_transactor_param_props.addLong("DATA_WIDTH", "32");
    M07_AXI_transactor_param_props.addLong("FREQ_HZ", "100000000");
    M07_AXI_transactor_param_props.addLong("ID_WIDTH", "0");
    M07_AXI_transactor_param_props.addLong("ADDR_WIDTH", "12");
    M07_AXI_transactor_param_props.addLong("AWUSER_WIDTH", "0");
    M07_AXI_transactor_param_props.addLong("ARUSER_WIDTH", "0");
    M07_AXI_transactor_param_props.addLong("WUSER_WIDTH", "0");
    M07_AXI_transactor_param_props.addLong("RUSER_WIDTH", "0");
    M07_AXI_transactor_param_props.addLong("BUSER_WIDTH", "0");
    M07_AXI_transactor_param_props.addLong("HAS_BURST", "1");
    M07_AXI_transactor_param_props.addLong("HAS_LOCK", "1");
    M07_AXI_transactor_param_props.addLong("HAS_PROT", "1");
    M07_AXI_transactor_param_props.addLong("HAS_CACHE", "1");
    M07_AXI_transactor_param_props.addLong("HAS_QOS", "1");
    M07_AXI_transactor_param_props.addLong("HAS_REGION", "0");
    M07_AXI_transactor_param_props.addLong("HAS_WSTRB", "1");
    M07_AXI_transactor_param_props.addLong("HAS_BRESP", "1");
    M07_AXI_transactor_param_props.addLong("HAS_RRESP", "1");
    M07_AXI_transactor_param_props.addLong("SUPPORTS_NARROW_BURST", "0");
    M07_AXI_transactor_param_props.addLong("NUM_READ_OUTSTANDING", "2");
    M07_AXI_transactor_param_props.addLong("NUM_WRITE_OUTSTANDING", "2");
    M07_AXI_transactor_param_props.addLong("MAX_BURST_LENGTH", "256");
    M07_AXI_transactor_param_props.addLong("NUM_READ_THREADS", "1");
    M07_AXI_transactor_param_props.addLong("NUM_WRITE_THREADS", "1");
    M07_AXI_transactor_param_props.addLong("RUSER_BITS_PER_BYTE", "0");
    M07_AXI_transactor_param_props.addLong("WUSER_BITS_PER_BYTE", "0");
    M07_AXI_transactor_param_props.addLong("HAS_SIZE", "1");
    M07_AXI_transactor_param_props.addLong("HAS_RESET", "1");
    M07_AXI_transactor_param_props.addFloat("PHASE", "0.0");
    M07_AXI_transactor_param_props.addString("PROTOCOL", "AXI4");
    M07_AXI_transactor_param_props.addString("READ_WRITE_MODE", "READ_WRITE");
    M07_AXI_transactor_param_props.addString("CLK_DOMAIN", "Multi_convo_core_processing_system7_0_0_FCLK_CLK0");

    mp_M07_AXI_transactor = new xtlm::xaximm_xtlm2pin_t<32,12,1,1,1,1,1,1>("M07_AXI_transactor", M07_AXI_transactor_param_props);

    // M07_AXI' transactor ports

    mp_M07_AXI_transactor->AWADDR(M07_AXI_awaddr);
    mp_M07_AXI_transactor->AWLEN(M07_AXI_awlen);
    mp_M07_AXI_transactor->AWSIZE(M07_AXI_awsize);
    mp_M07_AXI_transactor->AWBURST(M07_AXI_awburst);
    mp_M07_AXI_awlock_converter = new xsc::common::scalar2vectorN_converter<1>("M07_AXI_awlock_converter");
    mp_M07_AXI_awlock_converter->scalar_in(m_M07_AXI_awlock_converter_signal);
    mp_M07_AXI_awlock_converter->vector_out(M07_AXI_awlock);
    mp_M07_AXI_transactor->AWLOCK(m_M07_AXI_awlock_converter_signal);
    mp_M07_AXI_transactor->AWCACHE(M07_AXI_awcache);
    mp_M07_AXI_transactor->AWPROT(M07_AXI_awprot);
    mp_M07_AXI_transactor->AWQOS(M07_AXI_awqos);
    mp_M07_AXI_transactor->AWVALID(M07_AXI_awvalid);
    mp_M07_AXI_transactor->AWREADY(M07_AXI_awready);
    mp_M07_AXI_transactor->WDATA(M07_AXI_wdata);
    mp_M07_AXI_transactor->WSTRB(M07_AXI_wstrb);
    mp_M07_AXI_transactor->WLAST(M07_AXI_wlast);
    mp_M07_AXI_transactor->WVALID(M07_AXI_wvalid);
    mp_M07_AXI_transactor->WREADY(M07_AXI_wready);
    mp_M07_AXI_transactor->BRESP(M07_AXI_bresp);
    mp_M07_AXI_transactor->BVALID(M07_AXI_bvalid);
    mp_M07_AXI_transactor->BREADY(M07_AXI_bready);
    mp_M07_AXI_transactor->ARADDR(M07_AXI_araddr);
    mp_M07_AXI_transactor->ARLEN(M07_AXI_arlen);
    mp_M07_AXI_transactor->ARSIZE(M07_AXI_arsize);
    mp_M07_AXI_transactor->ARBURST(M07_AXI_arburst);
    mp_M07_AXI_arlock_converter = new xsc::common::scalar2vectorN_converter<1>("M07_AXI_arlock_converter");
    mp_M07_AXI_arlock_converter->scalar_in(m_M07_AXI_arlock_converter_signal);
    mp_M07_AXI_arlock_converter->vector_out(M07_AXI_arlock);
    mp_M07_AXI_transactor->ARLOCK(m_M07_AXI_arlock_converter_signal);
    mp_M07_AXI_transactor->ARCACHE(M07_AXI_arcache);
    mp_M07_AXI_transactor->ARPROT(M07_AXI_arprot);
    mp_M07_AXI_transactor->ARQOS(M07_AXI_arqos);
    mp_M07_AXI_transactor->ARVALID(M07_AXI_arvalid);
    mp_M07_AXI_transactor->ARREADY(M07_AXI_arready);
    mp_M07_AXI_transactor->RDATA(M07_AXI_rdata);
    mp_M07_AXI_transactor->RRESP(M07_AXI_rresp);
    mp_M07_AXI_transactor->RLAST(M07_AXI_rlast);
    mp_M07_AXI_transactor->RVALID(M07_AXI_rvalid);
    mp_M07_AXI_transactor->RREADY(M07_AXI_rready);
    mp_M07_AXI_transactor->CLK(aclk);
    mp_M07_AXI_transactor->RST(aresetn);

    // M07_AXI' transactor sockets

    mp_impl->M07_AXI_tlm_aximm_read_socket->bind(*(mp_M07_AXI_transactor->rd_socket));
    mp_impl->M07_AXI_tlm_aximm_write_socket->bind(*(mp_M07_AXI_transactor->wr_socket));
  }
  else
  {
  }

  // configure 'M08_AXI' transactor

  if (xsc::utils::xsc_sim_manager::getInstanceParameterInt("Multi_convo_core_smartconnect_0_0", "M08_AXI_TLM_MODE") != 1)
  {
    // Instantiate Socket Stubs

  // 'M08_AXI' transactor parameters
    xsc::common_cpp::properties M08_AXI_transactor_param_props;
    M08_AXI_transactor_param_props.addLong("DATA_WIDTH", "32");
    M08_AXI_transactor_param_props.addLong("FREQ_HZ", "100000000");
    M08_AXI_transactor_param_props.addLong("ID_WIDTH", "0");
    M08_AXI_transactor_param_props.addLong("ADDR_WIDTH", "12");
    M08_AXI_transactor_param_props.addLong("AWUSER_WIDTH", "0");
    M08_AXI_transactor_param_props.addLong("ARUSER_WIDTH", "0");
    M08_AXI_transactor_param_props.addLong("WUSER_WIDTH", "0");
    M08_AXI_transactor_param_props.addLong("RUSER_WIDTH", "0");
    M08_AXI_transactor_param_props.addLong("BUSER_WIDTH", "0");
    M08_AXI_transactor_param_props.addLong("HAS_BURST", "1");
    M08_AXI_transactor_param_props.addLong("HAS_LOCK", "1");
    M08_AXI_transactor_param_props.addLong("HAS_PROT", "1");
    M08_AXI_transactor_param_props.addLong("HAS_CACHE", "1");
    M08_AXI_transactor_param_props.addLong("HAS_QOS", "1");
    M08_AXI_transactor_param_props.addLong("HAS_REGION", "0");
    M08_AXI_transactor_param_props.addLong("HAS_WSTRB", "1");
    M08_AXI_transactor_param_props.addLong("HAS_BRESP", "1");
    M08_AXI_transactor_param_props.addLong("HAS_RRESP", "1");
    M08_AXI_transactor_param_props.addLong("SUPPORTS_NARROW_BURST", "0");
    M08_AXI_transactor_param_props.addLong("NUM_READ_OUTSTANDING", "2");
    M08_AXI_transactor_param_props.addLong("NUM_WRITE_OUTSTANDING", "2");
    M08_AXI_transactor_param_props.addLong("MAX_BURST_LENGTH", "256");
    M08_AXI_transactor_param_props.addLong("NUM_READ_THREADS", "1");
    M08_AXI_transactor_param_props.addLong("NUM_WRITE_THREADS", "1");
    M08_AXI_transactor_param_props.addLong("RUSER_BITS_PER_BYTE", "0");
    M08_AXI_transactor_param_props.addLong("WUSER_BITS_PER_BYTE", "0");
    M08_AXI_transactor_param_props.addLong("HAS_SIZE", "1");
    M08_AXI_transactor_param_props.addLong("HAS_RESET", "1");
    M08_AXI_transactor_param_props.addFloat("PHASE", "0.0");
    M08_AXI_transactor_param_props.addString("PROTOCOL", "AXI4");
    M08_AXI_transactor_param_props.addString("READ_WRITE_MODE", "READ_WRITE");
    M08_AXI_transactor_param_props.addString("CLK_DOMAIN", "Multi_convo_core_processing_system7_0_0_FCLK_CLK0");

    mp_M08_AXI_transactor = new xtlm::xaximm_xtlm2pin_t<32,12,1,1,1,1,1,1>("M08_AXI_transactor", M08_AXI_transactor_param_props);

    // M08_AXI' transactor ports

    mp_M08_AXI_transactor->AWADDR(M08_AXI_awaddr);
    mp_M08_AXI_transactor->AWLEN(M08_AXI_awlen);
    mp_M08_AXI_transactor->AWSIZE(M08_AXI_awsize);
    mp_M08_AXI_transactor->AWBURST(M08_AXI_awburst);
    mp_M08_AXI_awlock_converter = new xsc::common::scalar2vectorN_converter<1>("M08_AXI_awlock_converter");
    mp_M08_AXI_awlock_converter->scalar_in(m_M08_AXI_awlock_converter_signal);
    mp_M08_AXI_awlock_converter->vector_out(M08_AXI_awlock);
    mp_M08_AXI_transactor->AWLOCK(m_M08_AXI_awlock_converter_signal);
    mp_M08_AXI_transactor->AWCACHE(M08_AXI_awcache);
    mp_M08_AXI_transactor->AWPROT(M08_AXI_awprot);
    mp_M08_AXI_transactor->AWQOS(M08_AXI_awqos);
    mp_M08_AXI_transactor->AWVALID(M08_AXI_awvalid);
    mp_M08_AXI_transactor->AWREADY(M08_AXI_awready);
    mp_M08_AXI_transactor->WDATA(M08_AXI_wdata);
    mp_M08_AXI_transactor->WSTRB(M08_AXI_wstrb);
    mp_M08_AXI_transactor->WLAST(M08_AXI_wlast);
    mp_M08_AXI_transactor->WVALID(M08_AXI_wvalid);
    mp_M08_AXI_transactor->WREADY(M08_AXI_wready);
    mp_M08_AXI_transactor->BRESP(M08_AXI_bresp);
    mp_M08_AXI_transactor->BVALID(M08_AXI_bvalid);
    mp_M08_AXI_transactor->BREADY(M08_AXI_bready);
    mp_M08_AXI_transactor->ARADDR(M08_AXI_araddr);
    mp_M08_AXI_transactor->ARLEN(M08_AXI_arlen);
    mp_M08_AXI_transactor->ARSIZE(M08_AXI_arsize);
    mp_M08_AXI_transactor->ARBURST(M08_AXI_arburst);
    mp_M08_AXI_arlock_converter = new xsc::common::scalar2vectorN_converter<1>("M08_AXI_arlock_converter");
    mp_M08_AXI_arlock_converter->scalar_in(m_M08_AXI_arlock_converter_signal);
    mp_M08_AXI_arlock_converter->vector_out(M08_AXI_arlock);
    mp_M08_AXI_transactor->ARLOCK(m_M08_AXI_arlock_converter_signal);
    mp_M08_AXI_transactor->ARCACHE(M08_AXI_arcache);
    mp_M08_AXI_transactor->ARPROT(M08_AXI_arprot);
    mp_M08_AXI_transactor->ARQOS(M08_AXI_arqos);
    mp_M08_AXI_transactor->ARVALID(M08_AXI_arvalid);
    mp_M08_AXI_transactor->ARREADY(M08_AXI_arready);
    mp_M08_AXI_transactor->RDATA(M08_AXI_rdata);
    mp_M08_AXI_transactor->RRESP(M08_AXI_rresp);
    mp_M08_AXI_transactor->RLAST(M08_AXI_rlast);
    mp_M08_AXI_transactor->RVALID(M08_AXI_rvalid);
    mp_M08_AXI_transactor->RREADY(M08_AXI_rready);
    mp_M08_AXI_transactor->CLK(aclk);
    mp_M08_AXI_transactor->RST(aresetn);

    // M08_AXI' transactor sockets

    mp_impl->M08_AXI_tlm_aximm_read_socket->bind(*(mp_M08_AXI_transactor->rd_socket));
    mp_impl->M08_AXI_tlm_aximm_write_socket->bind(*(mp_M08_AXI_transactor->wr_socket));
  }
  else
  {
  }

  // configure 'M09_AXI' transactor

  if (xsc::utils::xsc_sim_manager::getInstanceParameterInt("Multi_convo_core_smartconnect_0_0", "M09_AXI_TLM_MODE") != 1)
  {
    // Instantiate Socket Stubs

  // 'M09_AXI' transactor parameters
    xsc::common_cpp::properties M09_AXI_transactor_param_props;
    M09_AXI_transactor_param_props.addLong("DATA_WIDTH", "32");
    M09_AXI_transactor_param_props.addLong("FREQ_HZ", "100000000");
    M09_AXI_transactor_param_props.addLong("ID_WIDTH", "0");
    M09_AXI_transactor_param_props.addLong("ADDR_WIDTH", "12");
    M09_AXI_transactor_param_props.addLong("AWUSER_WIDTH", "0");
    M09_AXI_transactor_param_props.addLong("ARUSER_WIDTH", "0");
    M09_AXI_transactor_param_props.addLong("WUSER_WIDTH", "0");
    M09_AXI_transactor_param_props.addLong("RUSER_WIDTH", "0");
    M09_AXI_transactor_param_props.addLong("BUSER_WIDTH", "0");
    M09_AXI_transactor_param_props.addLong("HAS_BURST", "1");
    M09_AXI_transactor_param_props.addLong("HAS_LOCK", "1");
    M09_AXI_transactor_param_props.addLong("HAS_PROT", "1");
    M09_AXI_transactor_param_props.addLong("HAS_CACHE", "1");
    M09_AXI_transactor_param_props.addLong("HAS_QOS", "1");
    M09_AXI_transactor_param_props.addLong("HAS_REGION", "0");
    M09_AXI_transactor_param_props.addLong("HAS_WSTRB", "1");
    M09_AXI_transactor_param_props.addLong("HAS_BRESP", "1");
    M09_AXI_transactor_param_props.addLong("HAS_RRESP", "1");
    M09_AXI_transactor_param_props.addLong("SUPPORTS_NARROW_BURST", "0");
    M09_AXI_transactor_param_props.addLong("NUM_READ_OUTSTANDING", "2");
    M09_AXI_transactor_param_props.addLong("NUM_WRITE_OUTSTANDING", "2");
    M09_AXI_transactor_param_props.addLong("MAX_BURST_LENGTH", "256");
    M09_AXI_transactor_param_props.addLong("NUM_READ_THREADS", "1");
    M09_AXI_transactor_param_props.addLong("NUM_WRITE_THREADS", "1");
    M09_AXI_transactor_param_props.addLong("RUSER_BITS_PER_BYTE", "0");
    M09_AXI_transactor_param_props.addLong("WUSER_BITS_PER_BYTE", "0");
    M09_AXI_transactor_param_props.addLong("HAS_SIZE", "1");
    M09_AXI_transactor_param_props.addLong("HAS_RESET", "1");
    M09_AXI_transactor_param_props.addFloat("PHASE", "0.0");
    M09_AXI_transactor_param_props.addString("PROTOCOL", "AXI4");
    M09_AXI_transactor_param_props.addString("READ_WRITE_MODE", "READ_WRITE");
    M09_AXI_transactor_param_props.addString("CLK_DOMAIN", "Multi_convo_core_processing_system7_0_0_FCLK_CLK0");

    mp_M09_AXI_transactor = new xtlm::xaximm_xtlm2pin_t<32,12,1,1,1,1,1,1>("M09_AXI_transactor", M09_AXI_transactor_param_props);

    // M09_AXI' transactor ports

    mp_M09_AXI_transactor->AWADDR(M09_AXI_awaddr);
    mp_M09_AXI_transactor->AWLEN(M09_AXI_awlen);
    mp_M09_AXI_transactor->AWSIZE(M09_AXI_awsize);
    mp_M09_AXI_transactor->AWBURST(M09_AXI_awburst);
    mp_M09_AXI_awlock_converter = new xsc::common::scalar2vectorN_converter<1>("M09_AXI_awlock_converter");
    mp_M09_AXI_awlock_converter->scalar_in(m_M09_AXI_awlock_converter_signal);
    mp_M09_AXI_awlock_converter->vector_out(M09_AXI_awlock);
    mp_M09_AXI_transactor->AWLOCK(m_M09_AXI_awlock_converter_signal);
    mp_M09_AXI_transactor->AWCACHE(M09_AXI_awcache);
    mp_M09_AXI_transactor->AWPROT(M09_AXI_awprot);
    mp_M09_AXI_transactor->AWQOS(M09_AXI_awqos);
    mp_M09_AXI_transactor->AWVALID(M09_AXI_awvalid);
    mp_M09_AXI_transactor->AWREADY(M09_AXI_awready);
    mp_M09_AXI_transactor->WDATA(M09_AXI_wdata);
    mp_M09_AXI_transactor->WSTRB(M09_AXI_wstrb);
    mp_M09_AXI_transactor->WLAST(M09_AXI_wlast);
    mp_M09_AXI_transactor->WVALID(M09_AXI_wvalid);
    mp_M09_AXI_transactor->WREADY(M09_AXI_wready);
    mp_M09_AXI_transactor->BRESP(M09_AXI_bresp);
    mp_M09_AXI_transactor->BVALID(M09_AXI_bvalid);
    mp_M09_AXI_transactor->BREADY(M09_AXI_bready);
    mp_M09_AXI_transactor->ARADDR(M09_AXI_araddr);
    mp_M09_AXI_transactor->ARLEN(M09_AXI_arlen);
    mp_M09_AXI_transactor->ARSIZE(M09_AXI_arsize);
    mp_M09_AXI_transactor->ARBURST(M09_AXI_arburst);
    mp_M09_AXI_arlock_converter = new xsc::common::scalar2vectorN_converter<1>("M09_AXI_arlock_converter");
    mp_M09_AXI_arlock_converter->scalar_in(m_M09_AXI_arlock_converter_signal);
    mp_M09_AXI_arlock_converter->vector_out(M09_AXI_arlock);
    mp_M09_AXI_transactor->ARLOCK(m_M09_AXI_arlock_converter_signal);
    mp_M09_AXI_transactor->ARCACHE(M09_AXI_arcache);
    mp_M09_AXI_transactor->ARPROT(M09_AXI_arprot);
    mp_M09_AXI_transactor->ARQOS(M09_AXI_arqos);
    mp_M09_AXI_transactor->ARVALID(M09_AXI_arvalid);
    mp_M09_AXI_transactor->ARREADY(M09_AXI_arready);
    mp_M09_AXI_transactor->RDATA(M09_AXI_rdata);
    mp_M09_AXI_transactor->RRESP(M09_AXI_rresp);
    mp_M09_AXI_transactor->RLAST(M09_AXI_rlast);
    mp_M09_AXI_transactor->RVALID(M09_AXI_rvalid);
    mp_M09_AXI_transactor->RREADY(M09_AXI_rready);
    mp_M09_AXI_transactor->CLK(aclk);
    mp_M09_AXI_transactor->RST(aresetn);

    // M09_AXI' transactor sockets

    mp_impl->M09_AXI_tlm_aximm_read_socket->bind(*(mp_M09_AXI_transactor->rd_socket));
    mp_impl->M09_AXI_tlm_aximm_write_socket->bind(*(mp_M09_AXI_transactor->wr_socket));
  }
  else
  {
  }

  // configure 'M10_AXI' transactor

  if (xsc::utils::xsc_sim_manager::getInstanceParameterInt("Multi_convo_core_smartconnect_0_0", "M10_AXI_TLM_MODE") != 1)
  {
    // Instantiate Socket Stubs

  // 'M10_AXI' transactor parameters
    xsc::common_cpp::properties M10_AXI_transactor_param_props;
    M10_AXI_transactor_param_props.addLong("DATA_WIDTH", "32");
    M10_AXI_transactor_param_props.addLong("FREQ_HZ", "100000000");
    M10_AXI_transactor_param_props.addLong("ID_WIDTH", "0");
    M10_AXI_transactor_param_props.addLong("ADDR_WIDTH", "12");
    M10_AXI_transactor_param_props.addLong("AWUSER_WIDTH", "0");
    M10_AXI_transactor_param_props.addLong("ARUSER_WIDTH", "0");
    M10_AXI_transactor_param_props.addLong("WUSER_WIDTH", "0");
    M10_AXI_transactor_param_props.addLong("RUSER_WIDTH", "0");
    M10_AXI_transactor_param_props.addLong("BUSER_WIDTH", "0");
    M10_AXI_transactor_param_props.addLong("HAS_BURST", "1");
    M10_AXI_transactor_param_props.addLong("HAS_LOCK", "1");
    M10_AXI_transactor_param_props.addLong("HAS_PROT", "1");
    M10_AXI_transactor_param_props.addLong("HAS_CACHE", "1");
    M10_AXI_transactor_param_props.addLong("HAS_QOS", "1");
    M10_AXI_transactor_param_props.addLong("HAS_REGION", "0");
    M10_AXI_transactor_param_props.addLong("HAS_WSTRB", "1");
    M10_AXI_transactor_param_props.addLong("HAS_BRESP", "1");
    M10_AXI_transactor_param_props.addLong("HAS_RRESP", "1");
    M10_AXI_transactor_param_props.addLong("SUPPORTS_NARROW_BURST", "0");
    M10_AXI_transactor_param_props.addLong("NUM_READ_OUTSTANDING", "2");
    M10_AXI_transactor_param_props.addLong("NUM_WRITE_OUTSTANDING", "2");
    M10_AXI_transactor_param_props.addLong("MAX_BURST_LENGTH", "256");
    M10_AXI_transactor_param_props.addLong("NUM_READ_THREADS", "1");
    M10_AXI_transactor_param_props.addLong("NUM_WRITE_THREADS", "1");
    M10_AXI_transactor_param_props.addLong("RUSER_BITS_PER_BYTE", "0");
    M10_AXI_transactor_param_props.addLong("WUSER_BITS_PER_BYTE", "0");
    M10_AXI_transactor_param_props.addLong("HAS_SIZE", "1");
    M10_AXI_transactor_param_props.addLong("HAS_RESET", "1");
    M10_AXI_transactor_param_props.addFloat("PHASE", "0.0");
    M10_AXI_transactor_param_props.addString("PROTOCOL", "AXI4");
    M10_AXI_transactor_param_props.addString("READ_WRITE_MODE", "READ_WRITE");
    M10_AXI_transactor_param_props.addString("CLK_DOMAIN", "Multi_convo_core_processing_system7_0_0_FCLK_CLK0");

    mp_M10_AXI_transactor = new xtlm::xaximm_xtlm2pin_t<32,12,1,1,1,1,1,1>("M10_AXI_transactor", M10_AXI_transactor_param_props);

    // M10_AXI' transactor ports

    mp_M10_AXI_transactor->AWADDR(M10_AXI_awaddr);
    mp_M10_AXI_transactor->AWLEN(M10_AXI_awlen);
    mp_M10_AXI_transactor->AWSIZE(M10_AXI_awsize);
    mp_M10_AXI_transactor->AWBURST(M10_AXI_awburst);
    mp_M10_AXI_awlock_converter = new xsc::common::scalar2vectorN_converter<1>("M10_AXI_awlock_converter");
    mp_M10_AXI_awlock_converter->scalar_in(m_M10_AXI_awlock_converter_signal);
    mp_M10_AXI_awlock_converter->vector_out(M10_AXI_awlock);
    mp_M10_AXI_transactor->AWLOCK(m_M10_AXI_awlock_converter_signal);
    mp_M10_AXI_transactor->AWCACHE(M10_AXI_awcache);
    mp_M10_AXI_transactor->AWPROT(M10_AXI_awprot);
    mp_M10_AXI_transactor->AWQOS(M10_AXI_awqos);
    mp_M10_AXI_transactor->AWVALID(M10_AXI_awvalid);
    mp_M10_AXI_transactor->AWREADY(M10_AXI_awready);
    mp_M10_AXI_transactor->WDATA(M10_AXI_wdata);
    mp_M10_AXI_transactor->WSTRB(M10_AXI_wstrb);
    mp_M10_AXI_transactor->WLAST(M10_AXI_wlast);
    mp_M10_AXI_transactor->WVALID(M10_AXI_wvalid);
    mp_M10_AXI_transactor->WREADY(M10_AXI_wready);
    mp_M10_AXI_transactor->BRESP(M10_AXI_bresp);
    mp_M10_AXI_transactor->BVALID(M10_AXI_bvalid);
    mp_M10_AXI_transactor->BREADY(M10_AXI_bready);
    mp_M10_AXI_transactor->ARADDR(M10_AXI_araddr);
    mp_M10_AXI_transactor->ARLEN(M10_AXI_arlen);
    mp_M10_AXI_transactor->ARSIZE(M10_AXI_arsize);
    mp_M10_AXI_transactor->ARBURST(M10_AXI_arburst);
    mp_M10_AXI_arlock_converter = new xsc::common::scalar2vectorN_converter<1>("M10_AXI_arlock_converter");
    mp_M10_AXI_arlock_converter->scalar_in(m_M10_AXI_arlock_converter_signal);
    mp_M10_AXI_arlock_converter->vector_out(M10_AXI_arlock);
    mp_M10_AXI_transactor->ARLOCK(m_M10_AXI_arlock_converter_signal);
    mp_M10_AXI_transactor->ARCACHE(M10_AXI_arcache);
    mp_M10_AXI_transactor->ARPROT(M10_AXI_arprot);
    mp_M10_AXI_transactor->ARQOS(M10_AXI_arqos);
    mp_M10_AXI_transactor->ARVALID(M10_AXI_arvalid);
    mp_M10_AXI_transactor->ARREADY(M10_AXI_arready);
    mp_M10_AXI_transactor->RDATA(M10_AXI_rdata);
    mp_M10_AXI_transactor->RRESP(M10_AXI_rresp);
    mp_M10_AXI_transactor->RLAST(M10_AXI_rlast);
    mp_M10_AXI_transactor->RVALID(M10_AXI_rvalid);
    mp_M10_AXI_transactor->RREADY(M10_AXI_rready);
    mp_M10_AXI_transactor->CLK(aclk);
    mp_M10_AXI_transactor->RST(aresetn);

    // M10_AXI' transactor sockets

    mp_impl->M10_AXI_tlm_aximm_read_socket->bind(*(mp_M10_AXI_transactor->rd_socket));
    mp_impl->M10_AXI_tlm_aximm_write_socket->bind(*(mp_M10_AXI_transactor->wr_socket));
  }
  else
  {
  }

  // configure 'M11_AXI' transactor

  if (xsc::utils::xsc_sim_manager::getInstanceParameterInt("Multi_convo_core_smartconnect_0_0", "M11_AXI_TLM_MODE") != 1)
  {
    // Instantiate Socket Stubs

  // 'M11_AXI' transactor parameters
    xsc::common_cpp::properties M11_AXI_transactor_param_props;
    M11_AXI_transactor_param_props.addLong("DATA_WIDTH", "32");
    M11_AXI_transactor_param_props.addLong("FREQ_HZ", "100000000");
    M11_AXI_transactor_param_props.addLong("ID_WIDTH", "0");
    M11_AXI_transactor_param_props.addLong("ADDR_WIDTH", "12");
    M11_AXI_transactor_param_props.addLong("AWUSER_WIDTH", "0");
    M11_AXI_transactor_param_props.addLong("ARUSER_WIDTH", "0");
    M11_AXI_transactor_param_props.addLong("WUSER_WIDTH", "0");
    M11_AXI_transactor_param_props.addLong("RUSER_WIDTH", "0");
    M11_AXI_transactor_param_props.addLong("BUSER_WIDTH", "0");
    M11_AXI_transactor_param_props.addLong("HAS_BURST", "1");
    M11_AXI_transactor_param_props.addLong("HAS_LOCK", "1");
    M11_AXI_transactor_param_props.addLong("HAS_PROT", "1");
    M11_AXI_transactor_param_props.addLong("HAS_CACHE", "1");
    M11_AXI_transactor_param_props.addLong("HAS_QOS", "1");
    M11_AXI_transactor_param_props.addLong("HAS_REGION", "0");
    M11_AXI_transactor_param_props.addLong("HAS_WSTRB", "1");
    M11_AXI_transactor_param_props.addLong("HAS_BRESP", "1");
    M11_AXI_transactor_param_props.addLong("HAS_RRESP", "1");
    M11_AXI_transactor_param_props.addLong("SUPPORTS_NARROW_BURST", "0");
    M11_AXI_transactor_param_props.addLong("NUM_READ_OUTSTANDING", "2");
    M11_AXI_transactor_param_props.addLong("NUM_WRITE_OUTSTANDING", "2");
    M11_AXI_transactor_param_props.addLong("MAX_BURST_LENGTH", "256");
    M11_AXI_transactor_param_props.addLong("NUM_READ_THREADS", "1");
    M11_AXI_transactor_param_props.addLong("NUM_WRITE_THREADS", "1");
    M11_AXI_transactor_param_props.addLong("RUSER_BITS_PER_BYTE", "0");
    M11_AXI_transactor_param_props.addLong("WUSER_BITS_PER_BYTE", "0");
    M11_AXI_transactor_param_props.addLong("HAS_SIZE", "1");
    M11_AXI_transactor_param_props.addLong("HAS_RESET", "1");
    M11_AXI_transactor_param_props.addFloat("PHASE", "0.0");
    M11_AXI_transactor_param_props.addString("PROTOCOL", "AXI4");
    M11_AXI_transactor_param_props.addString("READ_WRITE_MODE", "READ_WRITE");
    M11_AXI_transactor_param_props.addString("CLK_DOMAIN", "Multi_convo_core_processing_system7_0_0_FCLK_CLK0");

    mp_M11_AXI_transactor = new xtlm::xaximm_xtlm2pin_t<32,12,1,1,1,1,1,1>("M11_AXI_transactor", M11_AXI_transactor_param_props);

    // M11_AXI' transactor ports

    mp_M11_AXI_transactor->AWADDR(M11_AXI_awaddr);
    mp_M11_AXI_transactor->AWLEN(M11_AXI_awlen);
    mp_M11_AXI_transactor->AWSIZE(M11_AXI_awsize);
    mp_M11_AXI_transactor->AWBURST(M11_AXI_awburst);
    mp_M11_AXI_awlock_converter = new xsc::common::scalar2vectorN_converter<1>("M11_AXI_awlock_converter");
    mp_M11_AXI_awlock_converter->scalar_in(m_M11_AXI_awlock_converter_signal);
    mp_M11_AXI_awlock_converter->vector_out(M11_AXI_awlock);
    mp_M11_AXI_transactor->AWLOCK(m_M11_AXI_awlock_converter_signal);
    mp_M11_AXI_transactor->AWCACHE(M11_AXI_awcache);
    mp_M11_AXI_transactor->AWPROT(M11_AXI_awprot);
    mp_M11_AXI_transactor->AWQOS(M11_AXI_awqos);
    mp_M11_AXI_transactor->AWVALID(M11_AXI_awvalid);
    mp_M11_AXI_transactor->AWREADY(M11_AXI_awready);
    mp_M11_AXI_transactor->WDATA(M11_AXI_wdata);
    mp_M11_AXI_transactor->WSTRB(M11_AXI_wstrb);
    mp_M11_AXI_transactor->WLAST(M11_AXI_wlast);
    mp_M11_AXI_transactor->WVALID(M11_AXI_wvalid);
    mp_M11_AXI_transactor->WREADY(M11_AXI_wready);
    mp_M11_AXI_transactor->BRESP(M11_AXI_bresp);
    mp_M11_AXI_transactor->BVALID(M11_AXI_bvalid);
    mp_M11_AXI_transactor->BREADY(M11_AXI_bready);
    mp_M11_AXI_transactor->ARADDR(M11_AXI_araddr);
    mp_M11_AXI_transactor->ARLEN(M11_AXI_arlen);
    mp_M11_AXI_transactor->ARSIZE(M11_AXI_arsize);
    mp_M11_AXI_transactor->ARBURST(M11_AXI_arburst);
    mp_M11_AXI_arlock_converter = new xsc::common::scalar2vectorN_converter<1>("M11_AXI_arlock_converter");
    mp_M11_AXI_arlock_converter->scalar_in(m_M11_AXI_arlock_converter_signal);
    mp_M11_AXI_arlock_converter->vector_out(M11_AXI_arlock);
    mp_M11_AXI_transactor->ARLOCK(m_M11_AXI_arlock_converter_signal);
    mp_M11_AXI_transactor->ARCACHE(M11_AXI_arcache);
    mp_M11_AXI_transactor->ARPROT(M11_AXI_arprot);
    mp_M11_AXI_transactor->ARQOS(M11_AXI_arqos);
    mp_M11_AXI_transactor->ARVALID(M11_AXI_arvalid);
    mp_M11_AXI_transactor->ARREADY(M11_AXI_arready);
    mp_M11_AXI_transactor->RDATA(M11_AXI_rdata);
    mp_M11_AXI_transactor->RRESP(M11_AXI_rresp);
    mp_M11_AXI_transactor->RLAST(M11_AXI_rlast);
    mp_M11_AXI_transactor->RVALID(M11_AXI_rvalid);
    mp_M11_AXI_transactor->RREADY(M11_AXI_rready);
    mp_M11_AXI_transactor->CLK(aclk);
    mp_M11_AXI_transactor->RST(aresetn);

    // M11_AXI' transactor sockets

    mp_impl->M11_AXI_tlm_aximm_read_socket->bind(*(mp_M11_AXI_transactor->rd_socket));
    mp_impl->M11_AXI_tlm_aximm_write_socket->bind(*(mp_M11_AXI_transactor->wr_socket));
  }
  else
  {
  }

  // configure 'M12_AXI' transactor

  if (xsc::utils::xsc_sim_manager::getInstanceParameterInt("Multi_convo_core_smartconnect_0_0", "M12_AXI_TLM_MODE") != 1)
  {
    // Instantiate Socket Stubs

  // 'M12_AXI' transactor parameters
    xsc::common_cpp::properties M12_AXI_transactor_param_props;
    M12_AXI_transactor_param_props.addLong("DATA_WIDTH", "32");
    M12_AXI_transactor_param_props.addLong("FREQ_HZ", "100000000");
    M12_AXI_transactor_param_props.addLong("ID_WIDTH", "0");
    M12_AXI_transactor_param_props.addLong("ADDR_WIDTH", "12");
    M12_AXI_transactor_param_props.addLong("AWUSER_WIDTH", "0");
    M12_AXI_transactor_param_props.addLong("ARUSER_WIDTH", "0");
    M12_AXI_transactor_param_props.addLong("WUSER_WIDTH", "0");
    M12_AXI_transactor_param_props.addLong("RUSER_WIDTH", "0");
    M12_AXI_transactor_param_props.addLong("BUSER_WIDTH", "0");
    M12_AXI_transactor_param_props.addLong("HAS_BURST", "1");
    M12_AXI_transactor_param_props.addLong("HAS_LOCK", "1");
    M12_AXI_transactor_param_props.addLong("HAS_PROT", "1");
    M12_AXI_transactor_param_props.addLong("HAS_CACHE", "1");
    M12_AXI_transactor_param_props.addLong("HAS_QOS", "1");
    M12_AXI_transactor_param_props.addLong("HAS_REGION", "0");
    M12_AXI_transactor_param_props.addLong("HAS_WSTRB", "1");
    M12_AXI_transactor_param_props.addLong("HAS_BRESP", "1");
    M12_AXI_transactor_param_props.addLong("HAS_RRESP", "1");
    M12_AXI_transactor_param_props.addLong("SUPPORTS_NARROW_BURST", "0");
    M12_AXI_transactor_param_props.addLong("NUM_READ_OUTSTANDING", "2");
    M12_AXI_transactor_param_props.addLong("NUM_WRITE_OUTSTANDING", "2");
    M12_AXI_transactor_param_props.addLong("MAX_BURST_LENGTH", "256");
    M12_AXI_transactor_param_props.addLong("NUM_READ_THREADS", "1");
    M12_AXI_transactor_param_props.addLong("NUM_WRITE_THREADS", "1");
    M12_AXI_transactor_param_props.addLong("RUSER_BITS_PER_BYTE", "0");
    M12_AXI_transactor_param_props.addLong("WUSER_BITS_PER_BYTE", "0");
    M12_AXI_transactor_param_props.addLong("HAS_SIZE", "1");
    M12_AXI_transactor_param_props.addLong("HAS_RESET", "1");
    M12_AXI_transactor_param_props.addFloat("PHASE", "0.0");
    M12_AXI_transactor_param_props.addString("PROTOCOL", "AXI4");
    M12_AXI_transactor_param_props.addString("READ_WRITE_MODE", "READ_WRITE");
    M12_AXI_transactor_param_props.addString("CLK_DOMAIN", "Multi_convo_core_processing_system7_0_0_FCLK_CLK0");

    mp_M12_AXI_transactor = new xtlm::xaximm_xtlm2pin_t<32,12,1,1,1,1,1,1>("M12_AXI_transactor", M12_AXI_transactor_param_props);

    // M12_AXI' transactor ports

    mp_M12_AXI_transactor->AWADDR(M12_AXI_awaddr);
    mp_M12_AXI_transactor->AWLEN(M12_AXI_awlen);
    mp_M12_AXI_transactor->AWSIZE(M12_AXI_awsize);
    mp_M12_AXI_transactor->AWBURST(M12_AXI_awburst);
    mp_M12_AXI_awlock_converter = new xsc::common::scalar2vectorN_converter<1>("M12_AXI_awlock_converter");
    mp_M12_AXI_awlock_converter->scalar_in(m_M12_AXI_awlock_converter_signal);
    mp_M12_AXI_awlock_converter->vector_out(M12_AXI_awlock);
    mp_M12_AXI_transactor->AWLOCK(m_M12_AXI_awlock_converter_signal);
    mp_M12_AXI_transactor->AWCACHE(M12_AXI_awcache);
    mp_M12_AXI_transactor->AWPROT(M12_AXI_awprot);
    mp_M12_AXI_transactor->AWQOS(M12_AXI_awqos);
    mp_M12_AXI_transactor->AWVALID(M12_AXI_awvalid);
    mp_M12_AXI_transactor->AWREADY(M12_AXI_awready);
    mp_M12_AXI_transactor->WDATA(M12_AXI_wdata);
    mp_M12_AXI_transactor->WSTRB(M12_AXI_wstrb);
    mp_M12_AXI_transactor->WLAST(M12_AXI_wlast);
    mp_M12_AXI_transactor->WVALID(M12_AXI_wvalid);
    mp_M12_AXI_transactor->WREADY(M12_AXI_wready);
    mp_M12_AXI_transactor->BRESP(M12_AXI_bresp);
    mp_M12_AXI_transactor->BVALID(M12_AXI_bvalid);
    mp_M12_AXI_transactor->BREADY(M12_AXI_bready);
    mp_M12_AXI_transactor->ARADDR(M12_AXI_araddr);
    mp_M12_AXI_transactor->ARLEN(M12_AXI_arlen);
    mp_M12_AXI_transactor->ARSIZE(M12_AXI_arsize);
    mp_M12_AXI_transactor->ARBURST(M12_AXI_arburst);
    mp_M12_AXI_arlock_converter = new xsc::common::scalar2vectorN_converter<1>("M12_AXI_arlock_converter");
    mp_M12_AXI_arlock_converter->scalar_in(m_M12_AXI_arlock_converter_signal);
    mp_M12_AXI_arlock_converter->vector_out(M12_AXI_arlock);
    mp_M12_AXI_transactor->ARLOCK(m_M12_AXI_arlock_converter_signal);
    mp_M12_AXI_transactor->ARCACHE(M12_AXI_arcache);
    mp_M12_AXI_transactor->ARPROT(M12_AXI_arprot);
    mp_M12_AXI_transactor->ARQOS(M12_AXI_arqos);
    mp_M12_AXI_transactor->ARVALID(M12_AXI_arvalid);
    mp_M12_AXI_transactor->ARREADY(M12_AXI_arready);
    mp_M12_AXI_transactor->RDATA(M12_AXI_rdata);
    mp_M12_AXI_transactor->RRESP(M12_AXI_rresp);
    mp_M12_AXI_transactor->RLAST(M12_AXI_rlast);
    mp_M12_AXI_transactor->RVALID(M12_AXI_rvalid);
    mp_M12_AXI_transactor->RREADY(M12_AXI_rready);
    mp_M12_AXI_transactor->CLK(aclk);
    mp_M12_AXI_transactor->RST(aresetn);

    // M12_AXI' transactor sockets

    mp_impl->M12_AXI_tlm_aximm_read_socket->bind(*(mp_M12_AXI_transactor->rd_socket));
    mp_impl->M12_AXI_tlm_aximm_write_socket->bind(*(mp_M12_AXI_transactor->wr_socket));
  }
  else
  {
  }

  // configure 'M13_AXI' transactor

  if (xsc::utils::xsc_sim_manager::getInstanceParameterInt("Multi_convo_core_smartconnect_0_0", "M13_AXI_TLM_MODE") != 1)
  {
    // Instantiate Socket Stubs

  // 'M13_AXI' transactor parameters
    xsc::common_cpp::properties M13_AXI_transactor_param_props;
    M13_AXI_transactor_param_props.addLong("DATA_WIDTH", "32");
    M13_AXI_transactor_param_props.addLong("FREQ_HZ", "100000000");
    M13_AXI_transactor_param_props.addLong("ID_WIDTH", "0");
    M13_AXI_transactor_param_props.addLong("ADDR_WIDTH", "12");
    M13_AXI_transactor_param_props.addLong("AWUSER_WIDTH", "0");
    M13_AXI_transactor_param_props.addLong("ARUSER_WIDTH", "0");
    M13_AXI_transactor_param_props.addLong("WUSER_WIDTH", "0");
    M13_AXI_transactor_param_props.addLong("RUSER_WIDTH", "0");
    M13_AXI_transactor_param_props.addLong("BUSER_WIDTH", "0");
    M13_AXI_transactor_param_props.addLong("HAS_BURST", "1");
    M13_AXI_transactor_param_props.addLong("HAS_LOCK", "1");
    M13_AXI_transactor_param_props.addLong("HAS_PROT", "1");
    M13_AXI_transactor_param_props.addLong("HAS_CACHE", "1");
    M13_AXI_transactor_param_props.addLong("HAS_QOS", "1");
    M13_AXI_transactor_param_props.addLong("HAS_REGION", "0");
    M13_AXI_transactor_param_props.addLong("HAS_WSTRB", "1");
    M13_AXI_transactor_param_props.addLong("HAS_BRESP", "1");
    M13_AXI_transactor_param_props.addLong("HAS_RRESP", "1");
    M13_AXI_transactor_param_props.addLong("SUPPORTS_NARROW_BURST", "0");
    M13_AXI_transactor_param_props.addLong("NUM_READ_OUTSTANDING", "2");
    M13_AXI_transactor_param_props.addLong("NUM_WRITE_OUTSTANDING", "2");
    M13_AXI_transactor_param_props.addLong("MAX_BURST_LENGTH", "256");
    M13_AXI_transactor_param_props.addLong("NUM_READ_THREADS", "1");
    M13_AXI_transactor_param_props.addLong("NUM_WRITE_THREADS", "1");
    M13_AXI_transactor_param_props.addLong("RUSER_BITS_PER_BYTE", "0");
    M13_AXI_transactor_param_props.addLong("WUSER_BITS_PER_BYTE", "0");
    M13_AXI_transactor_param_props.addLong("HAS_SIZE", "1");
    M13_AXI_transactor_param_props.addLong("HAS_RESET", "1");
    M13_AXI_transactor_param_props.addFloat("PHASE", "0.0");
    M13_AXI_transactor_param_props.addString("PROTOCOL", "AXI4");
    M13_AXI_transactor_param_props.addString("READ_WRITE_MODE", "READ_WRITE");
    M13_AXI_transactor_param_props.addString("CLK_DOMAIN", "Multi_convo_core_processing_system7_0_0_FCLK_CLK0");

    mp_M13_AXI_transactor = new xtlm::xaximm_xtlm2pin_t<32,12,1,1,1,1,1,1>("M13_AXI_transactor", M13_AXI_transactor_param_props);

    // M13_AXI' transactor ports

    mp_M13_AXI_transactor->AWADDR(M13_AXI_awaddr);
    mp_M13_AXI_transactor->AWLEN(M13_AXI_awlen);
    mp_M13_AXI_transactor->AWSIZE(M13_AXI_awsize);
    mp_M13_AXI_transactor->AWBURST(M13_AXI_awburst);
    mp_M13_AXI_awlock_converter = new xsc::common::scalar2vectorN_converter<1>("M13_AXI_awlock_converter");
    mp_M13_AXI_awlock_converter->scalar_in(m_M13_AXI_awlock_converter_signal);
    mp_M13_AXI_awlock_converter->vector_out(M13_AXI_awlock);
    mp_M13_AXI_transactor->AWLOCK(m_M13_AXI_awlock_converter_signal);
    mp_M13_AXI_transactor->AWCACHE(M13_AXI_awcache);
    mp_M13_AXI_transactor->AWPROT(M13_AXI_awprot);
    mp_M13_AXI_transactor->AWQOS(M13_AXI_awqos);
    mp_M13_AXI_transactor->AWVALID(M13_AXI_awvalid);
    mp_M13_AXI_transactor->AWREADY(M13_AXI_awready);
    mp_M13_AXI_transactor->WDATA(M13_AXI_wdata);
    mp_M13_AXI_transactor->WSTRB(M13_AXI_wstrb);
    mp_M13_AXI_transactor->WLAST(M13_AXI_wlast);
    mp_M13_AXI_transactor->WVALID(M13_AXI_wvalid);
    mp_M13_AXI_transactor->WREADY(M13_AXI_wready);
    mp_M13_AXI_transactor->BRESP(M13_AXI_bresp);
    mp_M13_AXI_transactor->BVALID(M13_AXI_bvalid);
    mp_M13_AXI_transactor->BREADY(M13_AXI_bready);
    mp_M13_AXI_transactor->ARADDR(M13_AXI_araddr);
    mp_M13_AXI_transactor->ARLEN(M13_AXI_arlen);
    mp_M13_AXI_transactor->ARSIZE(M13_AXI_arsize);
    mp_M13_AXI_transactor->ARBURST(M13_AXI_arburst);
    mp_M13_AXI_arlock_converter = new xsc::common::scalar2vectorN_converter<1>("M13_AXI_arlock_converter");
    mp_M13_AXI_arlock_converter->scalar_in(m_M13_AXI_arlock_converter_signal);
    mp_M13_AXI_arlock_converter->vector_out(M13_AXI_arlock);
    mp_M13_AXI_transactor->ARLOCK(m_M13_AXI_arlock_converter_signal);
    mp_M13_AXI_transactor->ARCACHE(M13_AXI_arcache);
    mp_M13_AXI_transactor->ARPROT(M13_AXI_arprot);
    mp_M13_AXI_transactor->ARQOS(M13_AXI_arqos);
    mp_M13_AXI_transactor->ARVALID(M13_AXI_arvalid);
    mp_M13_AXI_transactor->ARREADY(M13_AXI_arready);
    mp_M13_AXI_transactor->RDATA(M13_AXI_rdata);
    mp_M13_AXI_transactor->RRESP(M13_AXI_rresp);
    mp_M13_AXI_transactor->RLAST(M13_AXI_rlast);
    mp_M13_AXI_transactor->RVALID(M13_AXI_rvalid);
    mp_M13_AXI_transactor->RREADY(M13_AXI_rready);
    mp_M13_AXI_transactor->CLK(aclk);
    mp_M13_AXI_transactor->RST(aresetn);

    // M13_AXI' transactor sockets

    mp_impl->M13_AXI_tlm_aximm_read_socket->bind(*(mp_M13_AXI_transactor->rd_socket));
    mp_impl->M13_AXI_tlm_aximm_write_socket->bind(*(mp_M13_AXI_transactor->wr_socket));
  }
  else
  {
  }

  // configure 'M14_AXI' transactor

  if (xsc::utils::xsc_sim_manager::getInstanceParameterInt("Multi_convo_core_smartconnect_0_0", "M14_AXI_TLM_MODE") != 1)
  {
    // Instantiate Socket Stubs

  // 'M14_AXI' transactor parameters
    xsc::common_cpp::properties M14_AXI_transactor_param_props;
    M14_AXI_transactor_param_props.addLong("DATA_WIDTH", "32");
    M14_AXI_transactor_param_props.addLong("FREQ_HZ", "100000000");
    M14_AXI_transactor_param_props.addLong("ID_WIDTH", "0");
    M14_AXI_transactor_param_props.addLong("ADDR_WIDTH", "12");
    M14_AXI_transactor_param_props.addLong("AWUSER_WIDTH", "0");
    M14_AXI_transactor_param_props.addLong("ARUSER_WIDTH", "0");
    M14_AXI_transactor_param_props.addLong("WUSER_WIDTH", "0");
    M14_AXI_transactor_param_props.addLong("RUSER_WIDTH", "0");
    M14_AXI_transactor_param_props.addLong("BUSER_WIDTH", "0");
    M14_AXI_transactor_param_props.addLong("HAS_BURST", "1");
    M14_AXI_transactor_param_props.addLong("HAS_LOCK", "1");
    M14_AXI_transactor_param_props.addLong("HAS_PROT", "1");
    M14_AXI_transactor_param_props.addLong("HAS_CACHE", "1");
    M14_AXI_transactor_param_props.addLong("HAS_QOS", "1");
    M14_AXI_transactor_param_props.addLong("HAS_REGION", "0");
    M14_AXI_transactor_param_props.addLong("HAS_WSTRB", "1");
    M14_AXI_transactor_param_props.addLong("HAS_BRESP", "1");
    M14_AXI_transactor_param_props.addLong("HAS_RRESP", "1");
    M14_AXI_transactor_param_props.addLong("SUPPORTS_NARROW_BURST", "0");
    M14_AXI_transactor_param_props.addLong("NUM_READ_OUTSTANDING", "2");
    M14_AXI_transactor_param_props.addLong("NUM_WRITE_OUTSTANDING", "2");
    M14_AXI_transactor_param_props.addLong("MAX_BURST_LENGTH", "256");
    M14_AXI_transactor_param_props.addLong("NUM_READ_THREADS", "1");
    M14_AXI_transactor_param_props.addLong("NUM_WRITE_THREADS", "1");
    M14_AXI_transactor_param_props.addLong("RUSER_BITS_PER_BYTE", "0");
    M14_AXI_transactor_param_props.addLong("WUSER_BITS_PER_BYTE", "0");
    M14_AXI_transactor_param_props.addLong("HAS_SIZE", "1");
    M14_AXI_transactor_param_props.addLong("HAS_RESET", "1");
    M14_AXI_transactor_param_props.addFloat("PHASE", "0.0");
    M14_AXI_transactor_param_props.addString("PROTOCOL", "AXI4");
    M14_AXI_transactor_param_props.addString("READ_WRITE_MODE", "READ_WRITE");
    M14_AXI_transactor_param_props.addString("CLK_DOMAIN", "Multi_convo_core_processing_system7_0_0_FCLK_CLK0");

    mp_M14_AXI_transactor = new xtlm::xaximm_xtlm2pin_t<32,12,1,1,1,1,1,1>("M14_AXI_transactor", M14_AXI_transactor_param_props);

    // M14_AXI' transactor ports

    mp_M14_AXI_transactor->AWADDR(M14_AXI_awaddr);
    mp_M14_AXI_transactor->AWLEN(M14_AXI_awlen);
    mp_M14_AXI_transactor->AWSIZE(M14_AXI_awsize);
    mp_M14_AXI_transactor->AWBURST(M14_AXI_awburst);
    mp_M14_AXI_awlock_converter = new xsc::common::scalar2vectorN_converter<1>("M14_AXI_awlock_converter");
    mp_M14_AXI_awlock_converter->scalar_in(m_M14_AXI_awlock_converter_signal);
    mp_M14_AXI_awlock_converter->vector_out(M14_AXI_awlock);
    mp_M14_AXI_transactor->AWLOCK(m_M14_AXI_awlock_converter_signal);
    mp_M14_AXI_transactor->AWCACHE(M14_AXI_awcache);
    mp_M14_AXI_transactor->AWPROT(M14_AXI_awprot);
    mp_M14_AXI_transactor->AWQOS(M14_AXI_awqos);
    mp_M14_AXI_transactor->AWVALID(M14_AXI_awvalid);
    mp_M14_AXI_transactor->AWREADY(M14_AXI_awready);
    mp_M14_AXI_transactor->WDATA(M14_AXI_wdata);
    mp_M14_AXI_transactor->WSTRB(M14_AXI_wstrb);
    mp_M14_AXI_transactor->WLAST(M14_AXI_wlast);
    mp_M14_AXI_transactor->WVALID(M14_AXI_wvalid);
    mp_M14_AXI_transactor->WREADY(M14_AXI_wready);
    mp_M14_AXI_transactor->BRESP(M14_AXI_bresp);
    mp_M14_AXI_transactor->BVALID(M14_AXI_bvalid);
    mp_M14_AXI_transactor->BREADY(M14_AXI_bready);
    mp_M14_AXI_transactor->ARADDR(M14_AXI_araddr);
    mp_M14_AXI_transactor->ARLEN(M14_AXI_arlen);
    mp_M14_AXI_transactor->ARSIZE(M14_AXI_arsize);
    mp_M14_AXI_transactor->ARBURST(M14_AXI_arburst);
    mp_M14_AXI_arlock_converter = new xsc::common::scalar2vectorN_converter<1>("M14_AXI_arlock_converter");
    mp_M14_AXI_arlock_converter->scalar_in(m_M14_AXI_arlock_converter_signal);
    mp_M14_AXI_arlock_converter->vector_out(M14_AXI_arlock);
    mp_M14_AXI_transactor->ARLOCK(m_M14_AXI_arlock_converter_signal);
    mp_M14_AXI_transactor->ARCACHE(M14_AXI_arcache);
    mp_M14_AXI_transactor->ARPROT(M14_AXI_arprot);
    mp_M14_AXI_transactor->ARQOS(M14_AXI_arqos);
    mp_M14_AXI_transactor->ARVALID(M14_AXI_arvalid);
    mp_M14_AXI_transactor->ARREADY(M14_AXI_arready);
    mp_M14_AXI_transactor->RDATA(M14_AXI_rdata);
    mp_M14_AXI_transactor->RRESP(M14_AXI_rresp);
    mp_M14_AXI_transactor->RLAST(M14_AXI_rlast);
    mp_M14_AXI_transactor->RVALID(M14_AXI_rvalid);
    mp_M14_AXI_transactor->RREADY(M14_AXI_rready);
    mp_M14_AXI_transactor->CLK(aclk);
    mp_M14_AXI_transactor->RST(aresetn);

    // M14_AXI' transactor sockets

    mp_impl->M14_AXI_tlm_aximm_read_socket->bind(*(mp_M14_AXI_transactor->rd_socket));
    mp_impl->M14_AXI_tlm_aximm_write_socket->bind(*(mp_M14_AXI_transactor->wr_socket));
  }
  else
  {
  }

  // configure 'M15_AXI' transactor

  if (xsc::utils::xsc_sim_manager::getInstanceParameterInt("Multi_convo_core_smartconnect_0_0", "M15_AXI_TLM_MODE") != 1)
  {
    // Instantiate Socket Stubs

  // 'M15_AXI' transactor parameters
    xsc::common_cpp::properties M15_AXI_transactor_param_props;
    M15_AXI_transactor_param_props.addLong("DATA_WIDTH", "32");
    M15_AXI_transactor_param_props.addLong("FREQ_HZ", "100000000");
    M15_AXI_transactor_param_props.addLong("ID_WIDTH", "0");
    M15_AXI_transactor_param_props.addLong("ADDR_WIDTH", "12");
    M15_AXI_transactor_param_props.addLong("AWUSER_WIDTH", "0");
    M15_AXI_transactor_param_props.addLong("ARUSER_WIDTH", "0");
    M15_AXI_transactor_param_props.addLong("WUSER_WIDTH", "0");
    M15_AXI_transactor_param_props.addLong("RUSER_WIDTH", "0");
    M15_AXI_transactor_param_props.addLong("BUSER_WIDTH", "0");
    M15_AXI_transactor_param_props.addLong("HAS_BURST", "1");
    M15_AXI_transactor_param_props.addLong("HAS_LOCK", "1");
    M15_AXI_transactor_param_props.addLong("HAS_PROT", "1");
    M15_AXI_transactor_param_props.addLong("HAS_CACHE", "1");
    M15_AXI_transactor_param_props.addLong("HAS_QOS", "1");
    M15_AXI_transactor_param_props.addLong("HAS_REGION", "0");
    M15_AXI_transactor_param_props.addLong("HAS_WSTRB", "1");
    M15_AXI_transactor_param_props.addLong("HAS_BRESP", "1");
    M15_AXI_transactor_param_props.addLong("HAS_RRESP", "1");
    M15_AXI_transactor_param_props.addLong("SUPPORTS_NARROW_BURST", "0");
    M15_AXI_transactor_param_props.addLong("NUM_READ_OUTSTANDING", "2");
    M15_AXI_transactor_param_props.addLong("NUM_WRITE_OUTSTANDING", "2");
    M15_AXI_transactor_param_props.addLong("MAX_BURST_LENGTH", "256");
    M15_AXI_transactor_param_props.addLong("NUM_READ_THREADS", "1");
    M15_AXI_transactor_param_props.addLong("NUM_WRITE_THREADS", "1");
    M15_AXI_transactor_param_props.addLong("RUSER_BITS_PER_BYTE", "0");
    M15_AXI_transactor_param_props.addLong("WUSER_BITS_PER_BYTE", "0");
    M15_AXI_transactor_param_props.addLong("HAS_SIZE", "1");
    M15_AXI_transactor_param_props.addLong("HAS_RESET", "1");
    M15_AXI_transactor_param_props.addFloat("PHASE", "0.0");
    M15_AXI_transactor_param_props.addString("PROTOCOL", "AXI4");
    M15_AXI_transactor_param_props.addString("READ_WRITE_MODE", "READ_WRITE");
    M15_AXI_transactor_param_props.addString("CLK_DOMAIN", "Multi_convo_core_processing_system7_0_0_FCLK_CLK0");

    mp_M15_AXI_transactor = new xtlm::xaximm_xtlm2pin_t<32,12,1,1,1,1,1,1>("M15_AXI_transactor", M15_AXI_transactor_param_props);

    // M15_AXI' transactor ports

    mp_M15_AXI_transactor->AWADDR(M15_AXI_awaddr);
    mp_M15_AXI_transactor->AWLEN(M15_AXI_awlen);
    mp_M15_AXI_transactor->AWSIZE(M15_AXI_awsize);
    mp_M15_AXI_transactor->AWBURST(M15_AXI_awburst);
    mp_M15_AXI_awlock_converter = new xsc::common::scalar2vectorN_converter<1>("M15_AXI_awlock_converter");
    mp_M15_AXI_awlock_converter->scalar_in(m_M15_AXI_awlock_converter_signal);
    mp_M15_AXI_awlock_converter->vector_out(M15_AXI_awlock);
    mp_M15_AXI_transactor->AWLOCK(m_M15_AXI_awlock_converter_signal);
    mp_M15_AXI_transactor->AWCACHE(M15_AXI_awcache);
    mp_M15_AXI_transactor->AWPROT(M15_AXI_awprot);
    mp_M15_AXI_transactor->AWQOS(M15_AXI_awqos);
    mp_M15_AXI_transactor->AWVALID(M15_AXI_awvalid);
    mp_M15_AXI_transactor->AWREADY(M15_AXI_awready);
    mp_M15_AXI_transactor->WDATA(M15_AXI_wdata);
    mp_M15_AXI_transactor->WSTRB(M15_AXI_wstrb);
    mp_M15_AXI_transactor->WLAST(M15_AXI_wlast);
    mp_M15_AXI_transactor->WVALID(M15_AXI_wvalid);
    mp_M15_AXI_transactor->WREADY(M15_AXI_wready);
    mp_M15_AXI_transactor->BRESP(M15_AXI_bresp);
    mp_M15_AXI_transactor->BVALID(M15_AXI_bvalid);
    mp_M15_AXI_transactor->BREADY(M15_AXI_bready);
    mp_M15_AXI_transactor->ARADDR(M15_AXI_araddr);
    mp_M15_AXI_transactor->ARLEN(M15_AXI_arlen);
    mp_M15_AXI_transactor->ARSIZE(M15_AXI_arsize);
    mp_M15_AXI_transactor->ARBURST(M15_AXI_arburst);
    mp_M15_AXI_arlock_converter = new xsc::common::scalar2vectorN_converter<1>("M15_AXI_arlock_converter");
    mp_M15_AXI_arlock_converter->scalar_in(m_M15_AXI_arlock_converter_signal);
    mp_M15_AXI_arlock_converter->vector_out(M15_AXI_arlock);
    mp_M15_AXI_transactor->ARLOCK(m_M15_AXI_arlock_converter_signal);
    mp_M15_AXI_transactor->ARCACHE(M15_AXI_arcache);
    mp_M15_AXI_transactor->ARPROT(M15_AXI_arprot);
    mp_M15_AXI_transactor->ARQOS(M15_AXI_arqos);
    mp_M15_AXI_transactor->ARVALID(M15_AXI_arvalid);
    mp_M15_AXI_transactor->ARREADY(M15_AXI_arready);
    mp_M15_AXI_transactor->RDATA(M15_AXI_rdata);
    mp_M15_AXI_transactor->RRESP(M15_AXI_rresp);
    mp_M15_AXI_transactor->RLAST(M15_AXI_rlast);
    mp_M15_AXI_transactor->RVALID(M15_AXI_rvalid);
    mp_M15_AXI_transactor->RREADY(M15_AXI_rready);
    mp_M15_AXI_transactor->CLK(aclk);
    mp_M15_AXI_transactor->RST(aresetn);

    // M15_AXI' transactor sockets

    mp_impl->M15_AXI_tlm_aximm_read_socket->bind(*(mp_M15_AXI_transactor->rd_socket));
    mp_impl->M15_AXI_tlm_aximm_write_socket->bind(*(mp_M15_AXI_transactor->wr_socket));
  }
  else
  {
  }

  // configure 'M16_AXI' transactor

  if (xsc::utils::xsc_sim_manager::getInstanceParameterInt("Multi_convo_core_smartconnect_0_0", "M16_AXI_TLM_MODE") != 1)
  {
    // Instantiate Socket Stubs

  // 'M16_AXI' transactor parameters
    xsc::common_cpp::properties M16_AXI_transactor_param_props;
    M16_AXI_transactor_param_props.addLong("DATA_WIDTH", "32");
    M16_AXI_transactor_param_props.addLong("FREQ_HZ", "100000000");
    M16_AXI_transactor_param_props.addLong("ID_WIDTH", "0");
    M16_AXI_transactor_param_props.addLong("ADDR_WIDTH", "12");
    M16_AXI_transactor_param_props.addLong("AWUSER_WIDTH", "0");
    M16_AXI_transactor_param_props.addLong("ARUSER_WIDTH", "0");
    M16_AXI_transactor_param_props.addLong("WUSER_WIDTH", "0");
    M16_AXI_transactor_param_props.addLong("RUSER_WIDTH", "0");
    M16_AXI_transactor_param_props.addLong("BUSER_WIDTH", "0");
    M16_AXI_transactor_param_props.addLong("HAS_BURST", "1");
    M16_AXI_transactor_param_props.addLong("HAS_LOCK", "1");
    M16_AXI_transactor_param_props.addLong("HAS_PROT", "1");
    M16_AXI_transactor_param_props.addLong("HAS_CACHE", "1");
    M16_AXI_transactor_param_props.addLong("HAS_QOS", "1");
    M16_AXI_transactor_param_props.addLong("HAS_REGION", "0");
    M16_AXI_transactor_param_props.addLong("HAS_WSTRB", "1");
    M16_AXI_transactor_param_props.addLong("HAS_BRESP", "1");
    M16_AXI_transactor_param_props.addLong("HAS_RRESP", "1");
    M16_AXI_transactor_param_props.addLong("SUPPORTS_NARROW_BURST", "0");
    M16_AXI_transactor_param_props.addLong("NUM_READ_OUTSTANDING", "2");
    M16_AXI_transactor_param_props.addLong("NUM_WRITE_OUTSTANDING", "2");
    M16_AXI_transactor_param_props.addLong("MAX_BURST_LENGTH", "256");
    M16_AXI_transactor_param_props.addLong("NUM_READ_THREADS", "1");
    M16_AXI_transactor_param_props.addLong("NUM_WRITE_THREADS", "1");
    M16_AXI_transactor_param_props.addLong("RUSER_BITS_PER_BYTE", "0");
    M16_AXI_transactor_param_props.addLong("WUSER_BITS_PER_BYTE", "0");
    M16_AXI_transactor_param_props.addLong("HAS_SIZE", "1");
    M16_AXI_transactor_param_props.addLong("HAS_RESET", "1");
    M16_AXI_transactor_param_props.addFloat("PHASE", "0.0");
    M16_AXI_transactor_param_props.addString("PROTOCOL", "AXI4");
    M16_AXI_transactor_param_props.addString("READ_WRITE_MODE", "READ_WRITE");
    M16_AXI_transactor_param_props.addString("CLK_DOMAIN", "Multi_convo_core_processing_system7_0_0_FCLK_CLK0");

    mp_M16_AXI_transactor = new xtlm::xaximm_xtlm2pin_t<32,12,1,1,1,1,1,1>("M16_AXI_transactor", M16_AXI_transactor_param_props);

    // M16_AXI' transactor ports

    mp_M16_AXI_transactor->AWADDR(M16_AXI_awaddr);
    mp_M16_AXI_transactor->AWLEN(M16_AXI_awlen);
    mp_M16_AXI_transactor->AWSIZE(M16_AXI_awsize);
    mp_M16_AXI_transactor->AWBURST(M16_AXI_awburst);
    mp_M16_AXI_awlock_converter = new xsc::common::scalar2vectorN_converter<1>("M16_AXI_awlock_converter");
    mp_M16_AXI_awlock_converter->scalar_in(m_M16_AXI_awlock_converter_signal);
    mp_M16_AXI_awlock_converter->vector_out(M16_AXI_awlock);
    mp_M16_AXI_transactor->AWLOCK(m_M16_AXI_awlock_converter_signal);
    mp_M16_AXI_transactor->AWCACHE(M16_AXI_awcache);
    mp_M16_AXI_transactor->AWPROT(M16_AXI_awprot);
    mp_M16_AXI_transactor->AWQOS(M16_AXI_awqos);
    mp_M16_AXI_transactor->AWVALID(M16_AXI_awvalid);
    mp_M16_AXI_transactor->AWREADY(M16_AXI_awready);
    mp_M16_AXI_transactor->WDATA(M16_AXI_wdata);
    mp_M16_AXI_transactor->WSTRB(M16_AXI_wstrb);
    mp_M16_AXI_transactor->WLAST(M16_AXI_wlast);
    mp_M16_AXI_transactor->WVALID(M16_AXI_wvalid);
    mp_M16_AXI_transactor->WREADY(M16_AXI_wready);
    mp_M16_AXI_transactor->BRESP(M16_AXI_bresp);
    mp_M16_AXI_transactor->BVALID(M16_AXI_bvalid);
    mp_M16_AXI_transactor->BREADY(M16_AXI_bready);
    mp_M16_AXI_transactor->ARADDR(M16_AXI_araddr);
    mp_M16_AXI_transactor->ARLEN(M16_AXI_arlen);
    mp_M16_AXI_transactor->ARSIZE(M16_AXI_arsize);
    mp_M16_AXI_transactor->ARBURST(M16_AXI_arburst);
    mp_M16_AXI_arlock_converter = new xsc::common::scalar2vectorN_converter<1>("M16_AXI_arlock_converter");
    mp_M16_AXI_arlock_converter->scalar_in(m_M16_AXI_arlock_converter_signal);
    mp_M16_AXI_arlock_converter->vector_out(M16_AXI_arlock);
    mp_M16_AXI_transactor->ARLOCK(m_M16_AXI_arlock_converter_signal);
    mp_M16_AXI_transactor->ARCACHE(M16_AXI_arcache);
    mp_M16_AXI_transactor->ARPROT(M16_AXI_arprot);
    mp_M16_AXI_transactor->ARQOS(M16_AXI_arqos);
    mp_M16_AXI_transactor->ARVALID(M16_AXI_arvalid);
    mp_M16_AXI_transactor->ARREADY(M16_AXI_arready);
    mp_M16_AXI_transactor->RDATA(M16_AXI_rdata);
    mp_M16_AXI_transactor->RRESP(M16_AXI_rresp);
    mp_M16_AXI_transactor->RLAST(M16_AXI_rlast);
    mp_M16_AXI_transactor->RVALID(M16_AXI_rvalid);
    mp_M16_AXI_transactor->RREADY(M16_AXI_rready);
    mp_M16_AXI_transactor->CLK(aclk);
    mp_M16_AXI_transactor->RST(aresetn);

    // M16_AXI' transactor sockets

    mp_impl->M16_AXI_tlm_aximm_read_socket->bind(*(mp_M16_AXI_transactor->rd_socket));
    mp_impl->M16_AXI_tlm_aximm_write_socket->bind(*(mp_M16_AXI_transactor->wr_socket));
  }
  else
  {
  }

  // configure 'M17_AXI' transactor

  if (xsc::utils::xsc_sim_manager::getInstanceParameterInt("Multi_convo_core_smartconnect_0_0", "M17_AXI_TLM_MODE") != 1)
  {
    // Instantiate Socket Stubs

  // 'M17_AXI' transactor parameters
    xsc::common_cpp::properties M17_AXI_transactor_param_props;
    M17_AXI_transactor_param_props.addLong("DATA_WIDTH", "32");
    M17_AXI_transactor_param_props.addLong("FREQ_HZ", "100000000");
    M17_AXI_transactor_param_props.addLong("ID_WIDTH", "0");
    M17_AXI_transactor_param_props.addLong("ADDR_WIDTH", "12");
    M17_AXI_transactor_param_props.addLong("AWUSER_WIDTH", "0");
    M17_AXI_transactor_param_props.addLong("ARUSER_WIDTH", "0");
    M17_AXI_transactor_param_props.addLong("WUSER_WIDTH", "0");
    M17_AXI_transactor_param_props.addLong("RUSER_WIDTH", "0");
    M17_AXI_transactor_param_props.addLong("BUSER_WIDTH", "0");
    M17_AXI_transactor_param_props.addLong("HAS_BURST", "1");
    M17_AXI_transactor_param_props.addLong("HAS_LOCK", "1");
    M17_AXI_transactor_param_props.addLong("HAS_PROT", "1");
    M17_AXI_transactor_param_props.addLong("HAS_CACHE", "1");
    M17_AXI_transactor_param_props.addLong("HAS_QOS", "1");
    M17_AXI_transactor_param_props.addLong("HAS_REGION", "0");
    M17_AXI_transactor_param_props.addLong("HAS_WSTRB", "1");
    M17_AXI_transactor_param_props.addLong("HAS_BRESP", "1");
    M17_AXI_transactor_param_props.addLong("HAS_RRESP", "1");
    M17_AXI_transactor_param_props.addLong("SUPPORTS_NARROW_BURST", "0");
    M17_AXI_transactor_param_props.addLong("NUM_READ_OUTSTANDING", "2");
    M17_AXI_transactor_param_props.addLong("NUM_WRITE_OUTSTANDING", "2");
    M17_AXI_transactor_param_props.addLong("MAX_BURST_LENGTH", "256");
    M17_AXI_transactor_param_props.addLong("NUM_READ_THREADS", "1");
    M17_AXI_transactor_param_props.addLong("NUM_WRITE_THREADS", "1");
    M17_AXI_transactor_param_props.addLong("RUSER_BITS_PER_BYTE", "0");
    M17_AXI_transactor_param_props.addLong("WUSER_BITS_PER_BYTE", "0");
    M17_AXI_transactor_param_props.addLong("HAS_SIZE", "1");
    M17_AXI_transactor_param_props.addLong("HAS_RESET", "1");
    M17_AXI_transactor_param_props.addFloat("PHASE", "0.0");
    M17_AXI_transactor_param_props.addString("PROTOCOL", "AXI4");
    M17_AXI_transactor_param_props.addString("READ_WRITE_MODE", "READ_WRITE");
    M17_AXI_transactor_param_props.addString("CLK_DOMAIN", "Multi_convo_core_processing_system7_0_0_FCLK_CLK0");

    mp_M17_AXI_transactor = new xtlm::xaximm_xtlm2pin_t<32,12,1,1,1,1,1,1>("M17_AXI_transactor", M17_AXI_transactor_param_props);

    // M17_AXI' transactor ports

    mp_M17_AXI_transactor->AWADDR(M17_AXI_awaddr);
    mp_M17_AXI_transactor->AWLEN(M17_AXI_awlen);
    mp_M17_AXI_transactor->AWSIZE(M17_AXI_awsize);
    mp_M17_AXI_transactor->AWBURST(M17_AXI_awburst);
    mp_M17_AXI_awlock_converter = new xsc::common::scalar2vectorN_converter<1>("M17_AXI_awlock_converter");
    mp_M17_AXI_awlock_converter->scalar_in(m_M17_AXI_awlock_converter_signal);
    mp_M17_AXI_awlock_converter->vector_out(M17_AXI_awlock);
    mp_M17_AXI_transactor->AWLOCK(m_M17_AXI_awlock_converter_signal);
    mp_M17_AXI_transactor->AWCACHE(M17_AXI_awcache);
    mp_M17_AXI_transactor->AWPROT(M17_AXI_awprot);
    mp_M17_AXI_transactor->AWQOS(M17_AXI_awqos);
    mp_M17_AXI_transactor->AWVALID(M17_AXI_awvalid);
    mp_M17_AXI_transactor->AWREADY(M17_AXI_awready);
    mp_M17_AXI_transactor->WDATA(M17_AXI_wdata);
    mp_M17_AXI_transactor->WSTRB(M17_AXI_wstrb);
    mp_M17_AXI_transactor->WLAST(M17_AXI_wlast);
    mp_M17_AXI_transactor->WVALID(M17_AXI_wvalid);
    mp_M17_AXI_transactor->WREADY(M17_AXI_wready);
    mp_M17_AXI_transactor->BRESP(M17_AXI_bresp);
    mp_M17_AXI_transactor->BVALID(M17_AXI_bvalid);
    mp_M17_AXI_transactor->BREADY(M17_AXI_bready);
    mp_M17_AXI_transactor->ARADDR(M17_AXI_araddr);
    mp_M17_AXI_transactor->ARLEN(M17_AXI_arlen);
    mp_M17_AXI_transactor->ARSIZE(M17_AXI_arsize);
    mp_M17_AXI_transactor->ARBURST(M17_AXI_arburst);
    mp_M17_AXI_arlock_converter = new xsc::common::scalar2vectorN_converter<1>("M17_AXI_arlock_converter");
    mp_M17_AXI_arlock_converter->scalar_in(m_M17_AXI_arlock_converter_signal);
    mp_M17_AXI_arlock_converter->vector_out(M17_AXI_arlock);
    mp_M17_AXI_transactor->ARLOCK(m_M17_AXI_arlock_converter_signal);
    mp_M17_AXI_transactor->ARCACHE(M17_AXI_arcache);
    mp_M17_AXI_transactor->ARPROT(M17_AXI_arprot);
    mp_M17_AXI_transactor->ARQOS(M17_AXI_arqos);
    mp_M17_AXI_transactor->ARVALID(M17_AXI_arvalid);
    mp_M17_AXI_transactor->ARREADY(M17_AXI_arready);
    mp_M17_AXI_transactor->RDATA(M17_AXI_rdata);
    mp_M17_AXI_transactor->RRESP(M17_AXI_rresp);
    mp_M17_AXI_transactor->RLAST(M17_AXI_rlast);
    mp_M17_AXI_transactor->RVALID(M17_AXI_rvalid);
    mp_M17_AXI_transactor->RREADY(M17_AXI_rready);
    mp_M17_AXI_transactor->CLK(aclk);
    mp_M17_AXI_transactor->RST(aresetn);

    // M17_AXI' transactor sockets

    mp_impl->M17_AXI_tlm_aximm_read_socket->bind(*(mp_M17_AXI_transactor->rd_socket));
    mp_impl->M17_AXI_tlm_aximm_write_socket->bind(*(mp_M17_AXI_transactor->wr_socket));
  }
  else
  {
  }

  // configure 'M18_AXI' transactor

  if (xsc::utils::xsc_sim_manager::getInstanceParameterInt("Multi_convo_core_smartconnect_0_0", "M18_AXI_TLM_MODE") != 1)
  {
    // Instantiate Socket Stubs

  // 'M18_AXI' transactor parameters
    xsc::common_cpp::properties M18_AXI_transactor_param_props;
    M18_AXI_transactor_param_props.addLong("DATA_WIDTH", "32");
    M18_AXI_transactor_param_props.addLong("FREQ_HZ", "100000000");
    M18_AXI_transactor_param_props.addLong("ID_WIDTH", "0");
    M18_AXI_transactor_param_props.addLong("ADDR_WIDTH", "12");
    M18_AXI_transactor_param_props.addLong("AWUSER_WIDTH", "0");
    M18_AXI_transactor_param_props.addLong("ARUSER_WIDTH", "0");
    M18_AXI_transactor_param_props.addLong("WUSER_WIDTH", "0");
    M18_AXI_transactor_param_props.addLong("RUSER_WIDTH", "0");
    M18_AXI_transactor_param_props.addLong("BUSER_WIDTH", "0");
    M18_AXI_transactor_param_props.addLong("HAS_BURST", "1");
    M18_AXI_transactor_param_props.addLong("HAS_LOCK", "1");
    M18_AXI_transactor_param_props.addLong("HAS_PROT", "1");
    M18_AXI_transactor_param_props.addLong("HAS_CACHE", "1");
    M18_AXI_transactor_param_props.addLong("HAS_QOS", "1");
    M18_AXI_transactor_param_props.addLong("HAS_REGION", "0");
    M18_AXI_transactor_param_props.addLong("HAS_WSTRB", "1");
    M18_AXI_transactor_param_props.addLong("HAS_BRESP", "1");
    M18_AXI_transactor_param_props.addLong("HAS_RRESP", "1");
    M18_AXI_transactor_param_props.addLong("SUPPORTS_NARROW_BURST", "0");
    M18_AXI_transactor_param_props.addLong("NUM_READ_OUTSTANDING", "2");
    M18_AXI_transactor_param_props.addLong("NUM_WRITE_OUTSTANDING", "2");
    M18_AXI_transactor_param_props.addLong("MAX_BURST_LENGTH", "256");
    M18_AXI_transactor_param_props.addLong("NUM_READ_THREADS", "1");
    M18_AXI_transactor_param_props.addLong("NUM_WRITE_THREADS", "1");
    M18_AXI_transactor_param_props.addLong("RUSER_BITS_PER_BYTE", "0");
    M18_AXI_transactor_param_props.addLong("WUSER_BITS_PER_BYTE", "0");
    M18_AXI_transactor_param_props.addLong("HAS_SIZE", "1");
    M18_AXI_transactor_param_props.addLong("HAS_RESET", "1");
    M18_AXI_transactor_param_props.addFloat("PHASE", "0.0");
    M18_AXI_transactor_param_props.addString("PROTOCOL", "AXI4");
    M18_AXI_transactor_param_props.addString("READ_WRITE_MODE", "READ_WRITE");
    M18_AXI_transactor_param_props.addString("CLK_DOMAIN", "Multi_convo_core_processing_system7_0_0_FCLK_CLK0");

    mp_M18_AXI_transactor = new xtlm::xaximm_xtlm2pin_t<32,12,1,1,1,1,1,1>("M18_AXI_transactor", M18_AXI_transactor_param_props);

    // M18_AXI' transactor ports

    mp_M18_AXI_transactor->AWADDR(M18_AXI_awaddr);
    mp_M18_AXI_transactor->AWLEN(M18_AXI_awlen);
    mp_M18_AXI_transactor->AWSIZE(M18_AXI_awsize);
    mp_M18_AXI_transactor->AWBURST(M18_AXI_awburst);
    mp_M18_AXI_awlock_converter = new xsc::common::scalar2vectorN_converter<1>("M18_AXI_awlock_converter");
    mp_M18_AXI_awlock_converter->scalar_in(m_M18_AXI_awlock_converter_signal);
    mp_M18_AXI_awlock_converter->vector_out(M18_AXI_awlock);
    mp_M18_AXI_transactor->AWLOCK(m_M18_AXI_awlock_converter_signal);
    mp_M18_AXI_transactor->AWCACHE(M18_AXI_awcache);
    mp_M18_AXI_transactor->AWPROT(M18_AXI_awprot);
    mp_M18_AXI_transactor->AWQOS(M18_AXI_awqos);
    mp_M18_AXI_transactor->AWVALID(M18_AXI_awvalid);
    mp_M18_AXI_transactor->AWREADY(M18_AXI_awready);
    mp_M18_AXI_transactor->WDATA(M18_AXI_wdata);
    mp_M18_AXI_transactor->WSTRB(M18_AXI_wstrb);
    mp_M18_AXI_transactor->WLAST(M18_AXI_wlast);
    mp_M18_AXI_transactor->WVALID(M18_AXI_wvalid);
    mp_M18_AXI_transactor->WREADY(M18_AXI_wready);
    mp_M18_AXI_transactor->BRESP(M18_AXI_bresp);
    mp_M18_AXI_transactor->BVALID(M18_AXI_bvalid);
    mp_M18_AXI_transactor->BREADY(M18_AXI_bready);
    mp_M18_AXI_transactor->ARADDR(M18_AXI_araddr);
    mp_M18_AXI_transactor->ARLEN(M18_AXI_arlen);
    mp_M18_AXI_transactor->ARSIZE(M18_AXI_arsize);
    mp_M18_AXI_transactor->ARBURST(M18_AXI_arburst);
    mp_M18_AXI_arlock_converter = new xsc::common::scalar2vectorN_converter<1>("M18_AXI_arlock_converter");
    mp_M18_AXI_arlock_converter->scalar_in(m_M18_AXI_arlock_converter_signal);
    mp_M18_AXI_arlock_converter->vector_out(M18_AXI_arlock);
    mp_M18_AXI_transactor->ARLOCK(m_M18_AXI_arlock_converter_signal);
    mp_M18_AXI_transactor->ARCACHE(M18_AXI_arcache);
    mp_M18_AXI_transactor->ARPROT(M18_AXI_arprot);
    mp_M18_AXI_transactor->ARQOS(M18_AXI_arqos);
    mp_M18_AXI_transactor->ARVALID(M18_AXI_arvalid);
    mp_M18_AXI_transactor->ARREADY(M18_AXI_arready);
    mp_M18_AXI_transactor->RDATA(M18_AXI_rdata);
    mp_M18_AXI_transactor->RRESP(M18_AXI_rresp);
    mp_M18_AXI_transactor->RLAST(M18_AXI_rlast);
    mp_M18_AXI_transactor->RVALID(M18_AXI_rvalid);
    mp_M18_AXI_transactor->RREADY(M18_AXI_rready);
    mp_M18_AXI_transactor->CLK(aclk);
    mp_M18_AXI_transactor->RST(aresetn);

    // M18_AXI' transactor sockets

    mp_impl->M18_AXI_tlm_aximm_read_socket->bind(*(mp_M18_AXI_transactor->rd_socket));
    mp_impl->M18_AXI_tlm_aximm_write_socket->bind(*(mp_M18_AXI_transactor->wr_socket));
  }
  else
  {
  }

  // configure 'M19_AXI' transactor

  if (xsc::utils::xsc_sim_manager::getInstanceParameterInt("Multi_convo_core_smartconnect_0_0", "M19_AXI_TLM_MODE") != 1)
  {
    // Instantiate Socket Stubs

  // 'M19_AXI' transactor parameters
    xsc::common_cpp::properties M19_AXI_transactor_param_props;
    M19_AXI_transactor_param_props.addLong("DATA_WIDTH", "32");
    M19_AXI_transactor_param_props.addLong("FREQ_HZ", "100000000");
    M19_AXI_transactor_param_props.addLong("ID_WIDTH", "0");
    M19_AXI_transactor_param_props.addLong("ADDR_WIDTH", "12");
    M19_AXI_transactor_param_props.addLong("AWUSER_WIDTH", "0");
    M19_AXI_transactor_param_props.addLong("ARUSER_WIDTH", "0");
    M19_AXI_transactor_param_props.addLong("WUSER_WIDTH", "0");
    M19_AXI_transactor_param_props.addLong("RUSER_WIDTH", "0");
    M19_AXI_transactor_param_props.addLong("BUSER_WIDTH", "0");
    M19_AXI_transactor_param_props.addLong("HAS_BURST", "1");
    M19_AXI_transactor_param_props.addLong("HAS_LOCK", "1");
    M19_AXI_transactor_param_props.addLong("HAS_PROT", "1");
    M19_AXI_transactor_param_props.addLong("HAS_CACHE", "1");
    M19_AXI_transactor_param_props.addLong("HAS_QOS", "1");
    M19_AXI_transactor_param_props.addLong("HAS_REGION", "0");
    M19_AXI_transactor_param_props.addLong("HAS_WSTRB", "1");
    M19_AXI_transactor_param_props.addLong("HAS_BRESP", "1");
    M19_AXI_transactor_param_props.addLong("HAS_RRESP", "1");
    M19_AXI_transactor_param_props.addLong("SUPPORTS_NARROW_BURST", "0");
    M19_AXI_transactor_param_props.addLong("NUM_READ_OUTSTANDING", "2");
    M19_AXI_transactor_param_props.addLong("NUM_WRITE_OUTSTANDING", "2");
    M19_AXI_transactor_param_props.addLong("MAX_BURST_LENGTH", "256");
    M19_AXI_transactor_param_props.addLong("NUM_READ_THREADS", "1");
    M19_AXI_transactor_param_props.addLong("NUM_WRITE_THREADS", "1");
    M19_AXI_transactor_param_props.addLong("RUSER_BITS_PER_BYTE", "0");
    M19_AXI_transactor_param_props.addLong("WUSER_BITS_PER_BYTE", "0");
    M19_AXI_transactor_param_props.addLong("HAS_SIZE", "1");
    M19_AXI_transactor_param_props.addLong("HAS_RESET", "1");
    M19_AXI_transactor_param_props.addFloat("PHASE", "0.0");
    M19_AXI_transactor_param_props.addString("PROTOCOL", "AXI4");
    M19_AXI_transactor_param_props.addString("READ_WRITE_MODE", "READ_WRITE");
    M19_AXI_transactor_param_props.addString("CLK_DOMAIN", "Multi_convo_core_processing_system7_0_0_FCLK_CLK0");

    mp_M19_AXI_transactor = new xtlm::xaximm_xtlm2pin_t<32,12,1,1,1,1,1,1>("M19_AXI_transactor", M19_AXI_transactor_param_props);

    // M19_AXI' transactor ports

    mp_M19_AXI_transactor->AWADDR(M19_AXI_awaddr);
    mp_M19_AXI_transactor->AWLEN(M19_AXI_awlen);
    mp_M19_AXI_transactor->AWSIZE(M19_AXI_awsize);
    mp_M19_AXI_transactor->AWBURST(M19_AXI_awburst);
    mp_M19_AXI_awlock_converter = new xsc::common::scalar2vectorN_converter<1>("M19_AXI_awlock_converter");
    mp_M19_AXI_awlock_converter->scalar_in(m_M19_AXI_awlock_converter_signal);
    mp_M19_AXI_awlock_converter->vector_out(M19_AXI_awlock);
    mp_M19_AXI_transactor->AWLOCK(m_M19_AXI_awlock_converter_signal);
    mp_M19_AXI_transactor->AWCACHE(M19_AXI_awcache);
    mp_M19_AXI_transactor->AWPROT(M19_AXI_awprot);
    mp_M19_AXI_transactor->AWQOS(M19_AXI_awqos);
    mp_M19_AXI_transactor->AWVALID(M19_AXI_awvalid);
    mp_M19_AXI_transactor->AWREADY(M19_AXI_awready);
    mp_M19_AXI_transactor->WDATA(M19_AXI_wdata);
    mp_M19_AXI_transactor->WSTRB(M19_AXI_wstrb);
    mp_M19_AXI_transactor->WLAST(M19_AXI_wlast);
    mp_M19_AXI_transactor->WVALID(M19_AXI_wvalid);
    mp_M19_AXI_transactor->WREADY(M19_AXI_wready);
    mp_M19_AXI_transactor->BRESP(M19_AXI_bresp);
    mp_M19_AXI_transactor->BVALID(M19_AXI_bvalid);
    mp_M19_AXI_transactor->BREADY(M19_AXI_bready);
    mp_M19_AXI_transactor->ARADDR(M19_AXI_araddr);
    mp_M19_AXI_transactor->ARLEN(M19_AXI_arlen);
    mp_M19_AXI_transactor->ARSIZE(M19_AXI_arsize);
    mp_M19_AXI_transactor->ARBURST(M19_AXI_arburst);
    mp_M19_AXI_arlock_converter = new xsc::common::scalar2vectorN_converter<1>("M19_AXI_arlock_converter");
    mp_M19_AXI_arlock_converter->scalar_in(m_M19_AXI_arlock_converter_signal);
    mp_M19_AXI_arlock_converter->vector_out(M19_AXI_arlock);
    mp_M19_AXI_transactor->ARLOCK(m_M19_AXI_arlock_converter_signal);
    mp_M19_AXI_transactor->ARCACHE(M19_AXI_arcache);
    mp_M19_AXI_transactor->ARPROT(M19_AXI_arprot);
    mp_M19_AXI_transactor->ARQOS(M19_AXI_arqos);
    mp_M19_AXI_transactor->ARVALID(M19_AXI_arvalid);
    mp_M19_AXI_transactor->ARREADY(M19_AXI_arready);
    mp_M19_AXI_transactor->RDATA(M19_AXI_rdata);
    mp_M19_AXI_transactor->RRESP(M19_AXI_rresp);
    mp_M19_AXI_transactor->RLAST(M19_AXI_rlast);
    mp_M19_AXI_transactor->RVALID(M19_AXI_rvalid);
    mp_M19_AXI_transactor->RREADY(M19_AXI_rready);
    mp_M19_AXI_transactor->CLK(aclk);
    mp_M19_AXI_transactor->RST(aresetn);

    // M19_AXI' transactor sockets

    mp_impl->M19_AXI_tlm_aximm_read_socket->bind(*(mp_M19_AXI_transactor->rd_socket));
    mp_impl->M19_AXI_tlm_aximm_write_socket->bind(*(mp_M19_AXI_transactor->wr_socket));
  }
  else
  {
  }

  // configure 'M20_AXI' transactor

  if (xsc::utils::xsc_sim_manager::getInstanceParameterInt("Multi_convo_core_smartconnect_0_0", "M20_AXI_TLM_MODE") != 1)
  {
    // Instantiate Socket Stubs

  // 'M20_AXI' transactor parameters
    xsc::common_cpp::properties M20_AXI_transactor_param_props;
    M20_AXI_transactor_param_props.addLong("DATA_WIDTH", "32");
    M20_AXI_transactor_param_props.addLong("FREQ_HZ", "100000000");
    M20_AXI_transactor_param_props.addLong("ID_WIDTH", "0");
    M20_AXI_transactor_param_props.addLong("ADDR_WIDTH", "12");
    M20_AXI_transactor_param_props.addLong("AWUSER_WIDTH", "0");
    M20_AXI_transactor_param_props.addLong("ARUSER_WIDTH", "0");
    M20_AXI_transactor_param_props.addLong("WUSER_WIDTH", "0");
    M20_AXI_transactor_param_props.addLong("RUSER_WIDTH", "0");
    M20_AXI_transactor_param_props.addLong("BUSER_WIDTH", "0");
    M20_AXI_transactor_param_props.addLong("HAS_BURST", "1");
    M20_AXI_transactor_param_props.addLong("HAS_LOCK", "1");
    M20_AXI_transactor_param_props.addLong("HAS_PROT", "1");
    M20_AXI_transactor_param_props.addLong("HAS_CACHE", "1");
    M20_AXI_transactor_param_props.addLong("HAS_QOS", "1");
    M20_AXI_transactor_param_props.addLong("HAS_REGION", "0");
    M20_AXI_transactor_param_props.addLong("HAS_WSTRB", "1");
    M20_AXI_transactor_param_props.addLong("HAS_BRESP", "1");
    M20_AXI_transactor_param_props.addLong("HAS_RRESP", "1");
    M20_AXI_transactor_param_props.addLong("SUPPORTS_NARROW_BURST", "0");
    M20_AXI_transactor_param_props.addLong("NUM_READ_OUTSTANDING", "2");
    M20_AXI_transactor_param_props.addLong("NUM_WRITE_OUTSTANDING", "2");
    M20_AXI_transactor_param_props.addLong("MAX_BURST_LENGTH", "256");
    M20_AXI_transactor_param_props.addLong("NUM_READ_THREADS", "1");
    M20_AXI_transactor_param_props.addLong("NUM_WRITE_THREADS", "1");
    M20_AXI_transactor_param_props.addLong("RUSER_BITS_PER_BYTE", "0");
    M20_AXI_transactor_param_props.addLong("WUSER_BITS_PER_BYTE", "0");
    M20_AXI_transactor_param_props.addLong("HAS_SIZE", "1");
    M20_AXI_transactor_param_props.addLong("HAS_RESET", "1");
    M20_AXI_transactor_param_props.addFloat("PHASE", "0.0");
    M20_AXI_transactor_param_props.addString("PROTOCOL", "AXI4");
    M20_AXI_transactor_param_props.addString("READ_WRITE_MODE", "READ_WRITE");
    M20_AXI_transactor_param_props.addString("CLK_DOMAIN", "Multi_convo_core_processing_system7_0_0_FCLK_CLK0");

    mp_M20_AXI_transactor = new xtlm::xaximm_xtlm2pin_t<32,12,1,1,1,1,1,1>("M20_AXI_transactor", M20_AXI_transactor_param_props);

    // M20_AXI' transactor ports

    mp_M20_AXI_transactor->AWADDR(M20_AXI_awaddr);
    mp_M20_AXI_transactor->AWLEN(M20_AXI_awlen);
    mp_M20_AXI_transactor->AWSIZE(M20_AXI_awsize);
    mp_M20_AXI_transactor->AWBURST(M20_AXI_awburst);
    mp_M20_AXI_awlock_converter = new xsc::common::scalar2vectorN_converter<1>("M20_AXI_awlock_converter");
    mp_M20_AXI_awlock_converter->scalar_in(m_M20_AXI_awlock_converter_signal);
    mp_M20_AXI_awlock_converter->vector_out(M20_AXI_awlock);
    mp_M20_AXI_transactor->AWLOCK(m_M20_AXI_awlock_converter_signal);
    mp_M20_AXI_transactor->AWCACHE(M20_AXI_awcache);
    mp_M20_AXI_transactor->AWPROT(M20_AXI_awprot);
    mp_M20_AXI_transactor->AWQOS(M20_AXI_awqos);
    mp_M20_AXI_transactor->AWVALID(M20_AXI_awvalid);
    mp_M20_AXI_transactor->AWREADY(M20_AXI_awready);
    mp_M20_AXI_transactor->WDATA(M20_AXI_wdata);
    mp_M20_AXI_transactor->WSTRB(M20_AXI_wstrb);
    mp_M20_AXI_transactor->WLAST(M20_AXI_wlast);
    mp_M20_AXI_transactor->WVALID(M20_AXI_wvalid);
    mp_M20_AXI_transactor->WREADY(M20_AXI_wready);
    mp_M20_AXI_transactor->BRESP(M20_AXI_bresp);
    mp_M20_AXI_transactor->BVALID(M20_AXI_bvalid);
    mp_M20_AXI_transactor->BREADY(M20_AXI_bready);
    mp_M20_AXI_transactor->ARADDR(M20_AXI_araddr);
    mp_M20_AXI_transactor->ARLEN(M20_AXI_arlen);
    mp_M20_AXI_transactor->ARSIZE(M20_AXI_arsize);
    mp_M20_AXI_transactor->ARBURST(M20_AXI_arburst);
    mp_M20_AXI_arlock_converter = new xsc::common::scalar2vectorN_converter<1>("M20_AXI_arlock_converter");
    mp_M20_AXI_arlock_converter->scalar_in(m_M20_AXI_arlock_converter_signal);
    mp_M20_AXI_arlock_converter->vector_out(M20_AXI_arlock);
    mp_M20_AXI_transactor->ARLOCK(m_M20_AXI_arlock_converter_signal);
    mp_M20_AXI_transactor->ARCACHE(M20_AXI_arcache);
    mp_M20_AXI_transactor->ARPROT(M20_AXI_arprot);
    mp_M20_AXI_transactor->ARQOS(M20_AXI_arqos);
    mp_M20_AXI_transactor->ARVALID(M20_AXI_arvalid);
    mp_M20_AXI_transactor->ARREADY(M20_AXI_arready);
    mp_M20_AXI_transactor->RDATA(M20_AXI_rdata);
    mp_M20_AXI_transactor->RRESP(M20_AXI_rresp);
    mp_M20_AXI_transactor->RLAST(M20_AXI_rlast);
    mp_M20_AXI_transactor->RVALID(M20_AXI_rvalid);
    mp_M20_AXI_transactor->RREADY(M20_AXI_rready);
    mp_M20_AXI_transactor->CLK(aclk);
    mp_M20_AXI_transactor->RST(aresetn);

    // M20_AXI' transactor sockets

    mp_impl->M20_AXI_tlm_aximm_read_socket->bind(*(mp_M20_AXI_transactor->rd_socket));
    mp_impl->M20_AXI_tlm_aximm_write_socket->bind(*(mp_M20_AXI_transactor->wr_socket));
  }
  else
  {
  }

  // configure 'M21_AXI' transactor

  if (xsc::utils::xsc_sim_manager::getInstanceParameterInt("Multi_convo_core_smartconnect_0_0", "M21_AXI_TLM_MODE") != 1)
  {
    // Instantiate Socket Stubs

  // 'M21_AXI' transactor parameters
    xsc::common_cpp::properties M21_AXI_transactor_param_props;
    M21_AXI_transactor_param_props.addLong("DATA_WIDTH", "32");
    M21_AXI_transactor_param_props.addLong("FREQ_HZ", "100000000");
    M21_AXI_transactor_param_props.addLong("ID_WIDTH", "0");
    M21_AXI_transactor_param_props.addLong("ADDR_WIDTH", "12");
    M21_AXI_transactor_param_props.addLong("AWUSER_WIDTH", "0");
    M21_AXI_transactor_param_props.addLong("ARUSER_WIDTH", "0");
    M21_AXI_transactor_param_props.addLong("WUSER_WIDTH", "0");
    M21_AXI_transactor_param_props.addLong("RUSER_WIDTH", "0");
    M21_AXI_transactor_param_props.addLong("BUSER_WIDTH", "0");
    M21_AXI_transactor_param_props.addLong("HAS_BURST", "1");
    M21_AXI_transactor_param_props.addLong("HAS_LOCK", "1");
    M21_AXI_transactor_param_props.addLong("HAS_PROT", "1");
    M21_AXI_transactor_param_props.addLong("HAS_CACHE", "1");
    M21_AXI_transactor_param_props.addLong("HAS_QOS", "1");
    M21_AXI_transactor_param_props.addLong("HAS_REGION", "0");
    M21_AXI_transactor_param_props.addLong("HAS_WSTRB", "1");
    M21_AXI_transactor_param_props.addLong("HAS_BRESP", "1");
    M21_AXI_transactor_param_props.addLong("HAS_RRESP", "1");
    M21_AXI_transactor_param_props.addLong("SUPPORTS_NARROW_BURST", "0");
    M21_AXI_transactor_param_props.addLong("NUM_READ_OUTSTANDING", "2");
    M21_AXI_transactor_param_props.addLong("NUM_WRITE_OUTSTANDING", "2");
    M21_AXI_transactor_param_props.addLong("MAX_BURST_LENGTH", "256");
    M21_AXI_transactor_param_props.addLong("NUM_READ_THREADS", "1");
    M21_AXI_transactor_param_props.addLong("NUM_WRITE_THREADS", "1");
    M21_AXI_transactor_param_props.addLong("RUSER_BITS_PER_BYTE", "0");
    M21_AXI_transactor_param_props.addLong("WUSER_BITS_PER_BYTE", "0");
    M21_AXI_transactor_param_props.addLong("HAS_SIZE", "1");
    M21_AXI_transactor_param_props.addLong("HAS_RESET", "1");
    M21_AXI_transactor_param_props.addFloat("PHASE", "0.0");
    M21_AXI_transactor_param_props.addString("PROTOCOL", "AXI4");
    M21_AXI_transactor_param_props.addString("READ_WRITE_MODE", "READ_WRITE");
    M21_AXI_transactor_param_props.addString("CLK_DOMAIN", "Multi_convo_core_processing_system7_0_0_FCLK_CLK0");

    mp_M21_AXI_transactor = new xtlm::xaximm_xtlm2pin_t<32,12,1,1,1,1,1,1>("M21_AXI_transactor", M21_AXI_transactor_param_props);

    // M21_AXI' transactor ports

    mp_M21_AXI_transactor->AWADDR(M21_AXI_awaddr);
    mp_M21_AXI_transactor->AWLEN(M21_AXI_awlen);
    mp_M21_AXI_transactor->AWSIZE(M21_AXI_awsize);
    mp_M21_AXI_transactor->AWBURST(M21_AXI_awburst);
    mp_M21_AXI_awlock_converter = new xsc::common::scalar2vectorN_converter<1>("M21_AXI_awlock_converter");
    mp_M21_AXI_awlock_converter->scalar_in(m_M21_AXI_awlock_converter_signal);
    mp_M21_AXI_awlock_converter->vector_out(M21_AXI_awlock);
    mp_M21_AXI_transactor->AWLOCK(m_M21_AXI_awlock_converter_signal);
    mp_M21_AXI_transactor->AWCACHE(M21_AXI_awcache);
    mp_M21_AXI_transactor->AWPROT(M21_AXI_awprot);
    mp_M21_AXI_transactor->AWQOS(M21_AXI_awqos);
    mp_M21_AXI_transactor->AWVALID(M21_AXI_awvalid);
    mp_M21_AXI_transactor->AWREADY(M21_AXI_awready);
    mp_M21_AXI_transactor->WDATA(M21_AXI_wdata);
    mp_M21_AXI_transactor->WSTRB(M21_AXI_wstrb);
    mp_M21_AXI_transactor->WLAST(M21_AXI_wlast);
    mp_M21_AXI_transactor->WVALID(M21_AXI_wvalid);
    mp_M21_AXI_transactor->WREADY(M21_AXI_wready);
    mp_M21_AXI_transactor->BRESP(M21_AXI_bresp);
    mp_M21_AXI_transactor->BVALID(M21_AXI_bvalid);
    mp_M21_AXI_transactor->BREADY(M21_AXI_bready);
    mp_M21_AXI_transactor->ARADDR(M21_AXI_araddr);
    mp_M21_AXI_transactor->ARLEN(M21_AXI_arlen);
    mp_M21_AXI_transactor->ARSIZE(M21_AXI_arsize);
    mp_M21_AXI_transactor->ARBURST(M21_AXI_arburst);
    mp_M21_AXI_arlock_converter = new xsc::common::scalar2vectorN_converter<1>("M21_AXI_arlock_converter");
    mp_M21_AXI_arlock_converter->scalar_in(m_M21_AXI_arlock_converter_signal);
    mp_M21_AXI_arlock_converter->vector_out(M21_AXI_arlock);
    mp_M21_AXI_transactor->ARLOCK(m_M21_AXI_arlock_converter_signal);
    mp_M21_AXI_transactor->ARCACHE(M21_AXI_arcache);
    mp_M21_AXI_transactor->ARPROT(M21_AXI_arprot);
    mp_M21_AXI_transactor->ARQOS(M21_AXI_arqos);
    mp_M21_AXI_transactor->ARVALID(M21_AXI_arvalid);
    mp_M21_AXI_transactor->ARREADY(M21_AXI_arready);
    mp_M21_AXI_transactor->RDATA(M21_AXI_rdata);
    mp_M21_AXI_transactor->RRESP(M21_AXI_rresp);
    mp_M21_AXI_transactor->RLAST(M21_AXI_rlast);
    mp_M21_AXI_transactor->RVALID(M21_AXI_rvalid);
    mp_M21_AXI_transactor->RREADY(M21_AXI_rready);
    mp_M21_AXI_transactor->CLK(aclk);
    mp_M21_AXI_transactor->RST(aresetn);

    // M21_AXI' transactor sockets

    mp_impl->M21_AXI_tlm_aximm_read_socket->bind(*(mp_M21_AXI_transactor->rd_socket));
    mp_impl->M21_AXI_tlm_aximm_write_socket->bind(*(mp_M21_AXI_transactor->wr_socket));
  }
  else
  {
  }

  // configure 'M22_AXI' transactor

  if (xsc::utils::xsc_sim_manager::getInstanceParameterInt("Multi_convo_core_smartconnect_0_0", "M22_AXI_TLM_MODE") != 1)
  {
    // Instantiate Socket Stubs

  // 'M22_AXI' transactor parameters
    xsc::common_cpp::properties M22_AXI_transactor_param_props;
    M22_AXI_transactor_param_props.addLong("DATA_WIDTH", "32");
    M22_AXI_transactor_param_props.addLong("FREQ_HZ", "100000000");
    M22_AXI_transactor_param_props.addLong("ID_WIDTH", "0");
    M22_AXI_transactor_param_props.addLong("ADDR_WIDTH", "12");
    M22_AXI_transactor_param_props.addLong("AWUSER_WIDTH", "0");
    M22_AXI_transactor_param_props.addLong("ARUSER_WIDTH", "0");
    M22_AXI_transactor_param_props.addLong("WUSER_WIDTH", "0");
    M22_AXI_transactor_param_props.addLong("RUSER_WIDTH", "0");
    M22_AXI_transactor_param_props.addLong("BUSER_WIDTH", "0");
    M22_AXI_transactor_param_props.addLong("HAS_BURST", "1");
    M22_AXI_transactor_param_props.addLong("HAS_LOCK", "1");
    M22_AXI_transactor_param_props.addLong("HAS_PROT", "1");
    M22_AXI_transactor_param_props.addLong("HAS_CACHE", "1");
    M22_AXI_transactor_param_props.addLong("HAS_QOS", "1");
    M22_AXI_transactor_param_props.addLong("HAS_REGION", "0");
    M22_AXI_transactor_param_props.addLong("HAS_WSTRB", "1");
    M22_AXI_transactor_param_props.addLong("HAS_BRESP", "1");
    M22_AXI_transactor_param_props.addLong("HAS_RRESP", "1");
    M22_AXI_transactor_param_props.addLong("SUPPORTS_NARROW_BURST", "0");
    M22_AXI_transactor_param_props.addLong("NUM_READ_OUTSTANDING", "2");
    M22_AXI_transactor_param_props.addLong("NUM_WRITE_OUTSTANDING", "2");
    M22_AXI_transactor_param_props.addLong("MAX_BURST_LENGTH", "256");
    M22_AXI_transactor_param_props.addLong("NUM_READ_THREADS", "1");
    M22_AXI_transactor_param_props.addLong("NUM_WRITE_THREADS", "1");
    M22_AXI_transactor_param_props.addLong("RUSER_BITS_PER_BYTE", "0");
    M22_AXI_transactor_param_props.addLong("WUSER_BITS_PER_BYTE", "0");
    M22_AXI_transactor_param_props.addLong("HAS_SIZE", "1");
    M22_AXI_transactor_param_props.addLong("HAS_RESET", "1");
    M22_AXI_transactor_param_props.addFloat("PHASE", "0.0");
    M22_AXI_transactor_param_props.addString("PROTOCOL", "AXI4");
    M22_AXI_transactor_param_props.addString("READ_WRITE_MODE", "READ_WRITE");
    M22_AXI_transactor_param_props.addString("CLK_DOMAIN", "Multi_convo_core_processing_system7_0_0_FCLK_CLK0");

    mp_M22_AXI_transactor = new xtlm::xaximm_xtlm2pin_t<32,12,1,1,1,1,1,1>("M22_AXI_transactor", M22_AXI_transactor_param_props);

    // M22_AXI' transactor ports

    mp_M22_AXI_transactor->AWADDR(M22_AXI_awaddr);
    mp_M22_AXI_transactor->AWLEN(M22_AXI_awlen);
    mp_M22_AXI_transactor->AWSIZE(M22_AXI_awsize);
    mp_M22_AXI_transactor->AWBURST(M22_AXI_awburst);
    mp_M22_AXI_awlock_converter = new xsc::common::scalar2vectorN_converter<1>("M22_AXI_awlock_converter");
    mp_M22_AXI_awlock_converter->scalar_in(m_M22_AXI_awlock_converter_signal);
    mp_M22_AXI_awlock_converter->vector_out(M22_AXI_awlock);
    mp_M22_AXI_transactor->AWLOCK(m_M22_AXI_awlock_converter_signal);
    mp_M22_AXI_transactor->AWCACHE(M22_AXI_awcache);
    mp_M22_AXI_transactor->AWPROT(M22_AXI_awprot);
    mp_M22_AXI_transactor->AWQOS(M22_AXI_awqos);
    mp_M22_AXI_transactor->AWVALID(M22_AXI_awvalid);
    mp_M22_AXI_transactor->AWREADY(M22_AXI_awready);
    mp_M22_AXI_transactor->WDATA(M22_AXI_wdata);
    mp_M22_AXI_transactor->WSTRB(M22_AXI_wstrb);
    mp_M22_AXI_transactor->WLAST(M22_AXI_wlast);
    mp_M22_AXI_transactor->WVALID(M22_AXI_wvalid);
    mp_M22_AXI_transactor->WREADY(M22_AXI_wready);
    mp_M22_AXI_transactor->BRESP(M22_AXI_bresp);
    mp_M22_AXI_transactor->BVALID(M22_AXI_bvalid);
    mp_M22_AXI_transactor->BREADY(M22_AXI_bready);
    mp_M22_AXI_transactor->ARADDR(M22_AXI_araddr);
    mp_M22_AXI_transactor->ARLEN(M22_AXI_arlen);
    mp_M22_AXI_transactor->ARSIZE(M22_AXI_arsize);
    mp_M22_AXI_transactor->ARBURST(M22_AXI_arburst);
    mp_M22_AXI_arlock_converter = new xsc::common::scalar2vectorN_converter<1>("M22_AXI_arlock_converter");
    mp_M22_AXI_arlock_converter->scalar_in(m_M22_AXI_arlock_converter_signal);
    mp_M22_AXI_arlock_converter->vector_out(M22_AXI_arlock);
    mp_M22_AXI_transactor->ARLOCK(m_M22_AXI_arlock_converter_signal);
    mp_M22_AXI_transactor->ARCACHE(M22_AXI_arcache);
    mp_M22_AXI_transactor->ARPROT(M22_AXI_arprot);
    mp_M22_AXI_transactor->ARQOS(M22_AXI_arqos);
    mp_M22_AXI_transactor->ARVALID(M22_AXI_arvalid);
    mp_M22_AXI_transactor->ARREADY(M22_AXI_arready);
    mp_M22_AXI_transactor->RDATA(M22_AXI_rdata);
    mp_M22_AXI_transactor->RRESP(M22_AXI_rresp);
    mp_M22_AXI_transactor->RLAST(M22_AXI_rlast);
    mp_M22_AXI_transactor->RVALID(M22_AXI_rvalid);
    mp_M22_AXI_transactor->RREADY(M22_AXI_rready);
    mp_M22_AXI_transactor->CLK(aclk);
    mp_M22_AXI_transactor->RST(aresetn);

    // M22_AXI' transactor sockets

    mp_impl->M22_AXI_tlm_aximm_read_socket->bind(*(mp_M22_AXI_transactor->rd_socket));
    mp_impl->M22_AXI_tlm_aximm_write_socket->bind(*(mp_M22_AXI_transactor->wr_socket));
  }
  else
  {
  }

  // configure 'M23_AXI' transactor

  if (xsc::utils::xsc_sim_manager::getInstanceParameterInt("Multi_convo_core_smartconnect_0_0", "M23_AXI_TLM_MODE") != 1)
  {
    // Instantiate Socket Stubs

  // 'M23_AXI' transactor parameters
    xsc::common_cpp::properties M23_AXI_transactor_param_props;
    M23_AXI_transactor_param_props.addLong("DATA_WIDTH", "32");
    M23_AXI_transactor_param_props.addLong("FREQ_HZ", "100000000");
    M23_AXI_transactor_param_props.addLong("ID_WIDTH", "0");
    M23_AXI_transactor_param_props.addLong("ADDR_WIDTH", "12");
    M23_AXI_transactor_param_props.addLong("AWUSER_WIDTH", "0");
    M23_AXI_transactor_param_props.addLong("ARUSER_WIDTH", "0");
    M23_AXI_transactor_param_props.addLong("WUSER_WIDTH", "0");
    M23_AXI_transactor_param_props.addLong("RUSER_WIDTH", "0");
    M23_AXI_transactor_param_props.addLong("BUSER_WIDTH", "0");
    M23_AXI_transactor_param_props.addLong("HAS_BURST", "1");
    M23_AXI_transactor_param_props.addLong("HAS_LOCK", "1");
    M23_AXI_transactor_param_props.addLong("HAS_PROT", "1");
    M23_AXI_transactor_param_props.addLong("HAS_CACHE", "1");
    M23_AXI_transactor_param_props.addLong("HAS_QOS", "1");
    M23_AXI_transactor_param_props.addLong("HAS_REGION", "0");
    M23_AXI_transactor_param_props.addLong("HAS_WSTRB", "1");
    M23_AXI_transactor_param_props.addLong("HAS_BRESP", "1");
    M23_AXI_transactor_param_props.addLong("HAS_RRESP", "1");
    M23_AXI_transactor_param_props.addLong("SUPPORTS_NARROW_BURST", "0");
    M23_AXI_transactor_param_props.addLong("NUM_READ_OUTSTANDING", "2");
    M23_AXI_transactor_param_props.addLong("NUM_WRITE_OUTSTANDING", "2");
    M23_AXI_transactor_param_props.addLong("MAX_BURST_LENGTH", "256");
    M23_AXI_transactor_param_props.addLong("NUM_READ_THREADS", "1");
    M23_AXI_transactor_param_props.addLong("NUM_WRITE_THREADS", "1");
    M23_AXI_transactor_param_props.addLong("RUSER_BITS_PER_BYTE", "0");
    M23_AXI_transactor_param_props.addLong("WUSER_BITS_PER_BYTE", "0");
    M23_AXI_transactor_param_props.addLong("HAS_SIZE", "1");
    M23_AXI_transactor_param_props.addLong("HAS_RESET", "1");
    M23_AXI_transactor_param_props.addFloat("PHASE", "0.0");
    M23_AXI_transactor_param_props.addString("PROTOCOL", "AXI4");
    M23_AXI_transactor_param_props.addString("READ_WRITE_MODE", "READ_WRITE");
    M23_AXI_transactor_param_props.addString("CLK_DOMAIN", "Multi_convo_core_processing_system7_0_0_FCLK_CLK0");

    mp_M23_AXI_transactor = new xtlm::xaximm_xtlm2pin_t<32,12,1,1,1,1,1,1>("M23_AXI_transactor", M23_AXI_transactor_param_props);

    // M23_AXI' transactor ports

    mp_M23_AXI_transactor->AWADDR(M23_AXI_awaddr);
    mp_M23_AXI_transactor->AWLEN(M23_AXI_awlen);
    mp_M23_AXI_transactor->AWSIZE(M23_AXI_awsize);
    mp_M23_AXI_transactor->AWBURST(M23_AXI_awburst);
    mp_M23_AXI_awlock_converter = new xsc::common::scalar2vectorN_converter<1>("M23_AXI_awlock_converter");
    mp_M23_AXI_awlock_converter->scalar_in(m_M23_AXI_awlock_converter_signal);
    mp_M23_AXI_awlock_converter->vector_out(M23_AXI_awlock);
    mp_M23_AXI_transactor->AWLOCK(m_M23_AXI_awlock_converter_signal);
    mp_M23_AXI_transactor->AWCACHE(M23_AXI_awcache);
    mp_M23_AXI_transactor->AWPROT(M23_AXI_awprot);
    mp_M23_AXI_transactor->AWQOS(M23_AXI_awqos);
    mp_M23_AXI_transactor->AWVALID(M23_AXI_awvalid);
    mp_M23_AXI_transactor->AWREADY(M23_AXI_awready);
    mp_M23_AXI_transactor->WDATA(M23_AXI_wdata);
    mp_M23_AXI_transactor->WSTRB(M23_AXI_wstrb);
    mp_M23_AXI_transactor->WLAST(M23_AXI_wlast);
    mp_M23_AXI_transactor->WVALID(M23_AXI_wvalid);
    mp_M23_AXI_transactor->WREADY(M23_AXI_wready);
    mp_M23_AXI_transactor->BRESP(M23_AXI_bresp);
    mp_M23_AXI_transactor->BVALID(M23_AXI_bvalid);
    mp_M23_AXI_transactor->BREADY(M23_AXI_bready);
    mp_M23_AXI_transactor->ARADDR(M23_AXI_araddr);
    mp_M23_AXI_transactor->ARLEN(M23_AXI_arlen);
    mp_M23_AXI_transactor->ARSIZE(M23_AXI_arsize);
    mp_M23_AXI_transactor->ARBURST(M23_AXI_arburst);
    mp_M23_AXI_arlock_converter = new xsc::common::scalar2vectorN_converter<1>("M23_AXI_arlock_converter");
    mp_M23_AXI_arlock_converter->scalar_in(m_M23_AXI_arlock_converter_signal);
    mp_M23_AXI_arlock_converter->vector_out(M23_AXI_arlock);
    mp_M23_AXI_transactor->ARLOCK(m_M23_AXI_arlock_converter_signal);
    mp_M23_AXI_transactor->ARCACHE(M23_AXI_arcache);
    mp_M23_AXI_transactor->ARPROT(M23_AXI_arprot);
    mp_M23_AXI_transactor->ARQOS(M23_AXI_arqos);
    mp_M23_AXI_transactor->ARVALID(M23_AXI_arvalid);
    mp_M23_AXI_transactor->ARREADY(M23_AXI_arready);
    mp_M23_AXI_transactor->RDATA(M23_AXI_rdata);
    mp_M23_AXI_transactor->RRESP(M23_AXI_rresp);
    mp_M23_AXI_transactor->RLAST(M23_AXI_rlast);
    mp_M23_AXI_transactor->RVALID(M23_AXI_rvalid);
    mp_M23_AXI_transactor->RREADY(M23_AXI_rready);
    mp_M23_AXI_transactor->CLK(aclk);
    mp_M23_AXI_transactor->RST(aresetn);

    // M23_AXI' transactor sockets

    mp_impl->M23_AXI_tlm_aximm_read_socket->bind(*(mp_M23_AXI_transactor->rd_socket));
    mp_impl->M23_AXI_tlm_aximm_write_socket->bind(*(mp_M23_AXI_transactor->wr_socket));
  }
  else
  {
  }

}

#endif // XM_SYSTEMC




#ifdef RIVIERA
Multi_convo_core_smartconnect_0_0::Multi_convo_core_smartconnect_0_0(const sc_core::sc_module_name& nm) : Multi_convo_core_smartconnect_0_0_sc(nm), aclk("aclk"), aresetn("aresetn"), S00_AXI_awaddr("S00_AXI_awaddr"), S00_AXI_awlen("S00_AXI_awlen"), S00_AXI_awsize("S00_AXI_awsize"), S00_AXI_awburst("S00_AXI_awburst"), S00_AXI_awlock("S00_AXI_awlock"), S00_AXI_awcache("S00_AXI_awcache"), S00_AXI_awprot("S00_AXI_awprot"), S00_AXI_awqos("S00_AXI_awqos"), S00_AXI_awvalid("S00_AXI_awvalid"), S00_AXI_awready("S00_AXI_awready"), S00_AXI_wdata("S00_AXI_wdata"), S00_AXI_wstrb("S00_AXI_wstrb"), S00_AXI_wlast("S00_AXI_wlast"), S00_AXI_wvalid("S00_AXI_wvalid"), S00_AXI_wready("S00_AXI_wready"), S00_AXI_bresp("S00_AXI_bresp"), S00_AXI_bvalid("S00_AXI_bvalid"), S00_AXI_bready("S00_AXI_bready"), S00_AXI_araddr("S00_AXI_araddr"), S00_AXI_arlen("S00_AXI_arlen"), S00_AXI_arsize("S00_AXI_arsize"), S00_AXI_arburst("S00_AXI_arburst"), S00_AXI_arlock("S00_AXI_arlock"), S00_AXI_arcache("S00_AXI_arcache"), S00_AXI_arprot("S00_AXI_arprot"), S00_AXI_arqos("S00_AXI_arqos"), S00_AXI_arvalid("S00_AXI_arvalid"), S00_AXI_arready("S00_AXI_arready"), S00_AXI_rdata("S00_AXI_rdata"), S00_AXI_rresp("S00_AXI_rresp"), S00_AXI_rlast("S00_AXI_rlast"), S00_AXI_rvalid("S00_AXI_rvalid"), S00_AXI_rready("S00_AXI_rready"), M00_AXI_awaddr("M00_AXI_awaddr"), M00_AXI_awlen("M00_AXI_awlen"), M00_AXI_awsize("M00_AXI_awsize"), M00_AXI_awburst("M00_AXI_awburst"), M00_AXI_awlock("M00_AXI_awlock"), M00_AXI_awcache("M00_AXI_awcache"), M00_AXI_awprot("M00_AXI_awprot"), M00_AXI_awqos("M00_AXI_awqos"), M00_AXI_awvalid("M00_AXI_awvalid"), M00_AXI_awready("M00_AXI_awready"), M00_AXI_wdata("M00_AXI_wdata"), M00_AXI_wstrb("M00_AXI_wstrb"), M00_AXI_wlast("M00_AXI_wlast"), M00_AXI_wvalid("M00_AXI_wvalid"), M00_AXI_wready("M00_AXI_wready"), M00_AXI_bresp("M00_AXI_bresp"), M00_AXI_bvalid("M00_AXI_bvalid"), M00_AXI_bready("M00_AXI_bready"), M00_AXI_araddr("M00_AXI_araddr"), M00_AXI_arlen("M00_AXI_arlen"), M00_AXI_arsize("M00_AXI_arsize"), M00_AXI_arburst("M00_AXI_arburst"), M00_AXI_arlock("M00_AXI_arlock"), M00_AXI_arcache("M00_AXI_arcache"), M00_AXI_arprot("M00_AXI_arprot"), M00_AXI_arqos("M00_AXI_arqos"), M00_AXI_arvalid("M00_AXI_arvalid"), M00_AXI_arready("M00_AXI_arready"), M00_AXI_rdata("M00_AXI_rdata"), M00_AXI_rresp("M00_AXI_rresp"), M00_AXI_rlast("M00_AXI_rlast"), M00_AXI_rvalid("M00_AXI_rvalid"), M00_AXI_rready("M00_AXI_rready"), M01_AXI_awaddr("M01_AXI_awaddr"), M01_AXI_awlen("M01_AXI_awlen"), M01_AXI_awsize("M01_AXI_awsize"), M01_AXI_awburst("M01_AXI_awburst"), M01_AXI_awlock("M01_AXI_awlock"), M01_AXI_awcache("M01_AXI_awcache"), M01_AXI_awprot("M01_AXI_awprot"), M01_AXI_awqos("M01_AXI_awqos"), M01_AXI_awvalid("M01_AXI_awvalid"), M01_AXI_awready("M01_AXI_awready"), M01_AXI_wdata("M01_AXI_wdata"), M01_AXI_wstrb("M01_AXI_wstrb"), M01_AXI_wlast("M01_AXI_wlast"), M01_AXI_wvalid("M01_AXI_wvalid"), M01_AXI_wready("M01_AXI_wready"), M01_AXI_bresp("M01_AXI_bresp"), M01_AXI_bvalid("M01_AXI_bvalid"), M01_AXI_bready("M01_AXI_bready"), M01_AXI_araddr("M01_AXI_araddr"), M01_AXI_arlen("M01_AXI_arlen"), M01_AXI_arsize("M01_AXI_arsize"), M01_AXI_arburst("M01_AXI_arburst"), M01_AXI_arlock("M01_AXI_arlock"), M01_AXI_arcache("M01_AXI_arcache"), M01_AXI_arprot("M01_AXI_arprot"), M01_AXI_arqos("M01_AXI_arqos"), M01_AXI_arvalid("M01_AXI_arvalid"), M01_AXI_arready("M01_AXI_arready"), M01_AXI_rdata("M01_AXI_rdata"), M01_AXI_rresp("M01_AXI_rresp"), M01_AXI_rlast("M01_AXI_rlast"), M01_AXI_rvalid("M01_AXI_rvalid"), M01_AXI_rready("M01_AXI_rready"), M02_AXI_awaddr("M02_AXI_awaddr"), M02_AXI_awlen("M02_AXI_awlen"), M02_AXI_awsize("M02_AXI_awsize"), M02_AXI_awburst("M02_AXI_awburst"), M02_AXI_awlock("M02_AXI_awlock"), M02_AXI_awcache("M02_AXI_awcache"), M02_AXI_awprot("M02_AXI_awprot"), M02_AXI_awqos("M02_AXI_awqos"), M02_AXI_awvalid("M02_AXI_awvalid"), M02_AXI_awready("M02_AXI_awready"), M02_AXI_wdata("M02_AXI_wdata"), M02_AXI_wstrb("M02_AXI_wstrb"), M02_AXI_wlast("M02_AXI_wlast"), M02_AXI_wvalid("M02_AXI_wvalid"), M02_AXI_wready("M02_AXI_wready"), M02_AXI_bresp("M02_AXI_bresp"), M02_AXI_bvalid("M02_AXI_bvalid"), M02_AXI_bready("M02_AXI_bready"), M02_AXI_araddr("M02_AXI_araddr"), M02_AXI_arlen("M02_AXI_arlen"), M02_AXI_arsize("M02_AXI_arsize"), M02_AXI_arburst("M02_AXI_arburst"), M02_AXI_arlock("M02_AXI_arlock"), M02_AXI_arcache("M02_AXI_arcache"), M02_AXI_arprot("M02_AXI_arprot"), M02_AXI_arqos("M02_AXI_arqos"), M02_AXI_arvalid("M02_AXI_arvalid"), M02_AXI_arready("M02_AXI_arready"), M02_AXI_rdata("M02_AXI_rdata"), M02_AXI_rresp("M02_AXI_rresp"), M02_AXI_rlast("M02_AXI_rlast"), M02_AXI_rvalid("M02_AXI_rvalid"), M02_AXI_rready("M02_AXI_rready"), M03_AXI_awaddr("M03_AXI_awaddr"), M03_AXI_awlen("M03_AXI_awlen"), M03_AXI_awsize("M03_AXI_awsize"), M03_AXI_awburst("M03_AXI_awburst"), M03_AXI_awlock("M03_AXI_awlock"), M03_AXI_awcache("M03_AXI_awcache"), M03_AXI_awprot("M03_AXI_awprot"), M03_AXI_awqos("M03_AXI_awqos"), M03_AXI_awvalid("M03_AXI_awvalid"), M03_AXI_awready("M03_AXI_awready"), M03_AXI_wdata("M03_AXI_wdata"), M03_AXI_wstrb("M03_AXI_wstrb"), M03_AXI_wlast("M03_AXI_wlast"), M03_AXI_wvalid("M03_AXI_wvalid"), M03_AXI_wready("M03_AXI_wready"), M03_AXI_bresp("M03_AXI_bresp"), M03_AXI_bvalid("M03_AXI_bvalid"), M03_AXI_bready("M03_AXI_bready"), M03_AXI_araddr("M03_AXI_araddr"), M03_AXI_arlen("M03_AXI_arlen"), M03_AXI_arsize("M03_AXI_arsize"), M03_AXI_arburst("M03_AXI_arburst"), M03_AXI_arlock("M03_AXI_arlock"), M03_AXI_arcache("M03_AXI_arcache"), M03_AXI_arprot("M03_AXI_arprot"), M03_AXI_arqos("M03_AXI_arqos"), M03_AXI_arvalid("M03_AXI_arvalid"), M03_AXI_arready("M03_AXI_arready"), M03_AXI_rdata("M03_AXI_rdata"), M03_AXI_rresp("M03_AXI_rresp"), M03_AXI_rlast("M03_AXI_rlast"), M03_AXI_rvalid("M03_AXI_rvalid"), M03_AXI_rready("M03_AXI_rready"), M04_AXI_awaddr("M04_AXI_awaddr"), M04_AXI_awlen("M04_AXI_awlen"), M04_AXI_awsize("M04_AXI_awsize"), M04_AXI_awburst("M04_AXI_awburst"), M04_AXI_awlock("M04_AXI_awlock"), M04_AXI_awcache("M04_AXI_awcache"), M04_AXI_awprot("M04_AXI_awprot"), M04_AXI_awqos("M04_AXI_awqos"), M04_AXI_awvalid("M04_AXI_awvalid"), M04_AXI_awready("M04_AXI_awready"), M04_AXI_wdata("M04_AXI_wdata"), M04_AXI_wstrb("M04_AXI_wstrb"), M04_AXI_wlast("M04_AXI_wlast"), M04_AXI_wvalid("M04_AXI_wvalid"), M04_AXI_wready("M04_AXI_wready"), M04_AXI_bresp("M04_AXI_bresp"), M04_AXI_bvalid("M04_AXI_bvalid"), M04_AXI_bready("M04_AXI_bready"), M04_AXI_araddr("M04_AXI_araddr"), M04_AXI_arlen("M04_AXI_arlen"), M04_AXI_arsize("M04_AXI_arsize"), M04_AXI_arburst("M04_AXI_arburst"), M04_AXI_arlock("M04_AXI_arlock"), M04_AXI_arcache("M04_AXI_arcache"), M04_AXI_arprot("M04_AXI_arprot"), M04_AXI_arqos("M04_AXI_arqos"), M04_AXI_arvalid("M04_AXI_arvalid"), M04_AXI_arready("M04_AXI_arready"), M04_AXI_rdata("M04_AXI_rdata"), M04_AXI_rresp("M04_AXI_rresp"), M04_AXI_rlast("M04_AXI_rlast"), M04_AXI_rvalid("M04_AXI_rvalid"), M04_AXI_rready("M04_AXI_rready"), M05_AXI_awaddr("M05_AXI_awaddr"), M05_AXI_awlen("M05_AXI_awlen"), M05_AXI_awsize("M05_AXI_awsize"), M05_AXI_awburst("M05_AXI_awburst"), M05_AXI_awlock("M05_AXI_awlock"), M05_AXI_awcache("M05_AXI_awcache"), M05_AXI_awprot("M05_AXI_awprot"), M05_AXI_awqos("M05_AXI_awqos"), M05_AXI_awvalid("M05_AXI_awvalid"), M05_AXI_awready("M05_AXI_awready"), M05_AXI_wdata("M05_AXI_wdata"), M05_AXI_wstrb("M05_AXI_wstrb"), M05_AXI_wlast("M05_AXI_wlast"), M05_AXI_wvalid("M05_AXI_wvalid"), M05_AXI_wready("M05_AXI_wready"), M05_AXI_bresp("M05_AXI_bresp"), M05_AXI_bvalid("M05_AXI_bvalid"), M05_AXI_bready("M05_AXI_bready"), M05_AXI_araddr("M05_AXI_araddr"), M05_AXI_arlen("M05_AXI_arlen"), M05_AXI_arsize("M05_AXI_arsize"), M05_AXI_arburst("M05_AXI_arburst"), M05_AXI_arlock("M05_AXI_arlock"), M05_AXI_arcache("M05_AXI_arcache"), M05_AXI_arprot("M05_AXI_arprot"), M05_AXI_arqos("M05_AXI_arqos"), M05_AXI_arvalid("M05_AXI_arvalid"), M05_AXI_arready("M05_AXI_arready"), M05_AXI_rdata("M05_AXI_rdata"), M05_AXI_rresp("M05_AXI_rresp"), M05_AXI_rlast("M05_AXI_rlast"), M05_AXI_rvalid("M05_AXI_rvalid"), M05_AXI_rready("M05_AXI_rready"), M06_AXI_awaddr("M06_AXI_awaddr"), M06_AXI_awlen("M06_AXI_awlen"), M06_AXI_awsize("M06_AXI_awsize"), M06_AXI_awburst("M06_AXI_awburst"), M06_AXI_awlock("M06_AXI_awlock"), M06_AXI_awcache("M06_AXI_awcache"), M06_AXI_awprot("M06_AXI_awprot"), M06_AXI_awqos("M06_AXI_awqos"), M06_AXI_awvalid("M06_AXI_awvalid"), M06_AXI_awready("M06_AXI_awready"), M06_AXI_wdata("M06_AXI_wdata"), M06_AXI_wstrb("M06_AXI_wstrb"), M06_AXI_wlast("M06_AXI_wlast"), M06_AXI_wvalid("M06_AXI_wvalid"), M06_AXI_wready("M06_AXI_wready"), M06_AXI_bresp("M06_AXI_bresp"), M06_AXI_bvalid("M06_AXI_bvalid"), M06_AXI_bready("M06_AXI_bready"), M06_AXI_araddr("M06_AXI_araddr"), M06_AXI_arlen("M06_AXI_arlen"), M06_AXI_arsize("M06_AXI_arsize"), M06_AXI_arburst("M06_AXI_arburst"), M06_AXI_arlock("M06_AXI_arlock"), M06_AXI_arcache("M06_AXI_arcache"), M06_AXI_arprot("M06_AXI_arprot"), M06_AXI_arqos("M06_AXI_arqos"), M06_AXI_arvalid("M06_AXI_arvalid"), M06_AXI_arready("M06_AXI_arready"), M06_AXI_rdata("M06_AXI_rdata"), M06_AXI_rresp("M06_AXI_rresp"), M06_AXI_rlast("M06_AXI_rlast"), M06_AXI_rvalid("M06_AXI_rvalid"), M06_AXI_rready("M06_AXI_rready"), M07_AXI_awaddr("M07_AXI_awaddr"), M07_AXI_awlen("M07_AXI_awlen"), M07_AXI_awsize("M07_AXI_awsize"), M07_AXI_awburst("M07_AXI_awburst"), M07_AXI_awlock("M07_AXI_awlock"), M07_AXI_awcache("M07_AXI_awcache"), M07_AXI_awprot("M07_AXI_awprot"), M07_AXI_awqos("M07_AXI_awqos"), M07_AXI_awvalid("M07_AXI_awvalid"), M07_AXI_awready("M07_AXI_awready"), M07_AXI_wdata("M07_AXI_wdata"), M07_AXI_wstrb("M07_AXI_wstrb"), M07_AXI_wlast("M07_AXI_wlast"), M07_AXI_wvalid("M07_AXI_wvalid"), M07_AXI_wready("M07_AXI_wready"), M07_AXI_bresp("M07_AXI_bresp"), M07_AXI_bvalid("M07_AXI_bvalid"), M07_AXI_bready("M07_AXI_bready"), M07_AXI_araddr("M07_AXI_araddr"), M07_AXI_arlen("M07_AXI_arlen"), M07_AXI_arsize("M07_AXI_arsize"), M07_AXI_arburst("M07_AXI_arburst"), M07_AXI_arlock("M07_AXI_arlock"), M07_AXI_arcache("M07_AXI_arcache"), M07_AXI_arprot("M07_AXI_arprot"), M07_AXI_arqos("M07_AXI_arqos"), M07_AXI_arvalid("M07_AXI_arvalid"), M07_AXI_arready("M07_AXI_arready"), M07_AXI_rdata("M07_AXI_rdata"), M07_AXI_rresp("M07_AXI_rresp"), M07_AXI_rlast("M07_AXI_rlast"), M07_AXI_rvalid("M07_AXI_rvalid"), M07_AXI_rready("M07_AXI_rready"), M08_AXI_awaddr("M08_AXI_awaddr"), M08_AXI_awlen("M08_AXI_awlen"), M08_AXI_awsize("M08_AXI_awsize"), M08_AXI_awburst("M08_AXI_awburst"), M08_AXI_awlock("M08_AXI_awlock"), M08_AXI_awcache("M08_AXI_awcache"), M08_AXI_awprot("M08_AXI_awprot"), M08_AXI_awqos("M08_AXI_awqos"), M08_AXI_awvalid("M08_AXI_awvalid"), M08_AXI_awready("M08_AXI_awready"), M08_AXI_wdata("M08_AXI_wdata"), M08_AXI_wstrb("M08_AXI_wstrb"), M08_AXI_wlast("M08_AXI_wlast"), M08_AXI_wvalid("M08_AXI_wvalid"), M08_AXI_wready("M08_AXI_wready"), M08_AXI_bresp("M08_AXI_bresp"), M08_AXI_bvalid("M08_AXI_bvalid"), M08_AXI_bready("M08_AXI_bready"), M08_AXI_araddr("M08_AXI_araddr"), M08_AXI_arlen("M08_AXI_arlen"), M08_AXI_arsize("M08_AXI_arsize"), M08_AXI_arburst("M08_AXI_arburst"), M08_AXI_arlock("M08_AXI_arlock"), M08_AXI_arcache("M08_AXI_arcache"), M08_AXI_arprot("M08_AXI_arprot"), M08_AXI_arqos("M08_AXI_arqos"), M08_AXI_arvalid("M08_AXI_arvalid"), M08_AXI_arready("M08_AXI_arready"), M08_AXI_rdata("M08_AXI_rdata"), M08_AXI_rresp("M08_AXI_rresp"), M08_AXI_rlast("M08_AXI_rlast"), M08_AXI_rvalid("M08_AXI_rvalid"), M08_AXI_rready("M08_AXI_rready"), M09_AXI_awaddr("M09_AXI_awaddr"), M09_AXI_awlen("M09_AXI_awlen"), M09_AXI_awsize("M09_AXI_awsize"), M09_AXI_awburst("M09_AXI_awburst"), M09_AXI_awlock("M09_AXI_awlock"), M09_AXI_awcache("M09_AXI_awcache"), M09_AXI_awprot("M09_AXI_awprot"), M09_AXI_awqos("M09_AXI_awqos"), M09_AXI_awvalid("M09_AXI_awvalid"), M09_AXI_awready("M09_AXI_awready"), M09_AXI_wdata("M09_AXI_wdata"), M09_AXI_wstrb("M09_AXI_wstrb"), M09_AXI_wlast("M09_AXI_wlast"), M09_AXI_wvalid("M09_AXI_wvalid"), M09_AXI_wready("M09_AXI_wready"), M09_AXI_bresp("M09_AXI_bresp"), M09_AXI_bvalid("M09_AXI_bvalid"), M09_AXI_bready("M09_AXI_bready"), M09_AXI_araddr("M09_AXI_araddr"), M09_AXI_arlen("M09_AXI_arlen"), M09_AXI_arsize("M09_AXI_arsize"), M09_AXI_arburst("M09_AXI_arburst"), M09_AXI_arlock("M09_AXI_arlock"), M09_AXI_arcache("M09_AXI_arcache"), M09_AXI_arprot("M09_AXI_arprot"), M09_AXI_arqos("M09_AXI_arqos"), M09_AXI_arvalid("M09_AXI_arvalid"), M09_AXI_arready("M09_AXI_arready"), M09_AXI_rdata("M09_AXI_rdata"), M09_AXI_rresp("M09_AXI_rresp"), M09_AXI_rlast("M09_AXI_rlast"), M09_AXI_rvalid("M09_AXI_rvalid"), M09_AXI_rready("M09_AXI_rready"), M10_AXI_awaddr("M10_AXI_awaddr"), M10_AXI_awlen("M10_AXI_awlen"), M10_AXI_awsize("M10_AXI_awsize"), M10_AXI_awburst("M10_AXI_awburst"), M10_AXI_awlock("M10_AXI_awlock"), M10_AXI_awcache("M10_AXI_awcache"), M10_AXI_awprot("M10_AXI_awprot"), M10_AXI_awqos("M10_AXI_awqos"), M10_AXI_awvalid("M10_AXI_awvalid"), M10_AXI_awready("M10_AXI_awready"), M10_AXI_wdata("M10_AXI_wdata"), M10_AXI_wstrb("M10_AXI_wstrb"), M10_AXI_wlast("M10_AXI_wlast"), M10_AXI_wvalid("M10_AXI_wvalid"), M10_AXI_wready("M10_AXI_wready"), M10_AXI_bresp("M10_AXI_bresp"), M10_AXI_bvalid("M10_AXI_bvalid"), M10_AXI_bready("M10_AXI_bready"), M10_AXI_araddr("M10_AXI_araddr"), M10_AXI_arlen("M10_AXI_arlen"), M10_AXI_arsize("M10_AXI_arsize"), M10_AXI_arburst("M10_AXI_arburst"), M10_AXI_arlock("M10_AXI_arlock"), M10_AXI_arcache("M10_AXI_arcache"), M10_AXI_arprot("M10_AXI_arprot"), M10_AXI_arqos("M10_AXI_arqos"), M10_AXI_arvalid("M10_AXI_arvalid"), M10_AXI_arready("M10_AXI_arready"), M10_AXI_rdata("M10_AXI_rdata"), M10_AXI_rresp("M10_AXI_rresp"), M10_AXI_rlast("M10_AXI_rlast"), M10_AXI_rvalid("M10_AXI_rvalid"), M10_AXI_rready("M10_AXI_rready"), M11_AXI_awaddr("M11_AXI_awaddr"), M11_AXI_awlen("M11_AXI_awlen"), M11_AXI_awsize("M11_AXI_awsize"), M11_AXI_awburst("M11_AXI_awburst"), M11_AXI_awlock("M11_AXI_awlock"), M11_AXI_awcache("M11_AXI_awcache"), M11_AXI_awprot("M11_AXI_awprot"), M11_AXI_awqos("M11_AXI_awqos"), M11_AXI_awvalid("M11_AXI_awvalid"), M11_AXI_awready("M11_AXI_awready"), M11_AXI_wdata("M11_AXI_wdata"), M11_AXI_wstrb("M11_AXI_wstrb"), M11_AXI_wlast("M11_AXI_wlast"), M11_AXI_wvalid("M11_AXI_wvalid"), M11_AXI_wready("M11_AXI_wready"), M11_AXI_bresp("M11_AXI_bresp"), M11_AXI_bvalid("M11_AXI_bvalid"), M11_AXI_bready("M11_AXI_bready"), M11_AXI_araddr("M11_AXI_araddr"), M11_AXI_arlen("M11_AXI_arlen"), M11_AXI_arsize("M11_AXI_arsize"), M11_AXI_arburst("M11_AXI_arburst"), M11_AXI_arlock("M11_AXI_arlock"), M11_AXI_arcache("M11_AXI_arcache"), M11_AXI_arprot("M11_AXI_arprot"), M11_AXI_arqos("M11_AXI_arqos"), M11_AXI_arvalid("M11_AXI_arvalid"), M11_AXI_arready("M11_AXI_arready"), M11_AXI_rdata("M11_AXI_rdata"), M11_AXI_rresp("M11_AXI_rresp"), M11_AXI_rlast("M11_AXI_rlast"), M11_AXI_rvalid("M11_AXI_rvalid"), M11_AXI_rready("M11_AXI_rready"), M12_AXI_awaddr("M12_AXI_awaddr"), M12_AXI_awlen("M12_AXI_awlen"), M12_AXI_awsize("M12_AXI_awsize"), M12_AXI_awburst("M12_AXI_awburst"), M12_AXI_awlock("M12_AXI_awlock"), M12_AXI_awcache("M12_AXI_awcache"), M12_AXI_awprot("M12_AXI_awprot"), M12_AXI_awqos("M12_AXI_awqos"), M12_AXI_awvalid("M12_AXI_awvalid"), M12_AXI_awready("M12_AXI_awready"), M12_AXI_wdata("M12_AXI_wdata"), M12_AXI_wstrb("M12_AXI_wstrb"), M12_AXI_wlast("M12_AXI_wlast"), M12_AXI_wvalid("M12_AXI_wvalid"), M12_AXI_wready("M12_AXI_wready"), M12_AXI_bresp("M12_AXI_bresp"), M12_AXI_bvalid("M12_AXI_bvalid"), M12_AXI_bready("M12_AXI_bready"), M12_AXI_araddr("M12_AXI_araddr"), M12_AXI_arlen("M12_AXI_arlen"), M12_AXI_arsize("M12_AXI_arsize"), M12_AXI_arburst("M12_AXI_arburst"), M12_AXI_arlock("M12_AXI_arlock"), M12_AXI_arcache("M12_AXI_arcache"), M12_AXI_arprot("M12_AXI_arprot"), M12_AXI_arqos("M12_AXI_arqos"), M12_AXI_arvalid("M12_AXI_arvalid"), M12_AXI_arready("M12_AXI_arready"), M12_AXI_rdata("M12_AXI_rdata"), M12_AXI_rresp("M12_AXI_rresp"), M12_AXI_rlast("M12_AXI_rlast"), M12_AXI_rvalid("M12_AXI_rvalid"), M12_AXI_rready("M12_AXI_rready"), M13_AXI_awaddr("M13_AXI_awaddr"), M13_AXI_awlen("M13_AXI_awlen"), M13_AXI_awsize("M13_AXI_awsize"), M13_AXI_awburst("M13_AXI_awburst"), M13_AXI_awlock("M13_AXI_awlock"), M13_AXI_awcache("M13_AXI_awcache"), M13_AXI_awprot("M13_AXI_awprot"), M13_AXI_awqos("M13_AXI_awqos"), M13_AXI_awvalid("M13_AXI_awvalid"), M13_AXI_awready("M13_AXI_awready"), M13_AXI_wdata("M13_AXI_wdata"), M13_AXI_wstrb("M13_AXI_wstrb"), M13_AXI_wlast("M13_AXI_wlast"), M13_AXI_wvalid("M13_AXI_wvalid"), M13_AXI_wready("M13_AXI_wready"), M13_AXI_bresp("M13_AXI_bresp"), M13_AXI_bvalid("M13_AXI_bvalid"), M13_AXI_bready("M13_AXI_bready"), M13_AXI_araddr("M13_AXI_araddr"), M13_AXI_arlen("M13_AXI_arlen"), M13_AXI_arsize("M13_AXI_arsize"), M13_AXI_arburst("M13_AXI_arburst"), M13_AXI_arlock("M13_AXI_arlock"), M13_AXI_arcache("M13_AXI_arcache"), M13_AXI_arprot("M13_AXI_arprot"), M13_AXI_arqos("M13_AXI_arqos"), M13_AXI_arvalid("M13_AXI_arvalid"), M13_AXI_arready("M13_AXI_arready"), M13_AXI_rdata("M13_AXI_rdata"), M13_AXI_rresp("M13_AXI_rresp"), M13_AXI_rlast("M13_AXI_rlast"), M13_AXI_rvalid("M13_AXI_rvalid"), M13_AXI_rready("M13_AXI_rready"), M14_AXI_awaddr("M14_AXI_awaddr"), M14_AXI_awlen("M14_AXI_awlen"), M14_AXI_awsize("M14_AXI_awsize"), M14_AXI_awburst("M14_AXI_awburst"), M14_AXI_awlock("M14_AXI_awlock"), M14_AXI_awcache("M14_AXI_awcache"), M14_AXI_awprot("M14_AXI_awprot"), M14_AXI_awqos("M14_AXI_awqos"), M14_AXI_awvalid("M14_AXI_awvalid"), M14_AXI_awready("M14_AXI_awready"), M14_AXI_wdata("M14_AXI_wdata"), M14_AXI_wstrb("M14_AXI_wstrb"), M14_AXI_wlast("M14_AXI_wlast"), M14_AXI_wvalid("M14_AXI_wvalid"), M14_AXI_wready("M14_AXI_wready"), M14_AXI_bresp("M14_AXI_bresp"), M14_AXI_bvalid("M14_AXI_bvalid"), M14_AXI_bready("M14_AXI_bready"), M14_AXI_araddr("M14_AXI_araddr"), M14_AXI_arlen("M14_AXI_arlen"), M14_AXI_arsize("M14_AXI_arsize"), M14_AXI_arburst("M14_AXI_arburst"), M14_AXI_arlock("M14_AXI_arlock"), M14_AXI_arcache("M14_AXI_arcache"), M14_AXI_arprot("M14_AXI_arprot"), M14_AXI_arqos("M14_AXI_arqos"), M14_AXI_arvalid("M14_AXI_arvalid"), M14_AXI_arready("M14_AXI_arready"), M14_AXI_rdata("M14_AXI_rdata"), M14_AXI_rresp("M14_AXI_rresp"), M14_AXI_rlast("M14_AXI_rlast"), M14_AXI_rvalid("M14_AXI_rvalid"), M14_AXI_rready("M14_AXI_rready"), M15_AXI_awaddr("M15_AXI_awaddr"), M15_AXI_awlen("M15_AXI_awlen"), M15_AXI_awsize("M15_AXI_awsize"), M15_AXI_awburst("M15_AXI_awburst"), M15_AXI_awlock("M15_AXI_awlock"), M15_AXI_awcache("M15_AXI_awcache"), M15_AXI_awprot("M15_AXI_awprot"), M15_AXI_awqos("M15_AXI_awqos"), M15_AXI_awvalid("M15_AXI_awvalid"), M15_AXI_awready("M15_AXI_awready"), M15_AXI_wdata("M15_AXI_wdata"), M15_AXI_wstrb("M15_AXI_wstrb"), M15_AXI_wlast("M15_AXI_wlast"), M15_AXI_wvalid("M15_AXI_wvalid"), M15_AXI_wready("M15_AXI_wready"), M15_AXI_bresp("M15_AXI_bresp"), M15_AXI_bvalid("M15_AXI_bvalid"), M15_AXI_bready("M15_AXI_bready"), M15_AXI_araddr("M15_AXI_araddr"), M15_AXI_arlen("M15_AXI_arlen"), M15_AXI_arsize("M15_AXI_arsize"), M15_AXI_arburst("M15_AXI_arburst"), M15_AXI_arlock("M15_AXI_arlock"), M15_AXI_arcache("M15_AXI_arcache"), M15_AXI_arprot("M15_AXI_arprot"), M15_AXI_arqos("M15_AXI_arqos"), M15_AXI_arvalid("M15_AXI_arvalid"), M15_AXI_arready("M15_AXI_arready"), M15_AXI_rdata("M15_AXI_rdata"), M15_AXI_rresp("M15_AXI_rresp"), M15_AXI_rlast("M15_AXI_rlast"), M15_AXI_rvalid("M15_AXI_rvalid"), M15_AXI_rready("M15_AXI_rready"), M16_AXI_awaddr("M16_AXI_awaddr"), M16_AXI_awlen("M16_AXI_awlen"), M16_AXI_awsize("M16_AXI_awsize"), M16_AXI_awburst("M16_AXI_awburst"), M16_AXI_awlock("M16_AXI_awlock"), M16_AXI_awcache("M16_AXI_awcache"), M16_AXI_awprot("M16_AXI_awprot"), M16_AXI_awqos("M16_AXI_awqos"), M16_AXI_awvalid("M16_AXI_awvalid"), M16_AXI_awready("M16_AXI_awready"), M16_AXI_wdata("M16_AXI_wdata"), M16_AXI_wstrb("M16_AXI_wstrb"), M16_AXI_wlast("M16_AXI_wlast"), M16_AXI_wvalid("M16_AXI_wvalid"), M16_AXI_wready("M16_AXI_wready"), M16_AXI_bresp("M16_AXI_bresp"), M16_AXI_bvalid("M16_AXI_bvalid"), M16_AXI_bready("M16_AXI_bready"), M16_AXI_araddr("M16_AXI_araddr"), M16_AXI_arlen("M16_AXI_arlen"), M16_AXI_arsize("M16_AXI_arsize"), M16_AXI_arburst("M16_AXI_arburst"), M16_AXI_arlock("M16_AXI_arlock"), M16_AXI_arcache("M16_AXI_arcache"), M16_AXI_arprot("M16_AXI_arprot"), M16_AXI_arqos("M16_AXI_arqos"), M16_AXI_arvalid("M16_AXI_arvalid"), M16_AXI_arready("M16_AXI_arready"), M16_AXI_rdata("M16_AXI_rdata"), M16_AXI_rresp("M16_AXI_rresp"), M16_AXI_rlast("M16_AXI_rlast"), M16_AXI_rvalid("M16_AXI_rvalid"), M16_AXI_rready("M16_AXI_rready"), M17_AXI_awaddr("M17_AXI_awaddr"), M17_AXI_awlen("M17_AXI_awlen"), M17_AXI_awsize("M17_AXI_awsize"), M17_AXI_awburst("M17_AXI_awburst"), M17_AXI_awlock("M17_AXI_awlock"), M17_AXI_awcache("M17_AXI_awcache"), M17_AXI_awprot("M17_AXI_awprot"), M17_AXI_awqos("M17_AXI_awqos"), M17_AXI_awvalid("M17_AXI_awvalid"), M17_AXI_awready("M17_AXI_awready"), M17_AXI_wdata("M17_AXI_wdata"), M17_AXI_wstrb("M17_AXI_wstrb"), M17_AXI_wlast("M17_AXI_wlast"), M17_AXI_wvalid("M17_AXI_wvalid"), M17_AXI_wready("M17_AXI_wready"), M17_AXI_bresp("M17_AXI_bresp"), M17_AXI_bvalid("M17_AXI_bvalid"), M17_AXI_bready("M17_AXI_bready"), M17_AXI_araddr("M17_AXI_araddr"), M17_AXI_arlen("M17_AXI_arlen"), M17_AXI_arsize("M17_AXI_arsize"), M17_AXI_arburst("M17_AXI_arburst"), M17_AXI_arlock("M17_AXI_arlock"), M17_AXI_arcache("M17_AXI_arcache"), M17_AXI_arprot("M17_AXI_arprot"), M17_AXI_arqos("M17_AXI_arqos"), M17_AXI_arvalid("M17_AXI_arvalid"), M17_AXI_arready("M17_AXI_arready"), M17_AXI_rdata("M17_AXI_rdata"), M17_AXI_rresp("M17_AXI_rresp"), M17_AXI_rlast("M17_AXI_rlast"), M17_AXI_rvalid("M17_AXI_rvalid"), M17_AXI_rready("M17_AXI_rready"), M18_AXI_awaddr("M18_AXI_awaddr"), M18_AXI_awlen("M18_AXI_awlen"), M18_AXI_awsize("M18_AXI_awsize"), M18_AXI_awburst("M18_AXI_awburst"), M18_AXI_awlock("M18_AXI_awlock"), M18_AXI_awcache("M18_AXI_awcache"), M18_AXI_awprot("M18_AXI_awprot"), M18_AXI_awqos("M18_AXI_awqos"), M18_AXI_awvalid("M18_AXI_awvalid"), M18_AXI_awready("M18_AXI_awready"), M18_AXI_wdata("M18_AXI_wdata"), M18_AXI_wstrb("M18_AXI_wstrb"), M18_AXI_wlast("M18_AXI_wlast"), M18_AXI_wvalid("M18_AXI_wvalid"), M18_AXI_wready("M18_AXI_wready"), M18_AXI_bresp("M18_AXI_bresp"), M18_AXI_bvalid("M18_AXI_bvalid"), M18_AXI_bready("M18_AXI_bready"), M18_AXI_araddr("M18_AXI_araddr"), M18_AXI_arlen("M18_AXI_arlen"), M18_AXI_arsize("M18_AXI_arsize"), M18_AXI_arburst("M18_AXI_arburst"), M18_AXI_arlock("M18_AXI_arlock"), M18_AXI_arcache("M18_AXI_arcache"), M18_AXI_arprot("M18_AXI_arprot"), M18_AXI_arqos("M18_AXI_arqos"), M18_AXI_arvalid("M18_AXI_arvalid"), M18_AXI_arready("M18_AXI_arready"), M18_AXI_rdata("M18_AXI_rdata"), M18_AXI_rresp("M18_AXI_rresp"), M18_AXI_rlast("M18_AXI_rlast"), M18_AXI_rvalid("M18_AXI_rvalid"), M18_AXI_rready("M18_AXI_rready"), M19_AXI_awaddr("M19_AXI_awaddr"), M19_AXI_awlen("M19_AXI_awlen"), M19_AXI_awsize("M19_AXI_awsize"), M19_AXI_awburst("M19_AXI_awburst"), M19_AXI_awlock("M19_AXI_awlock"), M19_AXI_awcache("M19_AXI_awcache"), M19_AXI_awprot("M19_AXI_awprot"), M19_AXI_awqos("M19_AXI_awqos"), M19_AXI_awvalid("M19_AXI_awvalid"), M19_AXI_awready("M19_AXI_awready"), M19_AXI_wdata("M19_AXI_wdata"), M19_AXI_wstrb("M19_AXI_wstrb"), M19_AXI_wlast("M19_AXI_wlast"), M19_AXI_wvalid("M19_AXI_wvalid"), M19_AXI_wready("M19_AXI_wready"), M19_AXI_bresp("M19_AXI_bresp"), M19_AXI_bvalid("M19_AXI_bvalid"), M19_AXI_bready("M19_AXI_bready"), M19_AXI_araddr("M19_AXI_araddr"), M19_AXI_arlen("M19_AXI_arlen"), M19_AXI_arsize("M19_AXI_arsize"), M19_AXI_arburst("M19_AXI_arburst"), M19_AXI_arlock("M19_AXI_arlock"), M19_AXI_arcache("M19_AXI_arcache"), M19_AXI_arprot("M19_AXI_arprot"), M19_AXI_arqos("M19_AXI_arqos"), M19_AXI_arvalid("M19_AXI_arvalid"), M19_AXI_arready("M19_AXI_arready"), M19_AXI_rdata("M19_AXI_rdata"), M19_AXI_rresp("M19_AXI_rresp"), M19_AXI_rlast("M19_AXI_rlast"), M19_AXI_rvalid("M19_AXI_rvalid"), M19_AXI_rready("M19_AXI_rready"), M20_AXI_awaddr("M20_AXI_awaddr"), M20_AXI_awlen("M20_AXI_awlen"), M20_AXI_awsize("M20_AXI_awsize"), M20_AXI_awburst("M20_AXI_awburst"), M20_AXI_awlock("M20_AXI_awlock"), M20_AXI_awcache("M20_AXI_awcache"), M20_AXI_awprot("M20_AXI_awprot"), M20_AXI_awqos("M20_AXI_awqos"), M20_AXI_awvalid("M20_AXI_awvalid"), M20_AXI_awready("M20_AXI_awready"), M20_AXI_wdata("M20_AXI_wdata"), M20_AXI_wstrb("M20_AXI_wstrb"), M20_AXI_wlast("M20_AXI_wlast"), M20_AXI_wvalid("M20_AXI_wvalid"), M20_AXI_wready("M20_AXI_wready"), M20_AXI_bresp("M20_AXI_bresp"), M20_AXI_bvalid("M20_AXI_bvalid"), M20_AXI_bready("M20_AXI_bready"), M20_AXI_araddr("M20_AXI_araddr"), M20_AXI_arlen("M20_AXI_arlen"), M20_AXI_arsize("M20_AXI_arsize"), M20_AXI_arburst("M20_AXI_arburst"), M20_AXI_arlock("M20_AXI_arlock"), M20_AXI_arcache("M20_AXI_arcache"), M20_AXI_arprot("M20_AXI_arprot"), M20_AXI_arqos("M20_AXI_arqos"), M20_AXI_arvalid("M20_AXI_arvalid"), M20_AXI_arready("M20_AXI_arready"), M20_AXI_rdata("M20_AXI_rdata"), M20_AXI_rresp("M20_AXI_rresp"), M20_AXI_rlast("M20_AXI_rlast"), M20_AXI_rvalid("M20_AXI_rvalid"), M20_AXI_rready("M20_AXI_rready"), M21_AXI_awaddr("M21_AXI_awaddr"), M21_AXI_awlen("M21_AXI_awlen"), M21_AXI_awsize("M21_AXI_awsize"), M21_AXI_awburst("M21_AXI_awburst"), M21_AXI_awlock("M21_AXI_awlock"), M21_AXI_awcache("M21_AXI_awcache"), M21_AXI_awprot("M21_AXI_awprot"), M21_AXI_awqos("M21_AXI_awqos"), M21_AXI_awvalid("M21_AXI_awvalid"), M21_AXI_awready("M21_AXI_awready"), M21_AXI_wdata("M21_AXI_wdata"), M21_AXI_wstrb("M21_AXI_wstrb"), M21_AXI_wlast("M21_AXI_wlast"), M21_AXI_wvalid("M21_AXI_wvalid"), M21_AXI_wready("M21_AXI_wready"), M21_AXI_bresp("M21_AXI_bresp"), M21_AXI_bvalid("M21_AXI_bvalid"), M21_AXI_bready("M21_AXI_bready"), M21_AXI_araddr("M21_AXI_araddr"), M21_AXI_arlen("M21_AXI_arlen"), M21_AXI_arsize("M21_AXI_arsize"), M21_AXI_arburst("M21_AXI_arburst"), M21_AXI_arlock("M21_AXI_arlock"), M21_AXI_arcache("M21_AXI_arcache"), M21_AXI_arprot("M21_AXI_arprot"), M21_AXI_arqos("M21_AXI_arqos"), M21_AXI_arvalid("M21_AXI_arvalid"), M21_AXI_arready("M21_AXI_arready"), M21_AXI_rdata("M21_AXI_rdata"), M21_AXI_rresp("M21_AXI_rresp"), M21_AXI_rlast("M21_AXI_rlast"), M21_AXI_rvalid("M21_AXI_rvalid"), M21_AXI_rready("M21_AXI_rready"), M22_AXI_awaddr("M22_AXI_awaddr"), M22_AXI_awlen("M22_AXI_awlen"), M22_AXI_awsize("M22_AXI_awsize"), M22_AXI_awburst("M22_AXI_awburst"), M22_AXI_awlock("M22_AXI_awlock"), M22_AXI_awcache("M22_AXI_awcache"), M22_AXI_awprot("M22_AXI_awprot"), M22_AXI_awqos("M22_AXI_awqos"), M22_AXI_awvalid("M22_AXI_awvalid"), M22_AXI_awready("M22_AXI_awready"), M22_AXI_wdata("M22_AXI_wdata"), M22_AXI_wstrb("M22_AXI_wstrb"), M22_AXI_wlast("M22_AXI_wlast"), M22_AXI_wvalid("M22_AXI_wvalid"), M22_AXI_wready("M22_AXI_wready"), M22_AXI_bresp("M22_AXI_bresp"), M22_AXI_bvalid("M22_AXI_bvalid"), M22_AXI_bready("M22_AXI_bready"), M22_AXI_araddr("M22_AXI_araddr"), M22_AXI_arlen("M22_AXI_arlen"), M22_AXI_arsize("M22_AXI_arsize"), M22_AXI_arburst("M22_AXI_arburst"), M22_AXI_arlock("M22_AXI_arlock"), M22_AXI_arcache("M22_AXI_arcache"), M22_AXI_arprot("M22_AXI_arprot"), M22_AXI_arqos("M22_AXI_arqos"), M22_AXI_arvalid("M22_AXI_arvalid"), M22_AXI_arready("M22_AXI_arready"), M22_AXI_rdata("M22_AXI_rdata"), M22_AXI_rresp("M22_AXI_rresp"), M22_AXI_rlast("M22_AXI_rlast"), M22_AXI_rvalid("M22_AXI_rvalid"), M22_AXI_rready("M22_AXI_rready"), M23_AXI_awaddr("M23_AXI_awaddr"), M23_AXI_awlen("M23_AXI_awlen"), M23_AXI_awsize("M23_AXI_awsize"), M23_AXI_awburst("M23_AXI_awburst"), M23_AXI_awlock("M23_AXI_awlock"), M23_AXI_awcache("M23_AXI_awcache"), M23_AXI_awprot("M23_AXI_awprot"), M23_AXI_awqos("M23_AXI_awqos"), M23_AXI_awvalid("M23_AXI_awvalid"), M23_AXI_awready("M23_AXI_awready"), M23_AXI_wdata("M23_AXI_wdata"), M23_AXI_wstrb("M23_AXI_wstrb"), M23_AXI_wlast("M23_AXI_wlast"), M23_AXI_wvalid("M23_AXI_wvalid"), M23_AXI_wready("M23_AXI_wready"), M23_AXI_bresp("M23_AXI_bresp"), M23_AXI_bvalid("M23_AXI_bvalid"), M23_AXI_bready("M23_AXI_bready"), M23_AXI_araddr("M23_AXI_araddr"), M23_AXI_arlen("M23_AXI_arlen"), M23_AXI_arsize("M23_AXI_arsize"), M23_AXI_arburst("M23_AXI_arburst"), M23_AXI_arlock("M23_AXI_arlock"), M23_AXI_arcache("M23_AXI_arcache"), M23_AXI_arprot("M23_AXI_arprot"), M23_AXI_arqos("M23_AXI_arqos"), M23_AXI_arvalid("M23_AXI_arvalid"), M23_AXI_arready("M23_AXI_arready"), M23_AXI_rdata("M23_AXI_rdata"), M23_AXI_rresp("M23_AXI_rresp"), M23_AXI_rlast("M23_AXI_rlast"), M23_AXI_rvalid("M23_AXI_rvalid"), M23_AXI_rready("M23_AXI_rready")
{

  // initialize pins
  mp_impl->aclk(aclk);
  mp_impl->aresetn(aresetn);

  // initialize transactors
  mp_S00_AXI_transactor = NULL;
  mp_S00_AXI_awlock_converter = NULL;
  mp_S00_AXI_arlock_converter = NULL;
  mp_M00_AXI_transactor = NULL;
  mp_M00_AXI_awlock_converter = NULL;
  mp_M00_AXI_arlock_converter = NULL;
  mp_M01_AXI_transactor = NULL;
  mp_M01_AXI_awlock_converter = NULL;
  mp_M01_AXI_arlock_converter = NULL;
  mp_M02_AXI_transactor = NULL;
  mp_M02_AXI_awlock_converter = NULL;
  mp_M02_AXI_arlock_converter = NULL;
  mp_M03_AXI_transactor = NULL;
  mp_M03_AXI_awlock_converter = NULL;
  mp_M03_AXI_arlock_converter = NULL;
  mp_M04_AXI_transactor = NULL;
  mp_M04_AXI_awlock_converter = NULL;
  mp_M04_AXI_arlock_converter = NULL;
  mp_M05_AXI_transactor = NULL;
  mp_M05_AXI_awlock_converter = NULL;
  mp_M05_AXI_arlock_converter = NULL;
  mp_M06_AXI_transactor = NULL;
  mp_M06_AXI_awlock_converter = NULL;
  mp_M06_AXI_arlock_converter = NULL;
  mp_M07_AXI_transactor = NULL;
  mp_M07_AXI_awlock_converter = NULL;
  mp_M07_AXI_arlock_converter = NULL;
  mp_M08_AXI_transactor = NULL;
  mp_M08_AXI_awlock_converter = NULL;
  mp_M08_AXI_arlock_converter = NULL;
  mp_M09_AXI_transactor = NULL;
  mp_M09_AXI_awlock_converter = NULL;
  mp_M09_AXI_arlock_converter = NULL;
  mp_M10_AXI_transactor = NULL;
  mp_M10_AXI_awlock_converter = NULL;
  mp_M10_AXI_arlock_converter = NULL;
  mp_M11_AXI_transactor = NULL;
  mp_M11_AXI_awlock_converter = NULL;
  mp_M11_AXI_arlock_converter = NULL;
  mp_M12_AXI_transactor = NULL;
  mp_M12_AXI_awlock_converter = NULL;
  mp_M12_AXI_arlock_converter = NULL;
  mp_M13_AXI_transactor = NULL;
  mp_M13_AXI_awlock_converter = NULL;
  mp_M13_AXI_arlock_converter = NULL;
  mp_M14_AXI_transactor = NULL;
  mp_M14_AXI_awlock_converter = NULL;
  mp_M14_AXI_arlock_converter = NULL;
  mp_M15_AXI_transactor = NULL;
  mp_M15_AXI_awlock_converter = NULL;
  mp_M15_AXI_arlock_converter = NULL;
  mp_M16_AXI_transactor = NULL;
  mp_M16_AXI_awlock_converter = NULL;
  mp_M16_AXI_arlock_converter = NULL;
  mp_M17_AXI_transactor = NULL;
  mp_M17_AXI_awlock_converter = NULL;
  mp_M17_AXI_arlock_converter = NULL;
  mp_M18_AXI_transactor = NULL;
  mp_M18_AXI_awlock_converter = NULL;
  mp_M18_AXI_arlock_converter = NULL;
  mp_M19_AXI_transactor = NULL;
  mp_M19_AXI_awlock_converter = NULL;
  mp_M19_AXI_arlock_converter = NULL;
  mp_M20_AXI_transactor = NULL;
  mp_M20_AXI_awlock_converter = NULL;
  mp_M20_AXI_arlock_converter = NULL;
  mp_M21_AXI_transactor = NULL;
  mp_M21_AXI_awlock_converter = NULL;
  mp_M21_AXI_arlock_converter = NULL;
  mp_M22_AXI_transactor = NULL;
  mp_M22_AXI_awlock_converter = NULL;
  mp_M22_AXI_arlock_converter = NULL;
  mp_M23_AXI_transactor = NULL;
  mp_M23_AXI_awlock_converter = NULL;
  mp_M23_AXI_arlock_converter = NULL;

  // initialize socket stubs

}

void Multi_convo_core_smartconnect_0_0::before_end_of_elaboration()
{
  // configure 'S00_AXI' transactor

  if (xsc::utils::xsc_sim_manager::getInstanceParameterInt("Multi_convo_core_smartconnect_0_0", "S00_AXI_TLM_MODE") != 1)
  {
    // Instantiate Socket Stubs

  // 'S00_AXI' transactor parameters
    xsc::common_cpp::properties S00_AXI_transactor_param_props;
    S00_AXI_transactor_param_props.addLong("DATA_WIDTH", "32");
    S00_AXI_transactor_param_props.addLong("FREQ_HZ", "100000000");
    S00_AXI_transactor_param_props.addLong("ID_WIDTH", "0");
    S00_AXI_transactor_param_props.addLong("ADDR_WIDTH", "32");
    S00_AXI_transactor_param_props.addLong("AWUSER_WIDTH", "0");
    S00_AXI_transactor_param_props.addLong("ARUSER_WIDTH", "0");
    S00_AXI_transactor_param_props.addLong("WUSER_WIDTH", "0");
    S00_AXI_transactor_param_props.addLong("RUSER_WIDTH", "0");
    S00_AXI_transactor_param_props.addLong("BUSER_WIDTH", "0");
    S00_AXI_transactor_param_props.addLong("HAS_BURST", "1");
    S00_AXI_transactor_param_props.addLong("HAS_LOCK", "1");
    S00_AXI_transactor_param_props.addLong("HAS_PROT", "1");
    S00_AXI_transactor_param_props.addLong("HAS_CACHE", "1");
    S00_AXI_transactor_param_props.addLong("HAS_QOS", "1");
    S00_AXI_transactor_param_props.addLong("HAS_REGION", "0");
    S00_AXI_transactor_param_props.addLong("HAS_WSTRB", "1");
    S00_AXI_transactor_param_props.addLong("HAS_BRESP", "1");
    S00_AXI_transactor_param_props.addLong("HAS_RRESP", "1");
    S00_AXI_transactor_param_props.addLong("SUPPORTS_NARROW_BURST", "0");
    S00_AXI_transactor_param_props.addLong("NUM_READ_OUTSTANDING", "2");
    S00_AXI_transactor_param_props.addLong("NUM_WRITE_OUTSTANDING", "2");
    S00_AXI_transactor_param_props.addLong("MAX_BURST_LENGTH", "32");
    S00_AXI_transactor_param_props.addLong("NUM_READ_THREADS", "1");
    S00_AXI_transactor_param_props.addLong("NUM_WRITE_THREADS", "1");
    S00_AXI_transactor_param_props.addLong("RUSER_BITS_PER_BYTE", "0");
    S00_AXI_transactor_param_props.addLong("WUSER_BITS_PER_BYTE", "0");
    S00_AXI_transactor_param_props.addLong("HAS_SIZE", "1");
    S00_AXI_transactor_param_props.addLong("HAS_RESET", "1");
    S00_AXI_transactor_param_props.addFloat("PHASE", "0.0");
    S00_AXI_transactor_param_props.addString("PROTOCOL", "AXI4");
    S00_AXI_transactor_param_props.addString("READ_WRITE_MODE", "READ_WRITE");
    S00_AXI_transactor_param_props.addString("CLK_DOMAIN", "Multi_convo_core_processing_system7_0_0_FCLK_CLK0");

    mp_S00_AXI_transactor = new xtlm::xaximm_pin2xtlm_t<32,32,1,1,1,1,1,1>("S00_AXI_transactor", S00_AXI_transactor_param_props);

    // S00_AXI' transactor ports

    mp_S00_AXI_transactor->AWADDR(S00_AXI_awaddr);
    mp_S00_AXI_transactor->AWLEN(S00_AXI_awlen);
    mp_S00_AXI_transactor->AWSIZE(S00_AXI_awsize);
    mp_S00_AXI_transactor->AWBURST(S00_AXI_awburst);
    mp_S00_AXI_awlock_converter = new xsc::common::vectorN2scalar_converter<1>("S00_AXI_awlock_converter");
    mp_S00_AXI_awlock_converter->vector_in(S00_AXI_awlock);
    mp_S00_AXI_awlock_converter->scalar_out(m_S00_AXI_awlock_converter_signal);
    mp_S00_AXI_transactor->AWLOCK(m_S00_AXI_awlock_converter_signal);
    mp_S00_AXI_transactor->AWCACHE(S00_AXI_awcache);
    mp_S00_AXI_transactor->AWPROT(S00_AXI_awprot);
    mp_S00_AXI_transactor->AWQOS(S00_AXI_awqos);
    mp_S00_AXI_transactor->AWVALID(S00_AXI_awvalid);
    mp_S00_AXI_transactor->AWREADY(S00_AXI_awready);
    mp_S00_AXI_transactor->WDATA(S00_AXI_wdata);
    mp_S00_AXI_transactor->WSTRB(S00_AXI_wstrb);
    mp_S00_AXI_transactor->WLAST(S00_AXI_wlast);
    mp_S00_AXI_transactor->WVALID(S00_AXI_wvalid);
    mp_S00_AXI_transactor->WREADY(S00_AXI_wready);
    mp_S00_AXI_transactor->BRESP(S00_AXI_bresp);
    mp_S00_AXI_transactor->BVALID(S00_AXI_bvalid);
    mp_S00_AXI_transactor->BREADY(S00_AXI_bready);
    mp_S00_AXI_transactor->ARADDR(S00_AXI_araddr);
    mp_S00_AXI_transactor->ARLEN(S00_AXI_arlen);
    mp_S00_AXI_transactor->ARSIZE(S00_AXI_arsize);
    mp_S00_AXI_transactor->ARBURST(S00_AXI_arburst);
    mp_S00_AXI_arlock_converter = new xsc::common::vectorN2scalar_converter<1>("S00_AXI_arlock_converter");
    mp_S00_AXI_arlock_converter->vector_in(S00_AXI_arlock);
    mp_S00_AXI_arlock_converter->scalar_out(m_S00_AXI_arlock_converter_signal);
    mp_S00_AXI_transactor->ARLOCK(m_S00_AXI_arlock_converter_signal);
    mp_S00_AXI_transactor->ARCACHE(S00_AXI_arcache);
    mp_S00_AXI_transactor->ARPROT(S00_AXI_arprot);
    mp_S00_AXI_transactor->ARQOS(S00_AXI_arqos);
    mp_S00_AXI_transactor->ARVALID(S00_AXI_arvalid);
    mp_S00_AXI_transactor->ARREADY(S00_AXI_arready);
    mp_S00_AXI_transactor->RDATA(S00_AXI_rdata);
    mp_S00_AXI_transactor->RRESP(S00_AXI_rresp);
    mp_S00_AXI_transactor->RLAST(S00_AXI_rlast);
    mp_S00_AXI_transactor->RVALID(S00_AXI_rvalid);
    mp_S00_AXI_transactor->RREADY(S00_AXI_rready);
    mp_S00_AXI_transactor->CLK(aclk);
    mp_S00_AXI_transactor->RST(aresetn);

    // S00_AXI' transactor sockets

    mp_impl->S00_AXI_tlm_aximm_read_socket->bind(*(mp_S00_AXI_transactor->rd_socket));
    mp_impl->S00_AXI_tlm_aximm_write_socket->bind(*(mp_S00_AXI_transactor->wr_socket));
  }
  else
  {
  }

  // configure 'M00_AXI' transactor

  if (xsc::utils::xsc_sim_manager::getInstanceParameterInt("Multi_convo_core_smartconnect_0_0", "M00_AXI_TLM_MODE") != 1)
  {
    // Instantiate Socket Stubs

  // 'M00_AXI' transactor parameters
    xsc::common_cpp::properties M00_AXI_transactor_param_props;
    M00_AXI_transactor_param_props.addLong("DATA_WIDTH", "32");
    M00_AXI_transactor_param_props.addLong("FREQ_HZ", "100000000");
    M00_AXI_transactor_param_props.addLong("ID_WIDTH", "0");
    M00_AXI_transactor_param_props.addLong("ADDR_WIDTH", "12");
    M00_AXI_transactor_param_props.addLong("AWUSER_WIDTH", "0");
    M00_AXI_transactor_param_props.addLong("ARUSER_WIDTH", "0");
    M00_AXI_transactor_param_props.addLong("WUSER_WIDTH", "0");
    M00_AXI_transactor_param_props.addLong("RUSER_WIDTH", "0");
    M00_AXI_transactor_param_props.addLong("BUSER_WIDTH", "0");
    M00_AXI_transactor_param_props.addLong("HAS_BURST", "1");
    M00_AXI_transactor_param_props.addLong("HAS_LOCK", "1");
    M00_AXI_transactor_param_props.addLong("HAS_PROT", "1");
    M00_AXI_transactor_param_props.addLong("HAS_CACHE", "1");
    M00_AXI_transactor_param_props.addLong("HAS_QOS", "1");
    M00_AXI_transactor_param_props.addLong("HAS_REGION", "0");
    M00_AXI_transactor_param_props.addLong("HAS_WSTRB", "1");
    M00_AXI_transactor_param_props.addLong("HAS_BRESP", "1");
    M00_AXI_transactor_param_props.addLong("HAS_RRESP", "1");
    M00_AXI_transactor_param_props.addLong("SUPPORTS_NARROW_BURST", "0");
    M00_AXI_transactor_param_props.addLong("NUM_READ_OUTSTANDING", "2");
    M00_AXI_transactor_param_props.addLong("NUM_WRITE_OUTSTANDING", "2");
    M00_AXI_transactor_param_props.addLong("MAX_BURST_LENGTH", "256");
    M00_AXI_transactor_param_props.addLong("NUM_READ_THREADS", "1");
    M00_AXI_transactor_param_props.addLong("NUM_WRITE_THREADS", "1");
    M00_AXI_transactor_param_props.addLong("RUSER_BITS_PER_BYTE", "0");
    M00_AXI_transactor_param_props.addLong("WUSER_BITS_PER_BYTE", "0");
    M00_AXI_transactor_param_props.addLong("HAS_SIZE", "1");
    M00_AXI_transactor_param_props.addLong("HAS_RESET", "1");
    M00_AXI_transactor_param_props.addFloat("PHASE", "0.0");
    M00_AXI_transactor_param_props.addString("PROTOCOL", "AXI4");
    M00_AXI_transactor_param_props.addString("READ_WRITE_MODE", "READ_WRITE");
    M00_AXI_transactor_param_props.addString("CLK_DOMAIN", "Multi_convo_core_processing_system7_0_0_FCLK_CLK0");

    mp_M00_AXI_transactor = new xtlm::xaximm_xtlm2pin_t<32,12,1,1,1,1,1,1>("M00_AXI_transactor", M00_AXI_transactor_param_props);

    // M00_AXI' transactor ports

    mp_M00_AXI_transactor->AWADDR(M00_AXI_awaddr);
    mp_M00_AXI_transactor->AWLEN(M00_AXI_awlen);
    mp_M00_AXI_transactor->AWSIZE(M00_AXI_awsize);
    mp_M00_AXI_transactor->AWBURST(M00_AXI_awburst);
    mp_M00_AXI_awlock_converter = new xsc::common::scalar2vectorN_converter<1>("M00_AXI_awlock_converter");
    mp_M00_AXI_awlock_converter->scalar_in(m_M00_AXI_awlock_converter_signal);
    mp_M00_AXI_awlock_converter->vector_out(M00_AXI_awlock);
    mp_M00_AXI_transactor->AWLOCK(m_M00_AXI_awlock_converter_signal);
    mp_M00_AXI_transactor->AWCACHE(M00_AXI_awcache);
    mp_M00_AXI_transactor->AWPROT(M00_AXI_awprot);
    mp_M00_AXI_transactor->AWQOS(M00_AXI_awqos);
    mp_M00_AXI_transactor->AWVALID(M00_AXI_awvalid);
    mp_M00_AXI_transactor->AWREADY(M00_AXI_awready);
    mp_M00_AXI_transactor->WDATA(M00_AXI_wdata);
    mp_M00_AXI_transactor->WSTRB(M00_AXI_wstrb);
    mp_M00_AXI_transactor->WLAST(M00_AXI_wlast);
    mp_M00_AXI_transactor->WVALID(M00_AXI_wvalid);
    mp_M00_AXI_transactor->WREADY(M00_AXI_wready);
    mp_M00_AXI_transactor->BRESP(M00_AXI_bresp);
    mp_M00_AXI_transactor->BVALID(M00_AXI_bvalid);
    mp_M00_AXI_transactor->BREADY(M00_AXI_bready);
    mp_M00_AXI_transactor->ARADDR(M00_AXI_araddr);
    mp_M00_AXI_transactor->ARLEN(M00_AXI_arlen);
    mp_M00_AXI_transactor->ARSIZE(M00_AXI_arsize);
    mp_M00_AXI_transactor->ARBURST(M00_AXI_arburst);
    mp_M00_AXI_arlock_converter = new xsc::common::scalar2vectorN_converter<1>("M00_AXI_arlock_converter");
    mp_M00_AXI_arlock_converter->scalar_in(m_M00_AXI_arlock_converter_signal);
    mp_M00_AXI_arlock_converter->vector_out(M00_AXI_arlock);
    mp_M00_AXI_transactor->ARLOCK(m_M00_AXI_arlock_converter_signal);
    mp_M00_AXI_transactor->ARCACHE(M00_AXI_arcache);
    mp_M00_AXI_transactor->ARPROT(M00_AXI_arprot);
    mp_M00_AXI_transactor->ARQOS(M00_AXI_arqos);
    mp_M00_AXI_transactor->ARVALID(M00_AXI_arvalid);
    mp_M00_AXI_transactor->ARREADY(M00_AXI_arready);
    mp_M00_AXI_transactor->RDATA(M00_AXI_rdata);
    mp_M00_AXI_transactor->RRESP(M00_AXI_rresp);
    mp_M00_AXI_transactor->RLAST(M00_AXI_rlast);
    mp_M00_AXI_transactor->RVALID(M00_AXI_rvalid);
    mp_M00_AXI_transactor->RREADY(M00_AXI_rready);
    mp_M00_AXI_transactor->CLK(aclk);
    mp_M00_AXI_transactor->RST(aresetn);

    // M00_AXI' transactor sockets

    mp_impl->M00_AXI_tlm_aximm_read_socket->bind(*(mp_M00_AXI_transactor->rd_socket));
    mp_impl->M00_AXI_tlm_aximm_write_socket->bind(*(mp_M00_AXI_transactor->wr_socket));
  }
  else
  {
  }

  // configure 'M01_AXI' transactor

  if (xsc::utils::xsc_sim_manager::getInstanceParameterInt("Multi_convo_core_smartconnect_0_0", "M01_AXI_TLM_MODE") != 1)
  {
    // Instantiate Socket Stubs

  // 'M01_AXI' transactor parameters
    xsc::common_cpp::properties M01_AXI_transactor_param_props;
    M01_AXI_transactor_param_props.addLong("DATA_WIDTH", "32");
    M01_AXI_transactor_param_props.addLong("FREQ_HZ", "100000000");
    M01_AXI_transactor_param_props.addLong("ID_WIDTH", "0");
    M01_AXI_transactor_param_props.addLong("ADDR_WIDTH", "12");
    M01_AXI_transactor_param_props.addLong("AWUSER_WIDTH", "0");
    M01_AXI_transactor_param_props.addLong("ARUSER_WIDTH", "0");
    M01_AXI_transactor_param_props.addLong("WUSER_WIDTH", "0");
    M01_AXI_transactor_param_props.addLong("RUSER_WIDTH", "0");
    M01_AXI_transactor_param_props.addLong("BUSER_WIDTH", "0");
    M01_AXI_transactor_param_props.addLong("HAS_BURST", "1");
    M01_AXI_transactor_param_props.addLong("HAS_LOCK", "1");
    M01_AXI_transactor_param_props.addLong("HAS_PROT", "1");
    M01_AXI_transactor_param_props.addLong("HAS_CACHE", "1");
    M01_AXI_transactor_param_props.addLong("HAS_QOS", "1");
    M01_AXI_transactor_param_props.addLong("HAS_REGION", "0");
    M01_AXI_transactor_param_props.addLong("HAS_WSTRB", "1");
    M01_AXI_transactor_param_props.addLong("HAS_BRESP", "1");
    M01_AXI_transactor_param_props.addLong("HAS_RRESP", "1");
    M01_AXI_transactor_param_props.addLong("SUPPORTS_NARROW_BURST", "0");
    M01_AXI_transactor_param_props.addLong("NUM_READ_OUTSTANDING", "2");
    M01_AXI_transactor_param_props.addLong("NUM_WRITE_OUTSTANDING", "2");
    M01_AXI_transactor_param_props.addLong("MAX_BURST_LENGTH", "256");
    M01_AXI_transactor_param_props.addLong("NUM_READ_THREADS", "1");
    M01_AXI_transactor_param_props.addLong("NUM_WRITE_THREADS", "1");
    M01_AXI_transactor_param_props.addLong("RUSER_BITS_PER_BYTE", "0");
    M01_AXI_transactor_param_props.addLong("WUSER_BITS_PER_BYTE", "0");
    M01_AXI_transactor_param_props.addLong("HAS_SIZE", "1");
    M01_AXI_transactor_param_props.addLong("HAS_RESET", "1");
    M01_AXI_transactor_param_props.addFloat("PHASE", "0.0");
    M01_AXI_transactor_param_props.addString("PROTOCOL", "AXI4");
    M01_AXI_transactor_param_props.addString("READ_WRITE_MODE", "READ_WRITE");
    M01_AXI_transactor_param_props.addString("CLK_DOMAIN", "Multi_convo_core_processing_system7_0_0_FCLK_CLK0");

    mp_M01_AXI_transactor = new xtlm::xaximm_xtlm2pin_t<32,12,1,1,1,1,1,1>("M01_AXI_transactor", M01_AXI_transactor_param_props);

    // M01_AXI' transactor ports

    mp_M01_AXI_transactor->AWADDR(M01_AXI_awaddr);
    mp_M01_AXI_transactor->AWLEN(M01_AXI_awlen);
    mp_M01_AXI_transactor->AWSIZE(M01_AXI_awsize);
    mp_M01_AXI_transactor->AWBURST(M01_AXI_awburst);
    mp_M01_AXI_awlock_converter = new xsc::common::scalar2vectorN_converter<1>("M01_AXI_awlock_converter");
    mp_M01_AXI_awlock_converter->scalar_in(m_M01_AXI_awlock_converter_signal);
    mp_M01_AXI_awlock_converter->vector_out(M01_AXI_awlock);
    mp_M01_AXI_transactor->AWLOCK(m_M01_AXI_awlock_converter_signal);
    mp_M01_AXI_transactor->AWCACHE(M01_AXI_awcache);
    mp_M01_AXI_transactor->AWPROT(M01_AXI_awprot);
    mp_M01_AXI_transactor->AWQOS(M01_AXI_awqos);
    mp_M01_AXI_transactor->AWVALID(M01_AXI_awvalid);
    mp_M01_AXI_transactor->AWREADY(M01_AXI_awready);
    mp_M01_AXI_transactor->WDATA(M01_AXI_wdata);
    mp_M01_AXI_transactor->WSTRB(M01_AXI_wstrb);
    mp_M01_AXI_transactor->WLAST(M01_AXI_wlast);
    mp_M01_AXI_transactor->WVALID(M01_AXI_wvalid);
    mp_M01_AXI_transactor->WREADY(M01_AXI_wready);
    mp_M01_AXI_transactor->BRESP(M01_AXI_bresp);
    mp_M01_AXI_transactor->BVALID(M01_AXI_bvalid);
    mp_M01_AXI_transactor->BREADY(M01_AXI_bready);
    mp_M01_AXI_transactor->ARADDR(M01_AXI_araddr);
    mp_M01_AXI_transactor->ARLEN(M01_AXI_arlen);
    mp_M01_AXI_transactor->ARSIZE(M01_AXI_arsize);
    mp_M01_AXI_transactor->ARBURST(M01_AXI_arburst);
    mp_M01_AXI_arlock_converter = new xsc::common::scalar2vectorN_converter<1>("M01_AXI_arlock_converter");
    mp_M01_AXI_arlock_converter->scalar_in(m_M01_AXI_arlock_converter_signal);
    mp_M01_AXI_arlock_converter->vector_out(M01_AXI_arlock);
    mp_M01_AXI_transactor->ARLOCK(m_M01_AXI_arlock_converter_signal);
    mp_M01_AXI_transactor->ARCACHE(M01_AXI_arcache);
    mp_M01_AXI_transactor->ARPROT(M01_AXI_arprot);
    mp_M01_AXI_transactor->ARQOS(M01_AXI_arqos);
    mp_M01_AXI_transactor->ARVALID(M01_AXI_arvalid);
    mp_M01_AXI_transactor->ARREADY(M01_AXI_arready);
    mp_M01_AXI_transactor->RDATA(M01_AXI_rdata);
    mp_M01_AXI_transactor->RRESP(M01_AXI_rresp);
    mp_M01_AXI_transactor->RLAST(M01_AXI_rlast);
    mp_M01_AXI_transactor->RVALID(M01_AXI_rvalid);
    mp_M01_AXI_transactor->RREADY(M01_AXI_rready);
    mp_M01_AXI_transactor->CLK(aclk);
    mp_M01_AXI_transactor->RST(aresetn);

    // M01_AXI' transactor sockets

    mp_impl->M01_AXI_tlm_aximm_read_socket->bind(*(mp_M01_AXI_transactor->rd_socket));
    mp_impl->M01_AXI_tlm_aximm_write_socket->bind(*(mp_M01_AXI_transactor->wr_socket));
  }
  else
  {
  }

  // configure 'M02_AXI' transactor

  if (xsc::utils::xsc_sim_manager::getInstanceParameterInt("Multi_convo_core_smartconnect_0_0", "M02_AXI_TLM_MODE") != 1)
  {
    // Instantiate Socket Stubs

  // 'M02_AXI' transactor parameters
    xsc::common_cpp::properties M02_AXI_transactor_param_props;
    M02_AXI_transactor_param_props.addLong("DATA_WIDTH", "32");
    M02_AXI_transactor_param_props.addLong("FREQ_HZ", "100000000");
    M02_AXI_transactor_param_props.addLong("ID_WIDTH", "0");
    M02_AXI_transactor_param_props.addLong("ADDR_WIDTH", "12");
    M02_AXI_transactor_param_props.addLong("AWUSER_WIDTH", "0");
    M02_AXI_transactor_param_props.addLong("ARUSER_WIDTH", "0");
    M02_AXI_transactor_param_props.addLong("WUSER_WIDTH", "0");
    M02_AXI_transactor_param_props.addLong("RUSER_WIDTH", "0");
    M02_AXI_transactor_param_props.addLong("BUSER_WIDTH", "0");
    M02_AXI_transactor_param_props.addLong("HAS_BURST", "1");
    M02_AXI_transactor_param_props.addLong("HAS_LOCK", "1");
    M02_AXI_transactor_param_props.addLong("HAS_PROT", "1");
    M02_AXI_transactor_param_props.addLong("HAS_CACHE", "1");
    M02_AXI_transactor_param_props.addLong("HAS_QOS", "1");
    M02_AXI_transactor_param_props.addLong("HAS_REGION", "0");
    M02_AXI_transactor_param_props.addLong("HAS_WSTRB", "1");
    M02_AXI_transactor_param_props.addLong("HAS_BRESP", "1");
    M02_AXI_transactor_param_props.addLong("HAS_RRESP", "1");
    M02_AXI_transactor_param_props.addLong("SUPPORTS_NARROW_BURST", "0");
    M02_AXI_transactor_param_props.addLong("NUM_READ_OUTSTANDING", "2");
    M02_AXI_transactor_param_props.addLong("NUM_WRITE_OUTSTANDING", "2");
    M02_AXI_transactor_param_props.addLong("MAX_BURST_LENGTH", "256");
    M02_AXI_transactor_param_props.addLong("NUM_READ_THREADS", "1");
    M02_AXI_transactor_param_props.addLong("NUM_WRITE_THREADS", "1");
    M02_AXI_transactor_param_props.addLong("RUSER_BITS_PER_BYTE", "0");
    M02_AXI_transactor_param_props.addLong("WUSER_BITS_PER_BYTE", "0");
    M02_AXI_transactor_param_props.addLong("HAS_SIZE", "1");
    M02_AXI_transactor_param_props.addLong("HAS_RESET", "1");
    M02_AXI_transactor_param_props.addFloat("PHASE", "0.0");
    M02_AXI_transactor_param_props.addString("PROTOCOL", "AXI4");
    M02_AXI_transactor_param_props.addString("READ_WRITE_MODE", "READ_WRITE");
    M02_AXI_transactor_param_props.addString("CLK_DOMAIN", "Multi_convo_core_processing_system7_0_0_FCLK_CLK0");

    mp_M02_AXI_transactor = new xtlm::xaximm_xtlm2pin_t<32,12,1,1,1,1,1,1>("M02_AXI_transactor", M02_AXI_transactor_param_props);

    // M02_AXI' transactor ports

    mp_M02_AXI_transactor->AWADDR(M02_AXI_awaddr);
    mp_M02_AXI_transactor->AWLEN(M02_AXI_awlen);
    mp_M02_AXI_transactor->AWSIZE(M02_AXI_awsize);
    mp_M02_AXI_transactor->AWBURST(M02_AXI_awburst);
    mp_M02_AXI_awlock_converter = new xsc::common::scalar2vectorN_converter<1>("M02_AXI_awlock_converter");
    mp_M02_AXI_awlock_converter->scalar_in(m_M02_AXI_awlock_converter_signal);
    mp_M02_AXI_awlock_converter->vector_out(M02_AXI_awlock);
    mp_M02_AXI_transactor->AWLOCK(m_M02_AXI_awlock_converter_signal);
    mp_M02_AXI_transactor->AWCACHE(M02_AXI_awcache);
    mp_M02_AXI_transactor->AWPROT(M02_AXI_awprot);
    mp_M02_AXI_transactor->AWQOS(M02_AXI_awqos);
    mp_M02_AXI_transactor->AWVALID(M02_AXI_awvalid);
    mp_M02_AXI_transactor->AWREADY(M02_AXI_awready);
    mp_M02_AXI_transactor->WDATA(M02_AXI_wdata);
    mp_M02_AXI_transactor->WSTRB(M02_AXI_wstrb);
    mp_M02_AXI_transactor->WLAST(M02_AXI_wlast);
    mp_M02_AXI_transactor->WVALID(M02_AXI_wvalid);
    mp_M02_AXI_transactor->WREADY(M02_AXI_wready);
    mp_M02_AXI_transactor->BRESP(M02_AXI_bresp);
    mp_M02_AXI_transactor->BVALID(M02_AXI_bvalid);
    mp_M02_AXI_transactor->BREADY(M02_AXI_bready);
    mp_M02_AXI_transactor->ARADDR(M02_AXI_araddr);
    mp_M02_AXI_transactor->ARLEN(M02_AXI_arlen);
    mp_M02_AXI_transactor->ARSIZE(M02_AXI_arsize);
    mp_M02_AXI_transactor->ARBURST(M02_AXI_arburst);
    mp_M02_AXI_arlock_converter = new xsc::common::scalar2vectorN_converter<1>("M02_AXI_arlock_converter");
    mp_M02_AXI_arlock_converter->scalar_in(m_M02_AXI_arlock_converter_signal);
    mp_M02_AXI_arlock_converter->vector_out(M02_AXI_arlock);
    mp_M02_AXI_transactor->ARLOCK(m_M02_AXI_arlock_converter_signal);
    mp_M02_AXI_transactor->ARCACHE(M02_AXI_arcache);
    mp_M02_AXI_transactor->ARPROT(M02_AXI_arprot);
    mp_M02_AXI_transactor->ARQOS(M02_AXI_arqos);
    mp_M02_AXI_transactor->ARVALID(M02_AXI_arvalid);
    mp_M02_AXI_transactor->ARREADY(M02_AXI_arready);
    mp_M02_AXI_transactor->RDATA(M02_AXI_rdata);
    mp_M02_AXI_transactor->RRESP(M02_AXI_rresp);
    mp_M02_AXI_transactor->RLAST(M02_AXI_rlast);
    mp_M02_AXI_transactor->RVALID(M02_AXI_rvalid);
    mp_M02_AXI_transactor->RREADY(M02_AXI_rready);
    mp_M02_AXI_transactor->CLK(aclk);
    mp_M02_AXI_transactor->RST(aresetn);

    // M02_AXI' transactor sockets

    mp_impl->M02_AXI_tlm_aximm_read_socket->bind(*(mp_M02_AXI_transactor->rd_socket));
    mp_impl->M02_AXI_tlm_aximm_write_socket->bind(*(mp_M02_AXI_transactor->wr_socket));
  }
  else
  {
  }

  // configure 'M03_AXI' transactor

  if (xsc::utils::xsc_sim_manager::getInstanceParameterInt("Multi_convo_core_smartconnect_0_0", "M03_AXI_TLM_MODE") != 1)
  {
    // Instantiate Socket Stubs

  // 'M03_AXI' transactor parameters
    xsc::common_cpp::properties M03_AXI_transactor_param_props;
    M03_AXI_transactor_param_props.addLong("DATA_WIDTH", "32");
    M03_AXI_transactor_param_props.addLong("FREQ_HZ", "100000000");
    M03_AXI_transactor_param_props.addLong("ID_WIDTH", "0");
    M03_AXI_transactor_param_props.addLong("ADDR_WIDTH", "12");
    M03_AXI_transactor_param_props.addLong("AWUSER_WIDTH", "0");
    M03_AXI_transactor_param_props.addLong("ARUSER_WIDTH", "0");
    M03_AXI_transactor_param_props.addLong("WUSER_WIDTH", "0");
    M03_AXI_transactor_param_props.addLong("RUSER_WIDTH", "0");
    M03_AXI_transactor_param_props.addLong("BUSER_WIDTH", "0");
    M03_AXI_transactor_param_props.addLong("HAS_BURST", "1");
    M03_AXI_transactor_param_props.addLong("HAS_LOCK", "1");
    M03_AXI_transactor_param_props.addLong("HAS_PROT", "1");
    M03_AXI_transactor_param_props.addLong("HAS_CACHE", "1");
    M03_AXI_transactor_param_props.addLong("HAS_QOS", "1");
    M03_AXI_transactor_param_props.addLong("HAS_REGION", "0");
    M03_AXI_transactor_param_props.addLong("HAS_WSTRB", "1");
    M03_AXI_transactor_param_props.addLong("HAS_BRESP", "1");
    M03_AXI_transactor_param_props.addLong("HAS_RRESP", "1");
    M03_AXI_transactor_param_props.addLong("SUPPORTS_NARROW_BURST", "0");
    M03_AXI_transactor_param_props.addLong("NUM_READ_OUTSTANDING", "2");
    M03_AXI_transactor_param_props.addLong("NUM_WRITE_OUTSTANDING", "2");
    M03_AXI_transactor_param_props.addLong("MAX_BURST_LENGTH", "256");
    M03_AXI_transactor_param_props.addLong("NUM_READ_THREADS", "1");
    M03_AXI_transactor_param_props.addLong("NUM_WRITE_THREADS", "1");
    M03_AXI_transactor_param_props.addLong("RUSER_BITS_PER_BYTE", "0");
    M03_AXI_transactor_param_props.addLong("WUSER_BITS_PER_BYTE", "0");
    M03_AXI_transactor_param_props.addLong("HAS_SIZE", "1");
    M03_AXI_transactor_param_props.addLong("HAS_RESET", "1");
    M03_AXI_transactor_param_props.addFloat("PHASE", "0.0");
    M03_AXI_transactor_param_props.addString("PROTOCOL", "AXI4");
    M03_AXI_transactor_param_props.addString("READ_WRITE_MODE", "READ_WRITE");
    M03_AXI_transactor_param_props.addString("CLK_DOMAIN", "Multi_convo_core_processing_system7_0_0_FCLK_CLK0");

    mp_M03_AXI_transactor = new xtlm::xaximm_xtlm2pin_t<32,12,1,1,1,1,1,1>("M03_AXI_transactor", M03_AXI_transactor_param_props);

    // M03_AXI' transactor ports

    mp_M03_AXI_transactor->AWADDR(M03_AXI_awaddr);
    mp_M03_AXI_transactor->AWLEN(M03_AXI_awlen);
    mp_M03_AXI_transactor->AWSIZE(M03_AXI_awsize);
    mp_M03_AXI_transactor->AWBURST(M03_AXI_awburst);
    mp_M03_AXI_awlock_converter = new xsc::common::scalar2vectorN_converter<1>("M03_AXI_awlock_converter");
    mp_M03_AXI_awlock_converter->scalar_in(m_M03_AXI_awlock_converter_signal);
    mp_M03_AXI_awlock_converter->vector_out(M03_AXI_awlock);
    mp_M03_AXI_transactor->AWLOCK(m_M03_AXI_awlock_converter_signal);
    mp_M03_AXI_transactor->AWCACHE(M03_AXI_awcache);
    mp_M03_AXI_transactor->AWPROT(M03_AXI_awprot);
    mp_M03_AXI_transactor->AWQOS(M03_AXI_awqos);
    mp_M03_AXI_transactor->AWVALID(M03_AXI_awvalid);
    mp_M03_AXI_transactor->AWREADY(M03_AXI_awready);
    mp_M03_AXI_transactor->WDATA(M03_AXI_wdata);
    mp_M03_AXI_transactor->WSTRB(M03_AXI_wstrb);
    mp_M03_AXI_transactor->WLAST(M03_AXI_wlast);
    mp_M03_AXI_transactor->WVALID(M03_AXI_wvalid);
    mp_M03_AXI_transactor->WREADY(M03_AXI_wready);
    mp_M03_AXI_transactor->BRESP(M03_AXI_bresp);
    mp_M03_AXI_transactor->BVALID(M03_AXI_bvalid);
    mp_M03_AXI_transactor->BREADY(M03_AXI_bready);
    mp_M03_AXI_transactor->ARADDR(M03_AXI_araddr);
    mp_M03_AXI_transactor->ARLEN(M03_AXI_arlen);
    mp_M03_AXI_transactor->ARSIZE(M03_AXI_arsize);
    mp_M03_AXI_transactor->ARBURST(M03_AXI_arburst);
    mp_M03_AXI_arlock_converter = new xsc::common::scalar2vectorN_converter<1>("M03_AXI_arlock_converter");
    mp_M03_AXI_arlock_converter->scalar_in(m_M03_AXI_arlock_converter_signal);
    mp_M03_AXI_arlock_converter->vector_out(M03_AXI_arlock);
    mp_M03_AXI_transactor->ARLOCK(m_M03_AXI_arlock_converter_signal);
    mp_M03_AXI_transactor->ARCACHE(M03_AXI_arcache);
    mp_M03_AXI_transactor->ARPROT(M03_AXI_arprot);
    mp_M03_AXI_transactor->ARQOS(M03_AXI_arqos);
    mp_M03_AXI_transactor->ARVALID(M03_AXI_arvalid);
    mp_M03_AXI_transactor->ARREADY(M03_AXI_arready);
    mp_M03_AXI_transactor->RDATA(M03_AXI_rdata);
    mp_M03_AXI_transactor->RRESP(M03_AXI_rresp);
    mp_M03_AXI_transactor->RLAST(M03_AXI_rlast);
    mp_M03_AXI_transactor->RVALID(M03_AXI_rvalid);
    mp_M03_AXI_transactor->RREADY(M03_AXI_rready);
    mp_M03_AXI_transactor->CLK(aclk);
    mp_M03_AXI_transactor->RST(aresetn);

    // M03_AXI' transactor sockets

    mp_impl->M03_AXI_tlm_aximm_read_socket->bind(*(mp_M03_AXI_transactor->rd_socket));
    mp_impl->M03_AXI_tlm_aximm_write_socket->bind(*(mp_M03_AXI_transactor->wr_socket));
  }
  else
  {
  }

  // configure 'M04_AXI' transactor

  if (xsc::utils::xsc_sim_manager::getInstanceParameterInt("Multi_convo_core_smartconnect_0_0", "M04_AXI_TLM_MODE") != 1)
  {
    // Instantiate Socket Stubs

  // 'M04_AXI' transactor parameters
    xsc::common_cpp::properties M04_AXI_transactor_param_props;
    M04_AXI_transactor_param_props.addLong("DATA_WIDTH", "32");
    M04_AXI_transactor_param_props.addLong("FREQ_HZ", "100000000");
    M04_AXI_transactor_param_props.addLong("ID_WIDTH", "0");
    M04_AXI_transactor_param_props.addLong("ADDR_WIDTH", "12");
    M04_AXI_transactor_param_props.addLong("AWUSER_WIDTH", "0");
    M04_AXI_transactor_param_props.addLong("ARUSER_WIDTH", "0");
    M04_AXI_transactor_param_props.addLong("WUSER_WIDTH", "0");
    M04_AXI_transactor_param_props.addLong("RUSER_WIDTH", "0");
    M04_AXI_transactor_param_props.addLong("BUSER_WIDTH", "0");
    M04_AXI_transactor_param_props.addLong("HAS_BURST", "1");
    M04_AXI_transactor_param_props.addLong("HAS_LOCK", "1");
    M04_AXI_transactor_param_props.addLong("HAS_PROT", "1");
    M04_AXI_transactor_param_props.addLong("HAS_CACHE", "1");
    M04_AXI_transactor_param_props.addLong("HAS_QOS", "1");
    M04_AXI_transactor_param_props.addLong("HAS_REGION", "0");
    M04_AXI_transactor_param_props.addLong("HAS_WSTRB", "1");
    M04_AXI_transactor_param_props.addLong("HAS_BRESP", "1");
    M04_AXI_transactor_param_props.addLong("HAS_RRESP", "1");
    M04_AXI_transactor_param_props.addLong("SUPPORTS_NARROW_BURST", "0");
    M04_AXI_transactor_param_props.addLong("NUM_READ_OUTSTANDING", "2");
    M04_AXI_transactor_param_props.addLong("NUM_WRITE_OUTSTANDING", "2");
    M04_AXI_transactor_param_props.addLong("MAX_BURST_LENGTH", "256");
    M04_AXI_transactor_param_props.addLong("NUM_READ_THREADS", "1");
    M04_AXI_transactor_param_props.addLong("NUM_WRITE_THREADS", "1");
    M04_AXI_transactor_param_props.addLong("RUSER_BITS_PER_BYTE", "0");
    M04_AXI_transactor_param_props.addLong("WUSER_BITS_PER_BYTE", "0");
    M04_AXI_transactor_param_props.addLong("HAS_SIZE", "1");
    M04_AXI_transactor_param_props.addLong("HAS_RESET", "1");
    M04_AXI_transactor_param_props.addFloat("PHASE", "0.0");
    M04_AXI_transactor_param_props.addString("PROTOCOL", "AXI4");
    M04_AXI_transactor_param_props.addString("READ_WRITE_MODE", "READ_WRITE");
    M04_AXI_transactor_param_props.addString("CLK_DOMAIN", "Multi_convo_core_processing_system7_0_0_FCLK_CLK0");

    mp_M04_AXI_transactor = new xtlm::xaximm_xtlm2pin_t<32,12,1,1,1,1,1,1>("M04_AXI_transactor", M04_AXI_transactor_param_props);

    // M04_AXI' transactor ports

    mp_M04_AXI_transactor->AWADDR(M04_AXI_awaddr);
    mp_M04_AXI_transactor->AWLEN(M04_AXI_awlen);
    mp_M04_AXI_transactor->AWSIZE(M04_AXI_awsize);
    mp_M04_AXI_transactor->AWBURST(M04_AXI_awburst);
    mp_M04_AXI_awlock_converter = new xsc::common::scalar2vectorN_converter<1>("M04_AXI_awlock_converter");
    mp_M04_AXI_awlock_converter->scalar_in(m_M04_AXI_awlock_converter_signal);
    mp_M04_AXI_awlock_converter->vector_out(M04_AXI_awlock);
    mp_M04_AXI_transactor->AWLOCK(m_M04_AXI_awlock_converter_signal);
    mp_M04_AXI_transactor->AWCACHE(M04_AXI_awcache);
    mp_M04_AXI_transactor->AWPROT(M04_AXI_awprot);
    mp_M04_AXI_transactor->AWQOS(M04_AXI_awqos);
    mp_M04_AXI_transactor->AWVALID(M04_AXI_awvalid);
    mp_M04_AXI_transactor->AWREADY(M04_AXI_awready);
    mp_M04_AXI_transactor->WDATA(M04_AXI_wdata);
    mp_M04_AXI_transactor->WSTRB(M04_AXI_wstrb);
    mp_M04_AXI_transactor->WLAST(M04_AXI_wlast);
    mp_M04_AXI_transactor->WVALID(M04_AXI_wvalid);
    mp_M04_AXI_transactor->WREADY(M04_AXI_wready);
    mp_M04_AXI_transactor->BRESP(M04_AXI_bresp);
    mp_M04_AXI_transactor->BVALID(M04_AXI_bvalid);
    mp_M04_AXI_transactor->BREADY(M04_AXI_bready);
    mp_M04_AXI_transactor->ARADDR(M04_AXI_araddr);
    mp_M04_AXI_transactor->ARLEN(M04_AXI_arlen);
    mp_M04_AXI_transactor->ARSIZE(M04_AXI_arsize);
    mp_M04_AXI_transactor->ARBURST(M04_AXI_arburst);
    mp_M04_AXI_arlock_converter = new xsc::common::scalar2vectorN_converter<1>("M04_AXI_arlock_converter");
    mp_M04_AXI_arlock_converter->scalar_in(m_M04_AXI_arlock_converter_signal);
    mp_M04_AXI_arlock_converter->vector_out(M04_AXI_arlock);
    mp_M04_AXI_transactor->ARLOCK(m_M04_AXI_arlock_converter_signal);
    mp_M04_AXI_transactor->ARCACHE(M04_AXI_arcache);
    mp_M04_AXI_transactor->ARPROT(M04_AXI_arprot);
    mp_M04_AXI_transactor->ARQOS(M04_AXI_arqos);
    mp_M04_AXI_transactor->ARVALID(M04_AXI_arvalid);
    mp_M04_AXI_transactor->ARREADY(M04_AXI_arready);
    mp_M04_AXI_transactor->RDATA(M04_AXI_rdata);
    mp_M04_AXI_transactor->RRESP(M04_AXI_rresp);
    mp_M04_AXI_transactor->RLAST(M04_AXI_rlast);
    mp_M04_AXI_transactor->RVALID(M04_AXI_rvalid);
    mp_M04_AXI_transactor->RREADY(M04_AXI_rready);
    mp_M04_AXI_transactor->CLK(aclk);
    mp_M04_AXI_transactor->RST(aresetn);

    // M04_AXI' transactor sockets

    mp_impl->M04_AXI_tlm_aximm_read_socket->bind(*(mp_M04_AXI_transactor->rd_socket));
    mp_impl->M04_AXI_tlm_aximm_write_socket->bind(*(mp_M04_AXI_transactor->wr_socket));
  }
  else
  {
  }

  // configure 'M05_AXI' transactor

  if (xsc::utils::xsc_sim_manager::getInstanceParameterInt("Multi_convo_core_smartconnect_0_0", "M05_AXI_TLM_MODE") != 1)
  {
    // Instantiate Socket Stubs

  // 'M05_AXI' transactor parameters
    xsc::common_cpp::properties M05_AXI_transactor_param_props;
    M05_AXI_transactor_param_props.addLong("DATA_WIDTH", "32");
    M05_AXI_transactor_param_props.addLong("FREQ_HZ", "100000000");
    M05_AXI_transactor_param_props.addLong("ID_WIDTH", "0");
    M05_AXI_transactor_param_props.addLong("ADDR_WIDTH", "12");
    M05_AXI_transactor_param_props.addLong("AWUSER_WIDTH", "0");
    M05_AXI_transactor_param_props.addLong("ARUSER_WIDTH", "0");
    M05_AXI_transactor_param_props.addLong("WUSER_WIDTH", "0");
    M05_AXI_transactor_param_props.addLong("RUSER_WIDTH", "0");
    M05_AXI_transactor_param_props.addLong("BUSER_WIDTH", "0");
    M05_AXI_transactor_param_props.addLong("HAS_BURST", "1");
    M05_AXI_transactor_param_props.addLong("HAS_LOCK", "1");
    M05_AXI_transactor_param_props.addLong("HAS_PROT", "1");
    M05_AXI_transactor_param_props.addLong("HAS_CACHE", "1");
    M05_AXI_transactor_param_props.addLong("HAS_QOS", "1");
    M05_AXI_transactor_param_props.addLong("HAS_REGION", "0");
    M05_AXI_transactor_param_props.addLong("HAS_WSTRB", "1");
    M05_AXI_transactor_param_props.addLong("HAS_BRESP", "1");
    M05_AXI_transactor_param_props.addLong("HAS_RRESP", "1");
    M05_AXI_transactor_param_props.addLong("SUPPORTS_NARROW_BURST", "0");
    M05_AXI_transactor_param_props.addLong("NUM_READ_OUTSTANDING", "2");
    M05_AXI_transactor_param_props.addLong("NUM_WRITE_OUTSTANDING", "2");
    M05_AXI_transactor_param_props.addLong("MAX_BURST_LENGTH", "256");
    M05_AXI_transactor_param_props.addLong("NUM_READ_THREADS", "1");
    M05_AXI_transactor_param_props.addLong("NUM_WRITE_THREADS", "1");
    M05_AXI_transactor_param_props.addLong("RUSER_BITS_PER_BYTE", "0");
    M05_AXI_transactor_param_props.addLong("WUSER_BITS_PER_BYTE", "0");
    M05_AXI_transactor_param_props.addLong("HAS_SIZE", "1");
    M05_AXI_transactor_param_props.addLong("HAS_RESET", "1");
    M05_AXI_transactor_param_props.addFloat("PHASE", "0.0");
    M05_AXI_transactor_param_props.addString("PROTOCOL", "AXI4");
    M05_AXI_transactor_param_props.addString("READ_WRITE_MODE", "READ_WRITE");
    M05_AXI_transactor_param_props.addString("CLK_DOMAIN", "Multi_convo_core_processing_system7_0_0_FCLK_CLK0");

    mp_M05_AXI_transactor = new xtlm::xaximm_xtlm2pin_t<32,12,1,1,1,1,1,1>("M05_AXI_transactor", M05_AXI_transactor_param_props);

    // M05_AXI' transactor ports

    mp_M05_AXI_transactor->AWADDR(M05_AXI_awaddr);
    mp_M05_AXI_transactor->AWLEN(M05_AXI_awlen);
    mp_M05_AXI_transactor->AWSIZE(M05_AXI_awsize);
    mp_M05_AXI_transactor->AWBURST(M05_AXI_awburst);
    mp_M05_AXI_awlock_converter = new xsc::common::scalar2vectorN_converter<1>("M05_AXI_awlock_converter");
    mp_M05_AXI_awlock_converter->scalar_in(m_M05_AXI_awlock_converter_signal);
    mp_M05_AXI_awlock_converter->vector_out(M05_AXI_awlock);
    mp_M05_AXI_transactor->AWLOCK(m_M05_AXI_awlock_converter_signal);
    mp_M05_AXI_transactor->AWCACHE(M05_AXI_awcache);
    mp_M05_AXI_transactor->AWPROT(M05_AXI_awprot);
    mp_M05_AXI_transactor->AWQOS(M05_AXI_awqos);
    mp_M05_AXI_transactor->AWVALID(M05_AXI_awvalid);
    mp_M05_AXI_transactor->AWREADY(M05_AXI_awready);
    mp_M05_AXI_transactor->WDATA(M05_AXI_wdata);
    mp_M05_AXI_transactor->WSTRB(M05_AXI_wstrb);
    mp_M05_AXI_transactor->WLAST(M05_AXI_wlast);
    mp_M05_AXI_transactor->WVALID(M05_AXI_wvalid);
    mp_M05_AXI_transactor->WREADY(M05_AXI_wready);
    mp_M05_AXI_transactor->BRESP(M05_AXI_bresp);
    mp_M05_AXI_transactor->BVALID(M05_AXI_bvalid);
    mp_M05_AXI_transactor->BREADY(M05_AXI_bready);
    mp_M05_AXI_transactor->ARADDR(M05_AXI_araddr);
    mp_M05_AXI_transactor->ARLEN(M05_AXI_arlen);
    mp_M05_AXI_transactor->ARSIZE(M05_AXI_arsize);
    mp_M05_AXI_transactor->ARBURST(M05_AXI_arburst);
    mp_M05_AXI_arlock_converter = new xsc::common::scalar2vectorN_converter<1>("M05_AXI_arlock_converter");
    mp_M05_AXI_arlock_converter->scalar_in(m_M05_AXI_arlock_converter_signal);
    mp_M05_AXI_arlock_converter->vector_out(M05_AXI_arlock);
    mp_M05_AXI_transactor->ARLOCK(m_M05_AXI_arlock_converter_signal);
    mp_M05_AXI_transactor->ARCACHE(M05_AXI_arcache);
    mp_M05_AXI_transactor->ARPROT(M05_AXI_arprot);
    mp_M05_AXI_transactor->ARQOS(M05_AXI_arqos);
    mp_M05_AXI_transactor->ARVALID(M05_AXI_arvalid);
    mp_M05_AXI_transactor->ARREADY(M05_AXI_arready);
    mp_M05_AXI_transactor->RDATA(M05_AXI_rdata);
    mp_M05_AXI_transactor->RRESP(M05_AXI_rresp);
    mp_M05_AXI_transactor->RLAST(M05_AXI_rlast);
    mp_M05_AXI_transactor->RVALID(M05_AXI_rvalid);
    mp_M05_AXI_transactor->RREADY(M05_AXI_rready);
    mp_M05_AXI_transactor->CLK(aclk);
    mp_M05_AXI_transactor->RST(aresetn);

    // M05_AXI' transactor sockets

    mp_impl->M05_AXI_tlm_aximm_read_socket->bind(*(mp_M05_AXI_transactor->rd_socket));
    mp_impl->M05_AXI_tlm_aximm_write_socket->bind(*(mp_M05_AXI_transactor->wr_socket));
  }
  else
  {
  }

  // configure 'M06_AXI' transactor

  if (xsc::utils::xsc_sim_manager::getInstanceParameterInt("Multi_convo_core_smartconnect_0_0", "M06_AXI_TLM_MODE") != 1)
  {
    // Instantiate Socket Stubs

  // 'M06_AXI' transactor parameters
    xsc::common_cpp::properties M06_AXI_transactor_param_props;
    M06_AXI_transactor_param_props.addLong("DATA_WIDTH", "32");
    M06_AXI_transactor_param_props.addLong("FREQ_HZ", "100000000");
    M06_AXI_transactor_param_props.addLong("ID_WIDTH", "0");
    M06_AXI_transactor_param_props.addLong("ADDR_WIDTH", "12");
    M06_AXI_transactor_param_props.addLong("AWUSER_WIDTH", "0");
    M06_AXI_transactor_param_props.addLong("ARUSER_WIDTH", "0");
    M06_AXI_transactor_param_props.addLong("WUSER_WIDTH", "0");
    M06_AXI_transactor_param_props.addLong("RUSER_WIDTH", "0");
    M06_AXI_transactor_param_props.addLong("BUSER_WIDTH", "0");
    M06_AXI_transactor_param_props.addLong("HAS_BURST", "1");
    M06_AXI_transactor_param_props.addLong("HAS_LOCK", "1");
    M06_AXI_transactor_param_props.addLong("HAS_PROT", "1");
    M06_AXI_transactor_param_props.addLong("HAS_CACHE", "1");
    M06_AXI_transactor_param_props.addLong("HAS_QOS", "1");
    M06_AXI_transactor_param_props.addLong("HAS_REGION", "0");
    M06_AXI_transactor_param_props.addLong("HAS_WSTRB", "1");
    M06_AXI_transactor_param_props.addLong("HAS_BRESP", "1");
    M06_AXI_transactor_param_props.addLong("HAS_RRESP", "1");
    M06_AXI_transactor_param_props.addLong("SUPPORTS_NARROW_BURST", "0");
    M06_AXI_transactor_param_props.addLong("NUM_READ_OUTSTANDING", "2");
    M06_AXI_transactor_param_props.addLong("NUM_WRITE_OUTSTANDING", "2");
    M06_AXI_transactor_param_props.addLong("MAX_BURST_LENGTH", "256");
    M06_AXI_transactor_param_props.addLong("NUM_READ_THREADS", "1");
    M06_AXI_transactor_param_props.addLong("NUM_WRITE_THREADS", "1");
    M06_AXI_transactor_param_props.addLong("RUSER_BITS_PER_BYTE", "0");
    M06_AXI_transactor_param_props.addLong("WUSER_BITS_PER_BYTE", "0");
    M06_AXI_transactor_param_props.addLong("HAS_SIZE", "1");
    M06_AXI_transactor_param_props.addLong("HAS_RESET", "1");
    M06_AXI_transactor_param_props.addFloat("PHASE", "0.0");
    M06_AXI_transactor_param_props.addString("PROTOCOL", "AXI4");
    M06_AXI_transactor_param_props.addString("READ_WRITE_MODE", "READ_WRITE");
    M06_AXI_transactor_param_props.addString("CLK_DOMAIN", "Multi_convo_core_processing_system7_0_0_FCLK_CLK0");

    mp_M06_AXI_transactor = new xtlm::xaximm_xtlm2pin_t<32,12,1,1,1,1,1,1>("M06_AXI_transactor", M06_AXI_transactor_param_props);

    // M06_AXI' transactor ports

    mp_M06_AXI_transactor->AWADDR(M06_AXI_awaddr);
    mp_M06_AXI_transactor->AWLEN(M06_AXI_awlen);
    mp_M06_AXI_transactor->AWSIZE(M06_AXI_awsize);
    mp_M06_AXI_transactor->AWBURST(M06_AXI_awburst);
    mp_M06_AXI_awlock_converter = new xsc::common::scalar2vectorN_converter<1>("M06_AXI_awlock_converter");
    mp_M06_AXI_awlock_converter->scalar_in(m_M06_AXI_awlock_converter_signal);
    mp_M06_AXI_awlock_converter->vector_out(M06_AXI_awlock);
    mp_M06_AXI_transactor->AWLOCK(m_M06_AXI_awlock_converter_signal);
    mp_M06_AXI_transactor->AWCACHE(M06_AXI_awcache);
    mp_M06_AXI_transactor->AWPROT(M06_AXI_awprot);
    mp_M06_AXI_transactor->AWQOS(M06_AXI_awqos);
    mp_M06_AXI_transactor->AWVALID(M06_AXI_awvalid);
    mp_M06_AXI_transactor->AWREADY(M06_AXI_awready);
    mp_M06_AXI_transactor->WDATA(M06_AXI_wdata);
    mp_M06_AXI_transactor->WSTRB(M06_AXI_wstrb);
    mp_M06_AXI_transactor->WLAST(M06_AXI_wlast);
    mp_M06_AXI_transactor->WVALID(M06_AXI_wvalid);
    mp_M06_AXI_transactor->WREADY(M06_AXI_wready);
    mp_M06_AXI_transactor->BRESP(M06_AXI_bresp);
    mp_M06_AXI_transactor->BVALID(M06_AXI_bvalid);
    mp_M06_AXI_transactor->BREADY(M06_AXI_bready);
    mp_M06_AXI_transactor->ARADDR(M06_AXI_araddr);
    mp_M06_AXI_transactor->ARLEN(M06_AXI_arlen);
    mp_M06_AXI_transactor->ARSIZE(M06_AXI_arsize);
    mp_M06_AXI_transactor->ARBURST(M06_AXI_arburst);
    mp_M06_AXI_arlock_converter = new xsc::common::scalar2vectorN_converter<1>("M06_AXI_arlock_converter");
    mp_M06_AXI_arlock_converter->scalar_in(m_M06_AXI_arlock_converter_signal);
    mp_M06_AXI_arlock_converter->vector_out(M06_AXI_arlock);
    mp_M06_AXI_transactor->ARLOCK(m_M06_AXI_arlock_converter_signal);
    mp_M06_AXI_transactor->ARCACHE(M06_AXI_arcache);
    mp_M06_AXI_transactor->ARPROT(M06_AXI_arprot);
    mp_M06_AXI_transactor->ARQOS(M06_AXI_arqos);
    mp_M06_AXI_transactor->ARVALID(M06_AXI_arvalid);
    mp_M06_AXI_transactor->ARREADY(M06_AXI_arready);
    mp_M06_AXI_transactor->RDATA(M06_AXI_rdata);
    mp_M06_AXI_transactor->RRESP(M06_AXI_rresp);
    mp_M06_AXI_transactor->RLAST(M06_AXI_rlast);
    mp_M06_AXI_transactor->RVALID(M06_AXI_rvalid);
    mp_M06_AXI_transactor->RREADY(M06_AXI_rready);
    mp_M06_AXI_transactor->CLK(aclk);
    mp_M06_AXI_transactor->RST(aresetn);

    // M06_AXI' transactor sockets

    mp_impl->M06_AXI_tlm_aximm_read_socket->bind(*(mp_M06_AXI_transactor->rd_socket));
    mp_impl->M06_AXI_tlm_aximm_write_socket->bind(*(mp_M06_AXI_transactor->wr_socket));
  }
  else
  {
  }

  // configure 'M07_AXI' transactor

  if (xsc::utils::xsc_sim_manager::getInstanceParameterInt("Multi_convo_core_smartconnect_0_0", "M07_AXI_TLM_MODE") != 1)
  {
    // Instantiate Socket Stubs

  // 'M07_AXI' transactor parameters
    xsc::common_cpp::properties M07_AXI_transactor_param_props;
    M07_AXI_transactor_param_props.addLong("DATA_WIDTH", "32");
    M07_AXI_transactor_param_props.addLong("FREQ_HZ", "100000000");
    M07_AXI_transactor_param_props.addLong("ID_WIDTH", "0");
    M07_AXI_transactor_param_props.addLong("ADDR_WIDTH", "12");
    M07_AXI_transactor_param_props.addLong("AWUSER_WIDTH", "0");
    M07_AXI_transactor_param_props.addLong("ARUSER_WIDTH", "0");
    M07_AXI_transactor_param_props.addLong("WUSER_WIDTH", "0");
    M07_AXI_transactor_param_props.addLong("RUSER_WIDTH", "0");
    M07_AXI_transactor_param_props.addLong("BUSER_WIDTH", "0");
    M07_AXI_transactor_param_props.addLong("HAS_BURST", "1");
    M07_AXI_transactor_param_props.addLong("HAS_LOCK", "1");
    M07_AXI_transactor_param_props.addLong("HAS_PROT", "1");
    M07_AXI_transactor_param_props.addLong("HAS_CACHE", "1");
    M07_AXI_transactor_param_props.addLong("HAS_QOS", "1");
    M07_AXI_transactor_param_props.addLong("HAS_REGION", "0");
    M07_AXI_transactor_param_props.addLong("HAS_WSTRB", "1");
    M07_AXI_transactor_param_props.addLong("HAS_BRESP", "1");
    M07_AXI_transactor_param_props.addLong("HAS_RRESP", "1");
    M07_AXI_transactor_param_props.addLong("SUPPORTS_NARROW_BURST", "0");
    M07_AXI_transactor_param_props.addLong("NUM_READ_OUTSTANDING", "2");
    M07_AXI_transactor_param_props.addLong("NUM_WRITE_OUTSTANDING", "2");
    M07_AXI_transactor_param_props.addLong("MAX_BURST_LENGTH", "256");
    M07_AXI_transactor_param_props.addLong("NUM_READ_THREADS", "1");
    M07_AXI_transactor_param_props.addLong("NUM_WRITE_THREADS", "1");
    M07_AXI_transactor_param_props.addLong("RUSER_BITS_PER_BYTE", "0");
    M07_AXI_transactor_param_props.addLong("WUSER_BITS_PER_BYTE", "0");
    M07_AXI_transactor_param_props.addLong("HAS_SIZE", "1");
    M07_AXI_transactor_param_props.addLong("HAS_RESET", "1");
    M07_AXI_transactor_param_props.addFloat("PHASE", "0.0");
    M07_AXI_transactor_param_props.addString("PROTOCOL", "AXI4");
    M07_AXI_transactor_param_props.addString("READ_WRITE_MODE", "READ_WRITE");
    M07_AXI_transactor_param_props.addString("CLK_DOMAIN", "Multi_convo_core_processing_system7_0_0_FCLK_CLK0");

    mp_M07_AXI_transactor = new xtlm::xaximm_xtlm2pin_t<32,12,1,1,1,1,1,1>("M07_AXI_transactor", M07_AXI_transactor_param_props);

    // M07_AXI' transactor ports

    mp_M07_AXI_transactor->AWADDR(M07_AXI_awaddr);
    mp_M07_AXI_transactor->AWLEN(M07_AXI_awlen);
    mp_M07_AXI_transactor->AWSIZE(M07_AXI_awsize);
    mp_M07_AXI_transactor->AWBURST(M07_AXI_awburst);
    mp_M07_AXI_awlock_converter = new xsc::common::scalar2vectorN_converter<1>("M07_AXI_awlock_converter");
    mp_M07_AXI_awlock_converter->scalar_in(m_M07_AXI_awlock_converter_signal);
    mp_M07_AXI_awlock_converter->vector_out(M07_AXI_awlock);
    mp_M07_AXI_transactor->AWLOCK(m_M07_AXI_awlock_converter_signal);
    mp_M07_AXI_transactor->AWCACHE(M07_AXI_awcache);
    mp_M07_AXI_transactor->AWPROT(M07_AXI_awprot);
    mp_M07_AXI_transactor->AWQOS(M07_AXI_awqos);
    mp_M07_AXI_transactor->AWVALID(M07_AXI_awvalid);
    mp_M07_AXI_transactor->AWREADY(M07_AXI_awready);
    mp_M07_AXI_transactor->WDATA(M07_AXI_wdata);
    mp_M07_AXI_transactor->WSTRB(M07_AXI_wstrb);
    mp_M07_AXI_transactor->WLAST(M07_AXI_wlast);
    mp_M07_AXI_transactor->WVALID(M07_AXI_wvalid);
    mp_M07_AXI_transactor->WREADY(M07_AXI_wready);
    mp_M07_AXI_transactor->BRESP(M07_AXI_bresp);
    mp_M07_AXI_transactor->BVALID(M07_AXI_bvalid);
    mp_M07_AXI_transactor->BREADY(M07_AXI_bready);
    mp_M07_AXI_transactor->ARADDR(M07_AXI_araddr);
    mp_M07_AXI_transactor->ARLEN(M07_AXI_arlen);
    mp_M07_AXI_transactor->ARSIZE(M07_AXI_arsize);
    mp_M07_AXI_transactor->ARBURST(M07_AXI_arburst);
    mp_M07_AXI_arlock_converter = new xsc::common::scalar2vectorN_converter<1>("M07_AXI_arlock_converter");
    mp_M07_AXI_arlock_converter->scalar_in(m_M07_AXI_arlock_converter_signal);
    mp_M07_AXI_arlock_converter->vector_out(M07_AXI_arlock);
    mp_M07_AXI_transactor->ARLOCK(m_M07_AXI_arlock_converter_signal);
    mp_M07_AXI_transactor->ARCACHE(M07_AXI_arcache);
    mp_M07_AXI_transactor->ARPROT(M07_AXI_arprot);
    mp_M07_AXI_transactor->ARQOS(M07_AXI_arqos);
    mp_M07_AXI_transactor->ARVALID(M07_AXI_arvalid);
    mp_M07_AXI_transactor->ARREADY(M07_AXI_arready);
    mp_M07_AXI_transactor->RDATA(M07_AXI_rdata);
    mp_M07_AXI_transactor->RRESP(M07_AXI_rresp);
    mp_M07_AXI_transactor->RLAST(M07_AXI_rlast);
    mp_M07_AXI_transactor->RVALID(M07_AXI_rvalid);
    mp_M07_AXI_transactor->RREADY(M07_AXI_rready);
    mp_M07_AXI_transactor->CLK(aclk);
    mp_M07_AXI_transactor->RST(aresetn);

    // M07_AXI' transactor sockets

    mp_impl->M07_AXI_tlm_aximm_read_socket->bind(*(mp_M07_AXI_transactor->rd_socket));
    mp_impl->M07_AXI_tlm_aximm_write_socket->bind(*(mp_M07_AXI_transactor->wr_socket));
  }
  else
  {
  }

  // configure 'M08_AXI' transactor

  if (xsc::utils::xsc_sim_manager::getInstanceParameterInt("Multi_convo_core_smartconnect_0_0", "M08_AXI_TLM_MODE") != 1)
  {
    // Instantiate Socket Stubs

  // 'M08_AXI' transactor parameters
    xsc::common_cpp::properties M08_AXI_transactor_param_props;
    M08_AXI_transactor_param_props.addLong("DATA_WIDTH", "32");
    M08_AXI_transactor_param_props.addLong("FREQ_HZ", "100000000");
    M08_AXI_transactor_param_props.addLong("ID_WIDTH", "0");
    M08_AXI_transactor_param_props.addLong("ADDR_WIDTH", "12");
    M08_AXI_transactor_param_props.addLong("AWUSER_WIDTH", "0");
    M08_AXI_transactor_param_props.addLong("ARUSER_WIDTH", "0");
    M08_AXI_transactor_param_props.addLong("WUSER_WIDTH", "0");
    M08_AXI_transactor_param_props.addLong("RUSER_WIDTH", "0");
    M08_AXI_transactor_param_props.addLong("BUSER_WIDTH", "0");
    M08_AXI_transactor_param_props.addLong("HAS_BURST", "1");
    M08_AXI_transactor_param_props.addLong("HAS_LOCK", "1");
    M08_AXI_transactor_param_props.addLong("HAS_PROT", "1");
    M08_AXI_transactor_param_props.addLong("HAS_CACHE", "1");
    M08_AXI_transactor_param_props.addLong("HAS_QOS", "1");
    M08_AXI_transactor_param_props.addLong("HAS_REGION", "0");
    M08_AXI_transactor_param_props.addLong("HAS_WSTRB", "1");
    M08_AXI_transactor_param_props.addLong("HAS_BRESP", "1");
    M08_AXI_transactor_param_props.addLong("HAS_RRESP", "1");
    M08_AXI_transactor_param_props.addLong("SUPPORTS_NARROW_BURST", "0");
    M08_AXI_transactor_param_props.addLong("NUM_READ_OUTSTANDING", "2");
    M08_AXI_transactor_param_props.addLong("NUM_WRITE_OUTSTANDING", "2");
    M08_AXI_transactor_param_props.addLong("MAX_BURST_LENGTH", "256");
    M08_AXI_transactor_param_props.addLong("NUM_READ_THREADS", "1");
    M08_AXI_transactor_param_props.addLong("NUM_WRITE_THREADS", "1");
    M08_AXI_transactor_param_props.addLong("RUSER_BITS_PER_BYTE", "0");
    M08_AXI_transactor_param_props.addLong("WUSER_BITS_PER_BYTE", "0");
    M08_AXI_transactor_param_props.addLong("HAS_SIZE", "1");
    M08_AXI_transactor_param_props.addLong("HAS_RESET", "1");
    M08_AXI_transactor_param_props.addFloat("PHASE", "0.0");
    M08_AXI_transactor_param_props.addString("PROTOCOL", "AXI4");
    M08_AXI_transactor_param_props.addString("READ_WRITE_MODE", "READ_WRITE");
    M08_AXI_transactor_param_props.addString("CLK_DOMAIN", "Multi_convo_core_processing_system7_0_0_FCLK_CLK0");

    mp_M08_AXI_transactor = new xtlm::xaximm_xtlm2pin_t<32,12,1,1,1,1,1,1>("M08_AXI_transactor", M08_AXI_transactor_param_props);

    // M08_AXI' transactor ports

    mp_M08_AXI_transactor->AWADDR(M08_AXI_awaddr);
    mp_M08_AXI_transactor->AWLEN(M08_AXI_awlen);
    mp_M08_AXI_transactor->AWSIZE(M08_AXI_awsize);
    mp_M08_AXI_transactor->AWBURST(M08_AXI_awburst);
    mp_M08_AXI_awlock_converter = new xsc::common::scalar2vectorN_converter<1>("M08_AXI_awlock_converter");
    mp_M08_AXI_awlock_converter->scalar_in(m_M08_AXI_awlock_converter_signal);
    mp_M08_AXI_awlock_converter->vector_out(M08_AXI_awlock);
    mp_M08_AXI_transactor->AWLOCK(m_M08_AXI_awlock_converter_signal);
    mp_M08_AXI_transactor->AWCACHE(M08_AXI_awcache);
    mp_M08_AXI_transactor->AWPROT(M08_AXI_awprot);
    mp_M08_AXI_transactor->AWQOS(M08_AXI_awqos);
    mp_M08_AXI_transactor->AWVALID(M08_AXI_awvalid);
    mp_M08_AXI_transactor->AWREADY(M08_AXI_awready);
    mp_M08_AXI_transactor->WDATA(M08_AXI_wdata);
    mp_M08_AXI_transactor->WSTRB(M08_AXI_wstrb);
    mp_M08_AXI_transactor->WLAST(M08_AXI_wlast);
    mp_M08_AXI_transactor->WVALID(M08_AXI_wvalid);
    mp_M08_AXI_transactor->WREADY(M08_AXI_wready);
    mp_M08_AXI_transactor->BRESP(M08_AXI_bresp);
    mp_M08_AXI_transactor->BVALID(M08_AXI_bvalid);
    mp_M08_AXI_transactor->BREADY(M08_AXI_bready);
    mp_M08_AXI_transactor->ARADDR(M08_AXI_araddr);
    mp_M08_AXI_transactor->ARLEN(M08_AXI_arlen);
    mp_M08_AXI_transactor->ARSIZE(M08_AXI_arsize);
    mp_M08_AXI_transactor->ARBURST(M08_AXI_arburst);
    mp_M08_AXI_arlock_converter = new xsc::common::scalar2vectorN_converter<1>("M08_AXI_arlock_converter");
    mp_M08_AXI_arlock_converter->scalar_in(m_M08_AXI_arlock_converter_signal);
    mp_M08_AXI_arlock_converter->vector_out(M08_AXI_arlock);
    mp_M08_AXI_transactor->ARLOCK(m_M08_AXI_arlock_converter_signal);
    mp_M08_AXI_transactor->ARCACHE(M08_AXI_arcache);
    mp_M08_AXI_transactor->ARPROT(M08_AXI_arprot);
    mp_M08_AXI_transactor->ARQOS(M08_AXI_arqos);
    mp_M08_AXI_transactor->ARVALID(M08_AXI_arvalid);
    mp_M08_AXI_transactor->ARREADY(M08_AXI_arready);
    mp_M08_AXI_transactor->RDATA(M08_AXI_rdata);
    mp_M08_AXI_transactor->RRESP(M08_AXI_rresp);
    mp_M08_AXI_transactor->RLAST(M08_AXI_rlast);
    mp_M08_AXI_transactor->RVALID(M08_AXI_rvalid);
    mp_M08_AXI_transactor->RREADY(M08_AXI_rready);
    mp_M08_AXI_transactor->CLK(aclk);
    mp_M08_AXI_transactor->RST(aresetn);

    // M08_AXI' transactor sockets

    mp_impl->M08_AXI_tlm_aximm_read_socket->bind(*(mp_M08_AXI_transactor->rd_socket));
    mp_impl->M08_AXI_tlm_aximm_write_socket->bind(*(mp_M08_AXI_transactor->wr_socket));
  }
  else
  {
  }

  // configure 'M09_AXI' transactor

  if (xsc::utils::xsc_sim_manager::getInstanceParameterInt("Multi_convo_core_smartconnect_0_0", "M09_AXI_TLM_MODE") != 1)
  {
    // Instantiate Socket Stubs

  // 'M09_AXI' transactor parameters
    xsc::common_cpp::properties M09_AXI_transactor_param_props;
    M09_AXI_transactor_param_props.addLong("DATA_WIDTH", "32");
    M09_AXI_transactor_param_props.addLong("FREQ_HZ", "100000000");
    M09_AXI_transactor_param_props.addLong("ID_WIDTH", "0");
    M09_AXI_transactor_param_props.addLong("ADDR_WIDTH", "12");
    M09_AXI_transactor_param_props.addLong("AWUSER_WIDTH", "0");
    M09_AXI_transactor_param_props.addLong("ARUSER_WIDTH", "0");
    M09_AXI_transactor_param_props.addLong("WUSER_WIDTH", "0");
    M09_AXI_transactor_param_props.addLong("RUSER_WIDTH", "0");
    M09_AXI_transactor_param_props.addLong("BUSER_WIDTH", "0");
    M09_AXI_transactor_param_props.addLong("HAS_BURST", "1");
    M09_AXI_transactor_param_props.addLong("HAS_LOCK", "1");
    M09_AXI_transactor_param_props.addLong("HAS_PROT", "1");
    M09_AXI_transactor_param_props.addLong("HAS_CACHE", "1");
    M09_AXI_transactor_param_props.addLong("HAS_QOS", "1");
    M09_AXI_transactor_param_props.addLong("HAS_REGION", "0");
    M09_AXI_transactor_param_props.addLong("HAS_WSTRB", "1");
    M09_AXI_transactor_param_props.addLong("HAS_BRESP", "1");
    M09_AXI_transactor_param_props.addLong("HAS_RRESP", "1");
    M09_AXI_transactor_param_props.addLong("SUPPORTS_NARROW_BURST", "0");
    M09_AXI_transactor_param_props.addLong("NUM_READ_OUTSTANDING", "2");
    M09_AXI_transactor_param_props.addLong("NUM_WRITE_OUTSTANDING", "2");
    M09_AXI_transactor_param_props.addLong("MAX_BURST_LENGTH", "256");
    M09_AXI_transactor_param_props.addLong("NUM_READ_THREADS", "1");
    M09_AXI_transactor_param_props.addLong("NUM_WRITE_THREADS", "1");
    M09_AXI_transactor_param_props.addLong("RUSER_BITS_PER_BYTE", "0");
    M09_AXI_transactor_param_props.addLong("WUSER_BITS_PER_BYTE", "0");
    M09_AXI_transactor_param_props.addLong("HAS_SIZE", "1");
    M09_AXI_transactor_param_props.addLong("HAS_RESET", "1");
    M09_AXI_transactor_param_props.addFloat("PHASE", "0.0");
    M09_AXI_transactor_param_props.addString("PROTOCOL", "AXI4");
    M09_AXI_transactor_param_props.addString("READ_WRITE_MODE", "READ_WRITE");
    M09_AXI_transactor_param_props.addString("CLK_DOMAIN", "Multi_convo_core_processing_system7_0_0_FCLK_CLK0");

    mp_M09_AXI_transactor = new xtlm::xaximm_xtlm2pin_t<32,12,1,1,1,1,1,1>("M09_AXI_transactor", M09_AXI_transactor_param_props);

    // M09_AXI' transactor ports

    mp_M09_AXI_transactor->AWADDR(M09_AXI_awaddr);
    mp_M09_AXI_transactor->AWLEN(M09_AXI_awlen);
    mp_M09_AXI_transactor->AWSIZE(M09_AXI_awsize);
    mp_M09_AXI_transactor->AWBURST(M09_AXI_awburst);
    mp_M09_AXI_awlock_converter = new xsc::common::scalar2vectorN_converter<1>("M09_AXI_awlock_converter");
    mp_M09_AXI_awlock_converter->scalar_in(m_M09_AXI_awlock_converter_signal);
    mp_M09_AXI_awlock_converter->vector_out(M09_AXI_awlock);
    mp_M09_AXI_transactor->AWLOCK(m_M09_AXI_awlock_converter_signal);
    mp_M09_AXI_transactor->AWCACHE(M09_AXI_awcache);
    mp_M09_AXI_transactor->AWPROT(M09_AXI_awprot);
    mp_M09_AXI_transactor->AWQOS(M09_AXI_awqos);
    mp_M09_AXI_transactor->AWVALID(M09_AXI_awvalid);
    mp_M09_AXI_transactor->AWREADY(M09_AXI_awready);
    mp_M09_AXI_transactor->WDATA(M09_AXI_wdata);
    mp_M09_AXI_transactor->WSTRB(M09_AXI_wstrb);
    mp_M09_AXI_transactor->WLAST(M09_AXI_wlast);
    mp_M09_AXI_transactor->WVALID(M09_AXI_wvalid);
    mp_M09_AXI_transactor->WREADY(M09_AXI_wready);
    mp_M09_AXI_transactor->BRESP(M09_AXI_bresp);
    mp_M09_AXI_transactor->BVALID(M09_AXI_bvalid);
    mp_M09_AXI_transactor->BREADY(M09_AXI_bready);
    mp_M09_AXI_transactor->ARADDR(M09_AXI_araddr);
    mp_M09_AXI_transactor->ARLEN(M09_AXI_arlen);
    mp_M09_AXI_transactor->ARSIZE(M09_AXI_arsize);
    mp_M09_AXI_transactor->ARBURST(M09_AXI_arburst);
    mp_M09_AXI_arlock_converter = new xsc::common::scalar2vectorN_converter<1>("M09_AXI_arlock_converter");
    mp_M09_AXI_arlock_converter->scalar_in(m_M09_AXI_arlock_converter_signal);
    mp_M09_AXI_arlock_converter->vector_out(M09_AXI_arlock);
    mp_M09_AXI_transactor->ARLOCK(m_M09_AXI_arlock_converter_signal);
    mp_M09_AXI_transactor->ARCACHE(M09_AXI_arcache);
    mp_M09_AXI_transactor->ARPROT(M09_AXI_arprot);
    mp_M09_AXI_transactor->ARQOS(M09_AXI_arqos);
    mp_M09_AXI_transactor->ARVALID(M09_AXI_arvalid);
    mp_M09_AXI_transactor->ARREADY(M09_AXI_arready);
    mp_M09_AXI_transactor->RDATA(M09_AXI_rdata);
    mp_M09_AXI_transactor->RRESP(M09_AXI_rresp);
    mp_M09_AXI_transactor->RLAST(M09_AXI_rlast);
    mp_M09_AXI_transactor->RVALID(M09_AXI_rvalid);
    mp_M09_AXI_transactor->RREADY(M09_AXI_rready);
    mp_M09_AXI_transactor->CLK(aclk);
    mp_M09_AXI_transactor->RST(aresetn);

    // M09_AXI' transactor sockets

    mp_impl->M09_AXI_tlm_aximm_read_socket->bind(*(mp_M09_AXI_transactor->rd_socket));
    mp_impl->M09_AXI_tlm_aximm_write_socket->bind(*(mp_M09_AXI_transactor->wr_socket));
  }
  else
  {
  }

  // configure 'M10_AXI' transactor

  if (xsc::utils::xsc_sim_manager::getInstanceParameterInt("Multi_convo_core_smartconnect_0_0", "M10_AXI_TLM_MODE") != 1)
  {
    // Instantiate Socket Stubs

  // 'M10_AXI' transactor parameters
    xsc::common_cpp::properties M10_AXI_transactor_param_props;
    M10_AXI_transactor_param_props.addLong("DATA_WIDTH", "32");
    M10_AXI_transactor_param_props.addLong("FREQ_HZ", "100000000");
    M10_AXI_transactor_param_props.addLong("ID_WIDTH", "0");
    M10_AXI_transactor_param_props.addLong("ADDR_WIDTH", "12");
    M10_AXI_transactor_param_props.addLong("AWUSER_WIDTH", "0");
    M10_AXI_transactor_param_props.addLong("ARUSER_WIDTH", "0");
    M10_AXI_transactor_param_props.addLong("WUSER_WIDTH", "0");
    M10_AXI_transactor_param_props.addLong("RUSER_WIDTH", "0");
    M10_AXI_transactor_param_props.addLong("BUSER_WIDTH", "0");
    M10_AXI_transactor_param_props.addLong("HAS_BURST", "1");
    M10_AXI_transactor_param_props.addLong("HAS_LOCK", "1");
    M10_AXI_transactor_param_props.addLong("HAS_PROT", "1");
    M10_AXI_transactor_param_props.addLong("HAS_CACHE", "1");
    M10_AXI_transactor_param_props.addLong("HAS_QOS", "1");
    M10_AXI_transactor_param_props.addLong("HAS_REGION", "0");
    M10_AXI_transactor_param_props.addLong("HAS_WSTRB", "1");
    M10_AXI_transactor_param_props.addLong("HAS_BRESP", "1");
    M10_AXI_transactor_param_props.addLong("HAS_RRESP", "1");
    M10_AXI_transactor_param_props.addLong("SUPPORTS_NARROW_BURST", "0");
    M10_AXI_transactor_param_props.addLong("NUM_READ_OUTSTANDING", "2");
    M10_AXI_transactor_param_props.addLong("NUM_WRITE_OUTSTANDING", "2");
    M10_AXI_transactor_param_props.addLong("MAX_BURST_LENGTH", "256");
    M10_AXI_transactor_param_props.addLong("NUM_READ_THREADS", "1");
    M10_AXI_transactor_param_props.addLong("NUM_WRITE_THREADS", "1");
    M10_AXI_transactor_param_props.addLong("RUSER_BITS_PER_BYTE", "0");
    M10_AXI_transactor_param_props.addLong("WUSER_BITS_PER_BYTE", "0");
    M10_AXI_transactor_param_props.addLong("HAS_SIZE", "1");
    M10_AXI_transactor_param_props.addLong("HAS_RESET", "1");
    M10_AXI_transactor_param_props.addFloat("PHASE", "0.0");
    M10_AXI_transactor_param_props.addString("PROTOCOL", "AXI4");
    M10_AXI_transactor_param_props.addString("READ_WRITE_MODE", "READ_WRITE");
    M10_AXI_transactor_param_props.addString("CLK_DOMAIN", "Multi_convo_core_processing_system7_0_0_FCLK_CLK0");

    mp_M10_AXI_transactor = new xtlm::xaximm_xtlm2pin_t<32,12,1,1,1,1,1,1>("M10_AXI_transactor", M10_AXI_transactor_param_props);

    // M10_AXI' transactor ports

    mp_M10_AXI_transactor->AWADDR(M10_AXI_awaddr);
    mp_M10_AXI_transactor->AWLEN(M10_AXI_awlen);
    mp_M10_AXI_transactor->AWSIZE(M10_AXI_awsize);
    mp_M10_AXI_transactor->AWBURST(M10_AXI_awburst);
    mp_M10_AXI_awlock_converter = new xsc::common::scalar2vectorN_converter<1>("M10_AXI_awlock_converter");
    mp_M10_AXI_awlock_converter->scalar_in(m_M10_AXI_awlock_converter_signal);
    mp_M10_AXI_awlock_converter->vector_out(M10_AXI_awlock);
    mp_M10_AXI_transactor->AWLOCK(m_M10_AXI_awlock_converter_signal);
    mp_M10_AXI_transactor->AWCACHE(M10_AXI_awcache);
    mp_M10_AXI_transactor->AWPROT(M10_AXI_awprot);
    mp_M10_AXI_transactor->AWQOS(M10_AXI_awqos);
    mp_M10_AXI_transactor->AWVALID(M10_AXI_awvalid);
    mp_M10_AXI_transactor->AWREADY(M10_AXI_awready);
    mp_M10_AXI_transactor->WDATA(M10_AXI_wdata);
    mp_M10_AXI_transactor->WSTRB(M10_AXI_wstrb);
    mp_M10_AXI_transactor->WLAST(M10_AXI_wlast);
    mp_M10_AXI_transactor->WVALID(M10_AXI_wvalid);
    mp_M10_AXI_transactor->WREADY(M10_AXI_wready);
    mp_M10_AXI_transactor->BRESP(M10_AXI_bresp);
    mp_M10_AXI_transactor->BVALID(M10_AXI_bvalid);
    mp_M10_AXI_transactor->BREADY(M10_AXI_bready);
    mp_M10_AXI_transactor->ARADDR(M10_AXI_araddr);
    mp_M10_AXI_transactor->ARLEN(M10_AXI_arlen);
    mp_M10_AXI_transactor->ARSIZE(M10_AXI_arsize);
    mp_M10_AXI_transactor->ARBURST(M10_AXI_arburst);
    mp_M10_AXI_arlock_converter = new xsc::common::scalar2vectorN_converter<1>("M10_AXI_arlock_converter");
    mp_M10_AXI_arlock_converter->scalar_in(m_M10_AXI_arlock_converter_signal);
    mp_M10_AXI_arlock_converter->vector_out(M10_AXI_arlock);
    mp_M10_AXI_transactor->ARLOCK(m_M10_AXI_arlock_converter_signal);
    mp_M10_AXI_transactor->ARCACHE(M10_AXI_arcache);
    mp_M10_AXI_transactor->ARPROT(M10_AXI_arprot);
    mp_M10_AXI_transactor->ARQOS(M10_AXI_arqos);
    mp_M10_AXI_transactor->ARVALID(M10_AXI_arvalid);
    mp_M10_AXI_transactor->ARREADY(M10_AXI_arready);
    mp_M10_AXI_transactor->RDATA(M10_AXI_rdata);
    mp_M10_AXI_transactor->RRESP(M10_AXI_rresp);
    mp_M10_AXI_transactor->RLAST(M10_AXI_rlast);
    mp_M10_AXI_transactor->RVALID(M10_AXI_rvalid);
    mp_M10_AXI_transactor->RREADY(M10_AXI_rready);
    mp_M10_AXI_transactor->CLK(aclk);
    mp_M10_AXI_transactor->RST(aresetn);

    // M10_AXI' transactor sockets

    mp_impl->M10_AXI_tlm_aximm_read_socket->bind(*(mp_M10_AXI_transactor->rd_socket));
    mp_impl->M10_AXI_tlm_aximm_write_socket->bind(*(mp_M10_AXI_transactor->wr_socket));
  }
  else
  {
  }

  // configure 'M11_AXI' transactor

  if (xsc::utils::xsc_sim_manager::getInstanceParameterInt("Multi_convo_core_smartconnect_0_0", "M11_AXI_TLM_MODE") != 1)
  {
    // Instantiate Socket Stubs

  // 'M11_AXI' transactor parameters
    xsc::common_cpp::properties M11_AXI_transactor_param_props;
    M11_AXI_transactor_param_props.addLong("DATA_WIDTH", "32");
    M11_AXI_transactor_param_props.addLong("FREQ_HZ", "100000000");
    M11_AXI_transactor_param_props.addLong("ID_WIDTH", "0");
    M11_AXI_transactor_param_props.addLong("ADDR_WIDTH", "12");
    M11_AXI_transactor_param_props.addLong("AWUSER_WIDTH", "0");
    M11_AXI_transactor_param_props.addLong("ARUSER_WIDTH", "0");
    M11_AXI_transactor_param_props.addLong("WUSER_WIDTH", "0");
    M11_AXI_transactor_param_props.addLong("RUSER_WIDTH", "0");
    M11_AXI_transactor_param_props.addLong("BUSER_WIDTH", "0");
    M11_AXI_transactor_param_props.addLong("HAS_BURST", "1");
    M11_AXI_transactor_param_props.addLong("HAS_LOCK", "1");
    M11_AXI_transactor_param_props.addLong("HAS_PROT", "1");
    M11_AXI_transactor_param_props.addLong("HAS_CACHE", "1");
    M11_AXI_transactor_param_props.addLong("HAS_QOS", "1");
    M11_AXI_transactor_param_props.addLong("HAS_REGION", "0");
    M11_AXI_transactor_param_props.addLong("HAS_WSTRB", "1");
    M11_AXI_transactor_param_props.addLong("HAS_BRESP", "1");
    M11_AXI_transactor_param_props.addLong("HAS_RRESP", "1");
    M11_AXI_transactor_param_props.addLong("SUPPORTS_NARROW_BURST", "0");
    M11_AXI_transactor_param_props.addLong("NUM_READ_OUTSTANDING", "2");
    M11_AXI_transactor_param_props.addLong("NUM_WRITE_OUTSTANDING", "2");
    M11_AXI_transactor_param_props.addLong("MAX_BURST_LENGTH", "256");
    M11_AXI_transactor_param_props.addLong("NUM_READ_THREADS", "1");
    M11_AXI_transactor_param_props.addLong("NUM_WRITE_THREADS", "1");
    M11_AXI_transactor_param_props.addLong("RUSER_BITS_PER_BYTE", "0");
    M11_AXI_transactor_param_props.addLong("WUSER_BITS_PER_BYTE", "0");
    M11_AXI_transactor_param_props.addLong("HAS_SIZE", "1");
    M11_AXI_transactor_param_props.addLong("HAS_RESET", "1");
    M11_AXI_transactor_param_props.addFloat("PHASE", "0.0");
    M11_AXI_transactor_param_props.addString("PROTOCOL", "AXI4");
    M11_AXI_transactor_param_props.addString("READ_WRITE_MODE", "READ_WRITE");
    M11_AXI_transactor_param_props.addString("CLK_DOMAIN", "Multi_convo_core_processing_system7_0_0_FCLK_CLK0");

    mp_M11_AXI_transactor = new xtlm::xaximm_xtlm2pin_t<32,12,1,1,1,1,1,1>("M11_AXI_transactor", M11_AXI_transactor_param_props);

    // M11_AXI' transactor ports

    mp_M11_AXI_transactor->AWADDR(M11_AXI_awaddr);
    mp_M11_AXI_transactor->AWLEN(M11_AXI_awlen);
    mp_M11_AXI_transactor->AWSIZE(M11_AXI_awsize);
    mp_M11_AXI_transactor->AWBURST(M11_AXI_awburst);
    mp_M11_AXI_awlock_converter = new xsc::common::scalar2vectorN_converter<1>("M11_AXI_awlock_converter");
    mp_M11_AXI_awlock_converter->scalar_in(m_M11_AXI_awlock_converter_signal);
    mp_M11_AXI_awlock_converter->vector_out(M11_AXI_awlock);
    mp_M11_AXI_transactor->AWLOCK(m_M11_AXI_awlock_converter_signal);
    mp_M11_AXI_transactor->AWCACHE(M11_AXI_awcache);
    mp_M11_AXI_transactor->AWPROT(M11_AXI_awprot);
    mp_M11_AXI_transactor->AWQOS(M11_AXI_awqos);
    mp_M11_AXI_transactor->AWVALID(M11_AXI_awvalid);
    mp_M11_AXI_transactor->AWREADY(M11_AXI_awready);
    mp_M11_AXI_transactor->WDATA(M11_AXI_wdata);
    mp_M11_AXI_transactor->WSTRB(M11_AXI_wstrb);
    mp_M11_AXI_transactor->WLAST(M11_AXI_wlast);
    mp_M11_AXI_transactor->WVALID(M11_AXI_wvalid);
    mp_M11_AXI_transactor->WREADY(M11_AXI_wready);
    mp_M11_AXI_transactor->BRESP(M11_AXI_bresp);
    mp_M11_AXI_transactor->BVALID(M11_AXI_bvalid);
    mp_M11_AXI_transactor->BREADY(M11_AXI_bready);
    mp_M11_AXI_transactor->ARADDR(M11_AXI_araddr);
    mp_M11_AXI_transactor->ARLEN(M11_AXI_arlen);
    mp_M11_AXI_transactor->ARSIZE(M11_AXI_arsize);
    mp_M11_AXI_transactor->ARBURST(M11_AXI_arburst);
    mp_M11_AXI_arlock_converter = new xsc::common::scalar2vectorN_converter<1>("M11_AXI_arlock_converter");
    mp_M11_AXI_arlock_converter->scalar_in(m_M11_AXI_arlock_converter_signal);
    mp_M11_AXI_arlock_converter->vector_out(M11_AXI_arlock);
    mp_M11_AXI_transactor->ARLOCK(m_M11_AXI_arlock_converter_signal);
    mp_M11_AXI_transactor->ARCACHE(M11_AXI_arcache);
    mp_M11_AXI_transactor->ARPROT(M11_AXI_arprot);
    mp_M11_AXI_transactor->ARQOS(M11_AXI_arqos);
    mp_M11_AXI_transactor->ARVALID(M11_AXI_arvalid);
    mp_M11_AXI_transactor->ARREADY(M11_AXI_arready);
    mp_M11_AXI_transactor->RDATA(M11_AXI_rdata);
    mp_M11_AXI_transactor->RRESP(M11_AXI_rresp);
    mp_M11_AXI_transactor->RLAST(M11_AXI_rlast);
    mp_M11_AXI_transactor->RVALID(M11_AXI_rvalid);
    mp_M11_AXI_transactor->RREADY(M11_AXI_rready);
    mp_M11_AXI_transactor->CLK(aclk);
    mp_M11_AXI_transactor->RST(aresetn);

    // M11_AXI' transactor sockets

    mp_impl->M11_AXI_tlm_aximm_read_socket->bind(*(mp_M11_AXI_transactor->rd_socket));
    mp_impl->M11_AXI_tlm_aximm_write_socket->bind(*(mp_M11_AXI_transactor->wr_socket));
  }
  else
  {
  }

  // configure 'M12_AXI' transactor

  if (xsc::utils::xsc_sim_manager::getInstanceParameterInt("Multi_convo_core_smartconnect_0_0", "M12_AXI_TLM_MODE") != 1)
  {
    // Instantiate Socket Stubs

  // 'M12_AXI' transactor parameters
    xsc::common_cpp::properties M12_AXI_transactor_param_props;
    M12_AXI_transactor_param_props.addLong("DATA_WIDTH", "32");
    M12_AXI_transactor_param_props.addLong("FREQ_HZ", "100000000");
    M12_AXI_transactor_param_props.addLong("ID_WIDTH", "0");
    M12_AXI_transactor_param_props.addLong("ADDR_WIDTH", "12");
    M12_AXI_transactor_param_props.addLong("AWUSER_WIDTH", "0");
    M12_AXI_transactor_param_props.addLong("ARUSER_WIDTH", "0");
    M12_AXI_transactor_param_props.addLong("WUSER_WIDTH", "0");
    M12_AXI_transactor_param_props.addLong("RUSER_WIDTH", "0");
    M12_AXI_transactor_param_props.addLong("BUSER_WIDTH", "0");
    M12_AXI_transactor_param_props.addLong("HAS_BURST", "1");
    M12_AXI_transactor_param_props.addLong("HAS_LOCK", "1");
    M12_AXI_transactor_param_props.addLong("HAS_PROT", "1");
    M12_AXI_transactor_param_props.addLong("HAS_CACHE", "1");
    M12_AXI_transactor_param_props.addLong("HAS_QOS", "1");
    M12_AXI_transactor_param_props.addLong("HAS_REGION", "0");
    M12_AXI_transactor_param_props.addLong("HAS_WSTRB", "1");
    M12_AXI_transactor_param_props.addLong("HAS_BRESP", "1");
    M12_AXI_transactor_param_props.addLong("HAS_RRESP", "1");
    M12_AXI_transactor_param_props.addLong("SUPPORTS_NARROW_BURST", "0");
    M12_AXI_transactor_param_props.addLong("NUM_READ_OUTSTANDING", "2");
    M12_AXI_transactor_param_props.addLong("NUM_WRITE_OUTSTANDING", "2");
    M12_AXI_transactor_param_props.addLong("MAX_BURST_LENGTH", "256");
    M12_AXI_transactor_param_props.addLong("NUM_READ_THREADS", "1");
    M12_AXI_transactor_param_props.addLong("NUM_WRITE_THREADS", "1");
    M12_AXI_transactor_param_props.addLong("RUSER_BITS_PER_BYTE", "0");
    M12_AXI_transactor_param_props.addLong("WUSER_BITS_PER_BYTE", "0");
    M12_AXI_transactor_param_props.addLong("HAS_SIZE", "1");
    M12_AXI_transactor_param_props.addLong("HAS_RESET", "1");
    M12_AXI_transactor_param_props.addFloat("PHASE", "0.0");
    M12_AXI_transactor_param_props.addString("PROTOCOL", "AXI4");
    M12_AXI_transactor_param_props.addString("READ_WRITE_MODE", "READ_WRITE");
    M12_AXI_transactor_param_props.addString("CLK_DOMAIN", "Multi_convo_core_processing_system7_0_0_FCLK_CLK0");

    mp_M12_AXI_transactor = new xtlm::xaximm_xtlm2pin_t<32,12,1,1,1,1,1,1>("M12_AXI_transactor", M12_AXI_transactor_param_props);

    // M12_AXI' transactor ports

    mp_M12_AXI_transactor->AWADDR(M12_AXI_awaddr);
    mp_M12_AXI_transactor->AWLEN(M12_AXI_awlen);
    mp_M12_AXI_transactor->AWSIZE(M12_AXI_awsize);
    mp_M12_AXI_transactor->AWBURST(M12_AXI_awburst);
    mp_M12_AXI_awlock_converter = new xsc::common::scalar2vectorN_converter<1>("M12_AXI_awlock_converter");
    mp_M12_AXI_awlock_converter->scalar_in(m_M12_AXI_awlock_converter_signal);
    mp_M12_AXI_awlock_converter->vector_out(M12_AXI_awlock);
    mp_M12_AXI_transactor->AWLOCK(m_M12_AXI_awlock_converter_signal);
    mp_M12_AXI_transactor->AWCACHE(M12_AXI_awcache);
    mp_M12_AXI_transactor->AWPROT(M12_AXI_awprot);
    mp_M12_AXI_transactor->AWQOS(M12_AXI_awqos);
    mp_M12_AXI_transactor->AWVALID(M12_AXI_awvalid);
    mp_M12_AXI_transactor->AWREADY(M12_AXI_awready);
    mp_M12_AXI_transactor->WDATA(M12_AXI_wdata);
    mp_M12_AXI_transactor->WSTRB(M12_AXI_wstrb);
    mp_M12_AXI_transactor->WLAST(M12_AXI_wlast);
    mp_M12_AXI_transactor->WVALID(M12_AXI_wvalid);
    mp_M12_AXI_transactor->WREADY(M12_AXI_wready);
    mp_M12_AXI_transactor->BRESP(M12_AXI_bresp);
    mp_M12_AXI_transactor->BVALID(M12_AXI_bvalid);
    mp_M12_AXI_transactor->BREADY(M12_AXI_bready);
    mp_M12_AXI_transactor->ARADDR(M12_AXI_araddr);
    mp_M12_AXI_transactor->ARLEN(M12_AXI_arlen);
    mp_M12_AXI_transactor->ARSIZE(M12_AXI_arsize);
    mp_M12_AXI_transactor->ARBURST(M12_AXI_arburst);
    mp_M12_AXI_arlock_converter = new xsc::common::scalar2vectorN_converter<1>("M12_AXI_arlock_converter");
    mp_M12_AXI_arlock_converter->scalar_in(m_M12_AXI_arlock_converter_signal);
    mp_M12_AXI_arlock_converter->vector_out(M12_AXI_arlock);
    mp_M12_AXI_transactor->ARLOCK(m_M12_AXI_arlock_converter_signal);
    mp_M12_AXI_transactor->ARCACHE(M12_AXI_arcache);
    mp_M12_AXI_transactor->ARPROT(M12_AXI_arprot);
    mp_M12_AXI_transactor->ARQOS(M12_AXI_arqos);
    mp_M12_AXI_transactor->ARVALID(M12_AXI_arvalid);
    mp_M12_AXI_transactor->ARREADY(M12_AXI_arready);
    mp_M12_AXI_transactor->RDATA(M12_AXI_rdata);
    mp_M12_AXI_transactor->RRESP(M12_AXI_rresp);
    mp_M12_AXI_transactor->RLAST(M12_AXI_rlast);
    mp_M12_AXI_transactor->RVALID(M12_AXI_rvalid);
    mp_M12_AXI_transactor->RREADY(M12_AXI_rready);
    mp_M12_AXI_transactor->CLK(aclk);
    mp_M12_AXI_transactor->RST(aresetn);

    // M12_AXI' transactor sockets

    mp_impl->M12_AXI_tlm_aximm_read_socket->bind(*(mp_M12_AXI_transactor->rd_socket));
    mp_impl->M12_AXI_tlm_aximm_write_socket->bind(*(mp_M12_AXI_transactor->wr_socket));
  }
  else
  {
  }

  // configure 'M13_AXI' transactor

  if (xsc::utils::xsc_sim_manager::getInstanceParameterInt("Multi_convo_core_smartconnect_0_0", "M13_AXI_TLM_MODE") != 1)
  {
    // Instantiate Socket Stubs

  // 'M13_AXI' transactor parameters
    xsc::common_cpp::properties M13_AXI_transactor_param_props;
    M13_AXI_transactor_param_props.addLong("DATA_WIDTH", "32");
    M13_AXI_transactor_param_props.addLong("FREQ_HZ", "100000000");
    M13_AXI_transactor_param_props.addLong("ID_WIDTH", "0");
    M13_AXI_transactor_param_props.addLong("ADDR_WIDTH", "12");
    M13_AXI_transactor_param_props.addLong("AWUSER_WIDTH", "0");
    M13_AXI_transactor_param_props.addLong("ARUSER_WIDTH", "0");
    M13_AXI_transactor_param_props.addLong("WUSER_WIDTH", "0");
    M13_AXI_transactor_param_props.addLong("RUSER_WIDTH", "0");
    M13_AXI_transactor_param_props.addLong("BUSER_WIDTH", "0");
    M13_AXI_transactor_param_props.addLong("HAS_BURST", "1");
    M13_AXI_transactor_param_props.addLong("HAS_LOCK", "1");
    M13_AXI_transactor_param_props.addLong("HAS_PROT", "1");
    M13_AXI_transactor_param_props.addLong("HAS_CACHE", "1");
    M13_AXI_transactor_param_props.addLong("HAS_QOS", "1");
    M13_AXI_transactor_param_props.addLong("HAS_REGION", "0");
    M13_AXI_transactor_param_props.addLong("HAS_WSTRB", "1");
    M13_AXI_transactor_param_props.addLong("HAS_BRESP", "1");
    M13_AXI_transactor_param_props.addLong("HAS_RRESP", "1");
    M13_AXI_transactor_param_props.addLong("SUPPORTS_NARROW_BURST", "0");
    M13_AXI_transactor_param_props.addLong("NUM_READ_OUTSTANDING", "2");
    M13_AXI_transactor_param_props.addLong("NUM_WRITE_OUTSTANDING", "2");
    M13_AXI_transactor_param_props.addLong("MAX_BURST_LENGTH", "256");
    M13_AXI_transactor_param_props.addLong("NUM_READ_THREADS", "1");
    M13_AXI_transactor_param_props.addLong("NUM_WRITE_THREADS", "1");
    M13_AXI_transactor_param_props.addLong("RUSER_BITS_PER_BYTE", "0");
    M13_AXI_transactor_param_props.addLong("WUSER_BITS_PER_BYTE", "0");
    M13_AXI_transactor_param_props.addLong("HAS_SIZE", "1");
    M13_AXI_transactor_param_props.addLong("HAS_RESET", "1");
    M13_AXI_transactor_param_props.addFloat("PHASE", "0.0");
    M13_AXI_transactor_param_props.addString("PROTOCOL", "AXI4");
    M13_AXI_transactor_param_props.addString("READ_WRITE_MODE", "READ_WRITE");
    M13_AXI_transactor_param_props.addString("CLK_DOMAIN", "Multi_convo_core_processing_system7_0_0_FCLK_CLK0");

    mp_M13_AXI_transactor = new xtlm::xaximm_xtlm2pin_t<32,12,1,1,1,1,1,1>("M13_AXI_transactor", M13_AXI_transactor_param_props);

    // M13_AXI' transactor ports

    mp_M13_AXI_transactor->AWADDR(M13_AXI_awaddr);
    mp_M13_AXI_transactor->AWLEN(M13_AXI_awlen);
    mp_M13_AXI_transactor->AWSIZE(M13_AXI_awsize);
    mp_M13_AXI_transactor->AWBURST(M13_AXI_awburst);
    mp_M13_AXI_awlock_converter = new xsc::common::scalar2vectorN_converter<1>("M13_AXI_awlock_converter");
    mp_M13_AXI_awlock_converter->scalar_in(m_M13_AXI_awlock_converter_signal);
    mp_M13_AXI_awlock_converter->vector_out(M13_AXI_awlock);
    mp_M13_AXI_transactor->AWLOCK(m_M13_AXI_awlock_converter_signal);
    mp_M13_AXI_transactor->AWCACHE(M13_AXI_awcache);
    mp_M13_AXI_transactor->AWPROT(M13_AXI_awprot);
    mp_M13_AXI_transactor->AWQOS(M13_AXI_awqos);
    mp_M13_AXI_transactor->AWVALID(M13_AXI_awvalid);
    mp_M13_AXI_transactor->AWREADY(M13_AXI_awready);
    mp_M13_AXI_transactor->WDATA(M13_AXI_wdata);
    mp_M13_AXI_transactor->WSTRB(M13_AXI_wstrb);
    mp_M13_AXI_transactor->WLAST(M13_AXI_wlast);
    mp_M13_AXI_transactor->WVALID(M13_AXI_wvalid);
    mp_M13_AXI_transactor->WREADY(M13_AXI_wready);
    mp_M13_AXI_transactor->BRESP(M13_AXI_bresp);
    mp_M13_AXI_transactor->BVALID(M13_AXI_bvalid);
    mp_M13_AXI_transactor->BREADY(M13_AXI_bready);
    mp_M13_AXI_transactor->ARADDR(M13_AXI_araddr);
    mp_M13_AXI_transactor->ARLEN(M13_AXI_arlen);
    mp_M13_AXI_transactor->ARSIZE(M13_AXI_arsize);
    mp_M13_AXI_transactor->ARBURST(M13_AXI_arburst);
    mp_M13_AXI_arlock_converter = new xsc::common::scalar2vectorN_converter<1>("M13_AXI_arlock_converter");
    mp_M13_AXI_arlock_converter->scalar_in(m_M13_AXI_arlock_converter_signal);
    mp_M13_AXI_arlock_converter->vector_out(M13_AXI_arlock);
    mp_M13_AXI_transactor->ARLOCK(m_M13_AXI_arlock_converter_signal);
    mp_M13_AXI_transactor->ARCACHE(M13_AXI_arcache);
    mp_M13_AXI_transactor->ARPROT(M13_AXI_arprot);
    mp_M13_AXI_transactor->ARQOS(M13_AXI_arqos);
    mp_M13_AXI_transactor->ARVALID(M13_AXI_arvalid);
    mp_M13_AXI_transactor->ARREADY(M13_AXI_arready);
    mp_M13_AXI_transactor->RDATA(M13_AXI_rdata);
    mp_M13_AXI_transactor->RRESP(M13_AXI_rresp);
    mp_M13_AXI_transactor->RLAST(M13_AXI_rlast);
    mp_M13_AXI_transactor->RVALID(M13_AXI_rvalid);
    mp_M13_AXI_transactor->RREADY(M13_AXI_rready);
    mp_M13_AXI_transactor->CLK(aclk);
    mp_M13_AXI_transactor->RST(aresetn);

    // M13_AXI' transactor sockets

    mp_impl->M13_AXI_tlm_aximm_read_socket->bind(*(mp_M13_AXI_transactor->rd_socket));
    mp_impl->M13_AXI_tlm_aximm_write_socket->bind(*(mp_M13_AXI_transactor->wr_socket));
  }
  else
  {
  }

  // configure 'M14_AXI' transactor

  if (xsc::utils::xsc_sim_manager::getInstanceParameterInt("Multi_convo_core_smartconnect_0_0", "M14_AXI_TLM_MODE") != 1)
  {
    // Instantiate Socket Stubs

  // 'M14_AXI' transactor parameters
    xsc::common_cpp::properties M14_AXI_transactor_param_props;
    M14_AXI_transactor_param_props.addLong("DATA_WIDTH", "32");
    M14_AXI_transactor_param_props.addLong("FREQ_HZ", "100000000");
    M14_AXI_transactor_param_props.addLong("ID_WIDTH", "0");
    M14_AXI_transactor_param_props.addLong("ADDR_WIDTH", "12");
    M14_AXI_transactor_param_props.addLong("AWUSER_WIDTH", "0");
    M14_AXI_transactor_param_props.addLong("ARUSER_WIDTH", "0");
    M14_AXI_transactor_param_props.addLong("WUSER_WIDTH", "0");
    M14_AXI_transactor_param_props.addLong("RUSER_WIDTH", "0");
    M14_AXI_transactor_param_props.addLong("BUSER_WIDTH", "0");
    M14_AXI_transactor_param_props.addLong("HAS_BURST", "1");
    M14_AXI_transactor_param_props.addLong("HAS_LOCK", "1");
    M14_AXI_transactor_param_props.addLong("HAS_PROT", "1");
    M14_AXI_transactor_param_props.addLong("HAS_CACHE", "1");
    M14_AXI_transactor_param_props.addLong("HAS_QOS", "1");
    M14_AXI_transactor_param_props.addLong("HAS_REGION", "0");
    M14_AXI_transactor_param_props.addLong("HAS_WSTRB", "1");
    M14_AXI_transactor_param_props.addLong("HAS_BRESP", "1");
    M14_AXI_transactor_param_props.addLong("HAS_RRESP", "1");
    M14_AXI_transactor_param_props.addLong("SUPPORTS_NARROW_BURST", "0");
    M14_AXI_transactor_param_props.addLong("NUM_READ_OUTSTANDING", "2");
    M14_AXI_transactor_param_props.addLong("NUM_WRITE_OUTSTANDING", "2");
    M14_AXI_transactor_param_props.addLong("MAX_BURST_LENGTH", "256");
    M14_AXI_transactor_param_props.addLong("NUM_READ_THREADS", "1");
    M14_AXI_transactor_param_props.addLong("NUM_WRITE_THREADS", "1");
    M14_AXI_transactor_param_props.addLong("RUSER_BITS_PER_BYTE", "0");
    M14_AXI_transactor_param_props.addLong("WUSER_BITS_PER_BYTE", "0");
    M14_AXI_transactor_param_props.addLong("HAS_SIZE", "1");
    M14_AXI_transactor_param_props.addLong("HAS_RESET", "1");
    M14_AXI_transactor_param_props.addFloat("PHASE", "0.0");
    M14_AXI_transactor_param_props.addString("PROTOCOL", "AXI4");
    M14_AXI_transactor_param_props.addString("READ_WRITE_MODE", "READ_WRITE");
    M14_AXI_transactor_param_props.addString("CLK_DOMAIN", "Multi_convo_core_processing_system7_0_0_FCLK_CLK0");

    mp_M14_AXI_transactor = new xtlm::xaximm_xtlm2pin_t<32,12,1,1,1,1,1,1>("M14_AXI_transactor", M14_AXI_transactor_param_props);

    // M14_AXI' transactor ports

    mp_M14_AXI_transactor->AWADDR(M14_AXI_awaddr);
    mp_M14_AXI_transactor->AWLEN(M14_AXI_awlen);
    mp_M14_AXI_transactor->AWSIZE(M14_AXI_awsize);
    mp_M14_AXI_transactor->AWBURST(M14_AXI_awburst);
    mp_M14_AXI_awlock_converter = new xsc::common::scalar2vectorN_converter<1>("M14_AXI_awlock_converter");
    mp_M14_AXI_awlock_converter->scalar_in(m_M14_AXI_awlock_converter_signal);
    mp_M14_AXI_awlock_converter->vector_out(M14_AXI_awlock);
    mp_M14_AXI_transactor->AWLOCK(m_M14_AXI_awlock_converter_signal);
    mp_M14_AXI_transactor->AWCACHE(M14_AXI_awcache);
    mp_M14_AXI_transactor->AWPROT(M14_AXI_awprot);
    mp_M14_AXI_transactor->AWQOS(M14_AXI_awqos);
    mp_M14_AXI_transactor->AWVALID(M14_AXI_awvalid);
    mp_M14_AXI_transactor->AWREADY(M14_AXI_awready);
    mp_M14_AXI_transactor->WDATA(M14_AXI_wdata);
    mp_M14_AXI_transactor->WSTRB(M14_AXI_wstrb);
    mp_M14_AXI_transactor->WLAST(M14_AXI_wlast);
    mp_M14_AXI_transactor->WVALID(M14_AXI_wvalid);
    mp_M14_AXI_transactor->WREADY(M14_AXI_wready);
    mp_M14_AXI_transactor->BRESP(M14_AXI_bresp);
    mp_M14_AXI_transactor->BVALID(M14_AXI_bvalid);
    mp_M14_AXI_transactor->BREADY(M14_AXI_bready);
    mp_M14_AXI_transactor->ARADDR(M14_AXI_araddr);
    mp_M14_AXI_transactor->ARLEN(M14_AXI_arlen);
    mp_M14_AXI_transactor->ARSIZE(M14_AXI_arsize);
    mp_M14_AXI_transactor->ARBURST(M14_AXI_arburst);
    mp_M14_AXI_arlock_converter = new xsc::common::scalar2vectorN_converter<1>("M14_AXI_arlock_converter");
    mp_M14_AXI_arlock_converter->scalar_in(m_M14_AXI_arlock_converter_signal);
    mp_M14_AXI_arlock_converter->vector_out(M14_AXI_arlock);
    mp_M14_AXI_transactor->ARLOCK(m_M14_AXI_arlock_converter_signal);
    mp_M14_AXI_transactor->ARCACHE(M14_AXI_arcache);
    mp_M14_AXI_transactor->ARPROT(M14_AXI_arprot);
    mp_M14_AXI_transactor->ARQOS(M14_AXI_arqos);
    mp_M14_AXI_transactor->ARVALID(M14_AXI_arvalid);
    mp_M14_AXI_transactor->ARREADY(M14_AXI_arready);
    mp_M14_AXI_transactor->RDATA(M14_AXI_rdata);
    mp_M14_AXI_transactor->RRESP(M14_AXI_rresp);
    mp_M14_AXI_transactor->RLAST(M14_AXI_rlast);
    mp_M14_AXI_transactor->RVALID(M14_AXI_rvalid);
    mp_M14_AXI_transactor->RREADY(M14_AXI_rready);
    mp_M14_AXI_transactor->CLK(aclk);
    mp_M14_AXI_transactor->RST(aresetn);

    // M14_AXI' transactor sockets

    mp_impl->M14_AXI_tlm_aximm_read_socket->bind(*(mp_M14_AXI_transactor->rd_socket));
    mp_impl->M14_AXI_tlm_aximm_write_socket->bind(*(mp_M14_AXI_transactor->wr_socket));
  }
  else
  {
  }

  // configure 'M15_AXI' transactor

  if (xsc::utils::xsc_sim_manager::getInstanceParameterInt("Multi_convo_core_smartconnect_0_0", "M15_AXI_TLM_MODE") != 1)
  {
    // Instantiate Socket Stubs

  // 'M15_AXI' transactor parameters
    xsc::common_cpp::properties M15_AXI_transactor_param_props;
    M15_AXI_transactor_param_props.addLong("DATA_WIDTH", "32");
    M15_AXI_transactor_param_props.addLong("FREQ_HZ", "100000000");
    M15_AXI_transactor_param_props.addLong("ID_WIDTH", "0");
    M15_AXI_transactor_param_props.addLong("ADDR_WIDTH", "12");
    M15_AXI_transactor_param_props.addLong("AWUSER_WIDTH", "0");
    M15_AXI_transactor_param_props.addLong("ARUSER_WIDTH", "0");
    M15_AXI_transactor_param_props.addLong("WUSER_WIDTH", "0");
    M15_AXI_transactor_param_props.addLong("RUSER_WIDTH", "0");
    M15_AXI_transactor_param_props.addLong("BUSER_WIDTH", "0");
    M15_AXI_transactor_param_props.addLong("HAS_BURST", "1");
    M15_AXI_transactor_param_props.addLong("HAS_LOCK", "1");
    M15_AXI_transactor_param_props.addLong("HAS_PROT", "1");
    M15_AXI_transactor_param_props.addLong("HAS_CACHE", "1");
    M15_AXI_transactor_param_props.addLong("HAS_QOS", "1");
    M15_AXI_transactor_param_props.addLong("HAS_REGION", "0");
    M15_AXI_transactor_param_props.addLong("HAS_WSTRB", "1");
    M15_AXI_transactor_param_props.addLong("HAS_BRESP", "1");
    M15_AXI_transactor_param_props.addLong("HAS_RRESP", "1");
    M15_AXI_transactor_param_props.addLong("SUPPORTS_NARROW_BURST", "0");
    M15_AXI_transactor_param_props.addLong("NUM_READ_OUTSTANDING", "2");
    M15_AXI_transactor_param_props.addLong("NUM_WRITE_OUTSTANDING", "2");
    M15_AXI_transactor_param_props.addLong("MAX_BURST_LENGTH", "256");
    M15_AXI_transactor_param_props.addLong("NUM_READ_THREADS", "1");
    M15_AXI_transactor_param_props.addLong("NUM_WRITE_THREADS", "1");
    M15_AXI_transactor_param_props.addLong("RUSER_BITS_PER_BYTE", "0");
    M15_AXI_transactor_param_props.addLong("WUSER_BITS_PER_BYTE", "0");
    M15_AXI_transactor_param_props.addLong("HAS_SIZE", "1");
    M15_AXI_transactor_param_props.addLong("HAS_RESET", "1");
    M15_AXI_transactor_param_props.addFloat("PHASE", "0.0");
    M15_AXI_transactor_param_props.addString("PROTOCOL", "AXI4");
    M15_AXI_transactor_param_props.addString("READ_WRITE_MODE", "READ_WRITE");
    M15_AXI_transactor_param_props.addString("CLK_DOMAIN", "Multi_convo_core_processing_system7_0_0_FCLK_CLK0");

    mp_M15_AXI_transactor = new xtlm::xaximm_xtlm2pin_t<32,12,1,1,1,1,1,1>("M15_AXI_transactor", M15_AXI_transactor_param_props);

    // M15_AXI' transactor ports

    mp_M15_AXI_transactor->AWADDR(M15_AXI_awaddr);
    mp_M15_AXI_transactor->AWLEN(M15_AXI_awlen);
    mp_M15_AXI_transactor->AWSIZE(M15_AXI_awsize);
    mp_M15_AXI_transactor->AWBURST(M15_AXI_awburst);
    mp_M15_AXI_awlock_converter = new xsc::common::scalar2vectorN_converter<1>("M15_AXI_awlock_converter");
    mp_M15_AXI_awlock_converter->scalar_in(m_M15_AXI_awlock_converter_signal);
    mp_M15_AXI_awlock_converter->vector_out(M15_AXI_awlock);
    mp_M15_AXI_transactor->AWLOCK(m_M15_AXI_awlock_converter_signal);
    mp_M15_AXI_transactor->AWCACHE(M15_AXI_awcache);
    mp_M15_AXI_transactor->AWPROT(M15_AXI_awprot);
    mp_M15_AXI_transactor->AWQOS(M15_AXI_awqos);
    mp_M15_AXI_transactor->AWVALID(M15_AXI_awvalid);
    mp_M15_AXI_transactor->AWREADY(M15_AXI_awready);
    mp_M15_AXI_transactor->WDATA(M15_AXI_wdata);
    mp_M15_AXI_transactor->WSTRB(M15_AXI_wstrb);
    mp_M15_AXI_transactor->WLAST(M15_AXI_wlast);
    mp_M15_AXI_transactor->WVALID(M15_AXI_wvalid);
    mp_M15_AXI_transactor->WREADY(M15_AXI_wready);
    mp_M15_AXI_transactor->BRESP(M15_AXI_bresp);
    mp_M15_AXI_transactor->BVALID(M15_AXI_bvalid);
    mp_M15_AXI_transactor->BREADY(M15_AXI_bready);
    mp_M15_AXI_transactor->ARADDR(M15_AXI_araddr);
    mp_M15_AXI_transactor->ARLEN(M15_AXI_arlen);
    mp_M15_AXI_transactor->ARSIZE(M15_AXI_arsize);
    mp_M15_AXI_transactor->ARBURST(M15_AXI_arburst);
    mp_M15_AXI_arlock_converter = new xsc::common::scalar2vectorN_converter<1>("M15_AXI_arlock_converter");
    mp_M15_AXI_arlock_converter->scalar_in(m_M15_AXI_arlock_converter_signal);
    mp_M15_AXI_arlock_converter->vector_out(M15_AXI_arlock);
    mp_M15_AXI_transactor->ARLOCK(m_M15_AXI_arlock_converter_signal);
    mp_M15_AXI_transactor->ARCACHE(M15_AXI_arcache);
    mp_M15_AXI_transactor->ARPROT(M15_AXI_arprot);
    mp_M15_AXI_transactor->ARQOS(M15_AXI_arqos);
    mp_M15_AXI_transactor->ARVALID(M15_AXI_arvalid);
    mp_M15_AXI_transactor->ARREADY(M15_AXI_arready);
    mp_M15_AXI_transactor->RDATA(M15_AXI_rdata);
    mp_M15_AXI_transactor->RRESP(M15_AXI_rresp);
    mp_M15_AXI_transactor->RLAST(M15_AXI_rlast);
    mp_M15_AXI_transactor->RVALID(M15_AXI_rvalid);
    mp_M15_AXI_transactor->RREADY(M15_AXI_rready);
    mp_M15_AXI_transactor->CLK(aclk);
    mp_M15_AXI_transactor->RST(aresetn);

    // M15_AXI' transactor sockets

    mp_impl->M15_AXI_tlm_aximm_read_socket->bind(*(mp_M15_AXI_transactor->rd_socket));
    mp_impl->M15_AXI_tlm_aximm_write_socket->bind(*(mp_M15_AXI_transactor->wr_socket));
  }
  else
  {
  }

  // configure 'M16_AXI' transactor

  if (xsc::utils::xsc_sim_manager::getInstanceParameterInt("Multi_convo_core_smartconnect_0_0", "M16_AXI_TLM_MODE") != 1)
  {
    // Instantiate Socket Stubs

  // 'M16_AXI' transactor parameters
    xsc::common_cpp::properties M16_AXI_transactor_param_props;
    M16_AXI_transactor_param_props.addLong("DATA_WIDTH", "32");
    M16_AXI_transactor_param_props.addLong("FREQ_HZ", "100000000");
    M16_AXI_transactor_param_props.addLong("ID_WIDTH", "0");
    M16_AXI_transactor_param_props.addLong("ADDR_WIDTH", "12");
    M16_AXI_transactor_param_props.addLong("AWUSER_WIDTH", "0");
    M16_AXI_transactor_param_props.addLong("ARUSER_WIDTH", "0");
    M16_AXI_transactor_param_props.addLong("WUSER_WIDTH", "0");
    M16_AXI_transactor_param_props.addLong("RUSER_WIDTH", "0");
    M16_AXI_transactor_param_props.addLong("BUSER_WIDTH", "0");
    M16_AXI_transactor_param_props.addLong("HAS_BURST", "1");
    M16_AXI_transactor_param_props.addLong("HAS_LOCK", "1");
    M16_AXI_transactor_param_props.addLong("HAS_PROT", "1");
    M16_AXI_transactor_param_props.addLong("HAS_CACHE", "1");
    M16_AXI_transactor_param_props.addLong("HAS_QOS", "1");
    M16_AXI_transactor_param_props.addLong("HAS_REGION", "0");
    M16_AXI_transactor_param_props.addLong("HAS_WSTRB", "1");
    M16_AXI_transactor_param_props.addLong("HAS_BRESP", "1");
    M16_AXI_transactor_param_props.addLong("HAS_RRESP", "1");
    M16_AXI_transactor_param_props.addLong("SUPPORTS_NARROW_BURST", "0");
    M16_AXI_transactor_param_props.addLong("NUM_READ_OUTSTANDING", "2");
    M16_AXI_transactor_param_props.addLong("NUM_WRITE_OUTSTANDING", "2");
    M16_AXI_transactor_param_props.addLong("MAX_BURST_LENGTH", "256");
    M16_AXI_transactor_param_props.addLong("NUM_READ_THREADS", "1");
    M16_AXI_transactor_param_props.addLong("NUM_WRITE_THREADS", "1");
    M16_AXI_transactor_param_props.addLong("RUSER_BITS_PER_BYTE", "0");
    M16_AXI_transactor_param_props.addLong("WUSER_BITS_PER_BYTE", "0");
    M16_AXI_transactor_param_props.addLong("HAS_SIZE", "1");
    M16_AXI_transactor_param_props.addLong("HAS_RESET", "1");
    M16_AXI_transactor_param_props.addFloat("PHASE", "0.0");
    M16_AXI_transactor_param_props.addString("PROTOCOL", "AXI4");
    M16_AXI_transactor_param_props.addString("READ_WRITE_MODE", "READ_WRITE");
    M16_AXI_transactor_param_props.addString("CLK_DOMAIN", "Multi_convo_core_processing_system7_0_0_FCLK_CLK0");

    mp_M16_AXI_transactor = new xtlm::xaximm_xtlm2pin_t<32,12,1,1,1,1,1,1>("M16_AXI_transactor", M16_AXI_transactor_param_props);

    // M16_AXI' transactor ports

    mp_M16_AXI_transactor->AWADDR(M16_AXI_awaddr);
    mp_M16_AXI_transactor->AWLEN(M16_AXI_awlen);
    mp_M16_AXI_transactor->AWSIZE(M16_AXI_awsize);
    mp_M16_AXI_transactor->AWBURST(M16_AXI_awburst);
    mp_M16_AXI_awlock_converter = new xsc::common::scalar2vectorN_converter<1>("M16_AXI_awlock_converter");
    mp_M16_AXI_awlock_converter->scalar_in(m_M16_AXI_awlock_converter_signal);
    mp_M16_AXI_awlock_converter->vector_out(M16_AXI_awlock);
    mp_M16_AXI_transactor->AWLOCK(m_M16_AXI_awlock_converter_signal);
    mp_M16_AXI_transactor->AWCACHE(M16_AXI_awcache);
    mp_M16_AXI_transactor->AWPROT(M16_AXI_awprot);
    mp_M16_AXI_transactor->AWQOS(M16_AXI_awqos);
    mp_M16_AXI_transactor->AWVALID(M16_AXI_awvalid);
    mp_M16_AXI_transactor->AWREADY(M16_AXI_awready);
    mp_M16_AXI_transactor->WDATA(M16_AXI_wdata);
    mp_M16_AXI_transactor->WSTRB(M16_AXI_wstrb);
    mp_M16_AXI_transactor->WLAST(M16_AXI_wlast);
    mp_M16_AXI_transactor->WVALID(M16_AXI_wvalid);
    mp_M16_AXI_transactor->WREADY(M16_AXI_wready);
    mp_M16_AXI_transactor->BRESP(M16_AXI_bresp);
    mp_M16_AXI_transactor->BVALID(M16_AXI_bvalid);
    mp_M16_AXI_transactor->BREADY(M16_AXI_bready);
    mp_M16_AXI_transactor->ARADDR(M16_AXI_araddr);
    mp_M16_AXI_transactor->ARLEN(M16_AXI_arlen);
    mp_M16_AXI_transactor->ARSIZE(M16_AXI_arsize);
    mp_M16_AXI_transactor->ARBURST(M16_AXI_arburst);
    mp_M16_AXI_arlock_converter = new xsc::common::scalar2vectorN_converter<1>("M16_AXI_arlock_converter");
    mp_M16_AXI_arlock_converter->scalar_in(m_M16_AXI_arlock_converter_signal);
    mp_M16_AXI_arlock_converter->vector_out(M16_AXI_arlock);
    mp_M16_AXI_transactor->ARLOCK(m_M16_AXI_arlock_converter_signal);
    mp_M16_AXI_transactor->ARCACHE(M16_AXI_arcache);
    mp_M16_AXI_transactor->ARPROT(M16_AXI_arprot);
    mp_M16_AXI_transactor->ARQOS(M16_AXI_arqos);
    mp_M16_AXI_transactor->ARVALID(M16_AXI_arvalid);
    mp_M16_AXI_transactor->ARREADY(M16_AXI_arready);
    mp_M16_AXI_transactor->RDATA(M16_AXI_rdata);
    mp_M16_AXI_transactor->RRESP(M16_AXI_rresp);
    mp_M16_AXI_transactor->RLAST(M16_AXI_rlast);
    mp_M16_AXI_transactor->RVALID(M16_AXI_rvalid);
    mp_M16_AXI_transactor->RREADY(M16_AXI_rready);
    mp_M16_AXI_transactor->CLK(aclk);
    mp_M16_AXI_transactor->RST(aresetn);

    // M16_AXI' transactor sockets

    mp_impl->M16_AXI_tlm_aximm_read_socket->bind(*(mp_M16_AXI_transactor->rd_socket));
    mp_impl->M16_AXI_tlm_aximm_write_socket->bind(*(mp_M16_AXI_transactor->wr_socket));
  }
  else
  {
  }

  // configure 'M17_AXI' transactor

  if (xsc::utils::xsc_sim_manager::getInstanceParameterInt("Multi_convo_core_smartconnect_0_0", "M17_AXI_TLM_MODE") != 1)
  {
    // Instantiate Socket Stubs

  // 'M17_AXI' transactor parameters
    xsc::common_cpp::properties M17_AXI_transactor_param_props;
    M17_AXI_transactor_param_props.addLong("DATA_WIDTH", "32");
    M17_AXI_transactor_param_props.addLong("FREQ_HZ", "100000000");
    M17_AXI_transactor_param_props.addLong("ID_WIDTH", "0");
    M17_AXI_transactor_param_props.addLong("ADDR_WIDTH", "12");
    M17_AXI_transactor_param_props.addLong("AWUSER_WIDTH", "0");
    M17_AXI_transactor_param_props.addLong("ARUSER_WIDTH", "0");
    M17_AXI_transactor_param_props.addLong("WUSER_WIDTH", "0");
    M17_AXI_transactor_param_props.addLong("RUSER_WIDTH", "0");
    M17_AXI_transactor_param_props.addLong("BUSER_WIDTH", "0");
    M17_AXI_transactor_param_props.addLong("HAS_BURST", "1");
    M17_AXI_transactor_param_props.addLong("HAS_LOCK", "1");
    M17_AXI_transactor_param_props.addLong("HAS_PROT", "1");
    M17_AXI_transactor_param_props.addLong("HAS_CACHE", "1");
    M17_AXI_transactor_param_props.addLong("HAS_QOS", "1");
    M17_AXI_transactor_param_props.addLong("HAS_REGION", "0");
    M17_AXI_transactor_param_props.addLong("HAS_WSTRB", "1");
    M17_AXI_transactor_param_props.addLong("HAS_BRESP", "1");
    M17_AXI_transactor_param_props.addLong("HAS_RRESP", "1");
    M17_AXI_transactor_param_props.addLong("SUPPORTS_NARROW_BURST", "0");
    M17_AXI_transactor_param_props.addLong("NUM_READ_OUTSTANDING", "2");
    M17_AXI_transactor_param_props.addLong("NUM_WRITE_OUTSTANDING", "2");
    M17_AXI_transactor_param_props.addLong("MAX_BURST_LENGTH", "256");
    M17_AXI_transactor_param_props.addLong("NUM_READ_THREADS", "1");
    M17_AXI_transactor_param_props.addLong("NUM_WRITE_THREADS", "1");
    M17_AXI_transactor_param_props.addLong("RUSER_BITS_PER_BYTE", "0");
    M17_AXI_transactor_param_props.addLong("WUSER_BITS_PER_BYTE", "0");
    M17_AXI_transactor_param_props.addLong("HAS_SIZE", "1");
    M17_AXI_transactor_param_props.addLong("HAS_RESET", "1");
    M17_AXI_transactor_param_props.addFloat("PHASE", "0.0");
    M17_AXI_transactor_param_props.addString("PROTOCOL", "AXI4");
    M17_AXI_transactor_param_props.addString("READ_WRITE_MODE", "READ_WRITE");
    M17_AXI_transactor_param_props.addString("CLK_DOMAIN", "Multi_convo_core_processing_system7_0_0_FCLK_CLK0");

    mp_M17_AXI_transactor = new xtlm::xaximm_xtlm2pin_t<32,12,1,1,1,1,1,1>("M17_AXI_transactor", M17_AXI_transactor_param_props);

    // M17_AXI' transactor ports

    mp_M17_AXI_transactor->AWADDR(M17_AXI_awaddr);
    mp_M17_AXI_transactor->AWLEN(M17_AXI_awlen);
    mp_M17_AXI_transactor->AWSIZE(M17_AXI_awsize);
    mp_M17_AXI_transactor->AWBURST(M17_AXI_awburst);
    mp_M17_AXI_awlock_converter = new xsc::common::scalar2vectorN_converter<1>("M17_AXI_awlock_converter");
    mp_M17_AXI_awlock_converter->scalar_in(m_M17_AXI_awlock_converter_signal);
    mp_M17_AXI_awlock_converter->vector_out(M17_AXI_awlock);
    mp_M17_AXI_transactor->AWLOCK(m_M17_AXI_awlock_converter_signal);
    mp_M17_AXI_transactor->AWCACHE(M17_AXI_awcache);
    mp_M17_AXI_transactor->AWPROT(M17_AXI_awprot);
    mp_M17_AXI_transactor->AWQOS(M17_AXI_awqos);
    mp_M17_AXI_transactor->AWVALID(M17_AXI_awvalid);
    mp_M17_AXI_transactor->AWREADY(M17_AXI_awready);
    mp_M17_AXI_transactor->WDATA(M17_AXI_wdata);
    mp_M17_AXI_transactor->WSTRB(M17_AXI_wstrb);
    mp_M17_AXI_transactor->WLAST(M17_AXI_wlast);
    mp_M17_AXI_transactor->WVALID(M17_AXI_wvalid);
    mp_M17_AXI_transactor->WREADY(M17_AXI_wready);
    mp_M17_AXI_transactor->BRESP(M17_AXI_bresp);
    mp_M17_AXI_transactor->BVALID(M17_AXI_bvalid);
    mp_M17_AXI_transactor->BREADY(M17_AXI_bready);
    mp_M17_AXI_transactor->ARADDR(M17_AXI_araddr);
    mp_M17_AXI_transactor->ARLEN(M17_AXI_arlen);
    mp_M17_AXI_transactor->ARSIZE(M17_AXI_arsize);
    mp_M17_AXI_transactor->ARBURST(M17_AXI_arburst);
    mp_M17_AXI_arlock_converter = new xsc::common::scalar2vectorN_converter<1>("M17_AXI_arlock_converter");
    mp_M17_AXI_arlock_converter->scalar_in(m_M17_AXI_arlock_converter_signal);
    mp_M17_AXI_arlock_converter->vector_out(M17_AXI_arlock);
    mp_M17_AXI_transactor->ARLOCK(m_M17_AXI_arlock_converter_signal);
    mp_M17_AXI_transactor->ARCACHE(M17_AXI_arcache);
    mp_M17_AXI_transactor->ARPROT(M17_AXI_arprot);
    mp_M17_AXI_transactor->ARQOS(M17_AXI_arqos);
    mp_M17_AXI_transactor->ARVALID(M17_AXI_arvalid);
    mp_M17_AXI_transactor->ARREADY(M17_AXI_arready);
    mp_M17_AXI_transactor->RDATA(M17_AXI_rdata);
    mp_M17_AXI_transactor->RRESP(M17_AXI_rresp);
    mp_M17_AXI_transactor->RLAST(M17_AXI_rlast);
    mp_M17_AXI_transactor->RVALID(M17_AXI_rvalid);
    mp_M17_AXI_transactor->RREADY(M17_AXI_rready);
    mp_M17_AXI_transactor->CLK(aclk);
    mp_M17_AXI_transactor->RST(aresetn);

    // M17_AXI' transactor sockets

    mp_impl->M17_AXI_tlm_aximm_read_socket->bind(*(mp_M17_AXI_transactor->rd_socket));
    mp_impl->M17_AXI_tlm_aximm_write_socket->bind(*(mp_M17_AXI_transactor->wr_socket));
  }
  else
  {
  }

  // configure 'M18_AXI' transactor

  if (xsc::utils::xsc_sim_manager::getInstanceParameterInt("Multi_convo_core_smartconnect_0_0", "M18_AXI_TLM_MODE") != 1)
  {
    // Instantiate Socket Stubs

  // 'M18_AXI' transactor parameters
    xsc::common_cpp::properties M18_AXI_transactor_param_props;
    M18_AXI_transactor_param_props.addLong("DATA_WIDTH", "32");
    M18_AXI_transactor_param_props.addLong("FREQ_HZ", "100000000");
    M18_AXI_transactor_param_props.addLong("ID_WIDTH", "0");
    M18_AXI_transactor_param_props.addLong("ADDR_WIDTH", "12");
    M18_AXI_transactor_param_props.addLong("AWUSER_WIDTH", "0");
    M18_AXI_transactor_param_props.addLong("ARUSER_WIDTH", "0");
    M18_AXI_transactor_param_props.addLong("WUSER_WIDTH", "0");
    M18_AXI_transactor_param_props.addLong("RUSER_WIDTH", "0");
    M18_AXI_transactor_param_props.addLong("BUSER_WIDTH", "0");
    M18_AXI_transactor_param_props.addLong("HAS_BURST", "1");
    M18_AXI_transactor_param_props.addLong("HAS_LOCK", "1");
    M18_AXI_transactor_param_props.addLong("HAS_PROT", "1");
    M18_AXI_transactor_param_props.addLong("HAS_CACHE", "1");
    M18_AXI_transactor_param_props.addLong("HAS_QOS", "1");
    M18_AXI_transactor_param_props.addLong("HAS_REGION", "0");
    M18_AXI_transactor_param_props.addLong("HAS_WSTRB", "1");
    M18_AXI_transactor_param_props.addLong("HAS_BRESP", "1");
    M18_AXI_transactor_param_props.addLong("HAS_RRESP", "1");
    M18_AXI_transactor_param_props.addLong("SUPPORTS_NARROW_BURST", "0");
    M18_AXI_transactor_param_props.addLong("NUM_READ_OUTSTANDING", "2");
    M18_AXI_transactor_param_props.addLong("NUM_WRITE_OUTSTANDING", "2");
    M18_AXI_transactor_param_props.addLong("MAX_BURST_LENGTH", "256");
    M18_AXI_transactor_param_props.addLong("NUM_READ_THREADS", "1");
    M18_AXI_transactor_param_props.addLong("NUM_WRITE_THREADS", "1");
    M18_AXI_transactor_param_props.addLong("RUSER_BITS_PER_BYTE", "0");
    M18_AXI_transactor_param_props.addLong("WUSER_BITS_PER_BYTE", "0");
    M18_AXI_transactor_param_props.addLong("HAS_SIZE", "1");
    M18_AXI_transactor_param_props.addLong("HAS_RESET", "1");
    M18_AXI_transactor_param_props.addFloat("PHASE", "0.0");
    M18_AXI_transactor_param_props.addString("PROTOCOL", "AXI4");
    M18_AXI_transactor_param_props.addString("READ_WRITE_MODE", "READ_WRITE");
    M18_AXI_transactor_param_props.addString("CLK_DOMAIN", "Multi_convo_core_processing_system7_0_0_FCLK_CLK0");

    mp_M18_AXI_transactor = new xtlm::xaximm_xtlm2pin_t<32,12,1,1,1,1,1,1>("M18_AXI_transactor", M18_AXI_transactor_param_props);

    // M18_AXI' transactor ports

    mp_M18_AXI_transactor->AWADDR(M18_AXI_awaddr);
    mp_M18_AXI_transactor->AWLEN(M18_AXI_awlen);
    mp_M18_AXI_transactor->AWSIZE(M18_AXI_awsize);
    mp_M18_AXI_transactor->AWBURST(M18_AXI_awburst);
    mp_M18_AXI_awlock_converter = new xsc::common::scalar2vectorN_converter<1>("M18_AXI_awlock_converter");
    mp_M18_AXI_awlock_converter->scalar_in(m_M18_AXI_awlock_converter_signal);
    mp_M18_AXI_awlock_converter->vector_out(M18_AXI_awlock);
    mp_M18_AXI_transactor->AWLOCK(m_M18_AXI_awlock_converter_signal);
    mp_M18_AXI_transactor->AWCACHE(M18_AXI_awcache);
    mp_M18_AXI_transactor->AWPROT(M18_AXI_awprot);
    mp_M18_AXI_transactor->AWQOS(M18_AXI_awqos);
    mp_M18_AXI_transactor->AWVALID(M18_AXI_awvalid);
    mp_M18_AXI_transactor->AWREADY(M18_AXI_awready);
    mp_M18_AXI_transactor->WDATA(M18_AXI_wdata);
    mp_M18_AXI_transactor->WSTRB(M18_AXI_wstrb);
    mp_M18_AXI_transactor->WLAST(M18_AXI_wlast);
    mp_M18_AXI_transactor->WVALID(M18_AXI_wvalid);
    mp_M18_AXI_transactor->WREADY(M18_AXI_wready);
    mp_M18_AXI_transactor->BRESP(M18_AXI_bresp);
    mp_M18_AXI_transactor->BVALID(M18_AXI_bvalid);
    mp_M18_AXI_transactor->BREADY(M18_AXI_bready);
    mp_M18_AXI_transactor->ARADDR(M18_AXI_araddr);
    mp_M18_AXI_transactor->ARLEN(M18_AXI_arlen);
    mp_M18_AXI_transactor->ARSIZE(M18_AXI_arsize);
    mp_M18_AXI_transactor->ARBURST(M18_AXI_arburst);
    mp_M18_AXI_arlock_converter = new xsc::common::scalar2vectorN_converter<1>("M18_AXI_arlock_converter");
    mp_M18_AXI_arlock_converter->scalar_in(m_M18_AXI_arlock_converter_signal);
    mp_M18_AXI_arlock_converter->vector_out(M18_AXI_arlock);
    mp_M18_AXI_transactor->ARLOCK(m_M18_AXI_arlock_converter_signal);
    mp_M18_AXI_transactor->ARCACHE(M18_AXI_arcache);
    mp_M18_AXI_transactor->ARPROT(M18_AXI_arprot);
    mp_M18_AXI_transactor->ARQOS(M18_AXI_arqos);
    mp_M18_AXI_transactor->ARVALID(M18_AXI_arvalid);
    mp_M18_AXI_transactor->ARREADY(M18_AXI_arready);
    mp_M18_AXI_transactor->RDATA(M18_AXI_rdata);
    mp_M18_AXI_transactor->RRESP(M18_AXI_rresp);
    mp_M18_AXI_transactor->RLAST(M18_AXI_rlast);
    mp_M18_AXI_transactor->RVALID(M18_AXI_rvalid);
    mp_M18_AXI_transactor->RREADY(M18_AXI_rready);
    mp_M18_AXI_transactor->CLK(aclk);
    mp_M18_AXI_transactor->RST(aresetn);

    // M18_AXI' transactor sockets

    mp_impl->M18_AXI_tlm_aximm_read_socket->bind(*(mp_M18_AXI_transactor->rd_socket));
    mp_impl->M18_AXI_tlm_aximm_write_socket->bind(*(mp_M18_AXI_transactor->wr_socket));
  }
  else
  {
  }

  // configure 'M19_AXI' transactor

  if (xsc::utils::xsc_sim_manager::getInstanceParameterInt("Multi_convo_core_smartconnect_0_0", "M19_AXI_TLM_MODE") != 1)
  {
    // Instantiate Socket Stubs

  // 'M19_AXI' transactor parameters
    xsc::common_cpp::properties M19_AXI_transactor_param_props;
    M19_AXI_transactor_param_props.addLong("DATA_WIDTH", "32");
    M19_AXI_transactor_param_props.addLong("FREQ_HZ", "100000000");
    M19_AXI_transactor_param_props.addLong("ID_WIDTH", "0");
    M19_AXI_transactor_param_props.addLong("ADDR_WIDTH", "12");
    M19_AXI_transactor_param_props.addLong("AWUSER_WIDTH", "0");
    M19_AXI_transactor_param_props.addLong("ARUSER_WIDTH", "0");
    M19_AXI_transactor_param_props.addLong("WUSER_WIDTH", "0");
    M19_AXI_transactor_param_props.addLong("RUSER_WIDTH", "0");
    M19_AXI_transactor_param_props.addLong("BUSER_WIDTH", "0");
    M19_AXI_transactor_param_props.addLong("HAS_BURST", "1");
    M19_AXI_transactor_param_props.addLong("HAS_LOCK", "1");
    M19_AXI_transactor_param_props.addLong("HAS_PROT", "1");
    M19_AXI_transactor_param_props.addLong("HAS_CACHE", "1");
    M19_AXI_transactor_param_props.addLong("HAS_QOS", "1");
    M19_AXI_transactor_param_props.addLong("HAS_REGION", "0");
    M19_AXI_transactor_param_props.addLong("HAS_WSTRB", "1");
    M19_AXI_transactor_param_props.addLong("HAS_BRESP", "1");
    M19_AXI_transactor_param_props.addLong("HAS_RRESP", "1");
    M19_AXI_transactor_param_props.addLong("SUPPORTS_NARROW_BURST", "0");
    M19_AXI_transactor_param_props.addLong("NUM_READ_OUTSTANDING", "2");
    M19_AXI_transactor_param_props.addLong("NUM_WRITE_OUTSTANDING", "2");
    M19_AXI_transactor_param_props.addLong("MAX_BURST_LENGTH", "256");
    M19_AXI_transactor_param_props.addLong("NUM_READ_THREADS", "1");
    M19_AXI_transactor_param_props.addLong("NUM_WRITE_THREADS", "1");
    M19_AXI_transactor_param_props.addLong("RUSER_BITS_PER_BYTE", "0");
    M19_AXI_transactor_param_props.addLong("WUSER_BITS_PER_BYTE", "0");
    M19_AXI_transactor_param_props.addLong("HAS_SIZE", "1");
    M19_AXI_transactor_param_props.addLong("HAS_RESET", "1");
    M19_AXI_transactor_param_props.addFloat("PHASE", "0.0");
    M19_AXI_transactor_param_props.addString("PROTOCOL", "AXI4");
    M19_AXI_transactor_param_props.addString("READ_WRITE_MODE", "READ_WRITE");
    M19_AXI_transactor_param_props.addString("CLK_DOMAIN", "Multi_convo_core_processing_system7_0_0_FCLK_CLK0");

    mp_M19_AXI_transactor = new xtlm::xaximm_xtlm2pin_t<32,12,1,1,1,1,1,1>("M19_AXI_transactor", M19_AXI_transactor_param_props);

    // M19_AXI' transactor ports

    mp_M19_AXI_transactor->AWADDR(M19_AXI_awaddr);
    mp_M19_AXI_transactor->AWLEN(M19_AXI_awlen);
    mp_M19_AXI_transactor->AWSIZE(M19_AXI_awsize);
    mp_M19_AXI_transactor->AWBURST(M19_AXI_awburst);
    mp_M19_AXI_awlock_converter = new xsc::common::scalar2vectorN_converter<1>("M19_AXI_awlock_converter");
    mp_M19_AXI_awlock_converter->scalar_in(m_M19_AXI_awlock_converter_signal);
    mp_M19_AXI_awlock_converter->vector_out(M19_AXI_awlock);
    mp_M19_AXI_transactor->AWLOCK(m_M19_AXI_awlock_converter_signal);
    mp_M19_AXI_transactor->AWCACHE(M19_AXI_awcache);
    mp_M19_AXI_transactor->AWPROT(M19_AXI_awprot);
    mp_M19_AXI_transactor->AWQOS(M19_AXI_awqos);
    mp_M19_AXI_transactor->AWVALID(M19_AXI_awvalid);
    mp_M19_AXI_transactor->AWREADY(M19_AXI_awready);
    mp_M19_AXI_transactor->WDATA(M19_AXI_wdata);
    mp_M19_AXI_transactor->WSTRB(M19_AXI_wstrb);
    mp_M19_AXI_transactor->WLAST(M19_AXI_wlast);
    mp_M19_AXI_transactor->WVALID(M19_AXI_wvalid);
    mp_M19_AXI_transactor->WREADY(M19_AXI_wready);
    mp_M19_AXI_transactor->BRESP(M19_AXI_bresp);
    mp_M19_AXI_transactor->BVALID(M19_AXI_bvalid);
    mp_M19_AXI_transactor->BREADY(M19_AXI_bready);
    mp_M19_AXI_transactor->ARADDR(M19_AXI_araddr);
    mp_M19_AXI_transactor->ARLEN(M19_AXI_arlen);
    mp_M19_AXI_transactor->ARSIZE(M19_AXI_arsize);
    mp_M19_AXI_transactor->ARBURST(M19_AXI_arburst);
    mp_M19_AXI_arlock_converter = new xsc::common::scalar2vectorN_converter<1>("M19_AXI_arlock_converter");
    mp_M19_AXI_arlock_converter->scalar_in(m_M19_AXI_arlock_converter_signal);
    mp_M19_AXI_arlock_converter->vector_out(M19_AXI_arlock);
    mp_M19_AXI_transactor->ARLOCK(m_M19_AXI_arlock_converter_signal);
    mp_M19_AXI_transactor->ARCACHE(M19_AXI_arcache);
    mp_M19_AXI_transactor->ARPROT(M19_AXI_arprot);
    mp_M19_AXI_transactor->ARQOS(M19_AXI_arqos);
    mp_M19_AXI_transactor->ARVALID(M19_AXI_arvalid);
    mp_M19_AXI_transactor->ARREADY(M19_AXI_arready);
    mp_M19_AXI_transactor->RDATA(M19_AXI_rdata);
    mp_M19_AXI_transactor->RRESP(M19_AXI_rresp);
    mp_M19_AXI_transactor->RLAST(M19_AXI_rlast);
    mp_M19_AXI_transactor->RVALID(M19_AXI_rvalid);
    mp_M19_AXI_transactor->RREADY(M19_AXI_rready);
    mp_M19_AXI_transactor->CLK(aclk);
    mp_M19_AXI_transactor->RST(aresetn);

    // M19_AXI' transactor sockets

    mp_impl->M19_AXI_tlm_aximm_read_socket->bind(*(mp_M19_AXI_transactor->rd_socket));
    mp_impl->M19_AXI_tlm_aximm_write_socket->bind(*(mp_M19_AXI_transactor->wr_socket));
  }
  else
  {
  }

  // configure 'M20_AXI' transactor

  if (xsc::utils::xsc_sim_manager::getInstanceParameterInt("Multi_convo_core_smartconnect_0_0", "M20_AXI_TLM_MODE") != 1)
  {
    // Instantiate Socket Stubs

  // 'M20_AXI' transactor parameters
    xsc::common_cpp::properties M20_AXI_transactor_param_props;
    M20_AXI_transactor_param_props.addLong("DATA_WIDTH", "32");
    M20_AXI_transactor_param_props.addLong("FREQ_HZ", "100000000");
    M20_AXI_transactor_param_props.addLong("ID_WIDTH", "0");
    M20_AXI_transactor_param_props.addLong("ADDR_WIDTH", "12");
    M20_AXI_transactor_param_props.addLong("AWUSER_WIDTH", "0");
    M20_AXI_transactor_param_props.addLong("ARUSER_WIDTH", "0");
    M20_AXI_transactor_param_props.addLong("WUSER_WIDTH", "0");
    M20_AXI_transactor_param_props.addLong("RUSER_WIDTH", "0");
    M20_AXI_transactor_param_props.addLong("BUSER_WIDTH", "0");
    M20_AXI_transactor_param_props.addLong("HAS_BURST", "1");
    M20_AXI_transactor_param_props.addLong("HAS_LOCK", "1");
    M20_AXI_transactor_param_props.addLong("HAS_PROT", "1");
    M20_AXI_transactor_param_props.addLong("HAS_CACHE", "1");
    M20_AXI_transactor_param_props.addLong("HAS_QOS", "1");
    M20_AXI_transactor_param_props.addLong("HAS_REGION", "0");
    M20_AXI_transactor_param_props.addLong("HAS_WSTRB", "1");
    M20_AXI_transactor_param_props.addLong("HAS_BRESP", "1");
    M20_AXI_transactor_param_props.addLong("HAS_RRESP", "1");
    M20_AXI_transactor_param_props.addLong("SUPPORTS_NARROW_BURST", "0");
    M20_AXI_transactor_param_props.addLong("NUM_READ_OUTSTANDING", "2");
    M20_AXI_transactor_param_props.addLong("NUM_WRITE_OUTSTANDING", "2");
    M20_AXI_transactor_param_props.addLong("MAX_BURST_LENGTH", "256");
    M20_AXI_transactor_param_props.addLong("NUM_READ_THREADS", "1");
    M20_AXI_transactor_param_props.addLong("NUM_WRITE_THREADS", "1");
    M20_AXI_transactor_param_props.addLong("RUSER_BITS_PER_BYTE", "0");
    M20_AXI_transactor_param_props.addLong("WUSER_BITS_PER_BYTE", "0");
    M20_AXI_transactor_param_props.addLong("HAS_SIZE", "1");
    M20_AXI_transactor_param_props.addLong("HAS_RESET", "1");
    M20_AXI_transactor_param_props.addFloat("PHASE", "0.0");
    M20_AXI_transactor_param_props.addString("PROTOCOL", "AXI4");
    M20_AXI_transactor_param_props.addString("READ_WRITE_MODE", "READ_WRITE");
    M20_AXI_transactor_param_props.addString("CLK_DOMAIN", "Multi_convo_core_processing_system7_0_0_FCLK_CLK0");

    mp_M20_AXI_transactor = new xtlm::xaximm_xtlm2pin_t<32,12,1,1,1,1,1,1>("M20_AXI_transactor", M20_AXI_transactor_param_props);

    // M20_AXI' transactor ports

    mp_M20_AXI_transactor->AWADDR(M20_AXI_awaddr);
    mp_M20_AXI_transactor->AWLEN(M20_AXI_awlen);
    mp_M20_AXI_transactor->AWSIZE(M20_AXI_awsize);
    mp_M20_AXI_transactor->AWBURST(M20_AXI_awburst);
    mp_M20_AXI_awlock_converter = new xsc::common::scalar2vectorN_converter<1>("M20_AXI_awlock_converter");
    mp_M20_AXI_awlock_converter->scalar_in(m_M20_AXI_awlock_converter_signal);
    mp_M20_AXI_awlock_converter->vector_out(M20_AXI_awlock);
    mp_M20_AXI_transactor->AWLOCK(m_M20_AXI_awlock_converter_signal);
    mp_M20_AXI_transactor->AWCACHE(M20_AXI_awcache);
    mp_M20_AXI_transactor->AWPROT(M20_AXI_awprot);
    mp_M20_AXI_transactor->AWQOS(M20_AXI_awqos);
    mp_M20_AXI_transactor->AWVALID(M20_AXI_awvalid);
    mp_M20_AXI_transactor->AWREADY(M20_AXI_awready);
    mp_M20_AXI_transactor->WDATA(M20_AXI_wdata);
    mp_M20_AXI_transactor->WSTRB(M20_AXI_wstrb);
    mp_M20_AXI_transactor->WLAST(M20_AXI_wlast);
    mp_M20_AXI_transactor->WVALID(M20_AXI_wvalid);
    mp_M20_AXI_transactor->WREADY(M20_AXI_wready);
    mp_M20_AXI_transactor->BRESP(M20_AXI_bresp);
    mp_M20_AXI_transactor->BVALID(M20_AXI_bvalid);
    mp_M20_AXI_transactor->BREADY(M20_AXI_bready);
    mp_M20_AXI_transactor->ARADDR(M20_AXI_araddr);
    mp_M20_AXI_transactor->ARLEN(M20_AXI_arlen);
    mp_M20_AXI_transactor->ARSIZE(M20_AXI_arsize);
    mp_M20_AXI_transactor->ARBURST(M20_AXI_arburst);
    mp_M20_AXI_arlock_converter = new xsc::common::scalar2vectorN_converter<1>("M20_AXI_arlock_converter");
    mp_M20_AXI_arlock_converter->scalar_in(m_M20_AXI_arlock_converter_signal);
    mp_M20_AXI_arlock_converter->vector_out(M20_AXI_arlock);
    mp_M20_AXI_transactor->ARLOCK(m_M20_AXI_arlock_converter_signal);
    mp_M20_AXI_transactor->ARCACHE(M20_AXI_arcache);
    mp_M20_AXI_transactor->ARPROT(M20_AXI_arprot);
    mp_M20_AXI_transactor->ARQOS(M20_AXI_arqos);
    mp_M20_AXI_transactor->ARVALID(M20_AXI_arvalid);
    mp_M20_AXI_transactor->ARREADY(M20_AXI_arready);
    mp_M20_AXI_transactor->RDATA(M20_AXI_rdata);
    mp_M20_AXI_transactor->RRESP(M20_AXI_rresp);
    mp_M20_AXI_transactor->RLAST(M20_AXI_rlast);
    mp_M20_AXI_transactor->RVALID(M20_AXI_rvalid);
    mp_M20_AXI_transactor->RREADY(M20_AXI_rready);
    mp_M20_AXI_transactor->CLK(aclk);
    mp_M20_AXI_transactor->RST(aresetn);

    // M20_AXI' transactor sockets

    mp_impl->M20_AXI_tlm_aximm_read_socket->bind(*(mp_M20_AXI_transactor->rd_socket));
    mp_impl->M20_AXI_tlm_aximm_write_socket->bind(*(mp_M20_AXI_transactor->wr_socket));
  }
  else
  {
  }

  // configure 'M21_AXI' transactor

  if (xsc::utils::xsc_sim_manager::getInstanceParameterInt("Multi_convo_core_smartconnect_0_0", "M21_AXI_TLM_MODE") != 1)
  {
    // Instantiate Socket Stubs

  // 'M21_AXI' transactor parameters
    xsc::common_cpp::properties M21_AXI_transactor_param_props;
    M21_AXI_transactor_param_props.addLong("DATA_WIDTH", "32");
    M21_AXI_transactor_param_props.addLong("FREQ_HZ", "100000000");
    M21_AXI_transactor_param_props.addLong("ID_WIDTH", "0");
    M21_AXI_transactor_param_props.addLong("ADDR_WIDTH", "12");
    M21_AXI_transactor_param_props.addLong("AWUSER_WIDTH", "0");
    M21_AXI_transactor_param_props.addLong("ARUSER_WIDTH", "0");
    M21_AXI_transactor_param_props.addLong("WUSER_WIDTH", "0");
    M21_AXI_transactor_param_props.addLong("RUSER_WIDTH", "0");
    M21_AXI_transactor_param_props.addLong("BUSER_WIDTH", "0");
    M21_AXI_transactor_param_props.addLong("HAS_BURST", "1");
    M21_AXI_transactor_param_props.addLong("HAS_LOCK", "1");
    M21_AXI_transactor_param_props.addLong("HAS_PROT", "1");
    M21_AXI_transactor_param_props.addLong("HAS_CACHE", "1");
    M21_AXI_transactor_param_props.addLong("HAS_QOS", "1");
    M21_AXI_transactor_param_props.addLong("HAS_REGION", "0");
    M21_AXI_transactor_param_props.addLong("HAS_WSTRB", "1");
    M21_AXI_transactor_param_props.addLong("HAS_BRESP", "1");
    M21_AXI_transactor_param_props.addLong("HAS_RRESP", "1");
    M21_AXI_transactor_param_props.addLong("SUPPORTS_NARROW_BURST", "0");
    M21_AXI_transactor_param_props.addLong("NUM_READ_OUTSTANDING", "2");
    M21_AXI_transactor_param_props.addLong("NUM_WRITE_OUTSTANDING", "2");
    M21_AXI_transactor_param_props.addLong("MAX_BURST_LENGTH", "256");
    M21_AXI_transactor_param_props.addLong("NUM_READ_THREADS", "1");
    M21_AXI_transactor_param_props.addLong("NUM_WRITE_THREADS", "1");
    M21_AXI_transactor_param_props.addLong("RUSER_BITS_PER_BYTE", "0");
    M21_AXI_transactor_param_props.addLong("WUSER_BITS_PER_BYTE", "0");
    M21_AXI_transactor_param_props.addLong("HAS_SIZE", "1");
    M21_AXI_transactor_param_props.addLong("HAS_RESET", "1");
    M21_AXI_transactor_param_props.addFloat("PHASE", "0.0");
    M21_AXI_transactor_param_props.addString("PROTOCOL", "AXI4");
    M21_AXI_transactor_param_props.addString("READ_WRITE_MODE", "READ_WRITE");
    M21_AXI_transactor_param_props.addString("CLK_DOMAIN", "Multi_convo_core_processing_system7_0_0_FCLK_CLK0");

    mp_M21_AXI_transactor = new xtlm::xaximm_xtlm2pin_t<32,12,1,1,1,1,1,1>("M21_AXI_transactor", M21_AXI_transactor_param_props);

    // M21_AXI' transactor ports

    mp_M21_AXI_transactor->AWADDR(M21_AXI_awaddr);
    mp_M21_AXI_transactor->AWLEN(M21_AXI_awlen);
    mp_M21_AXI_transactor->AWSIZE(M21_AXI_awsize);
    mp_M21_AXI_transactor->AWBURST(M21_AXI_awburst);
    mp_M21_AXI_awlock_converter = new xsc::common::scalar2vectorN_converter<1>("M21_AXI_awlock_converter");
    mp_M21_AXI_awlock_converter->scalar_in(m_M21_AXI_awlock_converter_signal);
    mp_M21_AXI_awlock_converter->vector_out(M21_AXI_awlock);
    mp_M21_AXI_transactor->AWLOCK(m_M21_AXI_awlock_converter_signal);
    mp_M21_AXI_transactor->AWCACHE(M21_AXI_awcache);
    mp_M21_AXI_transactor->AWPROT(M21_AXI_awprot);
    mp_M21_AXI_transactor->AWQOS(M21_AXI_awqos);
    mp_M21_AXI_transactor->AWVALID(M21_AXI_awvalid);
    mp_M21_AXI_transactor->AWREADY(M21_AXI_awready);
    mp_M21_AXI_transactor->WDATA(M21_AXI_wdata);
    mp_M21_AXI_transactor->WSTRB(M21_AXI_wstrb);
    mp_M21_AXI_transactor->WLAST(M21_AXI_wlast);
    mp_M21_AXI_transactor->WVALID(M21_AXI_wvalid);
    mp_M21_AXI_transactor->WREADY(M21_AXI_wready);
    mp_M21_AXI_transactor->BRESP(M21_AXI_bresp);
    mp_M21_AXI_transactor->BVALID(M21_AXI_bvalid);
    mp_M21_AXI_transactor->BREADY(M21_AXI_bready);
    mp_M21_AXI_transactor->ARADDR(M21_AXI_araddr);
    mp_M21_AXI_transactor->ARLEN(M21_AXI_arlen);
    mp_M21_AXI_transactor->ARSIZE(M21_AXI_arsize);
    mp_M21_AXI_transactor->ARBURST(M21_AXI_arburst);
    mp_M21_AXI_arlock_converter = new xsc::common::scalar2vectorN_converter<1>("M21_AXI_arlock_converter");
    mp_M21_AXI_arlock_converter->scalar_in(m_M21_AXI_arlock_converter_signal);
    mp_M21_AXI_arlock_converter->vector_out(M21_AXI_arlock);
    mp_M21_AXI_transactor->ARLOCK(m_M21_AXI_arlock_converter_signal);
    mp_M21_AXI_transactor->ARCACHE(M21_AXI_arcache);
    mp_M21_AXI_transactor->ARPROT(M21_AXI_arprot);
    mp_M21_AXI_transactor->ARQOS(M21_AXI_arqos);
    mp_M21_AXI_transactor->ARVALID(M21_AXI_arvalid);
    mp_M21_AXI_transactor->ARREADY(M21_AXI_arready);
    mp_M21_AXI_transactor->RDATA(M21_AXI_rdata);
    mp_M21_AXI_transactor->RRESP(M21_AXI_rresp);
    mp_M21_AXI_transactor->RLAST(M21_AXI_rlast);
    mp_M21_AXI_transactor->RVALID(M21_AXI_rvalid);
    mp_M21_AXI_transactor->RREADY(M21_AXI_rready);
    mp_M21_AXI_transactor->CLK(aclk);
    mp_M21_AXI_transactor->RST(aresetn);

    // M21_AXI' transactor sockets

    mp_impl->M21_AXI_tlm_aximm_read_socket->bind(*(mp_M21_AXI_transactor->rd_socket));
    mp_impl->M21_AXI_tlm_aximm_write_socket->bind(*(mp_M21_AXI_transactor->wr_socket));
  }
  else
  {
  }

  // configure 'M22_AXI' transactor

  if (xsc::utils::xsc_sim_manager::getInstanceParameterInt("Multi_convo_core_smartconnect_0_0", "M22_AXI_TLM_MODE") != 1)
  {
    // Instantiate Socket Stubs

  // 'M22_AXI' transactor parameters
    xsc::common_cpp::properties M22_AXI_transactor_param_props;
    M22_AXI_transactor_param_props.addLong("DATA_WIDTH", "32");
    M22_AXI_transactor_param_props.addLong("FREQ_HZ", "100000000");
    M22_AXI_transactor_param_props.addLong("ID_WIDTH", "0");
    M22_AXI_transactor_param_props.addLong("ADDR_WIDTH", "12");
    M22_AXI_transactor_param_props.addLong("AWUSER_WIDTH", "0");
    M22_AXI_transactor_param_props.addLong("ARUSER_WIDTH", "0");
    M22_AXI_transactor_param_props.addLong("WUSER_WIDTH", "0");
    M22_AXI_transactor_param_props.addLong("RUSER_WIDTH", "0");
    M22_AXI_transactor_param_props.addLong("BUSER_WIDTH", "0");
    M22_AXI_transactor_param_props.addLong("HAS_BURST", "1");
    M22_AXI_transactor_param_props.addLong("HAS_LOCK", "1");
    M22_AXI_transactor_param_props.addLong("HAS_PROT", "1");
    M22_AXI_transactor_param_props.addLong("HAS_CACHE", "1");
    M22_AXI_transactor_param_props.addLong("HAS_QOS", "1");
    M22_AXI_transactor_param_props.addLong("HAS_REGION", "0");
    M22_AXI_transactor_param_props.addLong("HAS_WSTRB", "1");
    M22_AXI_transactor_param_props.addLong("HAS_BRESP", "1");
    M22_AXI_transactor_param_props.addLong("HAS_RRESP", "1");
    M22_AXI_transactor_param_props.addLong("SUPPORTS_NARROW_BURST", "0");
    M22_AXI_transactor_param_props.addLong("NUM_READ_OUTSTANDING", "2");
    M22_AXI_transactor_param_props.addLong("NUM_WRITE_OUTSTANDING", "2");
    M22_AXI_transactor_param_props.addLong("MAX_BURST_LENGTH", "256");
    M22_AXI_transactor_param_props.addLong("NUM_READ_THREADS", "1");
    M22_AXI_transactor_param_props.addLong("NUM_WRITE_THREADS", "1");
    M22_AXI_transactor_param_props.addLong("RUSER_BITS_PER_BYTE", "0");
    M22_AXI_transactor_param_props.addLong("WUSER_BITS_PER_BYTE", "0");
    M22_AXI_transactor_param_props.addLong("HAS_SIZE", "1");
    M22_AXI_transactor_param_props.addLong("HAS_RESET", "1");
    M22_AXI_transactor_param_props.addFloat("PHASE", "0.0");
    M22_AXI_transactor_param_props.addString("PROTOCOL", "AXI4");
    M22_AXI_transactor_param_props.addString("READ_WRITE_MODE", "READ_WRITE");
    M22_AXI_transactor_param_props.addString("CLK_DOMAIN", "Multi_convo_core_processing_system7_0_0_FCLK_CLK0");

    mp_M22_AXI_transactor = new xtlm::xaximm_xtlm2pin_t<32,12,1,1,1,1,1,1>("M22_AXI_transactor", M22_AXI_transactor_param_props);

    // M22_AXI' transactor ports

    mp_M22_AXI_transactor->AWADDR(M22_AXI_awaddr);
    mp_M22_AXI_transactor->AWLEN(M22_AXI_awlen);
    mp_M22_AXI_transactor->AWSIZE(M22_AXI_awsize);
    mp_M22_AXI_transactor->AWBURST(M22_AXI_awburst);
    mp_M22_AXI_awlock_converter = new xsc::common::scalar2vectorN_converter<1>("M22_AXI_awlock_converter");
    mp_M22_AXI_awlock_converter->scalar_in(m_M22_AXI_awlock_converter_signal);
    mp_M22_AXI_awlock_converter->vector_out(M22_AXI_awlock);
    mp_M22_AXI_transactor->AWLOCK(m_M22_AXI_awlock_converter_signal);
    mp_M22_AXI_transactor->AWCACHE(M22_AXI_awcache);
    mp_M22_AXI_transactor->AWPROT(M22_AXI_awprot);
    mp_M22_AXI_transactor->AWQOS(M22_AXI_awqos);
    mp_M22_AXI_transactor->AWVALID(M22_AXI_awvalid);
    mp_M22_AXI_transactor->AWREADY(M22_AXI_awready);
    mp_M22_AXI_transactor->WDATA(M22_AXI_wdata);
    mp_M22_AXI_transactor->WSTRB(M22_AXI_wstrb);
    mp_M22_AXI_transactor->WLAST(M22_AXI_wlast);
    mp_M22_AXI_transactor->WVALID(M22_AXI_wvalid);
    mp_M22_AXI_transactor->WREADY(M22_AXI_wready);
    mp_M22_AXI_transactor->BRESP(M22_AXI_bresp);
    mp_M22_AXI_transactor->BVALID(M22_AXI_bvalid);
    mp_M22_AXI_transactor->BREADY(M22_AXI_bready);
    mp_M22_AXI_transactor->ARADDR(M22_AXI_araddr);
    mp_M22_AXI_transactor->ARLEN(M22_AXI_arlen);
    mp_M22_AXI_transactor->ARSIZE(M22_AXI_arsize);
    mp_M22_AXI_transactor->ARBURST(M22_AXI_arburst);
    mp_M22_AXI_arlock_converter = new xsc::common::scalar2vectorN_converter<1>("M22_AXI_arlock_converter");
    mp_M22_AXI_arlock_converter->scalar_in(m_M22_AXI_arlock_converter_signal);
    mp_M22_AXI_arlock_converter->vector_out(M22_AXI_arlock);
    mp_M22_AXI_transactor->ARLOCK(m_M22_AXI_arlock_converter_signal);
    mp_M22_AXI_transactor->ARCACHE(M22_AXI_arcache);
    mp_M22_AXI_transactor->ARPROT(M22_AXI_arprot);
    mp_M22_AXI_transactor->ARQOS(M22_AXI_arqos);
    mp_M22_AXI_transactor->ARVALID(M22_AXI_arvalid);
    mp_M22_AXI_transactor->ARREADY(M22_AXI_arready);
    mp_M22_AXI_transactor->RDATA(M22_AXI_rdata);
    mp_M22_AXI_transactor->RRESP(M22_AXI_rresp);
    mp_M22_AXI_transactor->RLAST(M22_AXI_rlast);
    mp_M22_AXI_transactor->RVALID(M22_AXI_rvalid);
    mp_M22_AXI_transactor->RREADY(M22_AXI_rready);
    mp_M22_AXI_transactor->CLK(aclk);
    mp_M22_AXI_transactor->RST(aresetn);

    // M22_AXI' transactor sockets

    mp_impl->M22_AXI_tlm_aximm_read_socket->bind(*(mp_M22_AXI_transactor->rd_socket));
    mp_impl->M22_AXI_tlm_aximm_write_socket->bind(*(mp_M22_AXI_transactor->wr_socket));
  }
  else
  {
  }

  // configure 'M23_AXI' transactor

  if (xsc::utils::xsc_sim_manager::getInstanceParameterInt("Multi_convo_core_smartconnect_0_0", "M23_AXI_TLM_MODE") != 1)
  {
    // Instantiate Socket Stubs

  // 'M23_AXI' transactor parameters
    xsc::common_cpp::properties M23_AXI_transactor_param_props;
    M23_AXI_transactor_param_props.addLong("DATA_WIDTH", "32");
    M23_AXI_transactor_param_props.addLong("FREQ_HZ", "100000000");
    M23_AXI_transactor_param_props.addLong("ID_WIDTH", "0");
    M23_AXI_transactor_param_props.addLong("ADDR_WIDTH", "12");
    M23_AXI_transactor_param_props.addLong("AWUSER_WIDTH", "0");
    M23_AXI_transactor_param_props.addLong("ARUSER_WIDTH", "0");
    M23_AXI_transactor_param_props.addLong("WUSER_WIDTH", "0");
    M23_AXI_transactor_param_props.addLong("RUSER_WIDTH", "0");
    M23_AXI_transactor_param_props.addLong("BUSER_WIDTH", "0");
    M23_AXI_transactor_param_props.addLong("HAS_BURST", "1");
    M23_AXI_transactor_param_props.addLong("HAS_LOCK", "1");
    M23_AXI_transactor_param_props.addLong("HAS_PROT", "1");
    M23_AXI_transactor_param_props.addLong("HAS_CACHE", "1");
    M23_AXI_transactor_param_props.addLong("HAS_QOS", "1");
    M23_AXI_transactor_param_props.addLong("HAS_REGION", "0");
    M23_AXI_transactor_param_props.addLong("HAS_WSTRB", "1");
    M23_AXI_transactor_param_props.addLong("HAS_BRESP", "1");
    M23_AXI_transactor_param_props.addLong("HAS_RRESP", "1");
    M23_AXI_transactor_param_props.addLong("SUPPORTS_NARROW_BURST", "0");
    M23_AXI_transactor_param_props.addLong("NUM_READ_OUTSTANDING", "2");
    M23_AXI_transactor_param_props.addLong("NUM_WRITE_OUTSTANDING", "2");
    M23_AXI_transactor_param_props.addLong("MAX_BURST_LENGTH", "256");
    M23_AXI_transactor_param_props.addLong("NUM_READ_THREADS", "1");
    M23_AXI_transactor_param_props.addLong("NUM_WRITE_THREADS", "1");
    M23_AXI_transactor_param_props.addLong("RUSER_BITS_PER_BYTE", "0");
    M23_AXI_transactor_param_props.addLong("WUSER_BITS_PER_BYTE", "0");
    M23_AXI_transactor_param_props.addLong("HAS_SIZE", "1");
    M23_AXI_transactor_param_props.addLong("HAS_RESET", "1");
    M23_AXI_transactor_param_props.addFloat("PHASE", "0.0");
    M23_AXI_transactor_param_props.addString("PROTOCOL", "AXI4");
    M23_AXI_transactor_param_props.addString("READ_WRITE_MODE", "READ_WRITE");
    M23_AXI_transactor_param_props.addString("CLK_DOMAIN", "Multi_convo_core_processing_system7_0_0_FCLK_CLK0");

    mp_M23_AXI_transactor = new xtlm::xaximm_xtlm2pin_t<32,12,1,1,1,1,1,1>("M23_AXI_transactor", M23_AXI_transactor_param_props);

    // M23_AXI' transactor ports

    mp_M23_AXI_transactor->AWADDR(M23_AXI_awaddr);
    mp_M23_AXI_transactor->AWLEN(M23_AXI_awlen);
    mp_M23_AXI_transactor->AWSIZE(M23_AXI_awsize);
    mp_M23_AXI_transactor->AWBURST(M23_AXI_awburst);
    mp_M23_AXI_awlock_converter = new xsc::common::scalar2vectorN_converter<1>("M23_AXI_awlock_converter");
    mp_M23_AXI_awlock_converter->scalar_in(m_M23_AXI_awlock_converter_signal);
    mp_M23_AXI_awlock_converter->vector_out(M23_AXI_awlock);
    mp_M23_AXI_transactor->AWLOCK(m_M23_AXI_awlock_converter_signal);
    mp_M23_AXI_transactor->AWCACHE(M23_AXI_awcache);
    mp_M23_AXI_transactor->AWPROT(M23_AXI_awprot);
    mp_M23_AXI_transactor->AWQOS(M23_AXI_awqos);
    mp_M23_AXI_transactor->AWVALID(M23_AXI_awvalid);
    mp_M23_AXI_transactor->AWREADY(M23_AXI_awready);
    mp_M23_AXI_transactor->WDATA(M23_AXI_wdata);
    mp_M23_AXI_transactor->WSTRB(M23_AXI_wstrb);
    mp_M23_AXI_transactor->WLAST(M23_AXI_wlast);
    mp_M23_AXI_transactor->WVALID(M23_AXI_wvalid);
    mp_M23_AXI_transactor->WREADY(M23_AXI_wready);
    mp_M23_AXI_transactor->BRESP(M23_AXI_bresp);
    mp_M23_AXI_transactor->BVALID(M23_AXI_bvalid);
    mp_M23_AXI_transactor->BREADY(M23_AXI_bready);
    mp_M23_AXI_transactor->ARADDR(M23_AXI_araddr);
    mp_M23_AXI_transactor->ARLEN(M23_AXI_arlen);
    mp_M23_AXI_transactor->ARSIZE(M23_AXI_arsize);
    mp_M23_AXI_transactor->ARBURST(M23_AXI_arburst);
    mp_M23_AXI_arlock_converter = new xsc::common::scalar2vectorN_converter<1>("M23_AXI_arlock_converter");
    mp_M23_AXI_arlock_converter->scalar_in(m_M23_AXI_arlock_converter_signal);
    mp_M23_AXI_arlock_converter->vector_out(M23_AXI_arlock);
    mp_M23_AXI_transactor->ARLOCK(m_M23_AXI_arlock_converter_signal);
    mp_M23_AXI_transactor->ARCACHE(M23_AXI_arcache);
    mp_M23_AXI_transactor->ARPROT(M23_AXI_arprot);
    mp_M23_AXI_transactor->ARQOS(M23_AXI_arqos);
    mp_M23_AXI_transactor->ARVALID(M23_AXI_arvalid);
    mp_M23_AXI_transactor->ARREADY(M23_AXI_arready);
    mp_M23_AXI_transactor->RDATA(M23_AXI_rdata);
    mp_M23_AXI_transactor->RRESP(M23_AXI_rresp);
    mp_M23_AXI_transactor->RLAST(M23_AXI_rlast);
    mp_M23_AXI_transactor->RVALID(M23_AXI_rvalid);
    mp_M23_AXI_transactor->RREADY(M23_AXI_rready);
    mp_M23_AXI_transactor->CLK(aclk);
    mp_M23_AXI_transactor->RST(aresetn);

    // M23_AXI' transactor sockets

    mp_impl->M23_AXI_tlm_aximm_read_socket->bind(*(mp_M23_AXI_transactor->rd_socket));
    mp_impl->M23_AXI_tlm_aximm_write_socket->bind(*(mp_M23_AXI_transactor->wr_socket));
  }
  else
  {
  }

}

#endif // RIVIERA




#ifdef VCSSYSTEMC
Multi_convo_core_smartconnect_0_0::Multi_convo_core_smartconnect_0_0(const sc_core::sc_module_name& nm) : Multi_convo_core_smartconnect_0_0_sc(nm),  aclk("aclk"), aresetn("aresetn"), S00_AXI_awaddr("S00_AXI_awaddr"), S00_AXI_awlen("S00_AXI_awlen"), S00_AXI_awsize("S00_AXI_awsize"), S00_AXI_awburst("S00_AXI_awburst"), S00_AXI_awlock("S00_AXI_awlock"), S00_AXI_awcache("S00_AXI_awcache"), S00_AXI_awprot("S00_AXI_awprot"), S00_AXI_awqos("S00_AXI_awqos"), S00_AXI_awvalid("S00_AXI_awvalid"), S00_AXI_awready("S00_AXI_awready"), S00_AXI_wdata("S00_AXI_wdata"), S00_AXI_wstrb("S00_AXI_wstrb"), S00_AXI_wlast("S00_AXI_wlast"), S00_AXI_wvalid("S00_AXI_wvalid"), S00_AXI_wready("S00_AXI_wready"), S00_AXI_bresp("S00_AXI_bresp"), S00_AXI_bvalid("S00_AXI_bvalid"), S00_AXI_bready("S00_AXI_bready"), S00_AXI_araddr("S00_AXI_araddr"), S00_AXI_arlen("S00_AXI_arlen"), S00_AXI_arsize("S00_AXI_arsize"), S00_AXI_arburst("S00_AXI_arburst"), S00_AXI_arlock("S00_AXI_arlock"), S00_AXI_arcache("S00_AXI_arcache"), S00_AXI_arprot("S00_AXI_arprot"), S00_AXI_arqos("S00_AXI_arqos"), S00_AXI_arvalid("S00_AXI_arvalid"), S00_AXI_arready("S00_AXI_arready"), S00_AXI_rdata("S00_AXI_rdata"), S00_AXI_rresp("S00_AXI_rresp"), S00_AXI_rlast("S00_AXI_rlast"), S00_AXI_rvalid("S00_AXI_rvalid"), S00_AXI_rready("S00_AXI_rready"), M00_AXI_awaddr("M00_AXI_awaddr"), M00_AXI_awlen("M00_AXI_awlen"), M00_AXI_awsize("M00_AXI_awsize"), M00_AXI_awburst("M00_AXI_awburst"), M00_AXI_awlock("M00_AXI_awlock"), M00_AXI_awcache("M00_AXI_awcache"), M00_AXI_awprot("M00_AXI_awprot"), M00_AXI_awqos("M00_AXI_awqos"), M00_AXI_awvalid("M00_AXI_awvalid"), M00_AXI_awready("M00_AXI_awready"), M00_AXI_wdata("M00_AXI_wdata"), M00_AXI_wstrb("M00_AXI_wstrb"), M00_AXI_wlast("M00_AXI_wlast"), M00_AXI_wvalid("M00_AXI_wvalid"), M00_AXI_wready("M00_AXI_wready"), M00_AXI_bresp("M00_AXI_bresp"), M00_AXI_bvalid("M00_AXI_bvalid"), M00_AXI_bready("M00_AXI_bready"), M00_AXI_araddr("M00_AXI_araddr"), M00_AXI_arlen("M00_AXI_arlen"), M00_AXI_arsize("M00_AXI_arsize"), M00_AXI_arburst("M00_AXI_arburst"), M00_AXI_arlock("M00_AXI_arlock"), M00_AXI_arcache("M00_AXI_arcache"), M00_AXI_arprot("M00_AXI_arprot"), M00_AXI_arqos("M00_AXI_arqos"), M00_AXI_arvalid("M00_AXI_arvalid"), M00_AXI_arready("M00_AXI_arready"), M00_AXI_rdata("M00_AXI_rdata"), M00_AXI_rresp("M00_AXI_rresp"), M00_AXI_rlast("M00_AXI_rlast"), M00_AXI_rvalid("M00_AXI_rvalid"), M00_AXI_rready("M00_AXI_rready"), M01_AXI_awaddr("M01_AXI_awaddr"), M01_AXI_awlen("M01_AXI_awlen"), M01_AXI_awsize("M01_AXI_awsize"), M01_AXI_awburst("M01_AXI_awburst"), M01_AXI_awlock("M01_AXI_awlock"), M01_AXI_awcache("M01_AXI_awcache"), M01_AXI_awprot("M01_AXI_awprot"), M01_AXI_awqos("M01_AXI_awqos"), M01_AXI_awvalid("M01_AXI_awvalid"), M01_AXI_awready("M01_AXI_awready"), M01_AXI_wdata("M01_AXI_wdata"), M01_AXI_wstrb("M01_AXI_wstrb"), M01_AXI_wlast("M01_AXI_wlast"), M01_AXI_wvalid("M01_AXI_wvalid"), M01_AXI_wready("M01_AXI_wready"), M01_AXI_bresp("M01_AXI_bresp"), M01_AXI_bvalid("M01_AXI_bvalid"), M01_AXI_bready("M01_AXI_bready"), M01_AXI_araddr("M01_AXI_araddr"), M01_AXI_arlen("M01_AXI_arlen"), M01_AXI_arsize("M01_AXI_arsize"), M01_AXI_arburst("M01_AXI_arburst"), M01_AXI_arlock("M01_AXI_arlock"), M01_AXI_arcache("M01_AXI_arcache"), M01_AXI_arprot("M01_AXI_arprot"), M01_AXI_arqos("M01_AXI_arqos"), M01_AXI_arvalid("M01_AXI_arvalid"), M01_AXI_arready("M01_AXI_arready"), M01_AXI_rdata("M01_AXI_rdata"), M01_AXI_rresp("M01_AXI_rresp"), M01_AXI_rlast("M01_AXI_rlast"), M01_AXI_rvalid("M01_AXI_rvalid"), M01_AXI_rready("M01_AXI_rready"), M02_AXI_awaddr("M02_AXI_awaddr"), M02_AXI_awlen("M02_AXI_awlen"), M02_AXI_awsize("M02_AXI_awsize"), M02_AXI_awburst("M02_AXI_awburst"), M02_AXI_awlock("M02_AXI_awlock"), M02_AXI_awcache("M02_AXI_awcache"), M02_AXI_awprot("M02_AXI_awprot"), M02_AXI_awqos("M02_AXI_awqos"), M02_AXI_awvalid("M02_AXI_awvalid"), M02_AXI_awready("M02_AXI_awready"), M02_AXI_wdata("M02_AXI_wdata"), M02_AXI_wstrb("M02_AXI_wstrb"), M02_AXI_wlast("M02_AXI_wlast"), M02_AXI_wvalid("M02_AXI_wvalid"), M02_AXI_wready("M02_AXI_wready"), M02_AXI_bresp("M02_AXI_bresp"), M02_AXI_bvalid("M02_AXI_bvalid"), M02_AXI_bready("M02_AXI_bready"), M02_AXI_araddr("M02_AXI_araddr"), M02_AXI_arlen("M02_AXI_arlen"), M02_AXI_arsize("M02_AXI_arsize"), M02_AXI_arburst("M02_AXI_arburst"), M02_AXI_arlock("M02_AXI_arlock"), M02_AXI_arcache("M02_AXI_arcache"), M02_AXI_arprot("M02_AXI_arprot"), M02_AXI_arqos("M02_AXI_arqos"), M02_AXI_arvalid("M02_AXI_arvalid"), M02_AXI_arready("M02_AXI_arready"), M02_AXI_rdata("M02_AXI_rdata"), M02_AXI_rresp("M02_AXI_rresp"), M02_AXI_rlast("M02_AXI_rlast"), M02_AXI_rvalid("M02_AXI_rvalid"), M02_AXI_rready("M02_AXI_rready"), M03_AXI_awaddr("M03_AXI_awaddr"), M03_AXI_awlen("M03_AXI_awlen"), M03_AXI_awsize("M03_AXI_awsize"), M03_AXI_awburst("M03_AXI_awburst"), M03_AXI_awlock("M03_AXI_awlock"), M03_AXI_awcache("M03_AXI_awcache"), M03_AXI_awprot("M03_AXI_awprot"), M03_AXI_awqos("M03_AXI_awqos"), M03_AXI_awvalid("M03_AXI_awvalid"), M03_AXI_awready("M03_AXI_awready"), M03_AXI_wdata("M03_AXI_wdata"), M03_AXI_wstrb("M03_AXI_wstrb"), M03_AXI_wlast("M03_AXI_wlast"), M03_AXI_wvalid("M03_AXI_wvalid"), M03_AXI_wready("M03_AXI_wready"), M03_AXI_bresp("M03_AXI_bresp"), M03_AXI_bvalid("M03_AXI_bvalid"), M03_AXI_bready("M03_AXI_bready"), M03_AXI_araddr("M03_AXI_araddr"), M03_AXI_arlen("M03_AXI_arlen"), M03_AXI_arsize("M03_AXI_arsize"), M03_AXI_arburst("M03_AXI_arburst"), M03_AXI_arlock("M03_AXI_arlock"), M03_AXI_arcache("M03_AXI_arcache"), M03_AXI_arprot("M03_AXI_arprot"), M03_AXI_arqos("M03_AXI_arqos"), M03_AXI_arvalid("M03_AXI_arvalid"), M03_AXI_arready("M03_AXI_arready"), M03_AXI_rdata("M03_AXI_rdata"), M03_AXI_rresp("M03_AXI_rresp"), M03_AXI_rlast("M03_AXI_rlast"), M03_AXI_rvalid("M03_AXI_rvalid"), M03_AXI_rready("M03_AXI_rready"), M04_AXI_awaddr("M04_AXI_awaddr"), M04_AXI_awlen("M04_AXI_awlen"), M04_AXI_awsize("M04_AXI_awsize"), M04_AXI_awburst("M04_AXI_awburst"), M04_AXI_awlock("M04_AXI_awlock"), M04_AXI_awcache("M04_AXI_awcache"), M04_AXI_awprot("M04_AXI_awprot"), M04_AXI_awqos("M04_AXI_awqos"), M04_AXI_awvalid("M04_AXI_awvalid"), M04_AXI_awready("M04_AXI_awready"), M04_AXI_wdata("M04_AXI_wdata"), M04_AXI_wstrb("M04_AXI_wstrb"), M04_AXI_wlast("M04_AXI_wlast"), M04_AXI_wvalid("M04_AXI_wvalid"), M04_AXI_wready("M04_AXI_wready"), M04_AXI_bresp("M04_AXI_bresp"), M04_AXI_bvalid("M04_AXI_bvalid"), M04_AXI_bready("M04_AXI_bready"), M04_AXI_araddr("M04_AXI_araddr"), M04_AXI_arlen("M04_AXI_arlen"), M04_AXI_arsize("M04_AXI_arsize"), M04_AXI_arburst("M04_AXI_arburst"), M04_AXI_arlock("M04_AXI_arlock"), M04_AXI_arcache("M04_AXI_arcache"), M04_AXI_arprot("M04_AXI_arprot"), M04_AXI_arqos("M04_AXI_arqos"), M04_AXI_arvalid("M04_AXI_arvalid"), M04_AXI_arready("M04_AXI_arready"), M04_AXI_rdata("M04_AXI_rdata"), M04_AXI_rresp("M04_AXI_rresp"), M04_AXI_rlast("M04_AXI_rlast"), M04_AXI_rvalid("M04_AXI_rvalid"), M04_AXI_rready("M04_AXI_rready"), M05_AXI_awaddr("M05_AXI_awaddr"), M05_AXI_awlen("M05_AXI_awlen"), M05_AXI_awsize("M05_AXI_awsize"), M05_AXI_awburst("M05_AXI_awburst"), M05_AXI_awlock("M05_AXI_awlock"), M05_AXI_awcache("M05_AXI_awcache"), M05_AXI_awprot("M05_AXI_awprot"), M05_AXI_awqos("M05_AXI_awqos"), M05_AXI_awvalid("M05_AXI_awvalid"), M05_AXI_awready("M05_AXI_awready"), M05_AXI_wdata("M05_AXI_wdata"), M05_AXI_wstrb("M05_AXI_wstrb"), M05_AXI_wlast("M05_AXI_wlast"), M05_AXI_wvalid("M05_AXI_wvalid"), M05_AXI_wready("M05_AXI_wready"), M05_AXI_bresp("M05_AXI_bresp"), M05_AXI_bvalid("M05_AXI_bvalid"), M05_AXI_bready("M05_AXI_bready"), M05_AXI_araddr("M05_AXI_araddr"), M05_AXI_arlen("M05_AXI_arlen"), M05_AXI_arsize("M05_AXI_arsize"), M05_AXI_arburst("M05_AXI_arburst"), M05_AXI_arlock("M05_AXI_arlock"), M05_AXI_arcache("M05_AXI_arcache"), M05_AXI_arprot("M05_AXI_arprot"), M05_AXI_arqos("M05_AXI_arqos"), M05_AXI_arvalid("M05_AXI_arvalid"), M05_AXI_arready("M05_AXI_arready"), M05_AXI_rdata("M05_AXI_rdata"), M05_AXI_rresp("M05_AXI_rresp"), M05_AXI_rlast("M05_AXI_rlast"), M05_AXI_rvalid("M05_AXI_rvalid"), M05_AXI_rready("M05_AXI_rready"), M06_AXI_awaddr("M06_AXI_awaddr"), M06_AXI_awlen("M06_AXI_awlen"), M06_AXI_awsize("M06_AXI_awsize"), M06_AXI_awburst("M06_AXI_awburst"), M06_AXI_awlock("M06_AXI_awlock"), M06_AXI_awcache("M06_AXI_awcache"), M06_AXI_awprot("M06_AXI_awprot"), M06_AXI_awqos("M06_AXI_awqos"), M06_AXI_awvalid("M06_AXI_awvalid"), M06_AXI_awready("M06_AXI_awready"), M06_AXI_wdata("M06_AXI_wdata"), M06_AXI_wstrb("M06_AXI_wstrb"), M06_AXI_wlast("M06_AXI_wlast"), M06_AXI_wvalid("M06_AXI_wvalid"), M06_AXI_wready("M06_AXI_wready"), M06_AXI_bresp("M06_AXI_bresp"), M06_AXI_bvalid("M06_AXI_bvalid"), M06_AXI_bready("M06_AXI_bready"), M06_AXI_araddr("M06_AXI_araddr"), M06_AXI_arlen("M06_AXI_arlen"), M06_AXI_arsize("M06_AXI_arsize"), M06_AXI_arburst("M06_AXI_arburst"), M06_AXI_arlock("M06_AXI_arlock"), M06_AXI_arcache("M06_AXI_arcache"), M06_AXI_arprot("M06_AXI_arprot"), M06_AXI_arqos("M06_AXI_arqos"), M06_AXI_arvalid("M06_AXI_arvalid"), M06_AXI_arready("M06_AXI_arready"), M06_AXI_rdata("M06_AXI_rdata"), M06_AXI_rresp("M06_AXI_rresp"), M06_AXI_rlast("M06_AXI_rlast"), M06_AXI_rvalid("M06_AXI_rvalid"), M06_AXI_rready("M06_AXI_rready"), M07_AXI_awaddr("M07_AXI_awaddr"), M07_AXI_awlen("M07_AXI_awlen"), M07_AXI_awsize("M07_AXI_awsize"), M07_AXI_awburst("M07_AXI_awburst"), M07_AXI_awlock("M07_AXI_awlock"), M07_AXI_awcache("M07_AXI_awcache"), M07_AXI_awprot("M07_AXI_awprot"), M07_AXI_awqos("M07_AXI_awqos"), M07_AXI_awvalid("M07_AXI_awvalid"), M07_AXI_awready("M07_AXI_awready"), M07_AXI_wdata("M07_AXI_wdata"), M07_AXI_wstrb("M07_AXI_wstrb"), M07_AXI_wlast("M07_AXI_wlast"), M07_AXI_wvalid("M07_AXI_wvalid"), M07_AXI_wready("M07_AXI_wready"), M07_AXI_bresp("M07_AXI_bresp"), M07_AXI_bvalid("M07_AXI_bvalid"), M07_AXI_bready("M07_AXI_bready"), M07_AXI_araddr("M07_AXI_araddr"), M07_AXI_arlen("M07_AXI_arlen"), M07_AXI_arsize("M07_AXI_arsize"), M07_AXI_arburst("M07_AXI_arburst"), M07_AXI_arlock("M07_AXI_arlock"), M07_AXI_arcache("M07_AXI_arcache"), M07_AXI_arprot("M07_AXI_arprot"), M07_AXI_arqos("M07_AXI_arqos"), M07_AXI_arvalid("M07_AXI_arvalid"), M07_AXI_arready("M07_AXI_arready"), M07_AXI_rdata("M07_AXI_rdata"), M07_AXI_rresp("M07_AXI_rresp"), M07_AXI_rlast("M07_AXI_rlast"), M07_AXI_rvalid("M07_AXI_rvalid"), M07_AXI_rready("M07_AXI_rready"), M08_AXI_awaddr("M08_AXI_awaddr"), M08_AXI_awlen("M08_AXI_awlen"), M08_AXI_awsize("M08_AXI_awsize"), M08_AXI_awburst("M08_AXI_awburst"), M08_AXI_awlock("M08_AXI_awlock"), M08_AXI_awcache("M08_AXI_awcache"), M08_AXI_awprot("M08_AXI_awprot"), M08_AXI_awqos("M08_AXI_awqos"), M08_AXI_awvalid("M08_AXI_awvalid"), M08_AXI_awready("M08_AXI_awready"), M08_AXI_wdata("M08_AXI_wdata"), M08_AXI_wstrb("M08_AXI_wstrb"), M08_AXI_wlast("M08_AXI_wlast"), M08_AXI_wvalid("M08_AXI_wvalid"), M08_AXI_wready("M08_AXI_wready"), M08_AXI_bresp("M08_AXI_bresp"), M08_AXI_bvalid("M08_AXI_bvalid"), M08_AXI_bready("M08_AXI_bready"), M08_AXI_araddr("M08_AXI_araddr"), M08_AXI_arlen("M08_AXI_arlen"), M08_AXI_arsize("M08_AXI_arsize"), M08_AXI_arburst("M08_AXI_arburst"), M08_AXI_arlock("M08_AXI_arlock"), M08_AXI_arcache("M08_AXI_arcache"), M08_AXI_arprot("M08_AXI_arprot"), M08_AXI_arqos("M08_AXI_arqos"), M08_AXI_arvalid("M08_AXI_arvalid"), M08_AXI_arready("M08_AXI_arready"), M08_AXI_rdata("M08_AXI_rdata"), M08_AXI_rresp("M08_AXI_rresp"), M08_AXI_rlast("M08_AXI_rlast"), M08_AXI_rvalid("M08_AXI_rvalid"), M08_AXI_rready("M08_AXI_rready"), M09_AXI_awaddr("M09_AXI_awaddr"), M09_AXI_awlen("M09_AXI_awlen"), M09_AXI_awsize("M09_AXI_awsize"), M09_AXI_awburst("M09_AXI_awburst"), M09_AXI_awlock("M09_AXI_awlock"), M09_AXI_awcache("M09_AXI_awcache"), M09_AXI_awprot("M09_AXI_awprot"), M09_AXI_awqos("M09_AXI_awqos"), M09_AXI_awvalid("M09_AXI_awvalid"), M09_AXI_awready("M09_AXI_awready"), M09_AXI_wdata("M09_AXI_wdata"), M09_AXI_wstrb("M09_AXI_wstrb"), M09_AXI_wlast("M09_AXI_wlast"), M09_AXI_wvalid("M09_AXI_wvalid"), M09_AXI_wready("M09_AXI_wready"), M09_AXI_bresp("M09_AXI_bresp"), M09_AXI_bvalid("M09_AXI_bvalid"), M09_AXI_bready("M09_AXI_bready"), M09_AXI_araddr("M09_AXI_araddr"), M09_AXI_arlen("M09_AXI_arlen"), M09_AXI_arsize("M09_AXI_arsize"), M09_AXI_arburst("M09_AXI_arburst"), M09_AXI_arlock("M09_AXI_arlock"), M09_AXI_arcache("M09_AXI_arcache"), M09_AXI_arprot("M09_AXI_arprot"), M09_AXI_arqos("M09_AXI_arqos"), M09_AXI_arvalid("M09_AXI_arvalid"), M09_AXI_arready("M09_AXI_arready"), M09_AXI_rdata("M09_AXI_rdata"), M09_AXI_rresp("M09_AXI_rresp"), M09_AXI_rlast("M09_AXI_rlast"), M09_AXI_rvalid("M09_AXI_rvalid"), M09_AXI_rready("M09_AXI_rready"), M10_AXI_awaddr("M10_AXI_awaddr"), M10_AXI_awlen("M10_AXI_awlen"), M10_AXI_awsize("M10_AXI_awsize"), M10_AXI_awburst("M10_AXI_awburst"), M10_AXI_awlock("M10_AXI_awlock"), M10_AXI_awcache("M10_AXI_awcache"), M10_AXI_awprot("M10_AXI_awprot"), M10_AXI_awqos("M10_AXI_awqos"), M10_AXI_awvalid("M10_AXI_awvalid"), M10_AXI_awready("M10_AXI_awready"), M10_AXI_wdata("M10_AXI_wdata"), M10_AXI_wstrb("M10_AXI_wstrb"), M10_AXI_wlast("M10_AXI_wlast"), M10_AXI_wvalid("M10_AXI_wvalid"), M10_AXI_wready("M10_AXI_wready"), M10_AXI_bresp("M10_AXI_bresp"), M10_AXI_bvalid("M10_AXI_bvalid"), M10_AXI_bready("M10_AXI_bready"), M10_AXI_araddr("M10_AXI_araddr"), M10_AXI_arlen("M10_AXI_arlen"), M10_AXI_arsize("M10_AXI_arsize"), M10_AXI_arburst("M10_AXI_arburst"), M10_AXI_arlock("M10_AXI_arlock"), M10_AXI_arcache("M10_AXI_arcache"), M10_AXI_arprot("M10_AXI_arprot"), M10_AXI_arqos("M10_AXI_arqos"), M10_AXI_arvalid("M10_AXI_arvalid"), M10_AXI_arready("M10_AXI_arready"), M10_AXI_rdata("M10_AXI_rdata"), M10_AXI_rresp("M10_AXI_rresp"), M10_AXI_rlast("M10_AXI_rlast"), M10_AXI_rvalid("M10_AXI_rvalid"), M10_AXI_rready("M10_AXI_rready"), M11_AXI_awaddr("M11_AXI_awaddr"), M11_AXI_awlen("M11_AXI_awlen"), M11_AXI_awsize("M11_AXI_awsize"), M11_AXI_awburst("M11_AXI_awburst"), M11_AXI_awlock("M11_AXI_awlock"), M11_AXI_awcache("M11_AXI_awcache"), M11_AXI_awprot("M11_AXI_awprot"), M11_AXI_awqos("M11_AXI_awqos"), M11_AXI_awvalid("M11_AXI_awvalid"), M11_AXI_awready("M11_AXI_awready"), M11_AXI_wdata("M11_AXI_wdata"), M11_AXI_wstrb("M11_AXI_wstrb"), M11_AXI_wlast("M11_AXI_wlast"), M11_AXI_wvalid("M11_AXI_wvalid"), M11_AXI_wready("M11_AXI_wready"), M11_AXI_bresp("M11_AXI_bresp"), M11_AXI_bvalid("M11_AXI_bvalid"), M11_AXI_bready("M11_AXI_bready"), M11_AXI_araddr("M11_AXI_araddr"), M11_AXI_arlen("M11_AXI_arlen"), M11_AXI_arsize("M11_AXI_arsize"), M11_AXI_arburst("M11_AXI_arburst"), M11_AXI_arlock("M11_AXI_arlock"), M11_AXI_arcache("M11_AXI_arcache"), M11_AXI_arprot("M11_AXI_arprot"), M11_AXI_arqos("M11_AXI_arqos"), M11_AXI_arvalid("M11_AXI_arvalid"), M11_AXI_arready("M11_AXI_arready"), M11_AXI_rdata("M11_AXI_rdata"), M11_AXI_rresp("M11_AXI_rresp"), M11_AXI_rlast("M11_AXI_rlast"), M11_AXI_rvalid("M11_AXI_rvalid"), M11_AXI_rready("M11_AXI_rready"), M12_AXI_awaddr("M12_AXI_awaddr"), M12_AXI_awlen("M12_AXI_awlen"), M12_AXI_awsize("M12_AXI_awsize"), M12_AXI_awburst("M12_AXI_awburst"), M12_AXI_awlock("M12_AXI_awlock"), M12_AXI_awcache("M12_AXI_awcache"), M12_AXI_awprot("M12_AXI_awprot"), M12_AXI_awqos("M12_AXI_awqos"), M12_AXI_awvalid("M12_AXI_awvalid"), M12_AXI_awready("M12_AXI_awready"), M12_AXI_wdata("M12_AXI_wdata"), M12_AXI_wstrb("M12_AXI_wstrb"), M12_AXI_wlast("M12_AXI_wlast"), M12_AXI_wvalid("M12_AXI_wvalid"), M12_AXI_wready("M12_AXI_wready"), M12_AXI_bresp("M12_AXI_bresp"), M12_AXI_bvalid("M12_AXI_bvalid"), M12_AXI_bready("M12_AXI_bready"), M12_AXI_araddr("M12_AXI_araddr"), M12_AXI_arlen("M12_AXI_arlen"), M12_AXI_arsize("M12_AXI_arsize"), M12_AXI_arburst("M12_AXI_arburst"), M12_AXI_arlock("M12_AXI_arlock"), M12_AXI_arcache("M12_AXI_arcache"), M12_AXI_arprot("M12_AXI_arprot"), M12_AXI_arqos("M12_AXI_arqos"), M12_AXI_arvalid("M12_AXI_arvalid"), M12_AXI_arready("M12_AXI_arready"), M12_AXI_rdata("M12_AXI_rdata"), M12_AXI_rresp("M12_AXI_rresp"), M12_AXI_rlast("M12_AXI_rlast"), M12_AXI_rvalid("M12_AXI_rvalid"), M12_AXI_rready("M12_AXI_rready"), M13_AXI_awaddr("M13_AXI_awaddr"), M13_AXI_awlen("M13_AXI_awlen"), M13_AXI_awsize("M13_AXI_awsize"), M13_AXI_awburst("M13_AXI_awburst"), M13_AXI_awlock("M13_AXI_awlock"), M13_AXI_awcache("M13_AXI_awcache"), M13_AXI_awprot("M13_AXI_awprot"), M13_AXI_awqos("M13_AXI_awqos"), M13_AXI_awvalid("M13_AXI_awvalid"), M13_AXI_awready("M13_AXI_awready"), M13_AXI_wdata("M13_AXI_wdata"), M13_AXI_wstrb("M13_AXI_wstrb"), M13_AXI_wlast("M13_AXI_wlast"), M13_AXI_wvalid("M13_AXI_wvalid"), M13_AXI_wready("M13_AXI_wready"), M13_AXI_bresp("M13_AXI_bresp"), M13_AXI_bvalid("M13_AXI_bvalid"), M13_AXI_bready("M13_AXI_bready"), M13_AXI_araddr("M13_AXI_araddr"), M13_AXI_arlen("M13_AXI_arlen"), M13_AXI_arsize("M13_AXI_arsize"), M13_AXI_arburst("M13_AXI_arburst"), M13_AXI_arlock("M13_AXI_arlock"), M13_AXI_arcache("M13_AXI_arcache"), M13_AXI_arprot("M13_AXI_arprot"), M13_AXI_arqos("M13_AXI_arqos"), M13_AXI_arvalid("M13_AXI_arvalid"), M13_AXI_arready("M13_AXI_arready"), M13_AXI_rdata("M13_AXI_rdata"), M13_AXI_rresp("M13_AXI_rresp"), M13_AXI_rlast("M13_AXI_rlast"), M13_AXI_rvalid("M13_AXI_rvalid"), M13_AXI_rready("M13_AXI_rready"), M14_AXI_awaddr("M14_AXI_awaddr"), M14_AXI_awlen("M14_AXI_awlen"), M14_AXI_awsize("M14_AXI_awsize"), M14_AXI_awburst("M14_AXI_awburst"), M14_AXI_awlock("M14_AXI_awlock"), M14_AXI_awcache("M14_AXI_awcache"), M14_AXI_awprot("M14_AXI_awprot"), M14_AXI_awqos("M14_AXI_awqos"), M14_AXI_awvalid("M14_AXI_awvalid"), M14_AXI_awready("M14_AXI_awready"), M14_AXI_wdata("M14_AXI_wdata"), M14_AXI_wstrb("M14_AXI_wstrb"), M14_AXI_wlast("M14_AXI_wlast"), M14_AXI_wvalid("M14_AXI_wvalid"), M14_AXI_wready("M14_AXI_wready"), M14_AXI_bresp("M14_AXI_bresp"), M14_AXI_bvalid("M14_AXI_bvalid"), M14_AXI_bready("M14_AXI_bready"), M14_AXI_araddr("M14_AXI_araddr"), M14_AXI_arlen("M14_AXI_arlen"), M14_AXI_arsize("M14_AXI_arsize"), M14_AXI_arburst("M14_AXI_arburst"), M14_AXI_arlock("M14_AXI_arlock"), M14_AXI_arcache("M14_AXI_arcache"), M14_AXI_arprot("M14_AXI_arprot"), M14_AXI_arqos("M14_AXI_arqos"), M14_AXI_arvalid("M14_AXI_arvalid"), M14_AXI_arready("M14_AXI_arready"), M14_AXI_rdata("M14_AXI_rdata"), M14_AXI_rresp("M14_AXI_rresp"), M14_AXI_rlast("M14_AXI_rlast"), M14_AXI_rvalid("M14_AXI_rvalid"), M14_AXI_rready("M14_AXI_rready"), M15_AXI_awaddr("M15_AXI_awaddr"), M15_AXI_awlen("M15_AXI_awlen"), M15_AXI_awsize("M15_AXI_awsize"), M15_AXI_awburst("M15_AXI_awburst"), M15_AXI_awlock("M15_AXI_awlock"), M15_AXI_awcache("M15_AXI_awcache"), M15_AXI_awprot("M15_AXI_awprot"), M15_AXI_awqos("M15_AXI_awqos"), M15_AXI_awvalid("M15_AXI_awvalid"), M15_AXI_awready("M15_AXI_awready"), M15_AXI_wdata("M15_AXI_wdata"), M15_AXI_wstrb("M15_AXI_wstrb"), M15_AXI_wlast("M15_AXI_wlast"), M15_AXI_wvalid("M15_AXI_wvalid"), M15_AXI_wready("M15_AXI_wready"), M15_AXI_bresp("M15_AXI_bresp"), M15_AXI_bvalid("M15_AXI_bvalid"), M15_AXI_bready("M15_AXI_bready"), M15_AXI_araddr("M15_AXI_araddr"), M15_AXI_arlen("M15_AXI_arlen"), M15_AXI_arsize("M15_AXI_arsize"), M15_AXI_arburst("M15_AXI_arburst"), M15_AXI_arlock("M15_AXI_arlock"), M15_AXI_arcache("M15_AXI_arcache"), M15_AXI_arprot("M15_AXI_arprot"), M15_AXI_arqos("M15_AXI_arqos"), M15_AXI_arvalid("M15_AXI_arvalid"), M15_AXI_arready("M15_AXI_arready"), M15_AXI_rdata("M15_AXI_rdata"), M15_AXI_rresp("M15_AXI_rresp"), M15_AXI_rlast("M15_AXI_rlast"), M15_AXI_rvalid("M15_AXI_rvalid"), M15_AXI_rready("M15_AXI_rready"), M16_AXI_awaddr("M16_AXI_awaddr"), M16_AXI_awlen("M16_AXI_awlen"), M16_AXI_awsize("M16_AXI_awsize"), M16_AXI_awburst("M16_AXI_awburst"), M16_AXI_awlock("M16_AXI_awlock"), M16_AXI_awcache("M16_AXI_awcache"), M16_AXI_awprot("M16_AXI_awprot"), M16_AXI_awqos("M16_AXI_awqos"), M16_AXI_awvalid("M16_AXI_awvalid"), M16_AXI_awready("M16_AXI_awready"), M16_AXI_wdata("M16_AXI_wdata"), M16_AXI_wstrb("M16_AXI_wstrb"), M16_AXI_wlast("M16_AXI_wlast"), M16_AXI_wvalid("M16_AXI_wvalid"), M16_AXI_wready("M16_AXI_wready"), M16_AXI_bresp("M16_AXI_bresp"), M16_AXI_bvalid("M16_AXI_bvalid"), M16_AXI_bready("M16_AXI_bready"), M16_AXI_araddr("M16_AXI_araddr"), M16_AXI_arlen("M16_AXI_arlen"), M16_AXI_arsize("M16_AXI_arsize"), M16_AXI_arburst("M16_AXI_arburst"), M16_AXI_arlock("M16_AXI_arlock"), M16_AXI_arcache("M16_AXI_arcache"), M16_AXI_arprot("M16_AXI_arprot"), M16_AXI_arqos("M16_AXI_arqos"), M16_AXI_arvalid("M16_AXI_arvalid"), M16_AXI_arready("M16_AXI_arready"), M16_AXI_rdata("M16_AXI_rdata"), M16_AXI_rresp("M16_AXI_rresp"), M16_AXI_rlast("M16_AXI_rlast"), M16_AXI_rvalid("M16_AXI_rvalid"), M16_AXI_rready("M16_AXI_rready"), M17_AXI_awaddr("M17_AXI_awaddr"), M17_AXI_awlen("M17_AXI_awlen"), M17_AXI_awsize("M17_AXI_awsize"), M17_AXI_awburst("M17_AXI_awburst"), M17_AXI_awlock("M17_AXI_awlock"), M17_AXI_awcache("M17_AXI_awcache"), M17_AXI_awprot("M17_AXI_awprot"), M17_AXI_awqos("M17_AXI_awqos"), M17_AXI_awvalid("M17_AXI_awvalid"), M17_AXI_awready("M17_AXI_awready"), M17_AXI_wdata("M17_AXI_wdata"), M17_AXI_wstrb("M17_AXI_wstrb"), M17_AXI_wlast("M17_AXI_wlast"), M17_AXI_wvalid("M17_AXI_wvalid"), M17_AXI_wready("M17_AXI_wready"), M17_AXI_bresp("M17_AXI_bresp"), M17_AXI_bvalid("M17_AXI_bvalid"), M17_AXI_bready("M17_AXI_bready"), M17_AXI_araddr("M17_AXI_araddr"), M17_AXI_arlen("M17_AXI_arlen"), M17_AXI_arsize("M17_AXI_arsize"), M17_AXI_arburst("M17_AXI_arburst"), M17_AXI_arlock("M17_AXI_arlock"), M17_AXI_arcache("M17_AXI_arcache"), M17_AXI_arprot("M17_AXI_arprot"), M17_AXI_arqos("M17_AXI_arqos"), M17_AXI_arvalid("M17_AXI_arvalid"), M17_AXI_arready("M17_AXI_arready"), M17_AXI_rdata("M17_AXI_rdata"), M17_AXI_rresp("M17_AXI_rresp"), M17_AXI_rlast("M17_AXI_rlast"), M17_AXI_rvalid("M17_AXI_rvalid"), M17_AXI_rready("M17_AXI_rready"), M18_AXI_awaddr("M18_AXI_awaddr"), M18_AXI_awlen("M18_AXI_awlen"), M18_AXI_awsize("M18_AXI_awsize"), M18_AXI_awburst("M18_AXI_awburst"), M18_AXI_awlock("M18_AXI_awlock"), M18_AXI_awcache("M18_AXI_awcache"), M18_AXI_awprot("M18_AXI_awprot"), M18_AXI_awqos("M18_AXI_awqos"), M18_AXI_awvalid("M18_AXI_awvalid"), M18_AXI_awready("M18_AXI_awready"), M18_AXI_wdata("M18_AXI_wdata"), M18_AXI_wstrb("M18_AXI_wstrb"), M18_AXI_wlast("M18_AXI_wlast"), M18_AXI_wvalid("M18_AXI_wvalid"), M18_AXI_wready("M18_AXI_wready"), M18_AXI_bresp("M18_AXI_bresp"), M18_AXI_bvalid("M18_AXI_bvalid"), M18_AXI_bready("M18_AXI_bready"), M18_AXI_araddr("M18_AXI_araddr"), M18_AXI_arlen("M18_AXI_arlen"), M18_AXI_arsize("M18_AXI_arsize"), M18_AXI_arburst("M18_AXI_arburst"), M18_AXI_arlock("M18_AXI_arlock"), M18_AXI_arcache("M18_AXI_arcache"), M18_AXI_arprot("M18_AXI_arprot"), M18_AXI_arqos("M18_AXI_arqos"), M18_AXI_arvalid("M18_AXI_arvalid"), M18_AXI_arready("M18_AXI_arready"), M18_AXI_rdata("M18_AXI_rdata"), M18_AXI_rresp("M18_AXI_rresp"), M18_AXI_rlast("M18_AXI_rlast"), M18_AXI_rvalid("M18_AXI_rvalid"), M18_AXI_rready("M18_AXI_rready"), M19_AXI_awaddr("M19_AXI_awaddr"), M19_AXI_awlen("M19_AXI_awlen"), M19_AXI_awsize("M19_AXI_awsize"), M19_AXI_awburst("M19_AXI_awburst"), M19_AXI_awlock("M19_AXI_awlock"), M19_AXI_awcache("M19_AXI_awcache"), M19_AXI_awprot("M19_AXI_awprot"), M19_AXI_awqos("M19_AXI_awqos"), M19_AXI_awvalid("M19_AXI_awvalid"), M19_AXI_awready("M19_AXI_awready"), M19_AXI_wdata("M19_AXI_wdata"), M19_AXI_wstrb("M19_AXI_wstrb"), M19_AXI_wlast("M19_AXI_wlast"), M19_AXI_wvalid("M19_AXI_wvalid"), M19_AXI_wready("M19_AXI_wready"), M19_AXI_bresp("M19_AXI_bresp"), M19_AXI_bvalid("M19_AXI_bvalid"), M19_AXI_bready("M19_AXI_bready"), M19_AXI_araddr("M19_AXI_araddr"), M19_AXI_arlen("M19_AXI_arlen"), M19_AXI_arsize("M19_AXI_arsize"), M19_AXI_arburst("M19_AXI_arburst"), M19_AXI_arlock("M19_AXI_arlock"), M19_AXI_arcache("M19_AXI_arcache"), M19_AXI_arprot("M19_AXI_arprot"), M19_AXI_arqos("M19_AXI_arqos"), M19_AXI_arvalid("M19_AXI_arvalid"), M19_AXI_arready("M19_AXI_arready"), M19_AXI_rdata("M19_AXI_rdata"), M19_AXI_rresp("M19_AXI_rresp"), M19_AXI_rlast("M19_AXI_rlast"), M19_AXI_rvalid("M19_AXI_rvalid"), M19_AXI_rready("M19_AXI_rready"), M20_AXI_awaddr("M20_AXI_awaddr"), M20_AXI_awlen("M20_AXI_awlen"), M20_AXI_awsize("M20_AXI_awsize"), M20_AXI_awburst("M20_AXI_awburst"), M20_AXI_awlock("M20_AXI_awlock"), M20_AXI_awcache("M20_AXI_awcache"), M20_AXI_awprot("M20_AXI_awprot"), M20_AXI_awqos("M20_AXI_awqos"), M20_AXI_awvalid("M20_AXI_awvalid"), M20_AXI_awready("M20_AXI_awready"), M20_AXI_wdata("M20_AXI_wdata"), M20_AXI_wstrb("M20_AXI_wstrb"), M20_AXI_wlast("M20_AXI_wlast"), M20_AXI_wvalid("M20_AXI_wvalid"), M20_AXI_wready("M20_AXI_wready"), M20_AXI_bresp("M20_AXI_bresp"), M20_AXI_bvalid("M20_AXI_bvalid"), M20_AXI_bready("M20_AXI_bready"), M20_AXI_araddr("M20_AXI_araddr"), M20_AXI_arlen("M20_AXI_arlen"), M20_AXI_arsize("M20_AXI_arsize"), M20_AXI_arburst("M20_AXI_arburst"), M20_AXI_arlock("M20_AXI_arlock"), M20_AXI_arcache("M20_AXI_arcache"), M20_AXI_arprot("M20_AXI_arprot"), M20_AXI_arqos("M20_AXI_arqos"), M20_AXI_arvalid("M20_AXI_arvalid"), M20_AXI_arready("M20_AXI_arready"), M20_AXI_rdata("M20_AXI_rdata"), M20_AXI_rresp("M20_AXI_rresp"), M20_AXI_rlast("M20_AXI_rlast"), M20_AXI_rvalid("M20_AXI_rvalid"), M20_AXI_rready("M20_AXI_rready"), M21_AXI_awaddr("M21_AXI_awaddr"), M21_AXI_awlen("M21_AXI_awlen"), M21_AXI_awsize("M21_AXI_awsize"), M21_AXI_awburst("M21_AXI_awburst"), M21_AXI_awlock("M21_AXI_awlock"), M21_AXI_awcache("M21_AXI_awcache"), M21_AXI_awprot("M21_AXI_awprot"), M21_AXI_awqos("M21_AXI_awqos"), M21_AXI_awvalid("M21_AXI_awvalid"), M21_AXI_awready("M21_AXI_awready"), M21_AXI_wdata("M21_AXI_wdata"), M21_AXI_wstrb("M21_AXI_wstrb"), M21_AXI_wlast("M21_AXI_wlast"), M21_AXI_wvalid("M21_AXI_wvalid"), M21_AXI_wready("M21_AXI_wready"), M21_AXI_bresp("M21_AXI_bresp"), M21_AXI_bvalid("M21_AXI_bvalid"), M21_AXI_bready("M21_AXI_bready"), M21_AXI_araddr("M21_AXI_araddr"), M21_AXI_arlen("M21_AXI_arlen"), M21_AXI_arsize("M21_AXI_arsize"), M21_AXI_arburst("M21_AXI_arburst"), M21_AXI_arlock("M21_AXI_arlock"), M21_AXI_arcache("M21_AXI_arcache"), M21_AXI_arprot("M21_AXI_arprot"), M21_AXI_arqos("M21_AXI_arqos"), M21_AXI_arvalid("M21_AXI_arvalid"), M21_AXI_arready("M21_AXI_arready"), M21_AXI_rdata("M21_AXI_rdata"), M21_AXI_rresp("M21_AXI_rresp"), M21_AXI_rlast("M21_AXI_rlast"), M21_AXI_rvalid("M21_AXI_rvalid"), M21_AXI_rready("M21_AXI_rready"), M22_AXI_awaddr("M22_AXI_awaddr"), M22_AXI_awlen("M22_AXI_awlen"), M22_AXI_awsize("M22_AXI_awsize"), M22_AXI_awburst("M22_AXI_awburst"), M22_AXI_awlock("M22_AXI_awlock"), M22_AXI_awcache("M22_AXI_awcache"), M22_AXI_awprot("M22_AXI_awprot"), M22_AXI_awqos("M22_AXI_awqos"), M22_AXI_awvalid("M22_AXI_awvalid"), M22_AXI_awready("M22_AXI_awready"), M22_AXI_wdata("M22_AXI_wdata"), M22_AXI_wstrb("M22_AXI_wstrb"), M22_AXI_wlast("M22_AXI_wlast"), M22_AXI_wvalid("M22_AXI_wvalid"), M22_AXI_wready("M22_AXI_wready"), M22_AXI_bresp("M22_AXI_bresp"), M22_AXI_bvalid("M22_AXI_bvalid"), M22_AXI_bready("M22_AXI_bready"), M22_AXI_araddr("M22_AXI_araddr"), M22_AXI_arlen("M22_AXI_arlen"), M22_AXI_arsize("M22_AXI_arsize"), M22_AXI_arburst("M22_AXI_arburst"), M22_AXI_arlock("M22_AXI_arlock"), M22_AXI_arcache("M22_AXI_arcache"), M22_AXI_arprot("M22_AXI_arprot"), M22_AXI_arqos("M22_AXI_arqos"), M22_AXI_arvalid("M22_AXI_arvalid"), M22_AXI_arready("M22_AXI_arready"), M22_AXI_rdata("M22_AXI_rdata"), M22_AXI_rresp("M22_AXI_rresp"), M22_AXI_rlast("M22_AXI_rlast"), M22_AXI_rvalid("M22_AXI_rvalid"), M22_AXI_rready("M22_AXI_rready"), M23_AXI_awaddr("M23_AXI_awaddr"), M23_AXI_awlen("M23_AXI_awlen"), M23_AXI_awsize("M23_AXI_awsize"), M23_AXI_awburst("M23_AXI_awburst"), M23_AXI_awlock("M23_AXI_awlock"), M23_AXI_awcache("M23_AXI_awcache"), M23_AXI_awprot("M23_AXI_awprot"), M23_AXI_awqos("M23_AXI_awqos"), M23_AXI_awvalid("M23_AXI_awvalid"), M23_AXI_awready("M23_AXI_awready"), M23_AXI_wdata("M23_AXI_wdata"), M23_AXI_wstrb("M23_AXI_wstrb"), M23_AXI_wlast("M23_AXI_wlast"), M23_AXI_wvalid("M23_AXI_wvalid"), M23_AXI_wready("M23_AXI_wready"), M23_AXI_bresp("M23_AXI_bresp"), M23_AXI_bvalid("M23_AXI_bvalid"), M23_AXI_bready("M23_AXI_bready"), M23_AXI_araddr("M23_AXI_araddr"), M23_AXI_arlen("M23_AXI_arlen"), M23_AXI_arsize("M23_AXI_arsize"), M23_AXI_arburst("M23_AXI_arburst"), M23_AXI_arlock("M23_AXI_arlock"), M23_AXI_arcache("M23_AXI_arcache"), M23_AXI_arprot("M23_AXI_arprot"), M23_AXI_arqos("M23_AXI_arqos"), M23_AXI_arvalid("M23_AXI_arvalid"), M23_AXI_arready("M23_AXI_arready"), M23_AXI_rdata("M23_AXI_rdata"), M23_AXI_rresp("M23_AXI_rresp"), M23_AXI_rlast("M23_AXI_rlast"), M23_AXI_rvalid("M23_AXI_rvalid"), M23_AXI_rready("M23_AXI_rready")
{
  // initialize pins
  mp_impl->aclk(aclk);
  mp_impl->aresetn(aresetn);

  // initialize transactors
  mp_S00_AXI_transactor = NULL;
  mp_S00_AXI_awlock_converter = NULL;
  mp_S00_AXI_arlock_converter = NULL;
  mp_M00_AXI_transactor = NULL;
  mp_M00_AXI_awlock_converter = NULL;
  mp_M00_AXI_arlock_converter = NULL;
  mp_M01_AXI_transactor = NULL;
  mp_M01_AXI_awlock_converter = NULL;
  mp_M01_AXI_arlock_converter = NULL;
  mp_M02_AXI_transactor = NULL;
  mp_M02_AXI_awlock_converter = NULL;
  mp_M02_AXI_arlock_converter = NULL;
  mp_M03_AXI_transactor = NULL;
  mp_M03_AXI_awlock_converter = NULL;
  mp_M03_AXI_arlock_converter = NULL;
  mp_M04_AXI_transactor = NULL;
  mp_M04_AXI_awlock_converter = NULL;
  mp_M04_AXI_arlock_converter = NULL;
  mp_M05_AXI_transactor = NULL;
  mp_M05_AXI_awlock_converter = NULL;
  mp_M05_AXI_arlock_converter = NULL;
  mp_M06_AXI_transactor = NULL;
  mp_M06_AXI_awlock_converter = NULL;
  mp_M06_AXI_arlock_converter = NULL;
  mp_M07_AXI_transactor = NULL;
  mp_M07_AXI_awlock_converter = NULL;
  mp_M07_AXI_arlock_converter = NULL;
  mp_M08_AXI_transactor = NULL;
  mp_M08_AXI_awlock_converter = NULL;
  mp_M08_AXI_arlock_converter = NULL;
  mp_M09_AXI_transactor = NULL;
  mp_M09_AXI_awlock_converter = NULL;
  mp_M09_AXI_arlock_converter = NULL;
  mp_M10_AXI_transactor = NULL;
  mp_M10_AXI_awlock_converter = NULL;
  mp_M10_AXI_arlock_converter = NULL;
  mp_M11_AXI_transactor = NULL;
  mp_M11_AXI_awlock_converter = NULL;
  mp_M11_AXI_arlock_converter = NULL;
  mp_M12_AXI_transactor = NULL;
  mp_M12_AXI_awlock_converter = NULL;
  mp_M12_AXI_arlock_converter = NULL;
  mp_M13_AXI_transactor = NULL;
  mp_M13_AXI_awlock_converter = NULL;
  mp_M13_AXI_arlock_converter = NULL;
  mp_M14_AXI_transactor = NULL;
  mp_M14_AXI_awlock_converter = NULL;
  mp_M14_AXI_arlock_converter = NULL;
  mp_M15_AXI_transactor = NULL;
  mp_M15_AXI_awlock_converter = NULL;
  mp_M15_AXI_arlock_converter = NULL;
  mp_M16_AXI_transactor = NULL;
  mp_M16_AXI_awlock_converter = NULL;
  mp_M16_AXI_arlock_converter = NULL;
  mp_M17_AXI_transactor = NULL;
  mp_M17_AXI_awlock_converter = NULL;
  mp_M17_AXI_arlock_converter = NULL;
  mp_M18_AXI_transactor = NULL;
  mp_M18_AXI_awlock_converter = NULL;
  mp_M18_AXI_arlock_converter = NULL;
  mp_M19_AXI_transactor = NULL;
  mp_M19_AXI_awlock_converter = NULL;
  mp_M19_AXI_arlock_converter = NULL;
  mp_M20_AXI_transactor = NULL;
  mp_M20_AXI_awlock_converter = NULL;
  mp_M20_AXI_arlock_converter = NULL;
  mp_M21_AXI_transactor = NULL;
  mp_M21_AXI_awlock_converter = NULL;
  mp_M21_AXI_arlock_converter = NULL;
  mp_M22_AXI_transactor = NULL;
  mp_M22_AXI_awlock_converter = NULL;
  mp_M22_AXI_arlock_converter = NULL;
  mp_M23_AXI_transactor = NULL;
  mp_M23_AXI_awlock_converter = NULL;
  mp_M23_AXI_arlock_converter = NULL;

  // Instantiate Socket Stubs

  // configure S00_AXI_transactor
    xsc::common_cpp::properties S00_AXI_transactor_param_props;
    S00_AXI_transactor_param_props.addLong("DATA_WIDTH", "32");
    S00_AXI_transactor_param_props.addLong("FREQ_HZ", "100000000");
    S00_AXI_transactor_param_props.addLong("ID_WIDTH", "0");
    S00_AXI_transactor_param_props.addLong("ADDR_WIDTH", "32");
    S00_AXI_transactor_param_props.addLong("AWUSER_WIDTH", "0");
    S00_AXI_transactor_param_props.addLong("ARUSER_WIDTH", "0");
    S00_AXI_transactor_param_props.addLong("WUSER_WIDTH", "0");
    S00_AXI_transactor_param_props.addLong("RUSER_WIDTH", "0");
    S00_AXI_transactor_param_props.addLong("BUSER_WIDTH", "0");
    S00_AXI_transactor_param_props.addLong("HAS_BURST", "1");
    S00_AXI_transactor_param_props.addLong("HAS_LOCK", "1");
    S00_AXI_transactor_param_props.addLong("HAS_PROT", "1");
    S00_AXI_transactor_param_props.addLong("HAS_CACHE", "1");
    S00_AXI_transactor_param_props.addLong("HAS_QOS", "1");
    S00_AXI_transactor_param_props.addLong("HAS_REGION", "0");
    S00_AXI_transactor_param_props.addLong("HAS_WSTRB", "1");
    S00_AXI_transactor_param_props.addLong("HAS_BRESP", "1");
    S00_AXI_transactor_param_props.addLong("HAS_RRESP", "1");
    S00_AXI_transactor_param_props.addLong("SUPPORTS_NARROW_BURST", "0");
    S00_AXI_transactor_param_props.addLong("NUM_READ_OUTSTANDING", "2");
    S00_AXI_transactor_param_props.addLong("NUM_WRITE_OUTSTANDING", "2");
    S00_AXI_transactor_param_props.addLong("MAX_BURST_LENGTH", "32");
    S00_AXI_transactor_param_props.addLong("NUM_READ_THREADS", "1");
    S00_AXI_transactor_param_props.addLong("NUM_WRITE_THREADS", "1");
    S00_AXI_transactor_param_props.addLong("RUSER_BITS_PER_BYTE", "0");
    S00_AXI_transactor_param_props.addLong("WUSER_BITS_PER_BYTE", "0");
    S00_AXI_transactor_param_props.addLong("HAS_SIZE", "1");
    S00_AXI_transactor_param_props.addLong("HAS_RESET", "1");
    S00_AXI_transactor_param_props.addFloat("PHASE", "0.0");
    S00_AXI_transactor_param_props.addString("PROTOCOL", "AXI4");
    S00_AXI_transactor_param_props.addString("READ_WRITE_MODE", "READ_WRITE");
    S00_AXI_transactor_param_props.addString("CLK_DOMAIN", "Multi_convo_core_processing_system7_0_0_FCLK_CLK0");

    mp_S00_AXI_transactor = new xtlm::xaximm_pin2xtlm_t<32,32,1,1,1,1,1,1>("S00_AXI_transactor", S00_AXI_transactor_param_props);
  mp_S00_AXI_transactor->AWADDR(S00_AXI_awaddr);
  mp_S00_AXI_transactor->AWLEN(S00_AXI_awlen);
  mp_S00_AXI_transactor->AWSIZE(S00_AXI_awsize);
  mp_S00_AXI_transactor->AWBURST(S00_AXI_awburst);
  mp_S00_AXI_awlock_converter = new xsc::common::vectorN2scalar_converter<1>("S00_AXI_awlock_converter");
  mp_S00_AXI_awlock_converter->vector_in(S00_AXI_awlock);
  mp_S00_AXI_awlock_converter->scalar_out(m_S00_AXI_awlock_converter_signal);
  mp_S00_AXI_transactor->AWLOCK(m_S00_AXI_awlock_converter_signal);
  mp_S00_AXI_transactor->AWCACHE(S00_AXI_awcache);
  mp_S00_AXI_transactor->AWPROT(S00_AXI_awprot);
  mp_S00_AXI_transactor->AWQOS(S00_AXI_awqos);
  mp_S00_AXI_transactor->AWVALID(S00_AXI_awvalid);
  mp_S00_AXI_transactor->AWREADY(S00_AXI_awready);
  mp_S00_AXI_transactor->WDATA(S00_AXI_wdata);
  mp_S00_AXI_transactor->WSTRB(S00_AXI_wstrb);
  mp_S00_AXI_transactor->WLAST(S00_AXI_wlast);
  mp_S00_AXI_transactor->WVALID(S00_AXI_wvalid);
  mp_S00_AXI_transactor->WREADY(S00_AXI_wready);
  mp_S00_AXI_transactor->BRESP(S00_AXI_bresp);
  mp_S00_AXI_transactor->BVALID(S00_AXI_bvalid);
  mp_S00_AXI_transactor->BREADY(S00_AXI_bready);
  mp_S00_AXI_transactor->ARADDR(S00_AXI_araddr);
  mp_S00_AXI_transactor->ARLEN(S00_AXI_arlen);
  mp_S00_AXI_transactor->ARSIZE(S00_AXI_arsize);
  mp_S00_AXI_transactor->ARBURST(S00_AXI_arburst);
  mp_S00_AXI_arlock_converter = new xsc::common::vectorN2scalar_converter<1>("S00_AXI_arlock_converter");
  mp_S00_AXI_arlock_converter->vector_in(S00_AXI_arlock);
  mp_S00_AXI_arlock_converter->scalar_out(m_S00_AXI_arlock_converter_signal);
  mp_S00_AXI_transactor->ARLOCK(m_S00_AXI_arlock_converter_signal);
  mp_S00_AXI_transactor->ARCACHE(S00_AXI_arcache);
  mp_S00_AXI_transactor->ARPROT(S00_AXI_arprot);
  mp_S00_AXI_transactor->ARQOS(S00_AXI_arqos);
  mp_S00_AXI_transactor->ARVALID(S00_AXI_arvalid);
  mp_S00_AXI_transactor->ARREADY(S00_AXI_arready);
  mp_S00_AXI_transactor->RDATA(S00_AXI_rdata);
  mp_S00_AXI_transactor->RRESP(S00_AXI_rresp);
  mp_S00_AXI_transactor->RLAST(S00_AXI_rlast);
  mp_S00_AXI_transactor->RVALID(S00_AXI_rvalid);
  mp_S00_AXI_transactor->RREADY(S00_AXI_rready);
  mp_S00_AXI_transactor->CLK(aclk);
  mp_S00_AXI_transactor->RST(aresetn);
  // configure M00_AXI_transactor
    xsc::common_cpp::properties M00_AXI_transactor_param_props;
    M00_AXI_transactor_param_props.addLong("DATA_WIDTH", "32");
    M00_AXI_transactor_param_props.addLong("FREQ_HZ", "100000000");
    M00_AXI_transactor_param_props.addLong("ID_WIDTH", "0");
    M00_AXI_transactor_param_props.addLong("ADDR_WIDTH", "12");
    M00_AXI_transactor_param_props.addLong("AWUSER_WIDTH", "0");
    M00_AXI_transactor_param_props.addLong("ARUSER_WIDTH", "0");
    M00_AXI_transactor_param_props.addLong("WUSER_WIDTH", "0");
    M00_AXI_transactor_param_props.addLong("RUSER_WIDTH", "0");
    M00_AXI_transactor_param_props.addLong("BUSER_WIDTH", "0");
    M00_AXI_transactor_param_props.addLong("HAS_BURST", "1");
    M00_AXI_transactor_param_props.addLong("HAS_LOCK", "1");
    M00_AXI_transactor_param_props.addLong("HAS_PROT", "1");
    M00_AXI_transactor_param_props.addLong("HAS_CACHE", "1");
    M00_AXI_transactor_param_props.addLong("HAS_QOS", "1");
    M00_AXI_transactor_param_props.addLong("HAS_REGION", "0");
    M00_AXI_transactor_param_props.addLong("HAS_WSTRB", "1");
    M00_AXI_transactor_param_props.addLong("HAS_BRESP", "1");
    M00_AXI_transactor_param_props.addLong("HAS_RRESP", "1");
    M00_AXI_transactor_param_props.addLong("SUPPORTS_NARROW_BURST", "0");
    M00_AXI_transactor_param_props.addLong("NUM_READ_OUTSTANDING", "2");
    M00_AXI_transactor_param_props.addLong("NUM_WRITE_OUTSTANDING", "2");
    M00_AXI_transactor_param_props.addLong("MAX_BURST_LENGTH", "256");
    M00_AXI_transactor_param_props.addLong("NUM_READ_THREADS", "1");
    M00_AXI_transactor_param_props.addLong("NUM_WRITE_THREADS", "1");
    M00_AXI_transactor_param_props.addLong("RUSER_BITS_PER_BYTE", "0");
    M00_AXI_transactor_param_props.addLong("WUSER_BITS_PER_BYTE", "0");
    M00_AXI_transactor_param_props.addLong("HAS_SIZE", "1");
    M00_AXI_transactor_param_props.addLong("HAS_RESET", "1");
    M00_AXI_transactor_param_props.addFloat("PHASE", "0.0");
    M00_AXI_transactor_param_props.addString("PROTOCOL", "AXI4");
    M00_AXI_transactor_param_props.addString("READ_WRITE_MODE", "READ_WRITE");
    M00_AXI_transactor_param_props.addString("CLK_DOMAIN", "Multi_convo_core_processing_system7_0_0_FCLK_CLK0");

    mp_M00_AXI_transactor = new xtlm::xaximm_xtlm2pin_t<32,12,1,1,1,1,1,1>("M00_AXI_transactor", M00_AXI_transactor_param_props);
  mp_M00_AXI_transactor->AWADDR(M00_AXI_awaddr);
  mp_M00_AXI_transactor->AWLEN(M00_AXI_awlen);
  mp_M00_AXI_transactor->AWSIZE(M00_AXI_awsize);
  mp_M00_AXI_transactor->AWBURST(M00_AXI_awburst);
  mp_M00_AXI_awlock_converter = new xsc::common::scalar2vectorN_converter<1>("M00_AXI_awlock_converter");
  mp_M00_AXI_awlock_converter->scalar_in(m_M00_AXI_awlock_converter_signal);
  mp_M00_AXI_awlock_converter->vector_out(M00_AXI_awlock);
  mp_M00_AXI_transactor->AWLOCK(m_M00_AXI_awlock_converter_signal);
  mp_M00_AXI_transactor->AWCACHE(M00_AXI_awcache);
  mp_M00_AXI_transactor->AWPROT(M00_AXI_awprot);
  mp_M00_AXI_transactor->AWQOS(M00_AXI_awqos);
  mp_M00_AXI_transactor->AWVALID(M00_AXI_awvalid);
  mp_M00_AXI_transactor->AWREADY(M00_AXI_awready);
  mp_M00_AXI_transactor->WDATA(M00_AXI_wdata);
  mp_M00_AXI_transactor->WSTRB(M00_AXI_wstrb);
  mp_M00_AXI_transactor->WLAST(M00_AXI_wlast);
  mp_M00_AXI_transactor->WVALID(M00_AXI_wvalid);
  mp_M00_AXI_transactor->WREADY(M00_AXI_wready);
  mp_M00_AXI_transactor->BRESP(M00_AXI_bresp);
  mp_M00_AXI_transactor->BVALID(M00_AXI_bvalid);
  mp_M00_AXI_transactor->BREADY(M00_AXI_bready);
  mp_M00_AXI_transactor->ARADDR(M00_AXI_araddr);
  mp_M00_AXI_transactor->ARLEN(M00_AXI_arlen);
  mp_M00_AXI_transactor->ARSIZE(M00_AXI_arsize);
  mp_M00_AXI_transactor->ARBURST(M00_AXI_arburst);
  mp_M00_AXI_arlock_converter = new xsc::common::scalar2vectorN_converter<1>("M00_AXI_arlock_converter");
  mp_M00_AXI_arlock_converter->scalar_in(m_M00_AXI_arlock_converter_signal);
  mp_M00_AXI_arlock_converter->vector_out(M00_AXI_arlock);
  mp_M00_AXI_transactor->ARLOCK(m_M00_AXI_arlock_converter_signal);
  mp_M00_AXI_transactor->ARCACHE(M00_AXI_arcache);
  mp_M00_AXI_transactor->ARPROT(M00_AXI_arprot);
  mp_M00_AXI_transactor->ARQOS(M00_AXI_arqos);
  mp_M00_AXI_transactor->ARVALID(M00_AXI_arvalid);
  mp_M00_AXI_transactor->ARREADY(M00_AXI_arready);
  mp_M00_AXI_transactor->RDATA(M00_AXI_rdata);
  mp_M00_AXI_transactor->RRESP(M00_AXI_rresp);
  mp_M00_AXI_transactor->RLAST(M00_AXI_rlast);
  mp_M00_AXI_transactor->RVALID(M00_AXI_rvalid);
  mp_M00_AXI_transactor->RREADY(M00_AXI_rready);
  mp_M00_AXI_transactor->CLK(aclk);
  mp_M00_AXI_transactor->RST(aresetn);
  // configure M01_AXI_transactor
    xsc::common_cpp::properties M01_AXI_transactor_param_props;
    M01_AXI_transactor_param_props.addLong("DATA_WIDTH", "32");
    M01_AXI_transactor_param_props.addLong("FREQ_HZ", "100000000");
    M01_AXI_transactor_param_props.addLong("ID_WIDTH", "0");
    M01_AXI_transactor_param_props.addLong("ADDR_WIDTH", "12");
    M01_AXI_transactor_param_props.addLong("AWUSER_WIDTH", "0");
    M01_AXI_transactor_param_props.addLong("ARUSER_WIDTH", "0");
    M01_AXI_transactor_param_props.addLong("WUSER_WIDTH", "0");
    M01_AXI_transactor_param_props.addLong("RUSER_WIDTH", "0");
    M01_AXI_transactor_param_props.addLong("BUSER_WIDTH", "0");
    M01_AXI_transactor_param_props.addLong("HAS_BURST", "1");
    M01_AXI_transactor_param_props.addLong("HAS_LOCK", "1");
    M01_AXI_transactor_param_props.addLong("HAS_PROT", "1");
    M01_AXI_transactor_param_props.addLong("HAS_CACHE", "1");
    M01_AXI_transactor_param_props.addLong("HAS_QOS", "1");
    M01_AXI_transactor_param_props.addLong("HAS_REGION", "0");
    M01_AXI_transactor_param_props.addLong("HAS_WSTRB", "1");
    M01_AXI_transactor_param_props.addLong("HAS_BRESP", "1");
    M01_AXI_transactor_param_props.addLong("HAS_RRESP", "1");
    M01_AXI_transactor_param_props.addLong("SUPPORTS_NARROW_BURST", "0");
    M01_AXI_transactor_param_props.addLong("NUM_READ_OUTSTANDING", "2");
    M01_AXI_transactor_param_props.addLong("NUM_WRITE_OUTSTANDING", "2");
    M01_AXI_transactor_param_props.addLong("MAX_BURST_LENGTH", "256");
    M01_AXI_transactor_param_props.addLong("NUM_READ_THREADS", "1");
    M01_AXI_transactor_param_props.addLong("NUM_WRITE_THREADS", "1");
    M01_AXI_transactor_param_props.addLong("RUSER_BITS_PER_BYTE", "0");
    M01_AXI_transactor_param_props.addLong("WUSER_BITS_PER_BYTE", "0");
    M01_AXI_transactor_param_props.addLong("HAS_SIZE", "1");
    M01_AXI_transactor_param_props.addLong("HAS_RESET", "1");
    M01_AXI_transactor_param_props.addFloat("PHASE", "0.0");
    M01_AXI_transactor_param_props.addString("PROTOCOL", "AXI4");
    M01_AXI_transactor_param_props.addString("READ_WRITE_MODE", "READ_WRITE");
    M01_AXI_transactor_param_props.addString("CLK_DOMAIN", "Multi_convo_core_processing_system7_0_0_FCLK_CLK0");

    mp_M01_AXI_transactor = new xtlm::xaximm_xtlm2pin_t<32,12,1,1,1,1,1,1>("M01_AXI_transactor", M01_AXI_transactor_param_props);
  mp_M01_AXI_transactor->AWADDR(M01_AXI_awaddr);
  mp_M01_AXI_transactor->AWLEN(M01_AXI_awlen);
  mp_M01_AXI_transactor->AWSIZE(M01_AXI_awsize);
  mp_M01_AXI_transactor->AWBURST(M01_AXI_awburst);
  mp_M01_AXI_awlock_converter = new xsc::common::scalar2vectorN_converter<1>("M01_AXI_awlock_converter");
  mp_M01_AXI_awlock_converter->scalar_in(m_M01_AXI_awlock_converter_signal);
  mp_M01_AXI_awlock_converter->vector_out(M01_AXI_awlock);
  mp_M01_AXI_transactor->AWLOCK(m_M01_AXI_awlock_converter_signal);
  mp_M01_AXI_transactor->AWCACHE(M01_AXI_awcache);
  mp_M01_AXI_transactor->AWPROT(M01_AXI_awprot);
  mp_M01_AXI_transactor->AWQOS(M01_AXI_awqos);
  mp_M01_AXI_transactor->AWVALID(M01_AXI_awvalid);
  mp_M01_AXI_transactor->AWREADY(M01_AXI_awready);
  mp_M01_AXI_transactor->WDATA(M01_AXI_wdata);
  mp_M01_AXI_transactor->WSTRB(M01_AXI_wstrb);
  mp_M01_AXI_transactor->WLAST(M01_AXI_wlast);
  mp_M01_AXI_transactor->WVALID(M01_AXI_wvalid);
  mp_M01_AXI_transactor->WREADY(M01_AXI_wready);
  mp_M01_AXI_transactor->BRESP(M01_AXI_bresp);
  mp_M01_AXI_transactor->BVALID(M01_AXI_bvalid);
  mp_M01_AXI_transactor->BREADY(M01_AXI_bready);
  mp_M01_AXI_transactor->ARADDR(M01_AXI_araddr);
  mp_M01_AXI_transactor->ARLEN(M01_AXI_arlen);
  mp_M01_AXI_transactor->ARSIZE(M01_AXI_arsize);
  mp_M01_AXI_transactor->ARBURST(M01_AXI_arburst);
  mp_M01_AXI_arlock_converter = new xsc::common::scalar2vectorN_converter<1>("M01_AXI_arlock_converter");
  mp_M01_AXI_arlock_converter->scalar_in(m_M01_AXI_arlock_converter_signal);
  mp_M01_AXI_arlock_converter->vector_out(M01_AXI_arlock);
  mp_M01_AXI_transactor->ARLOCK(m_M01_AXI_arlock_converter_signal);
  mp_M01_AXI_transactor->ARCACHE(M01_AXI_arcache);
  mp_M01_AXI_transactor->ARPROT(M01_AXI_arprot);
  mp_M01_AXI_transactor->ARQOS(M01_AXI_arqos);
  mp_M01_AXI_transactor->ARVALID(M01_AXI_arvalid);
  mp_M01_AXI_transactor->ARREADY(M01_AXI_arready);
  mp_M01_AXI_transactor->RDATA(M01_AXI_rdata);
  mp_M01_AXI_transactor->RRESP(M01_AXI_rresp);
  mp_M01_AXI_transactor->RLAST(M01_AXI_rlast);
  mp_M01_AXI_transactor->RVALID(M01_AXI_rvalid);
  mp_M01_AXI_transactor->RREADY(M01_AXI_rready);
  mp_M01_AXI_transactor->CLK(aclk);
  mp_M01_AXI_transactor->RST(aresetn);
  // configure M02_AXI_transactor
    xsc::common_cpp::properties M02_AXI_transactor_param_props;
    M02_AXI_transactor_param_props.addLong("DATA_WIDTH", "32");
    M02_AXI_transactor_param_props.addLong("FREQ_HZ", "100000000");
    M02_AXI_transactor_param_props.addLong("ID_WIDTH", "0");
    M02_AXI_transactor_param_props.addLong("ADDR_WIDTH", "12");
    M02_AXI_transactor_param_props.addLong("AWUSER_WIDTH", "0");
    M02_AXI_transactor_param_props.addLong("ARUSER_WIDTH", "0");
    M02_AXI_transactor_param_props.addLong("WUSER_WIDTH", "0");
    M02_AXI_transactor_param_props.addLong("RUSER_WIDTH", "0");
    M02_AXI_transactor_param_props.addLong("BUSER_WIDTH", "0");
    M02_AXI_transactor_param_props.addLong("HAS_BURST", "1");
    M02_AXI_transactor_param_props.addLong("HAS_LOCK", "1");
    M02_AXI_transactor_param_props.addLong("HAS_PROT", "1");
    M02_AXI_transactor_param_props.addLong("HAS_CACHE", "1");
    M02_AXI_transactor_param_props.addLong("HAS_QOS", "1");
    M02_AXI_transactor_param_props.addLong("HAS_REGION", "0");
    M02_AXI_transactor_param_props.addLong("HAS_WSTRB", "1");
    M02_AXI_transactor_param_props.addLong("HAS_BRESP", "1");
    M02_AXI_transactor_param_props.addLong("HAS_RRESP", "1");
    M02_AXI_transactor_param_props.addLong("SUPPORTS_NARROW_BURST", "0");
    M02_AXI_transactor_param_props.addLong("NUM_READ_OUTSTANDING", "2");
    M02_AXI_transactor_param_props.addLong("NUM_WRITE_OUTSTANDING", "2");
    M02_AXI_transactor_param_props.addLong("MAX_BURST_LENGTH", "256");
    M02_AXI_transactor_param_props.addLong("NUM_READ_THREADS", "1");
    M02_AXI_transactor_param_props.addLong("NUM_WRITE_THREADS", "1");
    M02_AXI_transactor_param_props.addLong("RUSER_BITS_PER_BYTE", "0");
    M02_AXI_transactor_param_props.addLong("WUSER_BITS_PER_BYTE", "0");
    M02_AXI_transactor_param_props.addLong("HAS_SIZE", "1");
    M02_AXI_transactor_param_props.addLong("HAS_RESET", "1");
    M02_AXI_transactor_param_props.addFloat("PHASE", "0.0");
    M02_AXI_transactor_param_props.addString("PROTOCOL", "AXI4");
    M02_AXI_transactor_param_props.addString("READ_WRITE_MODE", "READ_WRITE");
    M02_AXI_transactor_param_props.addString("CLK_DOMAIN", "Multi_convo_core_processing_system7_0_0_FCLK_CLK0");

    mp_M02_AXI_transactor = new xtlm::xaximm_xtlm2pin_t<32,12,1,1,1,1,1,1>("M02_AXI_transactor", M02_AXI_transactor_param_props);
  mp_M02_AXI_transactor->AWADDR(M02_AXI_awaddr);
  mp_M02_AXI_transactor->AWLEN(M02_AXI_awlen);
  mp_M02_AXI_transactor->AWSIZE(M02_AXI_awsize);
  mp_M02_AXI_transactor->AWBURST(M02_AXI_awburst);
  mp_M02_AXI_awlock_converter = new xsc::common::scalar2vectorN_converter<1>("M02_AXI_awlock_converter");
  mp_M02_AXI_awlock_converter->scalar_in(m_M02_AXI_awlock_converter_signal);
  mp_M02_AXI_awlock_converter->vector_out(M02_AXI_awlock);
  mp_M02_AXI_transactor->AWLOCK(m_M02_AXI_awlock_converter_signal);
  mp_M02_AXI_transactor->AWCACHE(M02_AXI_awcache);
  mp_M02_AXI_transactor->AWPROT(M02_AXI_awprot);
  mp_M02_AXI_transactor->AWQOS(M02_AXI_awqos);
  mp_M02_AXI_transactor->AWVALID(M02_AXI_awvalid);
  mp_M02_AXI_transactor->AWREADY(M02_AXI_awready);
  mp_M02_AXI_transactor->WDATA(M02_AXI_wdata);
  mp_M02_AXI_transactor->WSTRB(M02_AXI_wstrb);
  mp_M02_AXI_transactor->WLAST(M02_AXI_wlast);
  mp_M02_AXI_transactor->WVALID(M02_AXI_wvalid);
  mp_M02_AXI_transactor->WREADY(M02_AXI_wready);
  mp_M02_AXI_transactor->BRESP(M02_AXI_bresp);
  mp_M02_AXI_transactor->BVALID(M02_AXI_bvalid);
  mp_M02_AXI_transactor->BREADY(M02_AXI_bready);
  mp_M02_AXI_transactor->ARADDR(M02_AXI_araddr);
  mp_M02_AXI_transactor->ARLEN(M02_AXI_arlen);
  mp_M02_AXI_transactor->ARSIZE(M02_AXI_arsize);
  mp_M02_AXI_transactor->ARBURST(M02_AXI_arburst);
  mp_M02_AXI_arlock_converter = new xsc::common::scalar2vectorN_converter<1>("M02_AXI_arlock_converter");
  mp_M02_AXI_arlock_converter->scalar_in(m_M02_AXI_arlock_converter_signal);
  mp_M02_AXI_arlock_converter->vector_out(M02_AXI_arlock);
  mp_M02_AXI_transactor->ARLOCK(m_M02_AXI_arlock_converter_signal);
  mp_M02_AXI_transactor->ARCACHE(M02_AXI_arcache);
  mp_M02_AXI_transactor->ARPROT(M02_AXI_arprot);
  mp_M02_AXI_transactor->ARQOS(M02_AXI_arqos);
  mp_M02_AXI_transactor->ARVALID(M02_AXI_arvalid);
  mp_M02_AXI_transactor->ARREADY(M02_AXI_arready);
  mp_M02_AXI_transactor->RDATA(M02_AXI_rdata);
  mp_M02_AXI_transactor->RRESP(M02_AXI_rresp);
  mp_M02_AXI_transactor->RLAST(M02_AXI_rlast);
  mp_M02_AXI_transactor->RVALID(M02_AXI_rvalid);
  mp_M02_AXI_transactor->RREADY(M02_AXI_rready);
  mp_M02_AXI_transactor->CLK(aclk);
  mp_M02_AXI_transactor->RST(aresetn);
  // configure M03_AXI_transactor
    xsc::common_cpp::properties M03_AXI_transactor_param_props;
    M03_AXI_transactor_param_props.addLong("DATA_WIDTH", "32");
    M03_AXI_transactor_param_props.addLong("FREQ_HZ", "100000000");
    M03_AXI_transactor_param_props.addLong("ID_WIDTH", "0");
    M03_AXI_transactor_param_props.addLong("ADDR_WIDTH", "12");
    M03_AXI_transactor_param_props.addLong("AWUSER_WIDTH", "0");
    M03_AXI_transactor_param_props.addLong("ARUSER_WIDTH", "0");
    M03_AXI_transactor_param_props.addLong("WUSER_WIDTH", "0");
    M03_AXI_transactor_param_props.addLong("RUSER_WIDTH", "0");
    M03_AXI_transactor_param_props.addLong("BUSER_WIDTH", "0");
    M03_AXI_transactor_param_props.addLong("HAS_BURST", "1");
    M03_AXI_transactor_param_props.addLong("HAS_LOCK", "1");
    M03_AXI_transactor_param_props.addLong("HAS_PROT", "1");
    M03_AXI_transactor_param_props.addLong("HAS_CACHE", "1");
    M03_AXI_transactor_param_props.addLong("HAS_QOS", "1");
    M03_AXI_transactor_param_props.addLong("HAS_REGION", "0");
    M03_AXI_transactor_param_props.addLong("HAS_WSTRB", "1");
    M03_AXI_transactor_param_props.addLong("HAS_BRESP", "1");
    M03_AXI_transactor_param_props.addLong("HAS_RRESP", "1");
    M03_AXI_transactor_param_props.addLong("SUPPORTS_NARROW_BURST", "0");
    M03_AXI_transactor_param_props.addLong("NUM_READ_OUTSTANDING", "2");
    M03_AXI_transactor_param_props.addLong("NUM_WRITE_OUTSTANDING", "2");
    M03_AXI_transactor_param_props.addLong("MAX_BURST_LENGTH", "256");
    M03_AXI_transactor_param_props.addLong("NUM_READ_THREADS", "1");
    M03_AXI_transactor_param_props.addLong("NUM_WRITE_THREADS", "1");
    M03_AXI_transactor_param_props.addLong("RUSER_BITS_PER_BYTE", "0");
    M03_AXI_transactor_param_props.addLong("WUSER_BITS_PER_BYTE", "0");
    M03_AXI_transactor_param_props.addLong("HAS_SIZE", "1");
    M03_AXI_transactor_param_props.addLong("HAS_RESET", "1");
    M03_AXI_transactor_param_props.addFloat("PHASE", "0.0");
    M03_AXI_transactor_param_props.addString("PROTOCOL", "AXI4");
    M03_AXI_transactor_param_props.addString("READ_WRITE_MODE", "READ_WRITE");
    M03_AXI_transactor_param_props.addString("CLK_DOMAIN", "Multi_convo_core_processing_system7_0_0_FCLK_CLK0");

    mp_M03_AXI_transactor = new xtlm::xaximm_xtlm2pin_t<32,12,1,1,1,1,1,1>("M03_AXI_transactor", M03_AXI_transactor_param_props);
  mp_M03_AXI_transactor->AWADDR(M03_AXI_awaddr);
  mp_M03_AXI_transactor->AWLEN(M03_AXI_awlen);
  mp_M03_AXI_transactor->AWSIZE(M03_AXI_awsize);
  mp_M03_AXI_transactor->AWBURST(M03_AXI_awburst);
  mp_M03_AXI_awlock_converter = new xsc::common::scalar2vectorN_converter<1>("M03_AXI_awlock_converter");
  mp_M03_AXI_awlock_converter->scalar_in(m_M03_AXI_awlock_converter_signal);
  mp_M03_AXI_awlock_converter->vector_out(M03_AXI_awlock);
  mp_M03_AXI_transactor->AWLOCK(m_M03_AXI_awlock_converter_signal);
  mp_M03_AXI_transactor->AWCACHE(M03_AXI_awcache);
  mp_M03_AXI_transactor->AWPROT(M03_AXI_awprot);
  mp_M03_AXI_transactor->AWQOS(M03_AXI_awqos);
  mp_M03_AXI_transactor->AWVALID(M03_AXI_awvalid);
  mp_M03_AXI_transactor->AWREADY(M03_AXI_awready);
  mp_M03_AXI_transactor->WDATA(M03_AXI_wdata);
  mp_M03_AXI_transactor->WSTRB(M03_AXI_wstrb);
  mp_M03_AXI_transactor->WLAST(M03_AXI_wlast);
  mp_M03_AXI_transactor->WVALID(M03_AXI_wvalid);
  mp_M03_AXI_transactor->WREADY(M03_AXI_wready);
  mp_M03_AXI_transactor->BRESP(M03_AXI_bresp);
  mp_M03_AXI_transactor->BVALID(M03_AXI_bvalid);
  mp_M03_AXI_transactor->BREADY(M03_AXI_bready);
  mp_M03_AXI_transactor->ARADDR(M03_AXI_araddr);
  mp_M03_AXI_transactor->ARLEN(M03_AXI_arlen);
  mp_M03_AXI_transactor->ARSIZE(M03_AXI_arsize);
  mp_M03_AXI_transactor->ARBURST(M03_AXI_arburst);
  mp_M03_AXI_arlock_converter = new xsc::common::scalar2vectorN_converter<1>("M03_AXI_arlock_converter");
  mp_M03_AXI_arlock_converter->scalar_in(m_M03_AXI_arlock_converter_signal);
  mp_M03_AXI_arlock_converter->vector_out(M03_AXI_arlock);
  mp_M03_AXI_transactor->ARLOCK(m_M03_AXI_arlock_converter_signal);
  mp_M03_AXI_transactor->ARCACHE(M03_AXI_arcache);
  mp_M03_AXI_transactor->ARPROT(M03_AXI_arprot);
  mp_M03_AXI_transactor->ARQOS(M03_AXI_arqos);
  mp_M03_AXI_transactor->ARVALID(M03_AXI_arvalid);
  mp_M03_AXI_transactor->ARREADY(M03_AXI_arready);
  mp_M03_AXI_transactor->RDATA(M03_AXI_rdata);
  mp_M03_AXI_transactor->RRESP(M03_AXI_rresp);
  mp_M03_AXI_transactor->RLAST(M03_AXI_rlast);
  mp_M03_AXI_transactor->RVALID(M03_AXI_rvalid);
  mp_M03_AXI_transactor->RREADY(M03_AXI_rready);
  mp_M03_AXI_transactor->CLK(aclk);
  mp_M03_AXI_transactor->RST(aresetn);
  // configure M04_AXI_transactor
    xsc::common_cpp::properties M04_AXI_transactor_param_props;
    M04_AXI_transactor_param_props.addLong("DATA_WIDTH", "32");
    M04_AXI_transactor_param_props.addLong("FREQ_HZ", "100000000");
    M04_AXI_transactor_param_props.addLong("ID_WIDTH", "0");
    M04_AXI_transactor_param_props.addLong("ADDR_WIDTH", "12");
    M04_AXI_transactor_param_props.addLong("AWUSER_WIDTH", "0");
    M04_AXI_transactor_param_props.addLong("ARUSER_WIDTH", "0");
    M04_AXI_transactor_param_props.addLong("WUSER_WIDTH", "0");
    M04_AXI_transactor_param_props.addLong("RUSER_WIDTH", "0");
    M04_AXI_transactor_param_props.addLong("BUSER_WIDTH", "0");
    M04_AXI_transactor_param_props.addLong("HAS_BURST", "1");
    M04_AXI_transactor_param_props.addLong("HAS_LOCK", "1");
    M04_AXI_transactor_param_props.addLong("HAS_PROT", "1");
    M04_AXI_transactor_param_props.addLong("HAS_CACHE", "1");
    M04_AXI_transactor_param_props.addLong("HAS_QOS", "1");
    M04_AXI_transactor_param_props.addLong("HAS_REGION", "0");
    M04_AXI_transactor_param_props.addLong("HAS_WSTRB", "1");
    M04_AXI_transactor_param_props.addLong("HAS_BRESP", "1");
    M04_AXI_transactor_param_props.addLong("HAS_RRESP", "1");
    M04_AXI_transactor_param_props.addLong("SUPPORTS_NARROW_BURST", "0");
    M04_AXI_transactor_param_props.addLong("NUM_READ_OUTSTANDING", "2");
    M04_AXI_transactor_param_props.addLong("NUM_WRITE_OUTSTANDING", "2");
    M04_AXI_transactor_param_props.addLong("MAX_BURST_LENGTH", "256");
    M04_AXI_transactor_param_props.addLong("NUM_READ_THREADS", "1");
    M04_AXI_transactor_param_props.addLong("NUM_WRITE_THREADS", "1");
    M04_AXI_transactor_param_props.addLong("RUSER_BITS_PER_BYTE", "0");
    M04_AXI_transactor_param_props.addLong("WUSER_BITS_PER_BYTE", "0");
    M04_AXI_transactor_param_props.addLong("HAS_SIZE", "1");
    M04_AXI_transactor_param_props.addLong("HAS_RESET", "1");
    M04_AXI_transactor_param_props.addFloat("PHASE", "0.0");
    M04_AXI_transactor_param_props.addString("PROTOCOL", "AXI4");
    M04_AXI_transactor_param_props.addString("READ_WRITE_MODE", "READ_WRITE");
    M04_AXI_transactor_param_props.addString("CLK_DOMAIN", "Multi_convo_core_processing_system7_0_0_FCLK_CLK0");

    mp_M04_AXI_transactor = new xtlm::xaximm_xtlm2pin_t<32,12,1,1,1,1,1,1>("M04_AXI_transactor", M04_AXI_transactor_param_props);
  mp_M04_AXI_transactor->AWADDR(M04_AXI_awaddr);
  mp_M04_AXI_transactor->AWLEN(M04_AXI_awlen);
  mp_M04_AXI_transactor->AWSIZE(M04_AXI_awsize);
  mp_M04_AXI_transactor->AWBURST(M04_AXI_awburst);
  mp_M04_AXI_awlock_converter = new xsc::common::scalar2vectorN_converter<1>("M04_AXI_awlock_converter");
  mp_M04_AXI_awlock_converter->scalar_in(m_M04_AXI_awlock_converter_signal);
  mp_M04_AXI_awlock_converter->vector_out(M04_AXI_awlock);
  mp_M04_AXI_transactor->AWLOCK(m_M04_AXI_awlock_converter_signal);
  mp_M04_AXI_transactor->AWCACHE(M04_AXI_awcache);
  mp_M04_AXI_transactor->AWPROT(M04_AXI_awprot);
  mp_M04_AXI_transactor->AWQOS(M04_AXI_awqos);
  mp_M04_AXI_transactor->AWVALID(M04_AXI_awvalid);
  mp_M04_AXI_transactor->AWREADY(M04_AXI_awready);
  mp_M04_AXI_transactor->WDATA(M04_AXI_wdata);
  mp_M04_AXI_transactor->WSTRB(M04_AXI_wstrb);
  mp_M04_AXI_transactor->WLAST(M04_AXI_wlast);
  mp_M04_AXI_transactor->WVALID(M04_AXI_wvalid);
  mp_M04_AXI_transactor->WREADY(M04_AXI_wready);
  mp_M04_AXI_transactor->BRESP(M04_AXI_bresp);
  mp_M04_AXI_transactor->BVALID(M04_AXI_bvalid);
  mp_M04_AXI_transactor->BREADY(M04_AXI_bready);
  mp_M04_AXI_transactor->ARADDR(M04_AXI_araddr);
  mp_M04_AXI_transactor->ARLEN(M04_AXI_arlen);
  mp_M04_AXI_transactor->ARSIZE(M04_AXI_arsize);
  mp_M04_AXI_transactor->ARBURST(M04_AXI_arburst);
  mp_M04_AXI_arlock_converter = new xsc::common::scalar2vectorN_converter<1>("M04_AXI_arlock_converter");
  mp_M04_AXI_arlock_converter->scalar_in(m_M04_AXI_arlock_converter_signal);
  mp_M04_AXI_arlock_converter->vector_out(M04_AXI_arlock);
  mp_M04_AXI_transactor->ARLOCK(m_M04_AXI_arlock_converter_signal);
  mp_M04_AXI_transactor->ARCACHE(M04_AXI_arcache);
  mp_M04_AXI_transactor->ARPROT(M04_AXI_arprot);
  mp_M04_AXI_transactor->ARQOS(M04_AXI_arqos);
  mp_M04_AXI_transactor->ARVALID(M04_AXI_arvalid);
  mp_M04_AXI_transactor->ARREADY(M04_AXI_arready);
  mp_M04_AXI_transactor->RDATA(M04_AXI_rdata);
  mp_M04_AXI_transactor->RRESP(M04_AXI_rresp);
  mp_M04_AXI_transactor->RLAST(M04_AXI_rlast);
  mp_M04_AXI_transactor->RVALID(M04_AXI_rvalid);
  mp_M04_AXI_transactor->RREADY(M04_AXI_rready);
  mp_M04_AXI_transactor->CLK(aclk);
  mp_M04_AXI_transactor->RST(aresetn);
  // configure M05_AXI_transactor
    xsc::common_cpp::properties M05_AXI_transactor_param_props;
    M05_AXI_transactor_param_props.addLong("DATA_WIDTH", "32");
    M05_AXI_transactor_param_props.addLong("FREQ_HZ", "100000000");
    M05_AXI_transactor_param_props.addLong("ID_WIDTH", "0");
    M05_AXI_transactor_param_props.addLong("ADDR_WIDTH", "12");
    M05_AXI_transactor_param_props.addLong("AWUSER_WIDTH", "0");
    M05_AXI_transactor_param_props.addLong("ARUSER_WIDTH", "0");
    M05_AXI_transactor_param_props.addLong("WUSER_WIDTH", "0");
    M05_AXI_transactor_param_props.addLong("RUSER_WIDTH", "0");
    M05_AXI_transactor_param_props.addLong("BUSER_WIDTH", "0");
    M05_AXI_transactor_param_props.addLong("HAS_BURST", "1");
    M05_AXI_transactor_param_props.addLong("HAS_LOCK", "1");
    M05_AXI_transactor_param_props.addLong("HAS_PROT", "1");
    M05_AXI_transactor_param_props.addLong("HAS_CACHE", "1");
    M05_AXI_transactor_param_props.addLong("HAS_QOS", "1");
    M05_AXI_transactor_param_props.addLong("HAS_REGION", "0");
    M05_AXI_transactor_param_props.addLong("HAS_WSTRB", "1");
    M05_AXI_transactor_param_props.addLong("HAS_BRESP", "1");
    M05_AXI_transactor_param_props.addLong("HAS_RRESP", "1");
    M05_AXI_transactor_param_props.addLong("SUPPORTS_NARROW_BURST", "0");
    M05_AXI_transactor_param_props.addLong("NUM_READ_OUTSTANDING", "2");
    M05_AXI_transactor_param_props.addLong("NUM_WRITE_OUTSTANDING", "2");
    M05_AXI_transactor_param_props.addLong("MAX_BURST_LENGTH", "256");
    M05_AXI_transactor_param_props.addLong("NUM_READ_THREADS", "1");
    M05_AXI_transactor_param_props.addLong("NUM_WRITE_THREADS", "1");
    M05_AXI_transactor_param_props.addLong("RUSER_BITS_PER_BYTE", "0");
    M05_AXI_transactor_param_props.addLong("WUSER_BITS_PER_BYTE", "0");
    M05_AXI_transactor_param_props.addLong("HAS_SIZE", "1");
    M05_AXI_transactor_param_props.addLong("HAS_RESET", "1");
    M05_AXI_transactor_param_props.addFloat("PHASE", "0.0");
    M05_AXI_transactor_param_props.addString("PROTOCOL", "AXI4");
    M05_AXI_transactor_param_props.addString("READ_WRITE_MODE", "READ_WRITE");
    M05_AXI_transactor_param_props.addString("CLK_DOMAIN", "Multi_convo_core_processing_system7_0_0_FCLK_CLK0");

    mp_M05_AXI_transactor = new xtlm::xaximm_xtlm2pin_t<32,12,1,1,1,1,1,1>("M05_AXI_transactor", M05_AXI_transactor_param_props);
  mp_M05_AXI_transactor->AWADDR(M05_AXI_awaddr);
  mp_M05_AXI_transactor->AWLEN(M05_AXI_awlen);
  mp_M05_AXI_transactor->AWSIZE(M05_AXI_awsize);
  mp_M05_AXI_transactor->AWBURST(M05_AXI_awburst);
  mp_M05_AXI_awlock_converter = new xsc::common::scalar2vectorN_converter<1>("M05_AXI_awlock_converter");
  mp_M05_AXI_awlock_converter->scalar_in(m_M05_AXI_awlock_converter_signal);
  mp_M05_AXI_awlock_converter->vector_out(M05_AXI_awlock);
  mp_M05_AXI_transactor->AWLOCK(m_M05_AXI_awlock_converter_signal);
  mp_M05_AXI_transactor->AWCACHE(M05_AXI_awcache);
  mp_M05_AXI_transactor->AWPROT(M05_AXI_awprot);
  mp_M05_AXI_transactor->AWQOS(M05_AXI_awqos);
  mp_M05_AXI_transactor->AWVALID(M05_AXI_awvalid);
  mp_M05_AXI_transactor->AWREADY(M05_AXI_awready);
  mp_M05_AXI_transactor->WDATA(M05_AXI_wdata);
  mp_M05_AXI_transactor->WSTRB(M05_AXI_wstrb);
  mp_M05_AXI_transactor->WLAST(M05_AXI_wlast);
  mp_M05_AXI_transactor->WVALID(M05_AXI_wvalid);
  mp_M05_AXI_transactor->WREADY(M05_AXI_wready);
  mp_M05_AXI_transactor->BRESP(M05_AXI_bresp);
  mp_M05_AXI_transactor->BVALID(M05_AXI_bvalid);
  mp_M05_AXI_transactor->BREADY(M05_AXI_bready);
  mp_M05_AXI_transactor->ARADDR(M05_AXI_araddr);
  mp_M05_AXI_transactor->ARLEN(M05_AXI_arlen);
  mp_M05_AXI_transactor->ARSIZE(M05_AXI_arsize);
  mp_M05_AXI_transactor->ARBURST(M05_AXI_arburst);
  mp_M05_AXI_arlock_converter = new xsc::common::scalar2vectorN_converter<1>("M05_AXI_arlock_converter");
  mp_M05_AXI_arlock_converter->scalar_in(m_M05_AXI_arlock_converter_signal);
  mp_M05_AXI_arlock_converter->vector_out(M05_AXI_arlock);
  mp_M05_AXI_transactor->ARLOCK(m_M05_AXI_arlock_converter_signal);
  mp_M05_AXI_transactor->ARCACHE(M05_AXI_arcache);
  mp_M05_AXI_transactor->ARPROT(M05_AXI_arprot);
  mp_M05_AXI_transactor->ARQOS(M05_AXI_arqos);
  mp_M05_AXI_transactor->ARVALID(M05_AXI_arvalid);
  mp_M05_AXI_transactor->ARREADY(M05_AXI_arready);
  mp_M05_AXI_transactor->RDATA(M05_AXI_rdata);
  mp_M05_AXI_transactor->RRESP(M05_AXI_rresp);
  mp_M05_AXI_transactor->RLAST(M05_AXI_rlast);
  mp_M05_AXI_transactor->RVALID(M05_AXI_rvalid);
  mp_M05_AXI_transactor->RREADY(M05_AXI_rready);
  mp_M05_AXI_transactor->CLK(aclk);
  mp_M05_AXI_transactor->RST(aresetn);
  // configure M06_AXI_transactor
    xsc::common_cpp::properties M06_AXI_transactor_param_props;
    M06_AXI_transactor_param_props.addLong("DATA_WIDTH", "32");
    M06_AXI_transactor_param_props.addLong("FREQ_HZ", "100000000");
    M06_AXI_transactor_param_props.addLong("ID_WIDTH", "0");
    M06_AXI_transactor_param_props.addLong("ADDR_WIDTH", "12");
    M06_AXI_transactor_param_props.addLong("AWUSER_WIDTH", "0");
    M06_AXI_transactor_param_props.addLong("ARUSER_WIDTH", "0");
    M06_AXI_transactor_param_props.addLong("WUSER_WIDTH", "0");
    M06_AXI_transactor_param_props.addLong("RUSER_WIDTH", "0");
    M06_AXI_transactor_param_props.addLong("BUSER_WIDTH", "0");
    M06_AXI_transactor_param_props.addLong("HAS_BURST", "1");
    M06_AXI_transactor_param_props.addLong("HAS_LOCK", "1");
    M06_AXI_transactor_param_props.addLong("HAS_PROT", "1");
    M06_AXI_transactor_param_props.addLong("HAS_CACHE", "1");
    M06_AXI_transactor_param_props.addLong("HAS_QOS", "1");
    M06_AXI_transactor_param_props.addLong("HAS_REGION", "0");
    M06_AXI_transactor_param_props.addLong("HAS_WSTRB", "1");
    M06_AXI_transactor_param_props.addLong("HAS_BRESP", "1");
    M06_AXI_transactor_param_props.addLong("HAS_RRESP", "1");
    M06_AXI_transactor_param_props.addLong("SUPPORTS_NARROW_BURST", "0");
    M06_AXI_transactor_param_props.addLong("NUM_READ_OUTSTANDING", "2");
    M06_AXI_transactor_param_props.addLong("NUM_WRITE_OUTSTANDING", "2");
    M06_AXI_transactor_param_props.addLong("MAX_BURST_LENGTH", "256");
    M06_AXI_transactor_param_props.addLong("NUM_READ_THREADS", "1");
    M06_AXI_transactor_param_props.addLong("NUM_WRITE_THREADS", "1");
    M06_AXI_transactor_param_props.addLong("RUSER_BITS_PER_BYTE", "0");
    M06_AXI_transactor_param_props.addLong("WUSER_BITS_PER_BYTE", "0");
    M06_AXI_transactor_param_props.addLong("HAS_SIZE", "1");
    M06_AXI_transactor_param_props.addLong("HAS_RESET", "1");
    M06_AXI_transactor_param_props.addFloat("PHASE", "0.0");
    M06_AXI_transactor_param_props.addString("PROTOCOL", "AXI4");
    M06_AXI_transactor_param_props.addString("READ_WRITE_MODE", "READ_WRITE");
    M06_AXI_transactor_param_props.addString("CLK_DOMAIN", "Multi_convo_core_processing_system7_0_0_FCLK_CLK0");

    mp_M06_AXI_transactor = new xtlm::xaximm_xtlm2pin_t<32,12,1,1,1,1,1,1>("M06_AXI_transactor", M06_AXI_transactor_param_props);
  mp_M06_AXI_transactor->AWADDR(M06_AXI_awaddr);
  mp_M06_AXI_transactor->AWLEN(M06_AXI_awlen);
  mp_M06_AXI_transactor->AWSIZE(M06_AXI_awsize);
  mp_M06_AXI_transactor->AWBURST(M06_AXI_awburst);
  mp_M06_AXI_awlock_converter = new xsc::common::scalar2vectorN_converter<1>("M06_AXI_awlock_converter");
  mp_M06_AXI_awlock_converter->scalar_in(m_M06_AXI_awlock_converter_signal);
  mp_M06_AXI_awlock_converter->vector_out(M06_AXI_awlock);
  mp_M06_AXI_transactor->AWLOCK(m_M06_AXI_awlock_converter_signal);
  mp_M06_AXI_transactor->AWCACHE(M06_AXI_awcache);
  mp_M06_AXI_transactor->AWPROT(M06_AXI_awprot);
  mp_M06_AXI_transactor->AWQOS(M06_AXI_awqos);
  mp_M06_AXI_transactor->AWVALID(M06_AXI_awvalid);
  mp_M06_AXI_transactor->AWREADY(M06_AXI_awready);
  mp_M06_AXI_transactor->WDATA(M06_AXI_wdata);
  mp_M06_AXI_transactor->WSTRB(M06_AXI_wstrb);
  mp_M06_AXI_transactor->WLAST(M06_AXI_wlast);
  mp_M06_AXI_transactor->WVALID(M06_AXI_wvalid);
  mp_M06_AXI_transactor->WREADY(M06_AXI_wready);
  mp_M06_AXI_transactor->BRESP(M06_AXI_bresp);
  mp_M06_AXI_transactor->BVALID(M06_AXI_bvalid);
  mp_M06_AXI_transactor->BREADY(M06_AXI_bready);
  mp_M06_AXI_transactor->ARADDR(M06_AXI_araddr);
  mp_M06_AXI_transactor->ARLEN(M06_AXI_arlen);
  mp_M06_AXI_transactor->ARSIZE(M06_AXI_arsize);
  mp_M06_AXI_transactor->ARBURST(M06_AXI_arburst);
  mp_M06_AXI_arlock_converter = new xsc::common::scalar2vectorN_converter<1>("M06_AXI_arlock_converter");
  mp_M06_AXI_arlock_converter->scalar_in(m_M06_AXI_arlock_converter_signal);
  mp_M06_AXI_arlock_converter->vector_out(M06_AXI_arlock);
  mp_M06_AXI_transactor->ARLOCK(m_M06_AXI_arlock_converter_signal);
  mp_M06_AXI_transactor->ARCACHE(M06_AXI_arcache);
  mp_M06_AXI_transactor->ARPROT(M06_AXI_arprot);
  mp_M06_AXI_transactor->ARQOS(M06_AXI_arqos);
  mp_M06_AXI_transactor->ARVALID(M06_AXI_arvalid);
  mp_M06_AXI_transactor->ARREADY(M06_AXI_arready);
  mp_M06_AXI_transactor->RDATA(M06_AXI_rdata);
  mp_M06_AXI_transactor->RRESP(M06_AXI_rresp);
  mp_M06_AXI_transactor->RLAST(M06_AXI_rlast);
  mp_M06_AXI_transactor->RVALID(M06_AXI_rvalid);
  mp_M06_AXI_transactor->RREADY(M06_AXI_rready);
  mp_M06_AXI_transactor->CLK(aclk);
  mp_M06_AXI_transactor->RST(aresetn);
  // configure M07_AXI_transactor
    xsc::common_cpp::properties M07_AXI_transactor_param_props;
    M07_AXI_transactor_param_props.addLong("DATA_WIDTH", "32");
    M07_AXI_transactor_param_props.addLong("FREQ_HZ", "100000000");
    M07_AXI_transactor_param_props.addLong("ID_WIDTH", "0");
    M07_AXI_transactor_param_props.addLong("ADDR_WIDTH", "12");
    M07_AXI_transactor_param_props.addLong("AWUSER_WIDTH", "0");
    M07_AXI_transactor_param_props.addLong("ARUSER_WIDTH", "0");
    M07_AXI_transactor_param_props.addLong("WUSER_WIDTH", "0");
    M07_AXI_transactor_param_props.addLong("RUSER_WIDTH", "0");
    M07_AXI_transactor_param_props.addLong("BUSER_WIDTH", "0");
    M07_AXI_transactor_param_props.addLong("HAS_BURST", "1");
    M07_AXI_transactor_param_props.addLong("HAS_LOCK", "1");
    M07_AXI_transactor_param_props.addLong("HAS_PROT", "1");
    M07_AXI_transactor_param_props.addLong("HAS_CACHE", "1");
    M07_AXI_transactor_param_props.addLong("HAS_QOS", "1");
    M07_AXI_transactor_param_props.addLong("HAS_REGION", "0");
    M07_AXI_transactor_param_props.addLong("HAS_WSTRB", "1");
    M07_AXI_transactor_param_props.addLong("HAS_BRESP", "1");
    M07_AXI_transactor_param_props.addLong("HAS_RRESP", "1");
    M07_AXI_transactor_param_props.addLong("SUPPORTS_NARROW_BURST", "0");
    M07_AXI_transactor_param_props.addLong("NUM_READ_OUTSTANDING", "2");
    M07_AXI_transactor_param_props.addLong("NUM_WRITE_OUTSTANDING", "2");
    M07_AXI_transactor_param_props.addLong("MAX_BURST_LENGTH", "256");
    M07_AXI_transactor_param_props.addLong("NUM_READ_THREADS", "1");
    M07_AXI_transactor_param_props.addLong("NUM_WRITE_THREADS", "1");
    M07_AXI_transactor_param_props.addLong("RUSER_BITS_PER_BYTE", "0");
    M07_AXI_transactor_param_props.addLong("WUSER_BITS_PER_BYTE", "0");
    M07_AXI_transactor_param_props.addLong("HAS_SIZE", "1");
    M07_AXI_transactor_param_props.addLong("HAS_RESET", "1");
    M07_AXI_transactor_param_props.addFloat("PHASE", "0.0");
    M07_AXI_transactor_param_props.addString("PROTOCOL", "AXI4");
    M07_AXI_transactor_param_props.addString("READ_WRITE_MODE", "READ_WRITE");
    M07_AXI_transactor_param_props.addString("CLK_DOMAIN", "Multi_convo_core_processing_system7_0_0_FCLK_CLK0");

    mp_M07_AXI_transactor = new xtlm::xaximm_xtlm2pin_t<32,12,1,1,1,1,1,1>("M07_AXI_transactor", M07_AXI_transactor_param_props);
  mp_M07_AXI_transactor->AWADDR(M07_AXI_awaddr);
  mp_M07_AXI_transactor->AWLEN(M07_AXI_awlen);
  mp_M07_AXI_transactor->AWSIZE(M07_AXI_awsize);
  mp_M07_AXI_transactor->AWBURST(M07_AXI_awburst);
  mp_M07_AXI_awlock_converter = new xsc::common::scalar2vectorN_converter<1>("M07_AXI_awlock_converter");
  mp_M07_AXI_awlock_converter->scalar_in(m_M07_AXI_awlock_converter_signal);
  mp_M07_AXI_awlock_converter->vector_out(M07_AXI_awlock);
  mp_M07_AXI_transactor->AWLOCK(m_M07_AXI_awlock_converter_signal);
  mp_M07_AXI_transactor->AWCACHE(M07_AXI_awcache);
  mp_M07_AXI_transactor->AWPROT(M07_AXI_awprot);
  mp_M07_AXI_transactor->AWQOS(M07_AXI_awqos);
  mp_M07_AXI_transactor->AWVALID(M07_AXI_awvalid);
  mp_M07_AXI_transactor->AWREADY(M07_AXI_awready);
  mp_M07_AXI_transactor->WDATA(M07_AXI_wdata);
  mp_M07_AXI_transactor->WSTRB(M07_AXI_wstrb);
  mp_M07_AXI_transactor->WLAST(M07_AXI_wlast);
  mp_M07_AXI_transactor->WVALID(M07_AXI_wvalid);
  mp_M07_AXI_transactor->WREADY(M07_AXI_wready);
  mp_M07_AXI_transactor->BRESP(M07_AXI_bresp);
  mp_M07_AXI_transactor->BVALID(M07_AXI_bvalid);
  mp_M07_AXI_transactor->BREADY(M07_AXI_bready);
  mp_M07_AXI_transactor->ARADDR(M07_AXI_araddr);
  mp_M07_AXI_transactor->ARLEN(M07_AXI_arlen);
  mp_M07_AXI_transactor->ARSIZE(M07_AXI_arsize);
  mp_M07_AXI_transactor->ARBURST(M07_AXI_arburst);
  mp_M07_AXI_arlock_converter = new xsc::common::scalar2vectorN_converter<1>("M07_AXI_arlock_converter");
  mp_M07_AXI_arlock_converter->scalar_in(m_M07_AXI_arlock_converter_signal);
  mp_M07_AXI_arlock_converter->vector_out(M07_AXI_arlock);
  mp_M07_AXI_transactor->ARLOCK(m_M07_AXI_arlock_converter_signal);
  mp_M07_AXI_transactor->ARCACHE(M07_AXI_arcache);
  mp_M07_AXI_transactor->ARPROT(M07_AXI_arprot);
  mp_M07_AXI_transactor->ARQOS(M07_AXI_arqos);
  mp_M07_AXI_transactor->ARVALID(M07_AXI_arvalid);
  mp_M07_AXI_transactor->ARREADY(M07_AXI_arready);
  mp_M07_AXI_transactor->RDATA(M07_AXI_rdata);
  mp_M07_AXI_transactor->RRESP(M07_AXI_rresp);
  mp_M07_AXI_transactor->RLAST(M07_AXI_rlast);
  mp_M07_AXI_transactor->RVALID(M07_AXI_rvalid);
  mp_M07_AXI_transactor->RREADY(M07_AXI_rready);
  mp_M07_AXI_transactor->CLK(aclk);
  mp_M07_AXI_transactor->RST(aresetn);
  // configure M08_AXI_transactor
    xsc::common_cpp::properties M08_AXI_transactor_param_props;
    M08_AXI_transactor_param_props.addLong("DATA_WIDTH", "32");
    M08_AXI_transactor_param_props.addLong("FREQ_HZ", "100000000");
    M08_AXI_transactor_param_props.addLong("ID_WIDTH", "0");
    M08_AXI_transactor_param_props.addLong("ADDR_WIDTH", "12");
    M08_AXI_transactor_param_props.addLong("AWUSER_WIDTH", "0");
    M08_AXI_transactor_param_props.addLong("ARUSER_WIDTH", "0");
    M08_AXI_transactor_param_props.addLong("WUSER_WIDTH", "0");
    M08_AXI_transactor_param_props.addLong("RUSER_WIDTH", "0");
    M08_AXI_transactor_param_props.addLong("BUSER_WIDTH", "0");
    M08_AXI_transactor_param_props.addLong("HAS_BURST", "1");
    M08_AXI_transactor_param_props.addLong("HAS_LOCK", "1");
    M08_AXI_transactor_param_props.addLong("HAS_PROT", "1");
    M08_AXI_transactor_param_props.addLong("HAS_CACHE", "1");
    M08_AXI_transactor_param_props.addLong("HAS_QOS", "1");
    M08_AXI_transactor_param_props.addLong("HAS_REGION", "0");
    M08_AXI_transactor_param_props.addLong("HAS_WSTRB", "1");
    M08_AXI_transactor_param_props.addLong("HAS_BRESP", "1");
    M08_AXI_transactor_param_props.addLong("HAS_RRESP", "1");
    M08_AXI_transactor_param_props.addLong("SUPPORTS_NARROW_BURST", "0");
    M08_AXI_transactor_param_props.addLong("NUM_READ_OUTSTANDING", "2");
    M08_AXI_transactor_param_props.addLong("NUM_WRITE_OUTSTANDING", "2");
    M08_AXI_transactor_param_props.addLong("MAX_BURST_LENGTH", "256");
    M08_AXI_transactor_param_props.addLong("NUM_READ_THREADS", "1");
    M08_AXI_transactor_param_props.addLong("NUM_WRITE_THREADS", "1");
    M08_AXI_transactor_param_props.addLong("RUSER_BITS_PER_BYTE", "0");
    M08_AXI_transactor_param_props.addLong("WUSER_BITS_PER_BYTE", "0");
    M08_AXI_transactor_param_props.addLong("HAS_SIZE", "1");
    M08_AXI_transactor_param_props.addLong("HAS_RESET", "1");
    M08_AXI_transactor_param_props.addFloat("PHASE", "0.0");
    M08_AXI_transactor_param_props.addString("PROTOCOL", "AXI4");
    M08_AXI_transactor_param_props.addString("READ_WRITE_MODE", "READ_WRITE");
    M08_AXI_transactor_param_props.addString("CLK_DOMAIN", "Multi_convo_core_processing_system7_0_0_FCLK_CLK0");

    mp_M08_AXI_transactor = new xtlm::xaximm_xtlm2pin_t<32,12,1,1,1,1,1,1>("M08_AXI_transactor", M08_AXI_transactor_param_props);
  mp_M08_AXI_transactor->AWADDR(M08_AXI_awaddr);
  mp_M08_AXI_transactor->AWLEN(M08_AXI_awlen);
  mp_M08_AXI_transactor->AWSIZE(M08_AXI_awsize);
  mp_M08_AXI_transactor->AWBURST(M08_AXI_awburst);
  mp_M08_AXI_awlock_converter = new xsc::common::scalar2vectorN_converter<1>("M08_AXI_awlock_converter");
  mp_M08_AXI_awlock_converter->scalar_in(m_M08_AXI_awlock_converter_signal);
  mp_M08_AXI_awlock_converter->vector_out(M08_AXI_awlock);
  mp_M08_AXI_transactor->AWLOCK(m_M08_AXI_awlock_converter_signal);
  mp_M08_AXI_transactor->AWCACHE(M08_AXI_awcache);
  mp_M08_AXI_transactor->AWPROT(M08_AXI_awprot);
  mp_M08_AXI_transactor->AWQOS(M08_AXI_awqos);
  mp_M08_AXI_transactor->AWVALID(M08_AXI_awvalid);
  mp_M08_AXI_transactor->AWREADY(M08_AXI_awready);
  mp_M08_AXI_transactor->WDATA(M08_AXI_wdata);
  mp_M08_AXI_transactor->WSTRB(M08_AXI_wstrb);
  mp_M08_AXI_transactor->WLAST(M08_AXI_wlast);
  mp_M08_AXI_transactor->WVALID(M08_AXI_wvalid);
  mp_M08_AXI_transactor->WREADY(M08_AXI_wready);
  mp_M08_AXI_transactor->BRESP(M08_AXI_bresp);
  mp_M08_AXI_transactor->BVALID(M08_AXI_bvalid);
  mp_M08_AXI_transactor->BREADY(M08_AXI_bready);
  mp_M08_AXI_transactor->ARADDR(M08_AXI_araddr);
  mp_M08_AXI_transactor->ARLEN(M08_AXI_arlen);
  mp_M08_AXI_transactor->ARSIZE(M08_AXI_arsize);
  mp_M08_AXI_transactor->ARBURST(M08_AXI_arburst);
  mp_M08_AXI_arlock_converter = new xsc::common::scalar2vectorN_converter<1>("M08_AXI_arlock_converter");
  mp_M08_AXI_arlock_converter->scalar_in(m_M08_AXI_arlock_converter_signal);
  mp_M08_AXI_arlock_converter->vector_out(M08_AXI_arlock);
  mp_M08_AXI_transactor->ARLOCK(m_M08_AXI_arlock_converter_signal);
  mp_M08_AXI_transactor->ARCACHE(M08_AXI_arcache);
  mp_M08_AXI_transactor->ARPROT(M08_AXI_arprot);
  mp_M08_AXI_transactor->ARQOS(M08_AXI_arqos);
  mp_M08_AXI_transactor->ARVALID(M08_AXI_arvalid);
  mp_M08_AXI_transactor->ARREADY(M08_AXI_arready);
  mp_M08_AXI_transactor->RDATA(M08_AXI_rdata);
  mp_M08_AXI_transactor->RRESP(M08_AXI_rresp);
  mp_M08_AXI_transactor->RLAST(M08_AXI_rlast);
  mp_M08_AXI_transactor->RVALID(M08_AXI_rvalid);
  mp_M08_AXI_transactor->RREADY(M08_AXI_rready);
  mp_M08_AXI_transactor->CLK(aclk);
  mp_M08_AXI_transactor->RST(aresetn);
  // configure M09_AXI_transactor
    xsc::common_cpp::properties M09_AXI_transactor_param_props;
    M09_AXI_transactor_param_props.addLong("DATA_WIDTH", "32");
    M09_AXI_transactor_param_props.addLong("FREQ_HZ", "100000000");
    M09_AXI_transactor_param_props.addLong("ID_WIDTH", "0");
    M09_AXI_transactor_param_props.addLong("ADDR_WIDTH", "12");
    M09_AXI_transactor_param_props.addLong("AWUSER_WIDTH", "0");
    M09_AXI_transactor_param_props.addLong("ARUSER_WIDTH", "0");
    M09_AXI_transactor_param_props.addLong("WUSER_WIDTH", "0");
    M09_AXI_transactor_param_props.addLong("RUSER_WIDTH", "0");
    M09_AXI_transactor_param_props.addLong("BUSER_WIDTH", "0");
    M09_AXI_transactor_param_props.addLong("HAS_BURST", "1");
    M09_AXI_transactor_param_props.addLong("HAS_LOCK", "1");
    M09_AXI_transactor_param_props.addLong("HAS_PROT", "1");
    M09_AXI_transactor_param_props.addLong("HAS_CACHE", "1");
    M09_AXI_transactor_param_props.addLong("HAS_QOS", "1");
    M09_AXI_transactor_param_props.addLong("HAS_REGION", "0");
    M09_AXI_transactor_param_props.addLong("HAS_WSTRB", "1");
    M09_AXI_transactor_param_props.addLong("HAS_BRESP", "1");
    M09_AXI_transactor_param_props.addLong("HAS_RRESP", "1");
    M09_AXI_transactor_param_props.addLong("SUPPORTS_NARROW_BURST", "0");
    M09_AXI_transactor_param_props.addLong("NUM_READ_OUTSTANDING", "2");
    M09_AXI_transactor_param_props.addLong("NUM_WRITE_OUTSTANDING", "2");
    M09_AXI_transactor_param_props.addLong("MAX_BURST_LENGTH", "256");
    M09_AXI_transactor_param_props.addLong("NUM_READ_THREADS", "1");
    M09_AXI_transactor_param_props.addLong("NUM_WRITE_THREADS", "1");
    M09_AXI_transactor_param_props.addLong("RUSER_BITS_PER_BYTE", "0");
    M09_AXI_transactor_param_props.addLong("WUSER_BITS_PER_BYTE", "0");
    M09_AXI_transactor_param_props.addLong("HAS_SIZE", "1");
    M09_AXI_transactor_param_props.addLong("HAS_RESET", "1");
    M09_AXI_transactor_param_props.addFloat("PHASE", "0.0");
    M09_AXI_transactor_param_props.addString("PROTOCOL", "AXI4");
    M09_AXI_transactor_param_props.addString("READ_WRITE_MODE", "READ_WRITE");
    M09_AXI_transactor_param_props.addString("CLK_DOMAIN", "Multi_convo_core_processing_system7_0_0_FCLK_CLK0");

    mp_M09_AXI_transactor = new xtlm::xaximm_xtlm2pin_t<32,12,1,1,1,1,1,1>("M09_AXI_transactor", M09_AXI_transactor_param_props);
  mp_M09_AXI_transactor->AWADDR(M09_AXI_awaddr);
  mp_M09_AXI_transactor->AWLEN(M09_AXI_awlen);
  mp_M09_AXI_transactor->AWSIZE(M09_AXI_awsize);
  mp_M09_AXI_transactor->AWBURST(M09_AXI_awburst);
  mp_M09_AXI_awlock_converter = new xsc::common::scalar2vectorN_converter<1>("M09_AXI_awlock_converter");
  mp_M09_AXI_awlock_converter->scalar_in(m_M09_AXI_awlock_converter_signal);
  mp_M09_AXI_awlock_converter->vector_out(M09_AXI_awlock);
  mp_M09_AXI_transactor->AWLOCK(m_M09_AXI_awlock_converter_signal);
  mp_M09_AXI_transactor->AWCACHE(M09_AXI_awcache);
  mp_M09_AXI_transactor->AWPROT(M09_AXI_awprot);
  mp_M09_AXI_transactor->AWQOS(M09_AXI_awqos);
  mp_M09_AXI_transactor->AWVALID(M09_AXI_awvalid);
  mp_M09_AXI_transactor->AWREADY(M09_AXI_awready);
  mp_M09_AXI_transactor->WDATA(M09_AXI_wdata);
  mp_M09_AXI_transactor->WSTRB(M09_AXI_wstrb);
  mp_M09_AXI_transactor->WLAST(M09_AXI_wlast);
  mp_M09_AXI_transactor->WVALID(M09_AXI_wvalid);
  mp_M09_AXI_transactor->WREADY(M09_AXI_wready);
  mp_M09_AXI_transactor->BRESP(M09_AXI_bresp);
  mp_M09_AXI_transactor->BVALID(M09_AXI_bvalid);
  mp_M09_AXI_transactor->BREADY(M09_AXI_bready);
  mp_M09_AXI_transactor->ARADDR(M09_AXI_araddr);
  mp_M09_AXI_transactor->ARLEN(M09_AXI_arlen);
  mp_M09_AXI_transactor->ARSIZE(M09_AXI_arsize);
  mp_M09_AXI_transactor->ARBURST(M09_AXI_arburst);
  mp_M09_AXI_arlock_converter = new xsc::common::scalar2vectorN_converter<1>("M09_AXI_arlock_converter");
  mp_M09_AXI_arlock_converter->scalar_in(m_M09_AXI_arlock_converter_signal);
  mp_M09_AXI_arlock_converter->vector_out(M09_AXI_arlock);
  mp_M09_AXI_transactor->ARLOCK(m_M09_AXI_arlock_converter_signal);
  mp_M09_AXI_transactor->ARCACHE(M09_AXI_arcache);
  mp_M09_AXI_transactor->ARPROT(M09_AXI_arprot);
  mp_M09_AXI_transactor->ARQOS(M09_AXI_arqos);
  mp_M09_AXI_transactor->ARVALID(M09_AXI_arvalid);
  mp_M09_AXI_transactor->ARREADY(M09_AXI_arready);
  mp_M09_AXI_transactor->RDATA(M09_AXI_rdata);
  mp_M09_AXI_transactor->RRESP(M09_AXI_rresp);
  mp_M09_AXI_transactor->RLAST(M09_AXI_rlast);
  mp_M09_AXI_transactor->RVALID(M09_AXI_rvalid);
  mp_M09_AXI_transactor->RREADY(M09_AXI_rready);
  mp_M09_AXI_transactor->CLK(aclk);
  mp_M09_AXI_transactor->RST(aresetn);
  // configure M10_AXI_transactor
    xsc::common_cpp::properties M10_AXI_transactor_param_props;
    M10_AXI_transactor_param_props.addLong("DATA_WIDTH", "32");
    M10_AXI_transactor_param_props.addLong("FREQ_HZ", "100000000");
    M10_AXI_transactor_param_props.addLong("ID_WIDTH", "0");
    M10_AXI_transactor_param_props.addLong("ADDR_WIDTH", "12");
    M10_AXI_transactor_param_props.addLong("AWUSER_WIDTH", "0");
    M10_AXI_transactor_param_props.addLong("ARUSER_WIDTH", "0");
    M10_AXI_transactor_param_props.addLong("WUSER_WIDTH", "0");
    M10_AXI_transactor_param_props.addLong("RUSER_WIDTH", "0");
    M10_AXI_transactor_param_props.addLong("BUSER_WIDTH", "0");
    M10_AXI_transactor_param_props.addLong("HAS_BURST", "1");
    M10_AXI_transactor_param_props.addLong("HAS_LOCK", "1");
    M10_AXI_transactor_param_props.addLong("HAS_PROT", "1");
    M10_AXI_transactor_param_props.addLong("HAS_CACHE", "1");
    M10_AXI_transactor_param_props.addLong("HAS_QOS", "1");
    M10_AXI_transactor_param_props.addLong("HAS_REGION", "0");
    M10_AXI_transactor_param_props.addLong("HAS_WSTRB", "1");
    M10_AXI_transactor_param_props.addLong("HAS_BRESP", "1");
    M10_AXI_transactor_param_props.addLong("HAS_RRESP", "1");
    M10_AXI_transactor_param_props.addLong("SUPPORTS_NARROW_BURST", "0");
    M10_AXI_transactor_param_props.addLong("NUM_READ_OUTSTANDING", "2");
    M10_AXI_transactor_param_props.addLong("NUM_WRITE_OUTSTANDING", "2");
    M10_AXI_transactor_param_props.addLong("MAX_BURST_LENGTH", "256");
    M10_AXI_transactor_param_props.addLong("NUM_READ_THREADS", "1");
    M10_AXI_transactor_param_props.addLong("NUM_WRITE_THREADS", "1");
    M10_AXI_transactor_param_props.addLong("RUSER_BITS_PER_BYTE", "0");
    M10_AXI_transactor_param_props.addLong("WUSER_BITS_PER_BYTE", "0");
    M10_AXI_transactor_param_props.addLong("HAS_SIZE", "1");
    M10_AXI_transactor_param_props.addLong("HAS_RESET", "1");
    M10_AXI_transactor_param_props.addFloat("PHASE", "0.0");
    M10_AXI_transactor_param_props.addString("PROTOCOL", "AXI4");
    M10_AXI_transactor_param_props.addString("READ_WRITE_MODE", "READ_WRITE");
    M10_AXI_transactor_param_props.addString("CLK_DOMAIN", "Multi_convo_core_processing_system7_0_0_FCLK_CLK0");

    mp_M10_AXI_transactor = new xtlm::xaximm_xtlm2pin_t<32,12,1,1,1,1,1,1>("M10_AXI_transactor", M10_AXI_transactor_param_props);
  mp_M10_AXI_transactor->AWADDR(M10_AXI_awaddr);
  mp_M10_AXI_transactor->AWLEN(M10_AXI_awlen);
  mp_M10_AXI_transactor->AWSIZE(M10_AXI_awsize);
  mp_M10_AXI_transactor->AWBURST(M10_AXI_awburst);
  mp_M10_AXI_awlock_converter = new xsc::common::scalar2vectorN_converter<1>("M10_AXI_awlock_converter");
  mp_M10_AXI_awlock_converter->scalar_in(m_M10_AXI_awlock_converter_signal);
  mp_M10_AXI_awlock_converter->vector_out(M10_AXI_awlock);
  mp_M10_AXI_transactor->AWLOCK(m_M10_AXI_awlock_converter_signal);
  mp_M10_AXI_transactor->AWCACHE(M10_AXI_awcache);
  mp_M10_AXI_transactor->AWPROT(M10_AXI_awprot);
  mp_M10_AXI_transactor->AWQOS(M10_AXI_awqos);
  mp_M10_AXI_transactor->AWVALID(M10_AXI_awvalid);
  mp_M10_AXI_transactor->AWREADY(M10_AXI_awready);
  mp_M10_AXI_transactor->WDATA(M10_AXI_wdata);
  mp_M10_AXI_transactor->WSTRB(M10_AXI_wstrb);
  mp_M10_AXI_transactor->WLAST(M10_AXI_wlast);
  mp_M10_AXI_transactor->WVALID(M10_AXI_wvalid);
  mp_M10_AXI_transactor->WREADY(M10_AXI_wready);
  mp_M10_AXI_transactor->BRESP(M10_AXI_bresp);
  mp_M10_AXI_transactor->BVALID(M10_AXI_bvalid);
  mp_M10_AXI_transactor->BREADY(M10_AXI_bready);
  mp_M10_AXI_transactor->ARADDR(M10_AXI_araddr);
  mp_M10_AXI_transactor->ARLEN(M10_AXI_arlen);
  mp_M10_AXI_transactor->ARSIZE(M10_AXI_arsize);
  mp_M10_AXI_transactor->ARBURST(M10_AXI_arburst);
  mp_M10_AXI_arlock_converter = new xsc::common::scalar2vectorN_converter<1>("M10_AXI_arlock_converter");
  mp_M10_AXI_arlock_converter->scalar_in(m_M10_AXI_arlock_converter_signal);
  mp_M10_AXI_arlock_converter->vector_out(M10_AXI_arlock);
  mp_M10_AXI_transactor->ARLOCK(m_M10_AXI_arlock_converter_signal);
  mp_M10_AXI_transactor->ARCACHE(M10_AXI_arcache);
  mp_M10_AXI_transactor->ARPROT(M10_AXI_arprot);
  mp_M10_AXI_transactor->ARQOS(M10_AXI_arqos);
  mp_M10_AXI_transactor->ARVALID(M10_AXI_arvalid);
  mp_M10_AXI_transactor->ARREADY(M10_AXI_arready);
  mp_M10_AXI_transactor->RDATA(M10_AXI_rdata);
  mp_M10_AXI_transactor->RRESP(M10_AXI_rresp);
  mp_M10_AXI_transactor->RLAST(M10_AXI_rlast);
  mp_M10_AXI_transactor->RVALID(M10_AXI_rvalid);
  mp_M10_AXI_transactor->RREADY(M10_AXI_rready);
  mp_M10_AXI_transactor->CLK(aclk);
  mp_M10_AXI_transactor->RST(aresetn);
  // configure M11_AXI_transactor
    xsc::common_cpp::properties M11_AXI_transactor_param_props;
    M11_AXI_transactor_param_props.addLong("DATA_WIDTH", "32");
    M11_AXI_transactor_param_props.addLong("FREQ_HZ", "100000000");
    M11_AXI_transactor_param_props.addLong("ID_WIDTH", "0");
    M11_AXI_transactor_param_props.addLong("ADDR_WIDTH", "12");
    M11_AXI_transactor_param_props.addLong("AWUSER_WIDTH", "0");
    M11_AXI_transactor_param_props.addLong("ARUSER_WIDTH", "0");
    M11_AXI_transactor_param_props.addLong("WUSER_WIDTH", "0");
    M11_AXI_transactor_param_props.addLong("RUSER_WIDTH", "0");
    M11_AXI_transactor_param_props.addLong("BUSER_WIDTH", "0");
    M11_AXI_transactor_param_props.addLong("HAS_BURST", "1");
    M11_AXI_transactor_param_props.addLong("HAS_LOCK", "1");
    M11_AXI_transactor_param_props.addLong("HAS_PROT", "1");
    M11_AXI_transactor_param_props.addLong("HAS_CACHE", "1");
    M11_AXI_transactor_param_props.addLong("HAS_QOS", "1");
    M11_AXI_transactor_param_props.addLong("HAS_REGION", "0");
    M11_AXI_transactor_param_props.addLong("HAS_WSTRB", "1");
    M11_AXI_transactor_param_props.addLong("HAS_BRESP", "1");
    M11_AXI_transactor_param_props.addLong("HAS_RRESP", "1");
    M11_AXI_transactor_param_props.addLong("SUPPORTS_NARROW_BURST", "0");
    M11_AXI_transactor_param_props.addLong("NUM_READ_OUTSTANDING", "2");
    M11_AXI_transactor_param_props.addLong("NUM_WRITE_OUTSTANDING", "2");
    M11_AXI_transactor_param_props.addLong("MAX_BURST_LENGTH", "256");
    M11_AXI_transactor_param_props.addLong("NUM_READ_THREADS", "1");
    M11_AXI_transactor_param_props.addLong("NUM_WRITE_THREADS", "1");
    M11_AXI_transactor_param_props.addLong("RUSER_BITS_PER_BYTE", "0");
    M11_AXI_transactor_param_props.addLong("WUSER_BITS_PER_BYTE", "0");
    M11_AXI_transactor_param_props.addLong("HAS_SIZE", "1");
    M11_AXI_transactor_param_props.addLong("HAS_RESET", "1");
    M11_AXI_transactor_param_props.addFloat("PHASE", "0.0");
    M11_AXI_transactor_param_props.addString("PROTOCOL", "AXI4");
    M11_AXI_transactor_param_props.addString("READ_WRITE_MODE", "READ_WRITE");
    M11_AXI_transactor_param_props.addString("CLK_DOMAIN", "Multi_convo_core_processing_system7_0_0_FCLK_CLK0");

    mp_M11_AXI_transactor = new xtlm::xaximm_xtlm2pin_t<32,12,1,1,1,1,1,1>("M11_AXI_transactor", M11_AXI_transactor_param_props);
  mp_M11_AXI_transactor->AWADDR(M11_AXI_awaddr);
  mp_M11_AXI_transactor->AWLEN(M11_AXI_awlen);
  mp_M11_AXI_transactor->AWSIZE(M11_AXI_awsize);
  mp_M11_AXI_transactor->AWBURST(M11_AXI_awburst);
  mp_M11_AXI_awlock_converter = new xsc::common::scalar2vectorN_converter<1>("M11_AXI_awlock_converter");
  mp_M11_AXI_awlock_converter->scalar_in(m_M11_AXI_awlock_converter_signal);
  mp_M11_AXI_awlock_converter->vector_out(M11_AXI_awlock);
  mp_M11_AXI_transactor->AWLOCK(m_M11_AXI_awlock_converter_signal);
  mp_M11_AXI_transactor->AWCACHE(M11_AXI_awcache);
  mp_M11_AXI_transactor->AWPROT(M11_AXI_awprot);
  mp_M11_AXI_transactor->AWQOS(M11_AXI_awqos);
  mp_M11_AXI_transactor->AWVALID(M11_AXI_awvalid);
  mp_M11_AXI_transactor->AWREADY(M11_AXI_awready);
  mp_M11_AXI_transactor->WDATA(M11_AXI_wdata);
  mp_M11_AXI_transactor->WSTRB(M11_AXI_wstrb);
  mp_M11_AXI_transactor->WLAST(M11_AXI_wlast);
  mp_M11_AXI_transactor->WVALID(M11_AXI_wvalid);
  mp_M11_AXI_transactor->WREADY(M11_AXI_wready);
  mp_M11_AXI_transactor->BRESP(M11_AXI_bresp);
  mp_M11_AXI_transactor->BVALID(M11_AXI_bvalid);
  mp_M11_AXI_transactor->BREADY(M11_AXI_bready);
  mp_M11_AXI_transactor->ARADDR(M11_AXI_araddr);
  mp_M11_AXI_transactor->ARLEN(M11_AXI_arlen);
  mp_M11_AXI_transactor->ARSIZE(M11_AXI_arsize);
  mp_M11_AXI_transactor->ARBURST(M11_AXI_arburst);
  mp_M11_AXI_arlock_converter = new xsc::common::scalar2vectorN_converter<1>("M11_AXI_arlock_converter");
  mp_M11_AXI_arlock_converter->scalar_in(m_M11_AXI_arlock_converter_signal);
  mp_M11_AXI_arlock_converter->vector_out(M11_AXI_arlock);
  mp_M11_AXI_transactor->ARLOCK(m_M11_AXI_arlock_converter_signal);
  mp_M11_AXI_transactor->ARCACHE(M11_AXI_arcache);
  mp_M11_AXI_transactor->ARPROT(M11_AXI_arprot);
  mp_M11_AXI_transactor->ARQOS(M11_AXI_arqos);
  mp_M11_AXI_transactor->ARVALID(M11_AXI_arvalid);
  mp_M11_AXI_transactor->ARREADY(M11_AXI_arready);
  mp_M11_AXI_transactor->RDATA(M11_AXI_rdata);
  mp_M11_AXI_transactor->RRESP(M11_AXI_rresp);
  mp_M11_AXI_transactor->RLAST(M11_AXI_rlast);
  mp_M11_AXI_transactor->RVALID(M11_AXI_rvalid);
  mp_M11_AXI_transactor->RREADY(M11_AXI_rready);
  mp_M11_AXI_transactor->CLK(aclk);
  mp_M11_AXI_transactor->RST(aresetn);
  // configure M12_AXI_transactor
    xsc::common_cpp::properties M12_AXI_transactor_param_props;
    M12_AXI_transactor_param_props.addLong("DATA_WIDTH", "32");
    M12_AXI_transactor_param_props.addLong("FREQ_HZ", "100000000");
    M12_AXI_transactor_param_props.addLong("ID_WIDTH", "0");
    M12_AXI_transactor_param_props.addLong("ADDR_WIDTH", "12");
    M12_AXI_transactor_param_props.addLong("AWUSER_WIDTH", "0");
    M12_AXI_transactor_param_props.addLong("ARUSER_WIDTH", "0");
    M12_AXI_transactor_param_props.addLong("WUSER_WIDTH", "0");
    M12_AXI_transactor_param_props.addLong("RUSER_WIDTH", "0");
    M12_AXI_transactor_param_props.addLong("BUSER_WIDTH", "0");
    M12_AXI_transactor_param_props.addLong("HAS_BURST", "1");
    M12_AXI_transactor_param_props.addLong("HAS_LOCK", "1");
    M12_AXI_transactor_param_props.addLong("HAS_PROT", "1");
    M12_AXI_transactor_param_props.addLong("HAS_CACHE", "1");
    M12_AXI_transactor_param_props.addLong("HAS_QOS", "1");
    M12_AXI_transactor_param_props.addLong("HAS_REGION", "0");
    M12_AXI_transactor_param_props.addLong("HAS_WSTRB", "1");
    M12_AXI_transactor_param_props.addLong("HAS_BRESP", "1");
    M12_AXI_transactor_param_props.addLong("HAS_RRESP", "1");
    M12_AXI_transactor_param_props.addLong("SUPPORTS_NARROW_BURST", "0");
    M12_AXI_transactor_param_props.addLong("NUM_READ_OUTSTANDING", "2");
    M12_AXI_transactor_param_props.addLong("NUM_WRITE_OUTSTANDING", "2");
    M12_AXI_transactor_param_props.addLong("MAX_BURST_LENGTH", "256");
    M12_AXI_transactor_param_props.addLong("NUM_READ_THREADS", "1");
    M12_AXI_transactor_param_props.addLong("NUM_WRITE_THREADS", "1");
    M12_AXI_transactor_param_props.addLong("RUSER_BITS_PER_BYTE", "0");
    M12_AXI_transactor_param_props.addLong("WUSER_BITS_PER_BYTE", "0");
    M12_AXI_transactor_param_props.addLong("HAS_SIZE", "1");
    M12_AXI_transactor_param_props.addLong("HAS_RESET", "1");
    M12_AXI_transactor_param_props.addFloat("PHASE", "0.0");
    M12_AXI_transactor_param_props.addString("PROTOCOL", "AXI4");
    M12_AXI_transactor_param_props.addString("READ_WRITE_MODE", "READ_WRITE");
    M12_AXI_transactor_param_props.addString("CLK_DOMAIN", "Multi_convo_core_processing_system7_0_0_FCLK_CLK0");

    mp_M12_AXI_transactor = new xtlm::xaximm_xtlm2pin_t<32,12,1,1,1,1,1,1>("M12_AXI_transactor", M12_AXI_transactor_param_props);
  mp_M12_AXI_transactor->AWADDR(M12_AXI_awaddr);
  mp_M12_AXI_transactor->AWLEN(M12_AXI_awlen);
  mp_M12_AXI_transactor->AWSIZE(M12_AXI_awsize);
  mp_M12_AXI_transactor->AWBURST(M12_AXI_awburst);
  mp_M12_AXI_awlock_converter = new xsc::common::scalar2vectorN_converter<1>("M12_AXI_awlock_converter");
  mp_M12_AXI_awlock_converter->scalar_in(m_M12_AXI_awlock_converter_signal);
  mp_M12_AXI_awlock_converter->vector_out(M12_AXI_awlock);
  mp_M12_AXI_transactor->AWLOCK(m_M12_AXI_awlock_converter_signal);
  mp_M12_AXI_transactor->AWCACHE(M12_AXI_awcache);
  mp_M12_AXI_transactor->AWPROT(M12_AXI_awprot);
  mp_M12_AXI_transactor->AWQOS(M12_AXI_awqos);
  mp_M12_AXI_transactor->AWVALID(M12_AXI_awvalid);
  mp_M12_AXI_transactor->AWREADY(M12_AXI_awready);
  mp_M12_AXI_transactor->WDATA(M12_AXI_wdata);
  mp_M12_AXI_transactor->WSTRB(M12_AXI_wstrb);
  mp_M12_AXI_transactor->WLAST(M12_AXI_wlast);
  mp_M12_AXI_transactor->WVALID(M12_AXI_wvalid);
  mp_M12_AXI_transactor->WREADY(M12_AXI_wready);
  mp_M12_AXI_transactor->BRESP(M12_AXI_bresp);
  mp_M12_AXI_transactor->BVALID(M12_AXI_bvalid);
  mp_M12_AXI_transactor->BREADY(M12_AXI_bready);
  mp_M12_AXI_transactor->ARADDR(M12_AXI_araddr);
  mp_M12_AXI_transactor->ARLEN(M12_AXI_arlen);
  mp_M12_AXI_transactor->ARSIZE(M12_AXI_arsize);
  mp_M12_AXI_transactor->ARBURST(M12_AXI_arburst);
  mp_M12_AXI_arlock_converter = new xsc::common::scalar2vectorN_converter<1>("M12_AXI_arlock_converter");
  mp_M12_AXI_arlock_converter->scalar_in(m_M12_AXI_arlock_converter_signal);
  mp_M12_AXI_arlock_converter->vector_out(M12_AXI_arlock);
  mp_M12_AXI_transactor->ARLOCK(m_M12_AXI_arlock_converter_signal);
  mp_M12_AXI_transactor->ARCACHE(M12_AXI_arcache);
  mp_M12_AXI_transactor->ARPROT(M12_AXI_arprot);
  mp_M12_AXI_transactor->ARQOS(M12_AXI_arqos);
  mp_M12_AXI_transactor->ARVALID(M12_AXI_arvalid);
  mp_M12_AXI_transactor->ARREADY(M12_AXI_arready);
  mp_M12_AXI_transactor->RDATA(M12_AXI_rdata);
  mp_M12_AXI_transactor->RRESP(M12_AXI_rresp);
  mp_M12_AXI_transactor->RLAST(M12_AXI_rlast);
  mp_M12_AXI_transactor->RVALID(M12_AXI_rvalid);
  mp_M12_AXI_transactor->RREADY(M12_AXI_rready);
  mp_M12_AXI_transactor->CLK(aclk);
  mp_M12_AXI_transactor->RST(aresetn);
  // configure M13_AXI_transactor
    xsc::common_cpp::properties M13_AXI_transactor_param_props;
    M13_AXI_transactor_param_props.addLong("DATA_WIDTH", "32");
    M13_AXI_transactor_param_props.addLong("FREQ_HZ", "100000000");
    M13_AXI_transactor_param_props.addLong("ID_WIDTH", "0");
    M13_AXI_transactor_param_props.addLong("ADDR_WIDTH", "12");
    M13_AXI_transactor_param_props.addLong("AWUSER_WIDTH", "0");
    M13_AXI_transactor_param_props.addLong("ARUSER_WIDTH", "0");
    M13_AXI_transactor_param_props.addLong("WUSER_WIDTH", "0");
    M13_AXI_transactor_param_props.addLong("RUSER_WIDTH", "0");
    M13_AXI_transactor_param_props.addLong("BUSER_WIDTH", "0");
    M13_AXI_transactor_param_props.addLong("HAS_BURST", "1");
    M13_AXI_transactor_param_props.addLong("HAS_LOCK", "1");
    M13_AXI_transactor_param_props.addLong("HAS_PROT", "1");
    M13_AXI_transactor_param_props.addLong("HAS_CACHE", "1");
    M13_AXI_transactor_param_props.addLong("HAS_QOS", "1");
    M13_AXI_transactor_param_props.addLong("HAS_REGION", "0");
    M13_AXI_transactor_param_props.addLong("HAS_WSTRB", "1");
    M13_AXI_transactor_param_props.addLong("HAS_BRESP", "1");
    M13_AXI_transactor_param_props.addLong("HAS_RRESP", "1");
    M13_AXI_transactor_param_props.addLong("SUPPORTS_NARROW_BURST", "0");
    M13_AXI_transactor_param_props.addLong("NUM_READ_OUTSTANDING", "2");
    M13_AXI_transactor_param_props.addLong("NUM_WRITE_OUTSTANDING", "2");
    M13_AXI_transactor_param_props.addLong("MAX_BURST_LENGTH", "256");
    M13_AXI_transactor_param_props.addLong("NUM_READ_THREADS", "1");
    M13_AXI_transactor_param_props.addLong("NUM_WRITE_THREADS", "1");
    M13_AXI_transactor_param_props.addLong("RUSER_BITS_PER_BYTE", "0");
    M13_AXI_transactor_param_props.addLong("WUSER_BITS_PER_BYTE", "0");
    M13_AXI_transactor_param_props.addLong("HAS_SIZE", "1");
    M13_AXI_transactor_param_props.addLong("HAS_RESET", "1");
    M13_AXI_transactor_param_props.addFloat("PHASE", "0.0");
    M13_AXI_transactor_param_props.addString("PROTOCOL", "AXI4");
    M13_AXI_transactor_param_props.addString("READ_WRITE_MODE", "READ_WRITE");
    M13_AXI_transactor_param_props.addString("CLK_DOMAIN", "Multi_convo_core_processing_system7_0_0_FCLK_CLK0");

    mp_M13_AXI_transactor = new xtlm::xaximm_xtlm2pin_t<32,12,1,1,1,1,1,1>("M13_AXI_transactor", M13_AXI_transactor_param_props);
  mp_M13_AXI_transactor->AWADDR(M13_AXI_awaddr);
  mp_M13_AXI_transactor->AWLEN(M13_AXI_awlen);
  mp_M13_AXI_transactor->AWSIZE(M13_AXI_awsize);
  mp_M13_AXI_transactor->AWBURST(M13_AXI_awburst);
  mp_M13_AXI_awlock_converter = new xsc::common::scalar2vectorN_converter<1>("M13_AXI_awlock_converter");
  mp_M13_AXI_awlock_converter->scalar_in(m_M13_AXI_awlock_converter_signal);
  mp_M13_AXI_awlock_converter->vector_out(M13_AXI_awlock);
  mp_M13_AXI_transactor->AWLOCK(m_M13_AXI_awlock_converter_signal);
  mp_M13_AXI_transactor->AWCACHE(M13_AXI_awcache);
  mp_M13_AXI_transactor->AWPROT(M13_AXI_awprot);
  mp_M13_AXI_transactor->AWQOS(M13_AXI_awqos);
  mp_M13_AXI_transactor->AWVALID(M13_AXI_awvalid);
  mp_M13_AXI_transactor->AWREADY(M13_AXI_awready);
  mp_M13_AXI_transactor->WDATA(M13_AXI_wdata);
  mp_M13_AXI_transactor->WSTRB(M13_AXI_wstrb);
  mp_M13_AXI_transactor->WLAST(M13_AXI_wlast);
  mp_M13_AXI_transactor->WVALID(M13_AXI_wvalid);
  mp_M13_AXI_transactor->WREADY(M13_AXI_wready);
  mp_M13_AXI_transactor->BRESP(M13_AXI_bresp);
  mp_M13_AXI_transactor->BVALID(M13_AXI_bvalid);
  mp_M13_AXI_transactor->BREADY(M13_AXI_bready);
  mp_M13_AXI_transactor->ARADDR(M13_AXI_araddr);
  mp_M13_AXI_transactor->ARLEN(M13_AXI_arlen);
  mp_M13_AXI_transactor->ARSIZE(M13_AXI_arsize);
  mp_M13_AXI_transactor->ARBURST(M13_AXI_arburst);
  mp_M13_AXI_arlock_converter = new xsc::common::scalar2vectorN_converter<1>("M13_AXI_arlock_converter");
  mp_M13_AXI_arlock_converter->scalar_in(m_M13_AXI_arlock_converter_signal);
  mp_M13_AXI_arlock_converter->vector_out(M13_AXI_arlock);
  mp_M13_AXI_transactor->ARLOCK(m_M13_AXI_arlock_converter_signal);
  mp_M13_AXI_transactor->ARCACHE(M13_AXI_arcache);
  mp_M13_AXI_transactor->ARPROT(M13_AXI_arprot);
  mp_M13_AXI_transactor->ARQOS(M13_AXI_arqos);
  mp_M13_AXI_transactor->ARVALID(M13_AXI_arvalid);
  mp_M13_AXI_transactor->ARREADY(M13_AXI_arready);
  mp_M13_AXI_transactor->RDATA(M13_AXI_rdata);
  mp_M13_AXI_transactor->RRESP(M13_AXI_rresp);
  mp_M13_AXI_transactor->RLAST(M13_AXI_rlast);
  mp_M13_AXI_transactor->RVALID(M13_AXI_rvalid);
  mp_M13_AXI_transactor->RREADY(M13_AXI_rready);
  mp_M13_AXI_transactor->CLK(aclk);
  mp_M13_AXI_transactor->RST(aresetn);
  // configure M14_AXI_transactor
    xsc::common_cpp::properties M14_AXI_transactor_param_props;
    M14_AXI_transactor_param_props.addLong("DATA_WIDTH", "32");
    M14_AXI_transactor_param_props.addLong("FREQ_HZ", "100000000");
    M14_AXI_transactor_param_props.addLong("ID_WIDTH", "0");
    M14_AXI_transactor_param_props.addLong("ADDR_WIDTH", "12");
    M14_AXI_transactor_param_props.addLong("AWUSER_WIDTH", "0");
    M14_AXI_transactor_param_props.addLong("ARUSER_WIDTH", "0");
    M14_AXI_transactor_param_props.addLong("WUSER_WIDTH", "0");
    M14_AXI_transactor_param_props.addLong("RUSER_WIDTH", "0");
    M14_AXI_transactor_param_props.addLong("BUSER_WIDTH", "0");
    M14_AXI_transactor_param_props.addLong("HAS_BURST", "1");
    M14_AXI_transactor_param_props.addLong("HAS_LOCK", "1");
    M14_AXI_transactor_param_props.addLong("HAS_PROT", "1");
    M14_AXI_transactor_param_props.addLong("HAS_CACHE", "1");
    M14_AXI_transactor_param_props.addLong("HAS_QOS", "1");
    M14_AXI_transactor_param_props.addLong("HAS_REGION", "0");
    M14_AXI_transactor_param_props.addLong("HAS_WSTRB", "1");
    M14_AXI_transactor_param_props.addLong("HAS_BRESP", "1");
    M14_AXI_transactor_param_props.addLong("HAS_RRESP", "1");
    M14_AXI_transactor_param_props.addLong("SUPPORTS_NARROW_BURST", "0");
    M14_AXI_transactor_param_props.addLong("NUM_READ_OUTSTANDING", "2");
    M14_AXI_transactor_param_props.addLong("NUM_WRITE_OUTSTANDING", "2");
    M14_AXI_transactor_param_props.addLong("MAX_BURST_LENGTH", "256");
    M14_AXI_transactor_param_props.addLong("NUM_READ_THREADS", "1");
    M14_AXI_transactor_param_props.addLong("NUM_WRITE_THREADS", "1");
    M14_AXI_transactor_param_props.addLong("RUSER_BITS_PER_BYTE", "0");
    M14_AXI_transactor_param_props.addLong("WUSER_BITS_PER_BYTE", "0");
    M14_AXI_transactor_param_props.addLong("HAS_SIZE", "1");
    M14_AXI_transactor_param_props.addLong("HAS_RESET", "1");
    M14_AXI_transactor_param_props.addFloat("PHASE", "0.0");
    M14_AXI_transactor_param_props.addString("PROTOCOL", "AXI4");
    M14_AXI_transactor_param_props.addString("READ_WRITE_MODE", "READ_WRITE");
    M14_AXI_transactor_param_props.addString("CLK_DOMAIN", "Multi_convo_core_processing_system7_0_0_FCLK_CLK0");

    mp_M14_AXI_transactor = new xtlm::xaximm_xtlm2pin_t<32,12,1,1,1,1,1,1>("M14_AXI_transactor", M14_AXI_transactor_param_props);
  mp_M14_AXI_transactor->AWADDR(M14_AXI_awaddr);
  mp_M14_AXI_transactor->AWLEN(M14_AXI_awlen);
  mp_M14_AXI_transactor->AWSIZE(M14_AXI_awsize);
  mp_M14_AXI_transactor->AWBURST(M14_AXI_awburst);
  mp_M14_AXI_awlock_converter = new xsc::common::scalar2vectorN_converter<1>("M14_AXI_awlock_converter");
  mp_M14_AXI_awlock_converter->scalar_in(m_M14_AXI_awlock_converter_signal);
  mp_M14_AXI_awlock_converter->vector_out(M14_AXI_awlock);
  mp_M14_AXI_transactor->AWLOCK(m_M14_AXI_awlock_converter_signal);
  mp_M14_AXI_transactor->AWCACHE(M14_AXI_awcache);
  mp_M14_AXI_transactor->AWPROT(M14_AXI_awprot);
  mp_M14_AXI_transactor->AWQOS(M14_AXI_awqos);
  mp_M14_AXI_transactor->AWVALID(M14_AXI_awvalid);
  mp_M14_AXI_transactor->AWREADY(M14_AXI_awready);
  mp_M14_AXI_transactor->WDATA(M14_AXI_wdata);
  mp_M14_AXI_transactor->WSTRB(M14_AXI_wstrb);
  mp_M14_AXI_transactor->WLAST(M14_AXI_wlast);
  mp_M14_AXI_transactor->WVALID(M14_AXI_wvalid);
  mp_M14_AXI_transactor->WREADY(M14_AXI_wready);
  mp_M14_AXI_transactor->BRESP(M14_AXI_bresp);
  mp_M14_AXI_transactor->BVALID(M14_AXI_bvalid);
  mp_M14_AXI_transactor->BREADY(M14_AXI_bready);
  mp_M14_AXI_transactor->ARADDR(M14_AXI_araddr);
  mp_M14_AXI_transactor->ARLEN(M14_AXI_arlen);
  mp_M14_AXI_transactor->ARSIZE(M14_AXI_arsize);
  mp_M14_AXI_transactor->ARBURST(M14_AXI_arburst);
  mp_M14_AXI_arlock_converter = new xsc::common::scalar2vectorN_converter<1>("M14_AXI_arlock_converter");
  mp_M14_AXI_arlock_converter->scalar_in(m_M14_AXI_arlock_converter_signal);
  mp_M14_AXI_arlock_converter->vector_out(M14_AXI_arlock);
  mp_M14_AXI_transactor->ARLOCK(m_M14_AXI_arlock_converter_signal);
  mp_M14_AXI_transactor->ARCACHE(M14_AXI_arcache);
  mp_M14_AXI_transactor->ARPROT(M14_AXI_arprot);
  mp_M14_AXI_transactor->ARQOS(M14_AXI_arqos);
  mp_M14_AXI_transactor->ARVALID(M14_AXI_arvalid);
  mp_M14_AXI_transactor->ARREADY(M14_AXI_arready);
  mp_M14_AXI_transactor->RDATA(M14_AXI_rdata);
  mp_M14_AXI_transactor->RRESP(M14_AXI_rresp);
  mp_M14_AXI_transactor->RLAST(M14_AXI_rlast);
  mp_M14_AXI_transactor->RVALID(M14_AXI_rvalid);
  mp_M14_AXI_transactor->RREADY(M14_AXI_rready);
  mp_M14_AXI_transactor->CLK(aclk);
  mp_M14_AXI_transactor->RST(aresetn);
  // configure M15_AXI_transactor
    xsc::common_cpp::properties M15_AXI_transactor_param_props;
    M15_AXI_transactor_param_props.addLong("DATA_WIDTH", "32");
    M15_AXI_transactor_param_props.addLong("FREQ_HZ", "100000000");
    M15_AXI_transactor_param_props.addLong("ID_WIDTH", "0");
    M15_AXI_transactor_param_props.addLong("ADDR_WIDTH", "12");
    M15_AXI_transactor_param_props.addLong("AWUSER_WIDTH", "0");
    M15_AXI_transactor_param_props.addLong("ARUSER_WIDTH", "0");
    M15_AXI_transactor_param_props.addLong("WUSER_WIDTH", "0");
    M15_AXI_transactor_param_props.addLong("RUSER_WIDTH", "0");
    M15_AXI_transactor_param_props.addLong("BUSER_WIDTH", "0");
    M15_AXI_transactor_param_props.addLong("HAS_BURST", "1");
    M15_AXI_transactor_param_props.addLong("HAS_LOCK", "1");
    M15_AXI_transactor_param_props.addLong("HAS_PROT", "1");
    M15_AXI_transactor_param_props.addLong("HAS_CACHE", "1");
    M15_AXI_transactor_param_props.addLong("HAS_QOS", "1");
    M15_AXI_transactor_param_props.addLong("HAS_REGION", "0");
    M15_AXI_transactor_param_props.addLong("HAS_WSTRB", "1");
    M15_AXI_transactor_param_props.addLong("HAS_BRESP", "1");
    M15_AXI_transactor_param_props.addLong("HAS_RRESP", "1");
    M15_AXI_transactor_param_props.addLong("SUPPORTS_NARROW_BURST", "0");
    M15_AXI_transactor_param_props.addLong("NUM_READ_OUTSTANDING", "2");
    M15_AXI_transactor_param_props.addLong("NUM_WRITE_OUTSTANDING", "2");
    M15_AXI_transactor_param_props.addLong("MAX_BURST_LENGTH", "256");
    M15_AXI_transactor_param_props.addLong("NUM_READ_THREADS", "1");
    M15_AXI_transactor_param_props.addLong("NUM_WRITE_THREADS", "1");
    M15_AXI_transactor_param_props.addLong("RUSER_BITS_PER_BYTE", "0");
    M15_AXI_transactor_param_props.addLong("WUSER_BITS_PER_BYTE", "0");
    M15_AXI_transactor_param_props.addLong("HAS_SIZE", "1");
    M15_AXI_transactor_param_props.addLong("HAS_RESET", "1");
    M15_AXI_transactor_param_props.addFloat("PHASE", "0.0");
    M15_AXI_transactor_param_props.addString("PROTOCOL", "AXI4");
    M15_AXI_transactor_param_props.addString("READ_WRITE_MODE", "READ_WRITE");
    M15_AXI_transactor_param_props.addString("CLK_DOMAIN", "Multi_convo_core_processing_system7_0_0_FCLK_CLK0");

    mp_M15_AXI_transactor = new xtlm::xaximm_xtlm2pin_t<32,12,1,1,1,1,1,1>("M15_AXI_transactor", M15_AXI_transactor_param_props);
  mp_M15_AXI_transactor->AWADDR(M15_AXI_awaddr);
  mp_M15_AXI_transactor->AWLEN(M15_AXI_awlen);
  mp_M15_AXI_transactor->AWSIZE(M15_AXI_awsize);
  mp_M15_AXI_transactor->AWBURST(M15_AXI_awburst);
  mp_M15_AXI_awlock_converter = new xsc::common::scalar2vectorN_converter<1>("M15_AXI_awlock_converter");
  mp_M15_AXI_awlock_converter->scalar_in(m_M15_AXI_awlock_converter_signal);
  mp_M15_AXI_awlock_converter->vector_out(M15_AXI_awlock);
  mp_M15_AXI_transactor->AWLOCK(m_M15_AXI_awlock_converter_signal);
  mp_M15_AXI_transactor->AWCACHE(M15_AXI_awcache);
  mp_M15_AXI_transactor->AWPROT(M15_AXI_awprot);
  mp_M15_AXI_transactor->AWQOS(M15_AXI_awqos);
  mp_M15_AXI_transactor->AWVALID(M15_AXI_awvalid);
  mp_M15_AXI_transactor->AWREADY(M15_AXI_awready);
  mp_M15_AXI_transactor->WDATA(M15_AXI_wdata);
  mp_M15_AXI_transactor->WSTRB(M15_AXI_wstrb);
  mp_M15_AXI_transactor->WLAST(M15_AXI_wlast);
  mp_M15_AXI_transactor->WVALID(M15_AXI_wvalid);
  mp_M15_AXI_transactor->WREADY(M15_AXI_wready);
  mp_M15_AXI_transactor->BRESP(M15_AXI_bresp);
  mp_M15_AXI_transactor->BVALID(M15_AXI_bvalid);
  mp_M15_AXI_transactor->BREADY(M15_AXI_bready);
  mp_M15_AXI_transactor->ARADDR(M15_AXI_araddr);
  mp_M15_AXI_transactor->ARLEN(M15_AXI_arlen);
  mp_M15_AXI_transactor->ARSIZE(M15_AXI_arsize);
  mp_M15_AXI_transactor->ARBURST(M15_AXI_arburst);
  mp_M15_AXI_arlock_converter = new xsc::common::scalar2vectorN_converter<1>("M15_AXI_arlock_converter");
  mp_M15_AXI_arlock_converter->scalar_in(m_M15_AXI_arlock_converter_signal);
  mp_M15_AXI_arlock_converter->vector_out(M15_AXI_arlock);
  mp_M15_AXI_transactor->ARLOCK(m_M15_AXI_arlock_converter_signal);
  mp_M15_AXI_transactor->ARCACHE(M15_AXI_arcache);
  mp_M15_AXI_transactor->ARPROT(M15_AXI_arprot);
  mp_M15_AXI_transactor->ARQOS(M15_AXI_arqos);
  mp_M15_AXI_transactor->ARVALID(M15_AXI_arvalid);
  mp_M15_AXI_transactor->ARREADY(M15_AXI_arready);
  mp_M15_AXI_transactor->RDATA(M15_AXI_rdata);
  mp_M15_AXI_transactor->RRESP(M15_AXI_rresp);
  mp_M15_AXI_transactor->RLAST(M15_AXI_rlast);
  mp_M15_AXI_transactor->RVALID(M15_AXI_rvalid);
  mp_M15_AXI_transactor->RREADY(M15_AXI_rready);
  mp_M15_AXI_transactor->CLK(aclk);
  mp_M15_AXI_transactor->RST(aresetn);
  // configure M16_AXI_transactor
    xsc::common_cpp::properties M16_AXI_transactor_param_props;
    M16_AXI_transactor_param_props.addLong("DATA_WIDTH", "32");
    M16_AXI_transactor_param_props.addLong("FREQ_HZ", "100000000");
    M16_AXI_transactor_param_props.addLong("ID_WIDTH", "0");
    M16_AXI_transactor_param_props.addLong("ADDR_WIDTH", "12");
    M16_AXI_transactor_param_props.addLong("AWUSER_WIDTH", "0");
    M16_AXI_transactor_param_props.addLong("ARUSER_WIDTH", "0");
    M16_AXI_transactor_param_props.addLong("WUSER_WIDTH", "0");
    M16_AXI_transactor_param_props.addLong("RUSER_WIDTH", "0");
    M16_AXI_transactor_param_props.addLong("BUSER_WIDTH", "0");
    M16_AXI_transactor_param_props.addLong("HAS_BURST", "1");
    M16_AXI_transactor_param_props.addLong("HAS_LOCK", "1");
    M16_AXI_transactor_param_props.addLong("HAS_PROT", "1");
    M16_AXI_transactor_param_props.addLong("HAS_CACHE", "1");
    M16_AXI_transactor_param_props.addLong("HAS_QOS", "1");
    M16_AXI_transactor_param_props.addLong("HAS_REGION", "0");
    M16_AXI_transactor_param_props.addLong("HAS_WSTRB", "1");
    M16_AXI_transactor_param_props.addLong("HAS_BRESP", "1");
    M16_AXI_transactor_param_props.addLong("HAS_RRESP", "1");
    M16_AXI_transactor_param_props.addLong("SUPPORTS_NARROW_BURST", "0");
    M16_AXI_transactor_param_props.addLong("NUM_READ_OUTSTANDING", "2");
    M16_AXI_transactor_param_props.addLong("NUM_WRITE_OUTSTANDING", "2");
    M16_AXI_transactor_param_props.addLong("MAX_BURST_LENGTH", "256");
    M16_AXI_transactor_param_props.addLong("NUM_READ_THREADS", "1");
    M16_AXI_transactor_param_props.addLong("NUM_WRITE_THREADS", "1");
    M16_AXI_transactor_param_props.addLong("RUSER_BITS_PER_BYTE", "0");
    M16_AXI_transactor_param_props.addLong("WUSER_BITS_PER_BYTE", "0");
    M16_AXI_transactor_param_props.addLong("HAS_SIZE", "1");
    M16_AXI_transactor_param_props.addLong("HAS_RESET", "1");
    M16_AXI_transactor_param_props.addFloat("PHASE", "0.0");
    M16_AXI_transactor_param_props.addString("PROTOCOL", "AXI4");
    M16_AXI_transactor_param_props.addString("READ_WRITE_MODE", "READ_WRITE");
    M16_AXI_transactor_param_props.addString("CLK_DOMAIN", "Multi_convo_core_processing_system7_0_0_FCLK_CLK0");

    mp_M16_AXI_transactor = new xtlm::xaximm_xtlm2pin_t<32,12,1,1,1,1,1,1>("M16_AXI_transactor", M16_AXI_transactor_param_props);
  mp_M16_AXI_transactor->AWADDR(M16_AXI_awaddr);
  mp_M16_AXI_transactor->AWLEN(M16_AXI_awlen);
  mp_M16_AXI_transactor->AWSIZE(M16_AXI_awsize);
  mp_M16_AXI_transactor->AWBURST(M16_AXI_awburst);
  mp_M16_AXI_awlock_converter = new xsc::common::scalar2vectorN_converter<1>("M16_AXI_awlock_converter");
  mp_M16_AXI_awlock_converter->scalar_in(m_M16_AXI_awlock_converter_signal);
  mp_M16_AXI_awlock_converter->vector_out(M16_AXI_awlock);
  mp_M16_AXI_transactor->AWLOCK(m_M16_AXI_awlock_converter_signal);
  mp_M16_AXI_transactor->AWCACHE(M16_AXI_awcache);
  mp_M16_AXI_transactor->AWPROT(M16_AXI_awprot);
  mp_M16_AXI_transactor->AWQOS(M16_AXI_awqos);
  mp_M16_AXI_transactor->AWVALID(M16_AXI_awvalid);
  mp_M16_AXI_transactor->AWREADY(M16_AXI_awready);
  mp_M16_AXI_transactor->WDATA(M16_AXI_wdata);
  mp_M16_AXI_transactor->WSTRB(M16_AXI_wstrb);
  mp_M16_AXI_transactor->WLAST(M16_AXI_wlast);
  mp_M16_AXI_transactor->WVALID(M16_AXI_wvalid);
  mp_M16_AXI_transactor->WREADY(M16_AXI_wready);
  mp_M16_AXI_transactor->BRESP(M16_AXI_bresp);
  mp_M16_AXI_transactor->BVALID(M16_AXI_bvalid);
  mp_M16_AXI_transactor->BREADY(M16_AXI_bready);
  mp_M16_AXI_transactor->ARADDR(M16_AXI_araddr);
  mp_M16_AXI_transactor->ARLEN(M16_AXI_arlen);
  mp_M16_AXI_transactor->ARSIZE(M16_AXI_arsize);
  mp_M16_AXI_transactor->ARBURST(M16_AXI_arburst);
  mp_M16_AXI_arlock_converter = new xsc::common::scalar2vectorN_converter<1>("M16_AXI_arlock_converter");
  mp_M16_AXI_arlock_converter->scalar_in(m_M16_AXI_arlock_converter_signal);
  mp_M16_AXI_arlock_converter->vector_out(M16_AXI_arlock);
  mp_M16_AXI_transactor->ARLOCK(m_M16_AXI_arlock_converter_signal);
  mp_M16_AXI_transactor->ARCACHE(M16_AXI_arcache);
  mp_M16_AXI_transactor->ARPROT(M16_AXI_arprot);
  mp_M16_AXI_transactor->ARQOS(M16_AXI_arqos);
  mp_M16_AXI_transactor->ARVALID(M16_AXI_arvalid);
  mp_M16_AXI_transactor->ARREADY(M16_AXI_arready);
  mp_M16_AXI_transactor->RDATA(M16_AXI_rdata);
  mp_M16_AXI_transactor->RRESP(M16_AXI_rresp);
  mp_M16_AXI_transactor->RLAST(M16_AXI_rlast);
  mp_M16_AXI_transactor->RVALID(M16_AXI_rvalid);
  mp_M16_AXI_transactor->RREADY(M16_AXI_rready);
  mp_M16_AXI_transactor->CLK(aclk);
  mp_M16_AXI_transactor->RST(aresetn);
  // configure M17_AXI_transactor
    xsc::common_cpp::properties M17_AXI_transactor_param_props;
    M17_AXI_transactor_param_props.addLong("DATA_WIDTH", "32");
    M17_AXI_transactor_param_props.addLong("FREQ_HZ", "100000000");
    M17_AXI_transactor_param_props.addLong("ID_WIDTH", "0");
    M17_AXI_transactor_param_props.addLong("ADDR_WIDTH", "12");
    M17_AXI_transactor_param_props.addLong("AWUSER_WIDTH", "0");
    M17_AXI_transactor_param_props.addLong("ARUSER_WIDTH", "0");
    M17_AXI_transactor_param_props.addLong("WUSER_WIDTH", "0");
    M17_AXI_transactor_param_props.addLong("RUSER_WIDTH", "0");
    M17_AXI_transactor_param_props.addLong("BUSER_WIDTH", "0");
    M17_AXI_transactor_param_props.addLong("HAS_BURST", "1");
    M17_AXI_transactor_param_props.addLong("HAS_LOCK", "1");
    M17_AXI_transactor_param_props.addLong("HAS_PROT", "1");
    M17_AXI_transactor_param_props.addLong("HAS_CACHE", "1");
    M17_AXI_transactor_param_props.addLong("HAS_QOS", "1");
    M17_AXI_transactor_param_props.addLong("HAS_REGION", "0");
    M17_AXI_transactor_param_props.addLong("HAS_WSTRB", "1");
    M17_AXI_transactor_param_props.addLong("HAS_BRESP", "1");
    M17_AXI_transactor_param_props.addLong("HAS_RRESP", "1");
    M17_AXI_transactor_param_props.addLong("SUPPORTS_NARROW_BURST", "0");
    M17_AXI_transactor_param_props.addLong("NUM_READ_OUTSTANDING", "2");
    M17_AXI_transactor_param_props.addLong("NUM_WRITE_OUTSTANDING", "2");
    M17_AXI_transactor_param_props.addLong("MAX_BURST_LENGTH", "256");
    M17_AXI_transactor_param_props.addLong("NUM_READ_THREADS", "1");
    M17_AXI_transactor_param_props.addLong("NUM_WRITE_THREADS", "1");
    M17_AXI_transactor_param_props.addLong("RUSER_BITS_PER_BYTE", "0");
    M17_AXI_transactor_param_props.addLong("WUSER_BITS_PER_BYTE", "0");
    M17_AXI_transactor_param_props.addLong("HAS_SIZE", "1");
    M17_AXI_transactor_param_props.addLong("HAS_RESET", "1");
    M17_AXI_transactor_param_props.addFloat("PHASE", "0.0");
    M17_AXI_transactor_param_props.addString("PROTOCOL", "AXI4");
    M17_AXI_transactor_param_props.addString("READ_WRITE_MODE", "READ_WRITE");
    M17_AXI_transactor_param_props.addString("CLK_DOMAIN", "Multi_convo_core_processing_system7_0_0_FCLK_CLK0");

    mp_M17_AXI_transactor = new xtlm::xaximm_xtlm2pin_t<32,12,1,1,1,1,1,1>("M17_AXI_transactor", M17_AXI_transactor_param_props);
  mp_M17_AXI_transactor->AWADDR(M17_AXI_awaddr);
  mp_M17_AXI_transactor->AWLEN(M17_AXI_awlen);
  mp_M17_AXI_transactor->AWSIZE(M17_AXI_awsize);
  mp_M17_AXI_transactor->AWBURST(M17_AXI_awburst);
  mp_M17_AXI_awlock_converter = new xsc::common::scalar2vectorN_converter<1>("M17_AXI_awlock_converter");
  mp_M17_AXI_awlock_converter->scalar_in(m_M17_AXI_awlock_converter_signal);
  mp_M17_AXI_awlock_converter->vector_out(M17_AXI_awlock);
  mp_M17_AXI_transactor->AWLOCK(m_M17_AXI_awlock_converter_signal);
  mp_M17_AXI_transactor->AWCACHE(M17_AXI_awcache);
  mp_M17_AXI_transactor->AWPROT(M17_AXI_awprot);
  mp_M17_AXI_transactor->AWQOS(M17_AXI_awqos);
  mp_M17_AXI_transactor->AWVALID(M17_AXI_awvalid);
  mp_M17_AXI_transactor->AWREADY(M17_AXI_awready);
  mp_M17_AXI_transactor->WDATA(M17_AXI_wdata);
  mp_M17_AXI_transactor->WSTRB(M17_AXI_wstrb);
  mp_M17_AXI_transactor->WLAST(M17_AXI_wlast);
  mp_M17_AXI_transactor->WVALID(M17_AXI_wvalid);
  mp_M17_AXI_transactor->WREADY(M17_AXI_wready);
  mp_M17_AXI_transactor->BRESP(M17_AXI_bresp);
  mp_M17_AXI_transactor->BVALID(M17_AXI_bvalid);
  mp_M17_AXI_transactor->BREADY(M17_AXI_bready);
  mp_M17_AXI_transactor->ARADDR(M17_AXI_araddr);
  mp_M17_AXI_transactor->ARLEN(M17_AXI_arlen);
  mp_M17_AXI_transactor->ARSIZE(M17_AXI_arsize);
  mp_M17_AXI_transactor->ARBURST(M17_AXI_arburst);
  mp_M17_AXI_arlock_converter = new xsc::common::scalar2vectorN_converter<1>("M17_AXI_arlock_converter");
  mp_M17_AXI_arlock_converter->scalar_in(m_M17_AXI_arlock_converter_signal);
  mp_M17_AXI_arlock_converter->vector_out(M17_AXI_arlock);
  mp_M17_AXI_transactor->ARLOCK(m_M17_AXI_arlock_converter_signal);
  mp_M17_AXI_transactor->ARCACHE(M17_AXI_arcache);
  mp_M17_AXI_transactor->ARPROT(M17_AXI_arprot);
  mp_M17_AXI_transactor->ARQOS(M17_AXI_arqos);
  mp_M17_AXI_transactor->ARVALID(M17_AXI_arvalid);
  mp_M17_AXI_transactor->ARREADY(M17_AXI_arready);
  mp_M17_AXI_transactor->RDATA(M17_AXI_rdata);
  mp_M17_AXI_transactor->RRESP(M17_AXI_rresp);
  mp_M17_AXI_transactor->RLAST(M17_AXI_rlast);
  mp_M17_AXI_transactor->RVALID(M17_AXI_rvalid);
  mp_M17_AXI_transactor->RREADY(M17_AXI_rready);
  mp_M17_AXI_transactor->CLK(aclk);
  mp_M17_AXI_transactor->RST(aresetn);
  // configure M18_AXI_transactor
    xsc::common_cpp::properties M18_AXI_transactor_param_props;
    M18_AXI_transactor_param_props.addLong("DATA_WIDTH", "32");
    M18_AXI_transactor_param_props.addLong("FREQ_HZ", "100000000");
    M18_AXI_transactor_param_props.addLong("ID_WIDTH", "0");
    M18_AXI_transactor_param_props.addLong("ADDR_WIDTH", "12");
    M18_AXI_transactor_param_props.addLong("AWUSER_WIDTH", "0");
    M18_AXI_transactor_param_props.addLong("ARUSER_WIDTH", "0");
    M18_AXI_transactor_param_props.addLong("WUSER_WIDTH", "0");
    M18_AXI_transactor_param_props.addLong("RUSER_WIDTH", "0");
    M18_AXI_transactor_param_props.addLong("BUSER_WIDTH", "0");
    M18_AXI_transactor_param_props.addLong("HAS_BURST", "1");
    M18_AXI_transactor_param_props.addLong("HAS_LOCK", "1");
    M18_AXI_transactor_param_props.addLong("HAS_PROT", "1");
    M18_AXI_transactor_param_props.addLong("HAS_CACHE", "1");
    M18_AXI_transactor_param_props.addLong("HAS_QOS", "1");
    M18_AXI_transactor_param_props.addLong("HAS_REGION", "0");
    M18_AXI_transactor_param_props.addLong("HAS_WSTRB", "1");
    M18_AXI_transactor_param_props.addLong("HAS_BRESP", "1");
    M18_AXI_transactor_param_props.addLong("HAS_RRESP", "1");
    M18_AXI_transactor_param_props.addLong("SUPPORTS_NARROW_BURST", "0");
    M18_AXI_transactor_param_props.addLong("NUM_READ_OUTSTANDING", "2");
    M18_AXI_transactor_param_props.addLong("NUM_WRITE_OUTSTANDING", "2");
    M18_AXI_transactor_param_props.addLong("MAX_BURST_LENGTH", "256");
    M18_AXI_transactor_param_props.addLong("NUM_READ_THREADS", "1");
    M18_AXI_transactor_param_props.addLong("NUM_WRITE_THREADS", "1");
    M18_AXI_transactor_param_props.addLong("RUSER_BITS_PER_BYTE", "0");
    M18_AXI_transactor_param_props.addLong("WUSER_BITS_PER_BYTE", "0");
    M18_AXI_transactor_param_props.addLong("HAS_SIZE", "1");
    M18_AXI_transactor_param_props.addLong("HAS_RESET", "1");
    M18_AXI_transactor_param_props.addFloat("PHASE", "0.0");
    M18_AXI_transactor_param_props.addString("PROTOCOL", "AXI4");
    M18_AXI_transactor_param_props.addString("READ_WRITE_MODE", "READ_WRITE");
    M18_AXI_transactor_param_props.addString("CLK_DOMAIN", "Multi_convo_core_processing_system7_0_0_FCLK_CLK0");

    mp_M18_AXI_transactor = new xtlm::xaximm_xtlm2pin_t<32,12,1,1,1,1,1,1>("M18_AXI_transactor", M18_AXI_transactor_param_props);
  mp_M18_AXI_transactor->AWADDR(M18_AXI_awaddr);
  mp_M18_AXI_transactor->AWLEN(M18_AXI_awlen);
  mp_M18_AXI_transactor->AWSIZE(M18_AXI_awsize);
  mp_M18_AXI_transactor->AWBURST(M18_AXI_awburst);
  mp_M18_AXI_awlock_converter = new xsc::common::scalar2vectorN_converter<1>("M18_AXI_awlock_converter");
  mp_M18_AXI_awlock_converter->scalar_in(m_M18_AXI_awlock_converter_signal);
  mp_M18_AXI_awlock_converter->vector_out(M18_AXI_awlock);
  mp_M18_AXI_transactor->AWLOCK(m_M18_AXI_awlock_converter_signal);
  mp_M18_AXI_transactor->AWCACHE(M18_AXI_awcache);
  mp_M18_AXI_transactor->AWPROT(M18_AXI_awprot);
  mp_M18_AXI_transactor->AWQOS(M18_AXI_awqos);
  mp_M18_AXI_transactor->AWVALID(M18_AXI_awvalid);
  mp_M18_AXI_transactor->AWREADY(M18_AXI_awready);
  mp_M18_AXI_transactor->WDATA(M18_AXI_wdata);
  mp_M18_AXI_transactor->WSTRB(M18_AXI_wstrb);
  mp_M18_AXI_transactor->WLAST(M18_AXI_wlast);
  mp_M18_AXI_transactor->WVALID(M18_AXI_wvalid);
  mp_M18_AXI_transactor->WREADY(M18_AXI_wready);
  mp_M18_AXI_transactor->BRESP(M18_AXI_bresp);
  mp_M18_AXI_transactor->BVALID(M18_AXI_bvalid);
  mp_M18_AXI_transactor->BREADY(M18_AXI_bready);
  mp_M18_AXI_transactor->ARADDR(M18_AXI_araddr);
  mp_M18_AXI_transactor->ARLEN(M18_AXI_arlen);
  mp_M18_AXI_transactor->ARSIZE(M18_AXI_arsize);
  mp_M18_AXI_transactor->ARBURST(M18_AXI_arburst);
  mp_M18_AXI_arlock_converter = new xsc::common::scalar2vectorN_converter<1>("M18_AXI_arlock_converter");
  mp_M18_AXI_arlock_converter->scalar_in(m_M18_AXI_arlock_converter_signal);
  mp_M18_AXI_arlock_converter->vector_out(M18_AXI_arlock);
  mp_M18_AXI_transactor->ARLOCK(m_M18_AXI_arlock_converter_signal);
  mp_M18_AXI_transactor->ARCACHE(M18_AXI_arcache);
  mp_M18_AXI_transactor->ARPROT(M18_AXI_arprot);
  mp_M18_AXI_transactor->ARQOS(M18_AXI_arqos);
  mp_M18_AXI_transactor->ARVALID(M18_AXI_arvalid);
  mp_M18_AXI_transactor->ARREADY(M18_AXI_arready);
  mp_M18_AXI_transactor->RDATA(M18_AXI_rdata);
  mp_M18_AXI_transactor->RRESP(M18_AXI_rresp);
  mp_M18_AXI_transactor->RLAST(M18_AXI_rlast);
  mp_M18_AXI_transactor->RVALID(M18_AXI_rvalid);
  mp_M18_AXI_transactor->RREADY(M18_AXI_rready);
  mp_M18_AXI_transactor->CLK(aclk);
  mp_M18_AXI_transactor->RST(aresetn);
  // configure M19_AXI_transactor
    xsc::common_cpp::properties M19_AXI_transactor_param_props;
    M19_AXI_transactor_param_props.addLong("DATA_WIDTH", "32");
    M19_AXI_transactor_param_props.addLong("FREQ_HZ", "100000000");
    M19_AXI_transactor_param_props.addLong("ID_WIDTH", "0");
    M19_AXI_transactor_param_props.addLong("ADDR_WIDTH", "12");
    M19_AXI_transactor_param_props.addLong("AWUSER_WIDTH", "0");
    M19_AXI_transactor_param_props.addLong("ARUSER_WIDTH", "0");
    M19_AXI_transactor_param_props.addLong("WUSER_WIDTH", "0");
    M19_AXI_transactor_param_props.addLong("RUSER_WIDTH", "0");
    M19_AXI_transactor_param_props.addLong("BUSER_WIDTH", "0");
    M19_AXI_transactor_param_props.addLong("HAS_BURST", "1");
    M19_AXI_transactor_param_props.addLong("HAS_LOCK", "1");
    M19_AXI_transactor_param_props.addLong("HAS_PROT", "1");
    M19_AXI_transactor_param_props.addLong("HAS_CACHE", "1");
    M19_AXI_transactor_param_props.addLong("HAS_QOS", "1");
    M19_AXI_transactor_param_props.addLong("HAS_REGION", "0");
    M19_AXI_transactor_param_props.addLong("HAS_WSTRB", "1");
    M19_AXI_transactor_param_props.addLong("HAS_BRESP", "1");
    M19_AXI_transactor_param_props.addLong("HAS_RRESP", "1");
    M19_AXI_transactor_param_props.addLong("SUPPORTS_NARROW_BURST", "0");
    M19_AXI_transactor_param_props.addLong("NUM_READ_OUTSTANDING", "2");
    M19_AXI_transactor_param_props.addLong("NUM_WRITE_OUTSTANDING", "2");
    M19_AXI_transactor_param_props.addLong("MAX_BURST_LENGTH", "256");
    M19_AXI_transactor_param_props.addLong("NUM_READ_THREADS", "1");
    M19_AXI_transactor_param_props.addLong("NUM_WRITE_THREADS", "1");
    M19_AXI_transactor_param_props.addLong("RUSER_BITS_PER_BYTE", "0");
    M19_AXI_transactor_param_props.addLong("WUSER_BITS_PER_BYTE", "0");
    M19_AXI_transactor_param_props.addLong("HAS_SIZE", "1");
    M19_AXI_transactor_param_props.addLong("HAS_RESET", "1");
    M19_AXI_transactor_param_props.addFloat("PHASE", "0.0");
    M19_AXI_transactor_param_props.addString("PROTOCOL", "AXI4");
    M19_AXI_transactor_param_props.addString("READ_WRITE_MODE", "READ_WRITE");
    M19_AXI_transactor_param_props.addString("CLK_DOMAIN", "Multi_convo_core_processing_system7_0_0_FCLK_CLK0");

    mp_M19_AXI_transactor = new xtlm::xaximm_xtlm2pin_t<32,12,1,1,1,1,1,1>("M19_AXI_transactor", M19_AXI_transactor_param_props);
  mp_M19_AXI_transactor->AWADDR(M19_AXI_awaddr);
  mp_M19_AXI_transactor->AWLEN(M19_AXI_awlen);
  mp_M19_AXI_transactor->AWSIZE(M19_AXI_awsize);
  mp_M19_AXI_transactor->AWBURST(M19_AXI_awburst);
  mp_M19_AXI_awlock_converter = new xsc::common::scalar2vectorN_converter<1>("M19_AXI_awlock_converter");
  mp_M19_AXI_awlock_converter->scalar_in(m_M19_AXI_awlock_converter_signal);
  mp_M19_AXI_awlock_converter->vector_out(M19_AXI_awlock);
  mp_M19_AXI_transactor->AWLOCK(m_M19_AXI_awlock_converter_signal);
  mp_M19_AXI_transactor->AWCACHE(M19_AXI_awcache);
  mp_M19_AXI_transactor->AWPROT(M19_AXI_awprot);
  mp_M19_AXI_transactor->AWQOS(M19_AXI_awqos);
  mp_M19_AXI_transactor->AWVALID(M19_AXI_awvalid);
  mp_M19_AXI_transactor->AWREADY(M19_AXI_awready);
  mp_M19_AXI_transactor->WDATA(M19_AXI_wdata);
  mp_M19_AXI_transactor->WSTRB(M19_AXI_wstrb);
  mp_M19_AXI_transactor->WLAST(M19_AXI_wlast);
  mp_M19_AXI_transactor->WVALID(M19_AXI_wvalid);
  mp_M19_AXI_transactor->WREADY(M19_AXI_wready);
  mp_M19_AXI_transactor->BRESP(M19_AXI_bresp);
  mp_M19_AXI_transactor->BVALID(M19_AXI_bvalid);
  mp_M19_AXI_transactor->BREADY(M19_AXI_bready);
  mp_M19_AXI_transactor->ARADDR(M19_AXI_araddr);
  mp_M19_AXI_transactor->ARLEN(M19_AXI_arlen);
  mp_M19_AXI_transactor->ARSIZE(M19_AXI_arsize);
  mp_M19_AXI_transactor->ARBURST(M19_AXI_arburst);
  mp_M19_AXI_arlock_converter = new xsc::common::scalar2vectorN_converter<1>("M19_AXI_arlock_converter");
  mp_M19_AXI_arlock_converter->scalar_in(m_M19_AXI_arlock_converter_signal);
  mp_M19_AXI_arlock_converter->vector_out(M19_AXI_arlock);
  mp_M19_AXI_transactor->ARLOCK(m_M19_AXI_arlock_converter_signal);
  mp_M19_AXI_transactor->ARCACHE(M19_AXI_arcache);
  mp_M19_AXI_transactor->ARPROT(M19_AXI_arprot);
  mp_M19_AXI_transactor->ARQOS(M19_AXI_arqos);
  mp_M19_AXI_transactor->ARVALID(M19_AXI_arvalid);
  mp_M19_AXI_transactor->ARREADY(M19_AXI_arready);
  mp_M19_AXI_transactor->RDATA(M19_AXI_rdata);
  mp_M19_AXI_transactor->RRESP(M19_AXI_rresp);
  mp_M19_AXI_transactor->RLAST(M19_AXI_rlast);
  mp_M19_AXI_transactor->RVALID(M19_AXI_rvalid);
  mp_M19_AXI_transactor->RREADY(M19_AXI_rready);
  mp_M19_AXI_transactor->CLK(aclk);
  mp_M19_AXI_transactor->RST(aresetn);
  // configure M20_AXI_transactor
    xsc::common_cpp::properties M20_AXI_transactor_param_props;
    M20_AXI_transactor_param_props.addLong("DATA_WIDTH", "32");
    M20_AXI_transactor_param_props.addLong("FREQ_HZ", "100000000");
    M20_AXI_transactor_param_props.addLong("ID_WIDTH", "0");
    M20_AXI_transactor_param_props.addLong("ADDR_WIDTH", "12");
    M20_AXI_transactor_param_props.addLong("AWUSER_WIDTH", "0");
    M20_AXI_transactor_param_props.addLong("ARUSER_WIDTH", "0");
    M20_AXI_transactor_param_props.addLong("WUSER_WIDTH", "0");
    M20_AXI_transactor_param_props.addLong("RUSER_WIDTH", "0");
    M20_AXI_transactor_param_props.addLong("BUSER_WIDTH", "0");
    M20_AXI_transactor_param_props.addLong("HAS_BURST", "1");
    M20_AXI_transactor_param_props.addLong("HAS_LOCK", "1");
    M20_AXI_transactor_param_props.addLong("HAS_PROT", "1");
    M20_AXI_transactor_param_props.addLong("HAS_CACHE", "1");
    M20_AXI_transactor_param_props.addLong("HAS_QOS", "1");
    M20_AXI_transactor_param_props.addLong("HAS_REGION", "0");
    M20_AXI_transactor_param_props.addLong("HAS_WSTRB", "1");
    M20_AXI_transactor_param_props.addLong("HAS_BRESP", "1");
    M20_AXI_transactor_param_props.addLong("HAS_RRESP", "1");
    M20_AXI_transactor_param_props.addLong("SUPPORTS_NARROW_BURST", "0");
    M20_AXI_transactor_param_props.addLong("NUM_READ_OUTSTANDING", "2");
    M20_AXI_transactor_param_props.addLong("NUM_WRITE_OUTSTANDING", "2");
    M20_AXI_transactor_param_props.addLong("MAX_BURST_LENGTH", "256");
    M20_AXI_transactor_param_props.addLong("NUM_READ_THREADS", "1");
    M20_AXI_transactor_param_props.addLong("NUM_WRITE_THREADS", "1");
    M20_AXI_transactor_param_props.addLong("RUSER_BITS_PER_BYTE", "0");
    M20_AXI_transactor_param_props.addLong("WUSER_BITS_PER_BYTE", "0");
    M20_AXI_transactor_param_props.addLong("HAS_SIZE", "1");
    M20_AXI_transactor_param_props.addLong("HAS_RESET", "1");
    M20_AXI_transactor_param_props.addFloat("PHASE", "0.0");
    M20_AXI_transactor_param_props.addString("PROTOCOL", "AXI4");
    M20_AXI_transactor_param_props.addString("READ_WRITE_MODE", "READ_WRITE");
    M20_AXI_transactor_param_props.addString("CLK_DOMAIN", "Multi_convo_core_processing_system7_0_0_FCLK_CLK0");

    mp_M20_AXI_transactor = new xtlm::xaximm_xtlm2pin_t<32,12,1,1,1,1,1,1>("M20_AXI_transactor", M20_AXI_transactor_param_props);
  mp_M20_AXI_transactor->AWADDR(M20_AXI_awaddr);
  mp_M20_AXI_transactor->AWLEN(M20_AXI_awlen);
  mp_M20_AXI_transactor->AWSIZE(M20_AXI_awsize);
  mp_M20_AXI_transactor->AWBURST(M20_AXI_awburst);
  mp_M20_AXI_awlock_converter = new xsc::common::scalar2vectorN_converter<1>("M20_AXI_awlock_converter");
  mp_M20_AXI_awlock_converter->scalar_in(m_M20_AXI_awlock_converter_signal);
  mp_M20_AXI_awlock_converter->vector_out(M20_AXI_awlock);
  mp_M20_AXI_transactor->AWLOCK(m_M20_AXI_awlock_converter_signal);
  mp_M20_AXI_transactor->AWCACHE(M20_AXI_awcache);
  mp_M20_AXI_transactor->AWPROT(M20_AXI_awprot);
  mp_M20_AXI_transactor->AWQOS(M20_AXI_awqos);
  mp_M20_AXI_transactor->AWVALID(M20_AXI_awvalid);
  mp_M20_AXI_transactor->AWREADY(M20_AXI_awready);
  mp_M20_AXI_transactor->WDATA(M20_AXI_wdata);
  mp_M20_AXI_transactor->WSTRB(M20_AXI_wstrb);
  mp_M20_AXI_transactor->WLAST(M20_AXI_wlast);
  mp_M20_AXI_transactor->WVALID(M20_AXI_wvalid);
  mp_M20_AXI_transactor->WREADY(M20_AXI_wready);
  mp_M20_AXI_transactor->BRESP(M20_AXI_bresp);
  mp_M20_AXI_transactor->BVALID(M20_AXI_bvalid);
  mp_M20_AXI_transactor->BREADY(M20_AXI_bready);
  mp_M20_AXI_transactor->ARADDR(M20_AXI_araddr);
  mp_M20_AXI_transactor->ARLEN(M20_AXI_arlen);
  mp_M20_AXI_transactor->ARSIZE(M20_AXI_arsize);
  mp_M20_AXI_transactor->ARBURST(M20_AXI_arburst);
  mp_M20_AXI_arlock_converter = new xsc::common::scalar2vectorN_converter<1>("M20_AXI_arlock_converter");
  mp_M20_AXI_arlock_converter->scalar_in(m_M20_AXI_arlock_converter_signal);
  mp_M20_AXI_arlock_converter->vector_out(M20_AXI_arlock);
  mp_M20_AXI_transactor->ARLOCK(m_M20_AXI_arlock_converter_signal);
  mp_M20_AXI_transactor->ARCACHE(M20_AXI_arcache);
  mp_M20_AXI_transactor->ARPROT(M20_AXI_arprot);
  mp_M20_AXI_transactor->ARQOS(M20_AXI_arqos);
  mp_M20_AXI_transactor->ARVALID(M20_AXI_arvalid);
  mp_M20_AXI_transactor->ARREADY(M20_AXI_arready);
  mp_M20_AXI_transactor->RDATA(M20_AXI_rdata);
  mp_M20_AXI_transactor->RRESP(M20_AXI_rresp);
  mp_M20_AXI_transactor->RLAST(M20_AXI_rlast);
  mp_M20_AXI_transactor->RVALID(M20_AXI_rvalid);
  mp_M20_AXI_transactor->RREADY(M20_AXI_rready);
  mp_M20_AXI_transactor->CLK(aclk);
  mp_M20_AXI_transactor->RST(aresetn);
  // configure M21_AXI_transactor
    xsc::common_cpp::properties M21_AXI_transactor_param_props;
    M21_AXI_transactor_param_props.addLong("DATA_WIDTH", "32");
    M21_AXI_transactor_param_props.addLong("FREQ_HZ", "100000000");
    M21_AXI_transactor_param_props.addLong("ID_WIDTH", "0");
    M21_AXI_transactor_param_props.addLong("ADDR_WIDTH", "12");
    M21_AXI_transactor_param_props.addLong("AWUSER_WIDTH", "0");
    M21_AXI_transactor_param_props.addLong("ARUSER_WIDTH", "0");
    M21_AXI_transactor_param_props.addLong("WUSER_WIDTH", "0");
    M21_AXI_transactor_param_props.addLong("RUSER_WIDTH", "0");
    M21_AXI_transactor_param_props.addLong("BUSER_WIDTH", "0");
    M21_AXI_transactor_param_props.addLong("HAS_BURST", "1");
    M21_AXI_transactor_param_props.addLong("HAS_LOCK", "1");
    M21_AXI_transactor_param_props.addLong("HAS_PROT", "1");
    M21_AXI_transactor_param_props.addLong("HAS_CACHE", "1");
    M21_AXI_transactor_param_props.addLong("HAS_QOS", "1");
    M21_AXI_transactor_param_props.addLong("HAS_REGION", "0");
    M21_AXI_transactor_param_props.addLong("HAS_WSTRB", "1");
    M21_AXI_transactor_param_props.addLong("HAS_BRESP", "1");
    M21_AXI_transactor_param_props.addLong("HAS_RRESP", "1");
    M21_AXI_transactor_param_props.addLong("SUPPORTS_NARROW_BURST", "0");
    M21_AXI_transactor_param_props.addLong("NUM_READ_OUTSTANDING", "2");
    M21_AXI_transactor_param_props.addLong("NUM_WRITE_OUTSTANDING", "2");
    M21_AXI_transactor_param_props.addLong("MAX_BURST_LENGTH", "256");
    M21_AXI_transactor_param_props.addLong("NUM_READ_THREADS", "1");
    M21_AXI_transactor_param_props.addLong("NUM_WRITE_THREADS", "1");
    M21_AXI_transactor_param_props.addLong("RUSER_BITS_PER_BYTE", "0");
    M21_AXI_transactor_param_props.addLong("WUSER_BITS_PER_BYTE", "0");
    M21_AXI_transactor_param_props.addLong("HAS_SIZE", "1");
    M21_AXI_transactor_param_props.addLong("HAS_RESET", "1");
    M21_AXI_transactor_param_props.addFloat("PHASE", "0.0");
    M21_AXI_transactor_param_props.addString("PROTOCOL", "AXI4");
    M21_AXI_transactor_param_props.addString("READ_WRITE_MODE", "READ_WRITE");
    M21_AXI_transactor_param_props.addString("CLK_DOMAIN", "Multi_convo_core_processing_system7_0_0_FCLK_CLK0");

    mp_M21_AXI_transactor = new xtlm::xaximm_xtlm2pin_t<32,12,1,1,1,1,1,1>("M21_AXI_transactor", M21_AXI_transactor_param_props);
  mp_M21_AXI_transactor->AWADDR(M21_AXI_awaddr);
  mp_M21_AXI_transactor->AWLEN(M21_AXI_awlen);
  mp_M21_AXI_transactor->AWSIZE(M21_AXI_awsize);
  mp_M21_AXI_transactor->AWBURST(M21_AXI_awburst);
  mp_M21_AXI_awlock_converter = new xsc::common::scalar2vectorN_converter<1>("M21_AXI_awlock_converter");
  mp_M21_AXI_awlock_converter->scalar_in(m_M21_AXI_awlock_converter_signal);
  mp_M21_AXI_awlock_converter->vector_out(M21_AXI_awlock);
  mp_M21_AXI_transactor->AWLOCK(m_M21_AXI_awlock_converter_signal);
  mp_M21_AXI_transactor->AWCACHE(M21_AXI_awcache);
  mp_M21_AXI_transactor->AWPROT(M21_AXI_awprot);
  mp_M21_AXI_transactor->AWQOS(M21_AXI_awqos);
  mp_M21_AXI_transactor->AWVALID(M21_AXI_awvalid);
  mp_M21_AXI_transactor->AWREADY(M21_AXI_awready);
  mp_M21_AXI_transactor->WDATA(M21_AXI_wdata);
  mp_M21_AXI_transactor->WSTRB(M21_AXI_wstrb);
  mp_M21_AXI_transactor->WLAST(M21_AXI_wlast);
  mp_M21_AXI_transactor->WVALID(M21_AXI_wvalid);
  mp_M21_AXI_transactor->WREADY(M21_AXI_wready);
  mp_M21_AXI_transactor->BRESP(M21_AXI_bresp);
  mp_M21_AXI_transactor->BVALID(M21_AXI_bvalid);
  mp_M21_AXI_transactor->BREADY(M21_AXI_bready);
  mp_M21_AXI_transactor->ARADDR(M21_AXI_araddr);
  mp_M21_AXI_transactor->ARLEN(M21_AXI_arlen);
  mp_M21_AXI_transactor->ARSIZE(M21_AXI_arsize);
  mp_M21_AXI_transactor->ARBURST(M21_AXI_arburst);
  mp_M21_AXI_arlock_converter = new xsc::common::scalar2vectorN_converter<1>("M21_AXI_arlock_converter");
  mp_M21_AXI_arlock_converter->scalar_in(m_M21_AXI_arlock_converter_signal);
  mp_M21_AXI_arlock_converter->vector_out(M21_AXI_arlock);
  mp_M21_AXI_transactor->ARLOCK(m_M21_AXI_arlock_converter_signal);
  mp_M21_AXI_transactor->ARCACHE(M21_AXI_arcache);
  mp_M21_AXI_transactor->ARPROT(M21_AXI_arprot);
  mp_M21_AXI_transactor->ARQOS(M21_AXI_arqos);
  mp_M21_AXI_transactor->ARVALID(M21_AXI_arvalid);
  mp_M21_AXI_transactor->ARREADY(M21_AXI_arready);
  mp_M21_AXI_transactor->RDATA(M21_AXI_rdata);
  mp_M21_AXI_transactor->RRESP(M21_AXI_rresp);
  mp_M21_AXI_transactor->RLAST(M21_AXI_rlast);
  mp_M21_AXI_transactor->RVALID(M21_AXI_rvalid);
  mp_M21_AXI_transactor->RREADY(M21_AXI_rready);
  mp_M21_AXI_transactor->CLK(aclk);
  mp_M21_AXI_transactor->RST(aresetn);
  // configure M22_AXI_transactor
    xsc::common_cpp::properties M22_AXI_transactor_param_props;
    M22_AXI_transactor_param_props.addLong("DATA_WIDTH", "32");
    M22_AXI_transactor_param_props.addLong("FREQ_HZ", "100000000");
    M22_AXI_transactor_param_props.addLong("ID_WIDTH", "0");
    M22_AXI_transactor_param_props.addLong("ADDR_WIDTH", "12");
    M22_AXI_transactor_param_props.addLong("AWUSER_WIDTH", "0");
    M22_AXI_transactor_param_props.addLong("ARUSER_WIDTH", "0");
    M22_AXI_transactor_param_props.addLong("WUSER_WIDTH", "0");
    M22_AXI_transactor_param_props.addLong("RUSER_WIDTH", "0");
    M22_AXI_transactor_param_props.addLong("BUSER_WIDTH", "0");
    M22_AXI_transactor_param_props.addLong("HAS_BURST", "1");
    M22_AXI_transactor_param_props.addLong("HAS_LOCK", "1");
    M22_AXI_transactor_param_props.addLong("HAS_PROT", "1");
    M22_AXI_transactor_param_props.addLong("HAS_CACHE", "1");
    M22_AXI_transactor_param_props.addLong("HAS_QOS", "1");
    M22_AXI_transactor_param_props.addLong("HAS_REGION", "0");
    M22_AXI_transactor_param_props.addLong("HAS_WSTRB", "1");
    M22_AXI_transactor_param_props.addLong("HAS_BRESP", "1");
    M22_AXI_transactor_param_props.addLong("HAS_RRESP", "1");
    M22_AXI_transactor_param_props.addLong("SUPPORTS_NARROW_BURST", "0");
    M22_AXI_transactor_param_props.addLong("NUM_READ_OUTSTANDING", "2");
    M22_AXI_transactor_param_props.addLong("NUM_WRITE_OUTSTANDING", "2");
    M22_AXI_transactor_param_props.addLong("MAX_BURST_LENGTH", "256");
    M22_AXI_transactor_param_props.addLong("NUM_READ_THREADS", "1");
    M22_AXI_transactor_param_props.addLong("NUM_WRITE_THREADS", "1");
    M22_AXI_transactor_param_props.addLong("RUSER_BITS_PER_BYTE", "0");
    M22_AXI_transactor_param_props.addLong("WUSER_BITS_PER_BYTE", "0");
    M22_AXI_transactor_param_props.addLong("HAS_SIZE", "1");
    M22_AXI_transactor_param_props.addLong("HAS_RESET", "1");
    M22_AXI_transactor_param_props.addFloat("PHASE", "0.0");
    M22_AXI_transactor_param_props.addString("PROTOCOL", "AXI4");
    M22_AXI_transactor_param_props.addString("READ_WRITE_MODE", "READ_WRITE");
    M22_AXI_transactor_param_props.addString("CLK_DOMAIN", "Multi_convo_core_processing_system7_0_0_FCLK_CLK0");

    mp_M22_AXI_transactor = new xtlm::xaximm_xtlm2pin_t<32,12,1,1,1,1,1,1>("M22_AXI_transactor", M22_AXI_transactor_param_props);
  mp_M22_AXI_transactor->AWADDR(M22_AXI_awaddr);
  mp_M22_AXI_transactor->AWLEN(M22_AXI_awlen);
  mp_M22_AXI_transactor->AWSIZE(M22_AXI_awsize);
  mp_M22_AXI_transactor->AWBURST(M22_AXI_awburst);
  mp_M22_AXI_awlock_converter = new xsc::common::scalar2vectorN_converter<1>("M22_AXI_awlock_converter");
  mp_M22_AXI_awlock_converter->scalar_in(m_M22_AXI_awlock_converter_signal);
  mp_M22_AXI_awlock_converter->vector_out(M22_AXI_awlock);
  mp_M22_AXI_transactor->AWLOCK(m_M22_AXI_awlock_converter_signal);
  mp_M22_AXI_transactor->AWCACHE(M22_AXI_awcache);
  mp_M22_AXI_transactor->AWPROT(M22_AXI_awprot);
  mp_M22_AXI_transactor->AWQOS(M22_AXI_awqos);
  mp_M22_AXI_transactor->AWVALID(M22_AXI_awvalid);
  mp_M22_AXI_transactor->AWREADY(M22_AXI_awready);
  mp_M22_AXI_transactor->WDATA(M22_AXI_wdata);
  mp_M22_AXI_transactor->WSTRB(M22_AXI_wstrb);
  mp_M22_AXI_transactor->WLAST(M22_AXI_wlast);
  mp_M22_AXI_transactor->WVALID(M22_AXI_wvalid);
  mp_M22_AXI_transactor->WREADY(M22_AXI_wready);
  mp_M22_AXI_transactor->BRESP(M22_AXI_bresp);
  mp_M22_AXI_transactor->BVALID(M22_AXI_bvalid);
  mp_M22_AXI_transactor->BREADY(M22_AXI_bready);
  mp_M22_AXI_transactor->ARADDR(M22_AXI_araddr);
  mp_M22_AXI_transactor->ARLEN(M22_AXI_arlen);
  mp_M22_AXI_transactor->ARSIZE(M22_AXI_arsize);
  mp_M22_AXI_transactor->ARBURST(M22_AXI_arburst);
  mp_M22_AXI_arlock_converter = new xsc::common::scalar2vectorN_converter<1>("M22_AXI_arlock_converter");
  mp_M22_AXI_arlock_converter->scalar_in(m_M22_AXI_arlock_converter_signal);
  mp_M22_AXI_arlock_converter->vector_out(M22_AXI_arlock);
  mp_M22_AXI_transactor->ARLOCK(m_M22_AXI_arlock_converter_signal);
  mp_M22_AXI_transactor->ARCACHE(M22_AXI_arcache);
  mp_M22_AXI_transactor->ARPROT(M22_AXI_arprot);
  mp_M22_AXI_transactor->ARQOS(M22_AXI_arqos);
  mp_M22_AXI_transactor->ARVALID(M22_AXI_arvalid);
  mp_M22_AXI_transactor->ARREADY(M22_AXI_arready);
  mp_M22_AXI_transactor->RDATA(M22_AXI_rdata);
  mp_M22_AXI_transactor->RRESP(M22_AXI_rresp);
  mp_M22_AXI_transactor->RLAST(M22_AXI_rlast);
  mp_M22_AXI_transactor->RVALID(M22_AXI_rvalid);
  mp_M22_AXI_transactor->RREADY(M22_AXI_rready);
  mp_M22_AXI_transactor->CLK(aclk);
  mp_M22_AXI_transactor->RST(aresetn);
  // configure M23_AXI_transactor
    xsc::common_cpp::properties M23_AXI_transactor_param_props;
    M23_AXI_transactor_param_props.addLong("DATA_WIDTH", "32");
    M23_AXI_transactor_param_props.addLong("FREQ_HZ", "100000000");
    M23_AXI_transactor_param_props.addLong("ID_WIDTH", "0");
    M23_AXI_transactor_param_props.addLong("ADDR_WIDTH", "12");
    M23_AXI_transactor_param_props.addLong("AWUSER_WIDTH", "0");
    M23_AXI_transactor_param_props.addLong("ARUSER_WIDTH", "0");
    M23_AXI_transactor_param_props.addLong("WUSER_WIDTH", "0");
    M23_AXI_transactor_param_props.addLong("RUSER_WIDTH", "0");
    M23_AXI_transactor_param_props.addLong("BUSER_WIDTH", "0");
    M23_AXI_transactor_param_props.addLong("HAS_BURST", "1");
    M23_AXI_transactor_param_props.addLong("HAS_LOCK", "1");
    M23_AXI_transactor_param_props.addLong("HAS_PROT", "1");
    M23_AXI_transactor_param_props.addLong("HAS_CACHE", "1");
    M23_AXI_transactor_param_props.addLong("HAS_QOS", "1");
    M23_AXI_transactor_param_props.addLong("HAS_REGION", "0");
    M23_AXI_transactor_param_props.addLong("HAS_WSTRB", "1");
    M23_AXI_transactor_param_props.addLong("HAS_BRESP", "1");
    M23_AXI_transactor_param_props.addLong("HAS_RRESP", "1");
    M23_AXI_transactor_param_props.addLong("SUPPORTS_NARROW_BURST", "0");
    M23_AXI_transactor_param_props.addLong("NUM_READ_OUTSTANDING", "2");
    M23_AXI_transactor_param_props.addLong("NUM_WRITE_OUTSTANDING", "2");
    M23_AXI_transactor_param_props.addLong("MAX_BURST_LENGTH", "256");
    M23_AXI_transactor_param_props.addLong("NUM_READ_THREADS", "1");
    M23_AXI_transactor_param_props.addLong("NUM_WRITE_THREADS", "1");
    M23_AXI_transactor_param_props.addLong("RUSER_BITS_PER_BYTE", "0");
    M23_AXI_transactor_param_props.addLong("WUSER_BITS_PER_BYTE", "0");
    M23_AXI_transactor_param_props.addLong("HAS_SIZE", "1");
    M23_AXI_transactor_param_props.addLong("HAS_RESET", "1");
    M23_AXI_transactor_param_props.addFloat("PHASE", "0.0");
    M23_AXI_transactor_param_props.addString("PROTOCOL", "AXI4");
    M23_AXI_transactor_param_props.addString("READ_WRITE_MODE", "READ_WRITE");
    M23_AXI_transactor_param_props.addString("CLK_DOMAIN", "Multi_convo_core_processing_system7_0_0_FCLK_CLK0");

    mp_M23_AXI_transactor = new xtlm::xaximm_xtlm2pin_t<32,12,1,1,1,1,1,1>("M23_AXI_transactor", M23_AXI_transactor_param_props);
  mp_M23_AXI_transactor->AWADDR(M23_AXI_awaddr);
  mp_M23_AXI_transactor->AWLEN(M23_AXI_awlen);
  mp_M23_AXI_transactor->AWSIZE(M23_AXI_awsize);
  mp_M23_AXI_transactor->AWBURST(M23_AXI_awburst);
  mp_M23_AXI_awlock_converter = new xsc::common::scalar2vectorN_converter<1>("M23_AXI_awlock_converter");
  mp_M23_AXI_awlock_converter->scalar_in(m_M23_AXI_awlock_converter_signal);
  mp_M23_AXI_awlock_converter->vector_out(M23_AXI_awlock);
  mp_M23_AXI_transactor->AWLOCK(m_M23_AXI_awlock_converter_signal);
  mp_M23_AXI_transactor->AWCACHE(M23_AXI_awcache);
  mp_M23_AXI_transactor->AWPROT(M23_AXI_awprot);
  mp_M23_AXI_transactor->AWQOS(M23_AXI_awqos);
  mp_M23_AXI_transactor->AWVALID(M23_AXI_awvalid);
  mp_M23_AXI_transactor->AWREADY(M23_AXI_awready);
  mp_M23_AXI_transactor->WDATA(M23_AXI_wdata);
  mp_M23_AXI_transactor->WSTRB(M23_AXI_wstrb);
  mp_M23_AXI_transactor->WLAST(M23_AXI_wlast);
  mp_M23_AXI_transactor->WVALID(M23_AXI_wvalid);
  mp_M23_AXI_transactor->WREADY(M23_AXI_wready);
  mp_M23_AXI_transactor->BRESP(M23_AXI_bresp);
  mp_M23_AXI_transactor->BVALID(M23_AXI_bvalid);
  mp_M23_AXI_transactor->BREADY(M23_AXI_bready);
  mp_M23_AXI_transactor->ARADDR(M23_AXI_araddr);
  mp_M23_AXI_transactor->ARLEN(M23_AXI_arlen);
  mp_M23_AXI_transactor->ARSIZE(M23_AXI_arsize);
  mp_M23_AXI_transactor->ARBURST(M23_AXI_arburst);
  mp_M23_AXI_arlock_converter = new xsc::common::scalar2vectorN_converter<1>("M23_AXI_arlock_converter");
  mp_M23_AXI_arlock_converter->scalar_in(m_M23_AXI_arlock_converter_signal);
  mp_M23_AXI_arlock_converter->vector_out(M23_AXI_arlock);
  mp_M23_AXI_transactor->ARLOCK(m_M23_AXI_arlock_converter_signal);
  mp_M23_AXI_transactor->ARCACHE(M23_AXI_arcache);
  mp_M23_AXI_transactor->ARPROT(M23_AXI_arprot);
  mp_M23_AXI_transactor->ARQOS(M23_AXI_arqos);
  mp_M23_AXI_transactor->ARVALID(M23_AXI_arvalid);
  mp_M23_AXI_transactor->ARREADY(M23_AXI_arready);
  mp_M23_AXI_transactor->RDATA(M23_AXI_rdata);
  mp_M23_AXI_transactor->RRESP(M23_AXI_rresp);
  mp_M23_AXI_transactor->RLAST(M23_AXI_rlast);
  mp_M23_AXI_transactor->RVALID(M23_AXI_rvalid);
  mp_M23_AXI_transactor->RREADY(M23_AXI_rready);
  mp_M23_AXI_transactor->CLK(aclk);
  mp_M23_AXI_transactor->RST(aresetn);

  // initialize transactors stubs
  S00_AXI_transactor_target_wr_socket_stub = nullptr;
  S00_AXI_transactor_target_rd_socket_stub = nullptr;
  M00_AXI_transactor_initiator_wr_socket_stub = nullptr;
  M00_AXI_transactor_initiator_rd_socket_stub = nullptr;
  M01_AXI_transactor_initiator_wr_socket_stub = nullptr;
  M01_AXI_transactor_initiator_rd_socket_stub = nullptr;
  M02_AXI_transactor_initiator_wr_socket_stub = nullptr;
  M02_AXI_transactor_initiator_rd_socket_stub = nullptr;
  M03_AXI_transactor_initiator_wr_socket_stub = nullptr;
  M03_AXI_transactor_initiator_rd_socket_stub = nullptr;
  M04_AXI_transactor_initiator_wr_socket_stub = nullptr;
  M04_AXI_transactor_initiator_rd_socket_stub = nullptr;
  M05_AXI_transactor_initiator_wr_socket_stub = nullptr;
  M05_AXI_transactor_initiator_rd_socket_stub = nullptr;
  M06_AXI_transactor_initiator_wr_socket_stub = nullptr;
  M06_AXI_transactor_initiator_rd_socket_stub = nullptr;
  M07_AXI_transactor_initiator_wr_socket_stub = nullptr;
  M07_AXI_transactor_initiator_rd_socket_stub = nullptr;
  M08_AXI_transactor_initiator_wr_socket_stub = nullptr;
  M08_AXI_transactor_initiator_rd_socket_stub = nullptr;
  M09_AXI_transactor_initiator_wr_socket_stub = nullptr;
  M09_AXI_transactor_initiator_rd_socket_stub = nullptr;
  M10_AXI_transactor_initiator_wr_socket_stub = nullptr;
  M10_AXI_transactor_initiator_rd_socket_stub = nullptr;
  M11_AXI_transactor_initiator_wr_socket_stub = nullptr;
  M11_AXI_transactor_initiator_rd_socket_stub = nullptr;
  M12_AXI_transactor_initiator_wr_socket_stub = nullptr;
  M12_AXI_transactor_initiator_rd_socket_stub = nullptr;
  M13_AXI_transactor_initiator_wr_socket_stub = nullptr;
  M13_AXI_transactor_initiator_rd_socket_stub = nullptr;
  M14_AXI_transactor_initiator_wr_socket_stub = nullptr;
  M14_AXI_transactor_initiator_rd_socket_stub = nullptr;
  M15_AXI_transactor_initiator_wr_socket_stub = nullptr;
  M15_AXI_transactor_initiator_rd_socket_stub = nullptr;
  M16_AXI_transactor_initiator_wr_socket_stub = nullptr;
  M16_AXI_transactor_initiator_rd_socket_stub = nullptr;
  M17_AXI_transactor_initiator_wr_socket_stub = nullptr;
  M17_AXI_transactor_initiator_rd_socket_stub = nullptr;
  M18_AXI_transactor_initiator_wr_socket_stub = nullptr;
  M18_AXI_transactor_initiator_rd_socket_stub = nullptr;
  M19_AXI_transactor_initiator_wr_socket_stub = nullptr;
  M19_AXI_transactor_initiator_rd_socket_stub = nullptr;
  M20_AXI_transactor_initiator_wr_socket_stub = nullptr;
  M20_AXI_transactor_initiator_rd_socket_stub = nullptr;
  M21_AXI_transactor_initiator_wr_socket_stub = nullptr;
  M21_AXI_transactor_initiator_rd_socket_stub = nullptr;
  M22_AXI_transactor_initiator_wr_socket_stub = nullptr;
  M22_AXI_transactor_initiator_rd_socket_stub = nullptr;
  M23_AXI_transactor_initiator_wr_socket_stub = nullptr;
  M23_AXI_transactor_initiator_rd_socket_stub = nullptr;

}

void Multi_convo_core_smartconnect_0_0::before_end_of_elaboration()
{
  // configure 'S00_AXI' transactor
  if (xsc::utils::xsc_sim_manager::getInstanceParameterInt("Multi_convo_core_smartconnect_0_0", "S00_AXI_TLM_MODE") != 1)
  {
    mp_impl->S00_AXI_tlm_aximm_read_socket->bind(*(mp_S00_AXI_transactor->rd_socket));
    mp_impl->S00_AXI_tlm_aximm_write_socket->bind(*(mp_S00_AXI_transactor->wr_socket));
  
  }
  else
  {
    S00_AXI_transactor_target_wr_socket_stub = new xtlm::xtlm_aximm_target_stub("wr_socket",0);
    S00_AXI_transactor_target_wr_socket_stub->bind(*(mp_S00_AXI_transactor->wr_socket));
    S00_AXI_transactor_target_rd_socket_stub = new xtlm::xtlm_aximm_target_stub("rd_socket",0);
    S00_AXI_transactor_target_rd_socket_stub->bind(*(mp_S00_AXI_transactor->rd_socket));
    mp_S00_AXI_transactor->disable_transactor();
  }

  // configure 'M00_AXI' transactor
  if (xsc::utils::xsc_sim_manager::getInstanceParameterInt("Multi_convo_core_smartconnect_0_0", "M00_AXI_TLM_MODE") != 1)
  {
    mp_impl->M00_AXI_tlm_aximm_read_socket->bind(*(mp_M00_AXI_transactor->rd_socket));
    mp_impl->M00_AXI_tlm_aximm_write_socket->bind(*(mp_M00_AXI_transactor->wr_socket));
  
  }
  else
  {
    M00_AXI_transactor_initiator_wr_socket_stub = new xtlm::xtlm_aximm_initiator_stub("wr_socket",0);
    M00_AXI_transactor_initiator_wr_socket_stub->bind(*(mp_M00_AXI_transactor->wr_socket));
    M00_AXI_transactor_initiator_rd_socket_stub = new xtlm::xtlm_aximm_initiator_stub("rd_socket",0);
    M00_AXI_transactor_initiator_rd_socket_stub->bind(*(mp_M00_AXI_transactor->rd_socket));
    mp_M00_AXI_transactor->disable_transactor();
  }

  // configure 'M01_AXI' transactor
  if (xsc::utils::xsc_sim_manager::getInstanceParameterInt("Multi_convo_core_smartconnect_0_0", "M01_AXI_TLM_MODE") != 1)
  {
    mp_impl->M01_AXI_tlm_aximm_read_socket->bind(*(mp_M01_AXI_transactor->rd_socket));
    mp_impl->M01_AXI_tlm_aximm_write_socket->bind(*(mp_M01_AXI_transactor->wr_socket));
  
  }
  else
  {
    M01_AXI_transactor_initiator_wr_socket_stub = new xtlm::xtlm_aximm_initiator_stub("wr_socket",0);
    M01_AXI_transactor_initiator_wr_socket_stub->bind(*(mp_M01_AXI_transactor->wr_socket));
    M01_AXI_transactor_initiator_rd_socket_stub = new xtlm::xtlm_aximm_initiator_stub("rd_socket",0);
    M01_AXI_transactor_initiator_rd_socket_stub->bind(*(mp_M01_AXI_transactor->rd_socket));
    mp_M01_AXI_transactor->disable_transactor();
  }

  // configure 'M02_AXI' transactor
  if (xsc::utils::xsc_sim_manager::getInstanceParameterInt("Multi_convo_core_smartconnect_0_0", "M02_AXI_TLM_MODE") != 1)
  {
    mp_impl->M02_AXI_tlm_aximm_read_socket->bind(*(mp_M02_AXI_transactor->rd_socket));
    mp_impl->M02_AXI_tlm_aximm_write_socket->bind(*(mp_M02_AXI_transactor->wr_socket));
  
  }
  else
  {
    M02_AXI_transactor_initiator_wr_socket_stub = new xtlm::xtlm_aximm_initiator_stub("wr_socket",0);
    M02_AXI_transactor_initiator_wr_socket_stub->bind(*(mp_M02_AXI_transactor->wr_socket));
    M02_AXI_transactor_initiator_rd_socket_stub = new xtlm::xtlm_aximm_initiator_stub("rd_socket",0);
    M02_AXI_transactor_initiator_rd_socket_stub->bind(*(mp_M02_AXI_transactor->rd_socket));
    mp_M02_AXI_transactor->disable_transactor();
  }

  // configure 'M03_AXI' transactor
  if (xsc::utils::xsc_sim_manager::getInstanceParameterInt("Multi_convo_core_smartconnect_0_0", "M03_AXI_TLM_MODE") != 1)
  {
    mp_impl->M03_AXI_tlm_aximm_read_socket->bind(*(mp_M03_AXI_transactor->rd_socket));
    mp_impl->M03_AXI_tlm_aximm_write_socket->bind(*(mp_M03_AXI_transactor->wr_socket));
  
  }
  else
  {
    M03_AXI_transactor_initiator_wr_socket_stub = new xtlm::xtlm_aximm_initiator_stub("wr_socket",0);
    M03_AXI_transactor_initiator_wr_socket_stub->bind(*(mp_M03_AXI_transactor->wr_socket));
    M03_AXI_transactor_initiator_rd_socket_stub = new xtlm::xtlm_aximm_initiator_stub("rd_socket",0);
    M03_AXI_transactor_initiator_rd_socket_stub->bind(*(mp_M03_AXI_transactor->rd_socket));
    mp_M03_AXI_transactor->disable_transactor();
  }

  // configure 'M04_AXI' transactor
  if (xsc::utils::xsc_sim_manager::getInstanceParameterInt("Multi_convo_core_smartconnect_0_0", "M04_AXI_TLM_MODE") != 1)
  {
    mp_impl->M04_AXI_tlm_aximm_read_socket->bind(*(mp_M04_AXI_transactor->rd_socket));
    mp_impl->M04_AXI_tlm_aximm_write_socket->bind(*(mp_M04_AXI_transactor->wr_socket));
  
  }
  else
  {
    M04_AXI_transactor_initiator_wr_socket_stub = new xtlm::xtlm_aximm_initiator_stub("wr_socket",0);
    M04_AXI_transactor_initiator_wr_socket_stub->bind(*(mp_M04_AXI_transactor->wr_socket));
    M04_AXI_transactor_initiator_rd_socket_stub = new xtlm::xtlm_aximm_initiator_stub("rd_socket",0);
    M04_AXI_transactor_initiator_rd_socket_stub->bind(*(mp_M04_AXI_transactor->rd_socket));
    mp_M04_AXI_transactor->disable_transactor();
  }

  // configure 'M05_AXI' transactor
  if (xsc::utils::xsc_sim_manager::getInstanceParameterInt("Multi_convo_core_smartconnect_0_0", "M05_AXI_TLM_MODE") != 1)
  {
    mp_impl->M05_AXI_tlm_aximm_read_socket->bind(*(mp_M05_AXI_transactor->rd_socket));
    mp_impl->M05_AXI_tlm_aximm_write_socket->bind(*(mp_M05_AXI_transactor->wr_socket));
  
  }
  else
  {
    M05_AXI_transactor_initiator_wr_socket_stub = new xtlm::xtlm_aximm_initiator_stub("wr_socket",0);
    M05_AXI_transactor_initiator_wr_socket_stub->bind(*(mp_M05_AXI_transactor->wr_socket));
    M05_AXI_transactor_initiator_rd_socket_stub = new xtlm::xtlm_aximm_initiator_stub("rd_socket",0);
    M05_AXI_transactor_initiator_rd_socket_stub->bind(*(mp_M05_AXI_transactor->rd_socket));
    mp_M05_AXI_transactor->disable_transactor();
  }

  // configure 'M06_AXI' transactor
  if (xsc::utils::xsc_sim_manager::getInstanceParameterInt("Multi_convo_core_smartconnect_0_0", "M06_AXI_TLM_MODE") != 1)
  {
    mp_impl->M06_AXI_tlm_aximm_read_socket->bind(*(mp_M06_AXI_transactor->rd_socket));
    mp_impl->M06_AXI_tlm_aximm_write_socket->bind(*(mp_M06_AXI_transactor->wr_socket));
  
  }
  else
  {
    M06_AXI_transactor_initiator_wr_socket_stub = new xtlm::xtlm_aximm_initiator_stub("wr_socket",0);
    M06_AXI_transactor_initiator_wr_socket_stub->bind(*(mp_M06_AXI_transactor->wr_socket));
    M06_AXI_transactor_initiator_rd_socket_stub = new xtlm::xtlm_aximm_initiator_stub("rd_socket",0);
    M06_AXI_transactor_initiator_rd_socket_stub->bind(*(mp_M06_AXI_transactor->rd_socket));
    mp_M06_AXI_transactor->disable_transactor();
  }

  // configure 'M07_AXI' transactor
  if (xsc::utils::xsc_sim_manager::getInstanceParameterInt("Multi_convo_core_smartconnect_0_0", "M07_AXI_TLM_MODE") != 1)
  {
    mp_impl->M07_AXI_tlm_aximm_read_socket->bind(*(mp_M07_AXI_transactor->rd_socket));
    mp_impl->M07_AXI_tlm_aximm_write_socket->bind(*(mp_M07_AXI_transactor->wr_socket));
  
  }
  else
  {
    M07_AXI_transactor_initiator_wr_socket_stub = new xtlm::xtlm_aximm_initiator_stub("wr_socket",0);
    M07_AXI_transactor_initiator_wr_socket_stub->bind(*(mp_M07_AXI_transactor->wr_socket));
    M07_AXI_transactor_initiator_rd_socket_stub = new xtlm::xtlm_aximm_initiator_stub("rd_socket",0);
    M07_AXI_transactor_initiator_rd_socket_stub->bind(*(mp_M07_AXI_transactor->rd_socket));
    mp_M07_AXI_transactor->disable_transactor();
  }

  // configure 'M08_AXI' transactor
  if (xsc::utils::xsc_sim_manager::getInstanceParameterInt("Multi_convo_core_smartconnect_0_0", "M08_AXI_TLM_MODE") != 1)
  {
    mp_impl->M08_AXI_tlm_aximm_read_socket->bind(*(mp_M08_AXI_transactor->rd_socket));
    mp_impl->M08_AXI_tlm_aximm_write_socket->bind(*(mp_M08_AXI_transactor->wr_socket));
  
  }
  else
  {
    M08_AXI_transactor_initiator_wr_socket_stub = new xtlm::xtlm_aximm_initiator_stub("wr_socket",0);
    M08_AXI_transactor_initiator_wr_socket_stub->bind(*(mp_M08_AXI_transactor->wr_socket));
    M08_AXI_transactor_initiator_rd_socket_stub = new xtlm::xtlm_aximm_initiator_stub("rd_socket",0);
    M08_AXI_transactor_initiator_rd_socket_stub->bind(*(mp_M08_AXI_transactor->rd_socket));
    mp_M08_AXI_transactor->disable_transactor();
  }

  // configure 'M09_AXI' transactor
  if (xsc::utils::xsc_sim_manager::getInstanceParameterInt("Multi_convo_core_smartconnect_0_0", "M09_AXI_TLM_MODE") != 1)
  {
    mp_impl->M09_AXI_tlm_aximm_read_socket->bind(*(mp_M09_AXI_transactor->rd_socket));
    mp_impl->M09_AXI_tlm_aximm_write_socket->bind(*(mp_M09_AXI_transactor->wr_socket));
  
  }
  else
  {
    M09_AXI_transactor_initiator_wr_socket_stub = new xtlm::xtlm_aximm_initiator_stub("wr_socket",0);
    M09_AXI_transactor_initiator_wr_socket_stub->bind(*(mp_M09_AXI_transactor->wr_socket));
    M09_AXI_transactor_initiator_rd_socket_stub = new xtlm::xtlm_aximm_initiator_stub("rd_socket",0);
    M09_AXI_transactor_initiator_rd_socket_stub->bind(*(mp_M09_AXI_transactor->rd_socket));
    mp_M09_AXI_transactor->disable_transactor();
  }

  // configure 'M10_AXI' transactor
  if (xsc::utils::xsc_sim_manager::getInstanceParameterInt("Multi_convo_core_smartconnect_0_0", "M10_AXI_TLM_MODE") != 1)
  {
    mp_impl->M10_AXI_tlm_aximm_read_socket->bind(*(mp_M10_AXI_transactor->rd_socket));
    mp_impl->M10_AXI_tlm_aximm_write_socket->bind(*(mp_M10_AXI_transactor->wr_socket));
  
  }
  else
  {
    M10_AXI_transactor_initiator_wr_socket_stub = new xtlm::xtlm_aximm_initiator_stub("wr_socket",0);
    M10_AXI_transactor_initiator_wr_socket_stub->bind(*(mp_M10_AXI_transactor->wr_socket));
    M10_AXI_transactor_initiator_rd_socket_stub = new xtlm::xtlm_aximm_initiator_stub("rd_socket",0);
    M10_AXI_transactor_initiator_rd_socket_stub->bind(*(mp_M10_AXI_transactor->rd_socket));
    mp_M10_AXI_transactor->disable_transactor();
  }

  // configure 'M11_AXI' transactor
  if (xsc::utils::xsc_sim_manager::getInstanceParameterInt("Multi_convo_core_smartconnect_0_0", "M11_AXI_TLM_MODE") != 1)
  {
    mp_impl->M11_AXI_tlm_aximm_read_socket->bind(*(mp_M11_AXI_transactor->rd_socket));
    mp_impl->M11_AXI_tlm_aximm_write_socket->bind(*(mp_M11_AXI_transactor->wr_socket));
  
  }
  else
  {
    M11_AXI_transactor_initiator_wr_socket_stub = new xtlm::xtlm_aximm_initiator_stub("wr_socket",0);
    M11_AXI_transactor_initiator_wr_socket_stub->bind(*(mp_M11_AXI_transactor->wr_socket));
    M11_AXI_transactor_initiator_rd_socket_stub = new xtlm::xtlm_aximm_initiator_stub("rd_socket",0);
    M11_AXI_transactor_initiator_rd_socket_stub->bind(*(mp_M11_AXI_transactor->rd_socket));
    mp_M11_AXI_transactor->disable_transactor();
  }

  // configure 'M12_AXI' transactor
  if (xsc::utils::xsc_sim_manager::getInstanceParameterInt("Multi_convo_core_smartconnect_0_0", "M12_AXI_TLM_MODE") != 1)
  {
    mp_impl->M12_AXI_tlm_aximm_read_socket->bind(*(mp_M12_AXI_transactor->rd_socket));
    mp_impl->M12_AXI_tlm_aximm_write_socket->bind(*(mp_M12_AXI_transactor->wr_socket));
  
  }
  else
  {
    M12_AXI_transactor_initiator_wr_socket_stub = new xtlm::xtlm_aximm_initiator_stub("wr_socket",0);
    M12_AXI_transactor_initiator_wr_socket_stub->bind(*(mp_M12_AXI_transactor->wr_socket));
    M12_AXI_transactor_initiator_rd_socket_stub = new xtlm::xtlm_aximm_initiator_stub("rd_socket",0);
    M12_AXI_transactor_initiator_rd_socket_stub->bind(*(mp_M12_AXI_transactor->rd_socket));
    mp_M12_AXI_transactor->disable_transactor();
  }

  // configure 'M13_AXI' transactor
  if (xsc::utils::xsc_sim_manager::getInstanceParameterInt("Multi_convo_core_smartconnect_0_0", "M13_AXI_TLM_MODE") != 1)
  {
    mp_impl->M13_AXI_tlm_aximm_read_socket->bind(*(mp_M13_AXI_transactor->rd_socket));
    mp_impl->M13_AXI_tlm_aximm_write_socket->bind(*(mp_M13_AXI_transactor->wr_socket));
  
  }
  else
  {
    M13_AXI_transactor_initiator_wr_socket_stub = new xtlm::xtlm_aximm_initiator_stub("wr_socket",0);
    M13_AXI_transactor_initiator_wr_socket_stub->bind(*(mp_M13_AXI_transactor->wr_socket));
    M13_AXI_transactor_initiator_rd_socket_stub = new xtlm::xtlm_aximm_initiator_stub("rd_socket",0);
    M13_AXI_transactor_initiator_rd_socket_stub->bind(*(mp_M13_AXI_transactor->rd_socket));
    mp_M13_AXI_transactor->disable_transactor();
  }

  // configure 'M14_AXI' transactor
  if (xsc::utils::xsc_sim_manager::getInstanceParameterInt("Multi_convo_core_smartconnect_0_0", "M14_AXI_TLM_MODE") != 1)
  {
    mp_impl->M14_AXI_tlm_aximm_read_socket->bind(*(mp_M14_AXI_transactor->rd_socket));
    mp_impl->M14_AXI_tlm_aximm_write_socket->bind(*(mp_M14_AXI_transactor->wr_socket));
  
  }
  else
  {
    M14_AXI_transactor_initiator_wr_socket_stub = new xtlm::xtlm_aximm_initiator_stub("wr_socket",0);
    M14_AXI_transactor_initiator_wr_socket_stub->bind(*(mp_M14_AXI_transactor->wr_socket));
    M14_AXI_transactor_initiator_rd_socket_stub = new xtlm::xtlm_aximm_initiator_stub("rd_socket",0);
    M14_AXI_transactor_initiator_rd_socket_stub->bind(*(mp_M14_AXI_transactor->rd_socket));
    mp_M14_AXI_transactor->disable_transactor();
  }

  // configure 'M15_AXI' transactor
  if (xsc::utils::xsc_sim_manager::getInstanceParameterInt("Multi_convo_core_smartconnect_0_0", "M15_AXI_TLM_MODE") != 1)
  {
    mp_impl->M15_AXI_tlm_aximm_read_socket->bind(*(mp_M15_AXI_transactor->rd_socket));
    mp_impl->M15_AXI_tlm_aximm_write_socket->bind(*(mp_M15_AXI_transactor->wr_socket));
  
  }
  else
  {
    M15_AXI_transactor_initiator_wr_socket_stub = new xtlm::xtlm_aximm_initiator_stub("wr_socket",0);
    M15_AXI_transactor_initiator_wr_socket_stub->bind(*(mp_M15_AXI_transactor->wr_socket));
    M15_AXI_transactor_initiator_rd_socket_stub = new xtlm::xtlm_aximm_initiator_stub("rd_socket",0);
    M15_AXI_transactor_initiator_rd_socket_stub->bind(*(mp_M15_AXI_transactor->rd_socket));
    mp_M15_AXI_transactor->disable_transactor();
  }

  // configure 'M16_AXI' transactor
  if (xsc::utils::xsc_sim_manager::getInstanceParameterInt("Multi_convo_core_smartconnect_0_0", "M16_AXI_TLM_MODE") != 1)
  {
    mp_impl->M16_AXI_tlm_aximm_read_socket->bind(*(mp_M16_AXI_transactor->rd_socket));
    mp_impl->M16_AXI_tlm_aximm_write_socket->bind(*(mp_M16_AXI_transactor->wr_socket));
  
  }
  else
  {
    M16_AXI_transactor_initiator_wr_socket_stub = new xtlm::xtlm_aximm_initiator_stub("wr_socket",0);
    M16_AXI_transactor_initiator_wr_socket_stub->bind(*(mp_M16_AXI_transactor->wr_socket));
    M16_AXI_transactor_initiator_rd_socket_stub = new xtlm::xtlm_aximm_initiator_stub("rd_socket",0);
    M16_AXI_transactor_initiator_rd_socket_stub->bind(*(mp_M16_AXI_transactor->rd_socket));
    mp_M16_AXI_transactor->disable_transactor();
  }

  // configure 'M17_AXI' transactor
  if (xsc::utils::xsc_sim_manager::getInstanceParameterInt("Multi_convo_core_smartconnect_0_0", "M17_AXI_TLM_MODE") != 1)
  {
    mp_impl->M17_AXI_tlm_aximm_read_socket->bind(*(mp_M17_AXI_transactor->rd_socket));
    mp_impl->M17_AXI_tlm_aximm_write_socket->bind(*(mp_M17_AXI_transactor->wr_socket));
  
  }
  else
  {
    M17_AXI_transactor_initiator_wr_socket_stub = new xtlm::xtlm_aximm_initiator_stub("wr_socket",0);
    M17_AXI_transactor_initiator_wr_socket_stub->bind(*(mp_M17_AXI_transactor->wr_socket));
    M17_AXI_transactor_initiator_rd_socket_stub = new xtlm::xtlm_aximm_initiator_stub("rd_socket",0);
    M17_AXI_transactor_initiator_rd_socket_stub->bind(*(mp_M17_AXI_transactor->rd_socket));
    mp_M17_AXI_transactor->disable_transactor();
  }

  // configure 'M18_AXI' transactor
  if (xsc::utils::xsc_sim_manager::getInstanceParameterInt("Multi_convo_core_smartconnect_0_0", "M18_AXI_TLM_MODE") != 1)
  {
    mp_impl->M18_AXI_tlm_aximm_read_socket->bind(*(mp_M18_AXI_transactor->rd_socket));
    mp_impl->M18_AXI_tlm_aximm_write_socket->bind(*(mp_M18_AXI_transactor->wr_socket));
  
  }
  else
  {
    M18_AXI_transactor_initiator_wr_socket_stub = new xtlm::xtlm_aximm_initiator_stub("wr_socket",0);
    M18_AXI_transactor_initiator_wr_socket_stub->bind(*(mp_M18_AXI_transactor->wr_socket));
    M18_AXI_transactor_initiator_rd_socket_stub = new xtlm::xtlm_aximm_initiator_stub("rd_socket",0);
    M18_AXI_transactor_initiator_rd_socket_stub->bind(*(mp_M18_AXI_transactor->rd_socket));
    mp_M18_AXI_transactor->disable_transactor();
  }

  // configure 'M19_AXI' transactor
  if (xsc::utils::xsc_sim_manager::getInstanceParameterInt("Multi_convo_core_smartconnect_0_0", "M19_AXI_TLM_MODE") != 1)
  {
    mp_impl->M19_AXI_tlm_aximm_read_socket->bind(*(mp_M19_AXI_transactor->rd_socket));
    mp_impl->M19_AXI_tlm_aximm_write_socket->bind(*(mp_M19_AXI_transactor->wr_socket));
  
  }
  else
  {
    M19_AXI_transactor_initiator_wr_socket_stub = new xtlm::xtlm_aximm_initiator_stub("wr_socket",0);
    M19_AXI_transactor_initiator_wr_socket_stub->bind(*(mp_M19_AXI_transactor->wr_socket));
    M19_AXI_transactor_initiator_rd_socket_stub = new xtlm::xtlm_aximm_initiator_stub("rd_socket",0);
    M19_AXI_transactor_initiator_rd_socket_stub->bind(*(mp_M19_AXI_transactor->rd_socket));
    mp_M19_AXI_transactor->disable_transactor();
  }

  // configure 'M20_AXI' transactor
  if (xsc::utils::xsc_sim_manager::getInstanceParameterInt("Multi_convo_core_smartconnect_0_0", "M20_AXI_TLM_MODE") != 1)
  {
    mp_impl->M20_AXI_tlm_aximm_read_socket->bind(*(mp_M20_AXI_transactor->rd_socket));
    mp_impl->M20_AXI_tlm_aximm_write_socket->bind(*(mp_M20_AXI_transactor->wr_socket));
  
  }
  else
  {
    M20_AXI_transactor_initiator_wr_socket_stub = new xtlm::xtlm_aximm_initiator_stub("wr_socket",0);
    M20_AXI_transactor_initiator_wr_socket_stub->bind(*(mp_M20_AXI_transactor->wr_socket));
    M20_AXI_transactor_initiator_rd_socket_stub = new xtlm::xtlm_aximm_initiator_stub("rd_socket",0);
    M20_AXI_transactor_initiator_rd_socket_stub->bind(*(mp_M20_AXI_transactor->rd_socket));
    mp_M20_AXI_transactor->disable_transactor();
  }

  // configure 'M21_AXI' transactor
  if (xsc::utils::xsc_sim_manager::getInstanceParameterInt("Multi_convo_core_smartconnect_0_0", "M21_AXI_TLM_MODE") != 1)
  {
    mp_impl->M21_AXI_tlm_aximm_read_socket->bind(*(mp_M21_AXI_transactor->rd_socket));
    mp_impl->M21_AXI_tlm_aximm_write_socket->bind(*(mp_M21_AXI_transactor->wr_socket));
  
  }
  else
  {
    M21_AXI_transactor_initiator_wr_socket_stub = new xtlm::xtlm_aximm_initiator_stub("wr_socket",0);
    M21_AXI_transactor_initiator_wr_socket_stub->bind(*(mp_M21_AXI_transactor->wr_socket));
    M21_AXI_transactor_initiator_rd_socket_stub = new xtlm::xtlm_aximm_initiator_stub("rd_socket",0);
    M21_AXI_transactor_initiator_rd_socket_stub->bind(*(mp_M21_AXI_transactor->rd_socket));
    mp_M21_AXI_transactor->disable_transactor();
  }

  // configure 'M22_AXI' transactor
  if (xsc::utils::xsc_sim_manager::getInstanceParameterInt("Multi_convo_core_smartconnect_0_0", "M22_AXI_TLM_MODE") != 1)
  {
    mp_impl->M22_AXI_tlm_aximm_read_socket->bind(*(mp_M22_AXI_transactor->rd_socket));
    mp_impl->M22_AXI_tlm_aximm_write_socket->bind(*(mp_M22_AXI_transactor->wr_socket));
  
  }
  else
  {
    M22_AXI_transactor_initiator_wr_socket_stub = new xtlm::xtlm_aximm_initiator_stub("wr_socket",0);
    M22_AXI_transactor_initiator_wr_socket_stub->bind(*(mp_M22_AXI_transactor->wr_socket));
    M22_AXI_transactor_initiator_rd_socket_stub = new xtlm::xtlm_aximm_initiator_stub("rd_socket",0);
    M22_AXI_transactor_initiator_rd_socket_stub->bind(*(mp_M22_AXI_transactor->rd_socket));
    mp_M22_AXI_transactor->disable_transactor();
  }

  // configure 'M23_AXI' transactor
  if (xsc::utils::xsc_sim_manager::getInstanceParameterInt("Multi_convo_core_smartconnect_0_0", "M23_AXI_TLM_MODE") != 1)
  {
    mp_impl->M23_AXI_tlm_aximm_read_socket->bind(*(mp_M23_AXI_transactor->rd_socket));
    mp_impl->M23_AXI_tlm_aximm_write_socket->bind(*(mp_M23_AXI_transactor->wr_socket));
  
  }
  else
  {
    M23_AXI_transactor_initiator_wr_socket_stub = new xtlm::xtlm_aximm_initiator_stub("wr_socket",0);
    M23_AXI_transactor_initiator_wr_socket_stub->bind(*(mp_M23_AXI_transactor->wr_socket));
    M23_AXI_transactor_initiator_rd_socket_stub = new xtlm::xtlm_aximm_initiator_stub("rd_socket",0);
    M23_AXI_transactor_initiator_rd_socket_stub->bind(*(mp_M23_AXI_transactor->rd_socket));
    mp_M23_AXI_transactor->disable_transactor();
  }

}

#endif // VCSSYSTEMC




#ifdef MTI_SYSTEMC
Multi_convo_core_smartconnect_0_0::Multi_convo_core_smartconnect_0_0(const sc_core::sc_module_name& nm) : Multi_convo_core_smartconnect_0_0_sc(nm),  aclk("aclk"), aresetn("aresetn"), S00_AXI_awaddr("S00_AXI_awaddr"), S00_AXI_awlen("S00_AXI_awlen"), S00_AXI_awsize("S00_AXI_awsize"), S00_AXI_awburst("S00_AXI_awburst"), S00_AXI_awlock("S00_AXI_awlock"), S00_AXI_awcache("S00_AXI_awcache"), S00_AXI_awprot("S00_AXI_awprot"), S00_AXI_awqos("S00_AXI_awqos"), S00_AXI_awvalid("S00_AXI_awvalid"), S00_AXI_awready("S00_AXI_awready"), S00_AXI_wdata("S00_AXI_wdata"), S00_AXI_wstrb("S00_AXI_wstrb"), S00_AXI_wlast("S00_AXI_wlast"), S00_AXI_wvalid("S00_AXI_wvalid"), S00_AXI_wready("S00_AXI_wready"), S00_AXI_bresp("S00_AXI_bresp"), S00_AXI_bvalid("S00_AXI_bvalid"), S00_AXI_bready("S00_AXI_bready"), S00_AXI_araddr("S00_AXI_araddr"), S00_AXI_arlen("S00_AXI_arlen"), S00_AXI_arsize("S00_AXI_arsize"), S00_AXI_arburst("S00_AXI_arburst"), S00_AXI_arlock("S00_AXI_arlock"), S00_AXI_arcache("S00_AXI_arcache"), S00_AXI_arprot("S00_AXI_arprot"), S00_AXI_arqos("S00_AXI_arqos"), S00_AXI_arvalid("S00_AXI_arvalid"), S00_AXI_arready("S00_AXI_arready"), S00_AXI_rdata("S00_AXI_rdata"), S00_AXI_rresp("S00_AXI_rresp"), S00_AXI_rlast("S00_AXI_rlast"), S00_AXI_rvalid("S00_AXI_rvalid"), S00_AXI_rready("S00_AXI_rready"), M00_AXI_awaddr("M00_AXI_awaddr"), M00_AXI_awlen("M00_AXI_awlen"), M00_AXI_awsize("M00_AXI_awsize"), M00_AXI_awburst("M00_AXI_awburst"), M00_AXI_awlock("M00_AXI_awlock"), M00_AXI_awcache("M00_AXI_awcache"), M00_AXI_awprot("M00_AXI_awprot"), M00_AXI_awqos("M00_AXI_awqos"), M00_AXI_awvalid("M00_AXI_awvalid"), M00_AXI_awready("M00_AXI_awready"), M00_AXI_wdata("M00_AXI_wdata"), M00_AXI_wstrb("M00_AXI_wstrb"), M00_AXI_wlast("M00_AXI_wlast"), M00_AXI_wvalid("M00_AXI_wvalid"), M00_AXI_wready("M00_AXI_wready"), M00_AXI_bresp("M00_AXI_bresp"), M00_AXI_bvalid("M00_AXI_bvalid"), M00_AXI_bready("M00_AXI_bready"), M00_AXI_araddr("M00_AXI_araddr"), M00_AXI_arlen("M00_AXI_arlen"), M00_AXI_arsize("M00_AXI_arsize"), M00_AXI_arburst("M00_AXI_arburst"), M00_AXI_arlock("M00_AXI_arlock"), M00_AXI_arcache("M00_AXI_arcache"), M00_AXI_arprot("M00_AXI_arprot"), M00_AXI_arqos("M00_AXI_arqos"), M00_AXI_arvalid("M00_AXI_arvalid"), M00_AXI_arready("M00_AXI_arready"), M00_AXI_rdata("M00_AXI_rdata"), M00_AXI_rresp("M00_AXI_rresp"), M00_AXI_rlast("M00_AXI_rlast"), M00_AXI_rvalid("M00_AXI_rvalid"), M00_AXI_rready("M00_AXI_rready"), M01_AXI_awaddr("M01_AXI_awaddr"), M01_AXI_awlen("M01_AXI_awlen"), M01_AXI_awsize("M01_AXI_awsize"), M01_AXI_awburst("M01_AXI_awburst"), M01_AXI_awlock("M01_AXI_awlock"), M01_AXI_awcache("M01_AXI_awcache"), M01_AXI_awprot("M01_AXI_awprot"), M01_AXI_awqos("M01_AXI_awqos"), M01_AXI_awvalid("M01_AXI_awvalid"), M01_AXI_awready("M01_AXI_awready"), M01_AXI_wdata("M01_AXI_wdata"), M01_AXI_wstrb("M01_AXI_wstrb"), M01_AXI_wlast("M01_AXI_wlast"), M01_AXI_wvalid("M01_AXI_wvalid"), M01_AXI_wready("M01_AXI_wready"), M01_AXI_bresp("M01_AXI_bresp"), M01_AXI_bvalid("M01_AXI_bvalid"), M01_AXI_bready("M01_AXI_bready"), M01_AXI_araddr("M01_AXI_araddr"), M01_AXI_arlen("M01_AXI_arlen"), M01_AXI_arsize("M01_AXI_arsize"), M01_AXI_arburst("M01_AXI_arburst"), M01_AXI_arlock("M01_AXI_arlock"), M01_AXI_arcache("M01_AXI_arcache"), M01_AXI_arprot("M01_AXI_arprot"), M01_AXI_arqos("M01_AXI_arqos"), M01_AXI_arvalid("M01_AXI_arvalid"), M01_AXI_arready("M01_AXI_arready"), M01_AXI_rdata("M01_AXI_rdata"), M01_AXI_rresp("M01_AXI_rresp"), M01_AXI_rlast("M01_AXI_rlast"), M01_AXI_rvalid("M01_AXI_rvalid"), M01_AXI_rready("M01_AXI_rready"), M02_AXI_awaddr("M02_AXI_awaddr"), M02_AXI_awlen("M02_AXI_awlen"), M02_AXI_awsize("M02_AXI_awsize"), M02_AXI_awburst("M02_AXI_awburst"), M02_AXI_awlock("M02_AXI_awlock"), M02_AXI_awcache("M02_AXI_awcache"), M02_AXI_awprot("M02_AXI_awprot"), M02_AXI_awqos("M02_AXI_awqos"), M02_AXI_awvalid("M02_AXI_awvalid"), M02_AXI_awready("M02_AXI_awready"), M02_AXI_wdata("M02_AXI_wdata"), M02_AXI_wstrb("M02_AXI_wstrb"), M02_AXI_wlast("M02_AXI_wlast"), M02_AXI_wvalid("M02_AXI_wvalid"), M02_AXI_wready("M02_AXI_wready"), M02_AXI_bresp("M02_AXI_bresp"), M02_AXI_bvalid("M02_AXI_bvalid"), M02_AXI_bready("M02_AXI_bready"), M02_AXI_araddr("M02_AXI_araddr"), M02_AXI_arlen("M02_AXI_arlen"), M02_AXI_arsize("M02_AXI_arsize"), M02_AXI_arburst("M02_AXI_arburst"), M02_AXI_arlock("M02_AXI_arlock"), M02_AXI_arcache("M02_AXI_arcache"), M02_AXI_arprot("M02_AXI_arprot"), M02_AXI_arqos("M02_AXI_arqos"), M02_AXI_arvalid("M02_AXI_arvalid"), M02_AXI_arready("M02_AXI_arready"), M02_AXI_rdata("M02_AXI_rdata"), M02_AXI_rresp("M02_AXI_rresp"), M02_AXI_rlast("M02_AXI_rlast"), M02_AXI_rvalid("M02_AXI_rvalid"), M02_AXI_rready("M02_AXI_rready"), M03_AXI_awaddr("M03_AXI_awaddr"), M03_AXI_awlen("M03_AXI_awlen"), M03_AXI_awsize("M03_AXI_awsize"), M03_AXI_awburst("M03_AXI_awburst"), M03_AXI_awlock("M03_AXI_awlock"), M03_AXI_awcache("M03_AXI_awcache"), M03_AXI_awprot("M03_AXI_awprot"), M03_AXI_awqos("M03_AXI_awqos"), M03_AXI_awvalid("M03_AXI_awvalid"), M03_AXI_awready("M03_AXI_awready"), M03_AXI_wdata("M03_AXI_wdata"), M03_AXI_wstrb("M03_AXI_wstrb"), M03_AXI_wlast("M03_AXI_wlast"), M03_AXI_wvalid("M03_AXI_wvalid"), M03_AXI_wready("M03_AXI_wready"), M03_AXI_bresp("M03_AXI_bresp"), M03_AXI_bvalid("M03_AXI_bvalid"), M03_AXI_bready("M03_AXI_bready"), M03_AXI_araddr("M03_AXI_araddr"), M03_AXI_arlen("M03_AXI_arlen"), M03_AXI_arsize("M03_AXI_arsize"), M03_AXI_arburst("M03_AXI_arburst"), M03_AXI_arlock("M03_AXI_arlock"), M03_AXI_arcache("M03_AXI_arcache"), M03_AXI_arprot("M03_AXI_arprot"), M03_AXI_arqos("M03_AXI_arqos"), M03_AXI_arvalid("M03_AXI_arvalid"), M03_AXI_arready("M03_AXI_arready"), M03_AXI_rdata("M03_AXI_rdata"), M03_AXI_rresp("M03_AXI_rresp"), M03_AXI_rlast("M03_AXI_rlast"), M03_AXI_rvalid("M03_AXI_rvalid"), M03_AXI_rready("M03_AXI_rready"), M04_AXI_awaddr("M04_AXI_awaddr"), M04_AXI_awlen("M04_AXI_awlen"), M04_AXI_awsize("M04_AXI_awsize"), M04_AXI_awburst("M04_AXI_awburst"), M04_AXI_awlock("M04_AXI_awlock"), M04_AXI_awcache("M04_AXI_awcache"), M04_AXI_awprot("M04_AXI_awprot"), M04_AXI_awqos("M04_AXI_awqos"), M04_AXI_awvalid("M04_AXI_awvalid"), M04_AXI_awready("M04_AXI_awready"), M04_AXI_wdata("M04_AXI_wdata"), M04_AXI_wstrb("M04_AXI_wstrb"), M04_AXI_wlast("M04_AXI_wlast"), M04_AXI_wvalid("M04_AXI_wvalid"), M04_AXI_wready("M04_AXI_wready"), M04_AXI_bresp("M04_AXI_bresp"), M04_AXI_bvalid("M04_AXI_bvalid"), M04_AXI_bready("M04_AXI_bready"), M04_AXI_araddr("M04_AXI_araddr"), M04_AXI_arlen("M04_AXI_arlen"), M04_AXI_arsize("M04_AXI_arsize"), M04_AXI_arburst("M04_AXI_arburst"), M04_AXI_arlock("M04_AXI_arlock"), M04_AXI_arcache("M04_AXI_arcache"), M04_AXI_arprot("M04_AXI_arprot"), M04_AXI_arqos("M04_AXI_arqos"), M04_AXI_arvalid("M04_AXI_arvalid"), M04_AXI_arready("M04_AXI_arready"), M04_AXI_rdata("M04_AXI_rdata"), M04_AXI_rresp("M04_AXI_rresp"), M04_AXI_rlast("M04_AXI_rlast"), M04_AXI_rvalid("M04_AXI_rvalid"), M04_AXI_rready("M04_AXI_rready"), M05_AXI_awaddr("M05_AXI_awaddr"), M05_AXI_awlen("M05_AXI_awlen"), M05_AXI_awsize("M05_AXI_awsize"), M05_AXI_awburst("M05_AXI_awburst"), M05_AXI_awlock("M05_AXI_awlock"), M05_AXI_awcache("M05_AXI_awcache"), M05_AXI_awprot("M05_AXI_awprot"), M05_AXI_awqos("M05_AXI_awqos"), M05_AXI_awvalid("M05_AXI_awvalid"), M05_AXI_awready("M05_AXI_awready"), M05_AXI_wdata("M05_AXI_wdata"), M05_AXI_wstrb("M05_AXI_wstrb"), M05_AXI_wlast("M05_AXI_wlast"), M05_AXI_wvalid("M05_AXI_wvalid"), M05_AXI_wready("M05_AXI_wready"), M05_AXI_bresp("M05_AXI_bresp"), M05_AXI_bvalid("M05_AXI_bvalid"), M05_AXI_bready("M05_AXI_bready"), M05_AXI_araddr("M05_AXI_araddr"), M05_AXI_arlen("M05_AXI_arlen"), M05_AXI_arsize("M05_AXI_arsize"), M05_AXI_arburst("M05_AXI_arburst"), M05_AXI_arlock("M05_AXI_arlock"), M05_AXI_arcache("M05_AXI_arcache"), M05_AXI_arprot("M05_AXI_arprot"), M05_AXI_arqos("M05_AXI_arqos"), M05_AXI_arvalid("M05_AXI_arvalid"), M05_AXI_arready("M05_AXI_arready"), M05_AXI_rdata("M05_AXI_rdata"), M05_AXI_rresp("M05_AXI_rresp"), M05_AXI_rlast("M05_AXI_rlast"), M05_AXI_rvalid("M05_AXI_rvalid"), M05_AXI_rready("M05_AXI_rready"), M06_AXI_awaddr("M06_AXI_awaddr"), M06_AXI_awlen("M06_AXI_awlen"), M06_AXI_awsize("M06_AXI_awsize"), M06_AXI_awburst("M06_AXI_awburst"), M06_AXI_awlock("M06_AXI_awlock"), M06_AXI_awcache("M06_AXI_awcache"), M06_AXI_awprot("M06_AXI_awprot"), M06_AXI_awqos("M06_AXI_awqos"), M06_AXI_awvalid("M06_AXI_awvalid"), M06_AXI_awready("M06_AXI_awready"), M06_AXI_wdata("M06_AXI_wdata"), M06_AXI_wstrb("M06_AXI_wstrb"), M06_AXI_wlast("M06_AXI_wlast"), M06_AXI_wvalid("M06_AXI_wvalid"), M06_AXI_wready("M06_AXI_wready"), M06_AXI_bresp("M06_AXI_bresp"), M06_AXI_bvalid("M06_AXI_bvalid"), M06_AXI_bready("M06_AXI_bready"), M06_AXI_araddr("M06_AXI_araddr"), M06_AXI_arlen("M06_AXI_arlen"), M06_AXI_arsize("M06_AXI_arsize"), M06_AXI_arburst("M06_AXI_arburst"), M06_AXI_arlock("M06_AXI_arlock"), M06_AXI_arcache("M06_AXI_arcache"), M06_AXI_arprot("M06_AXI_arprot"), M06_AXI_arqos("M06_AXI_arqos"), M06_AXI_arvalid("M06_AXI_arvalid"), M06_AXI_arready("M06_AXI_arready"), M06_AXI_rdata("M06_AXI_rdata"), M06_AXI_rresp("M06_AXI_rresp"), M06_AXI_rlast("M06_AXI_rlast"), M06_AXI_rvalid("M06_AXI_rvalid"), M06_AXI_rready("M06_AXI_rready"), M07_AXI_awaddr("M07_AXI_awaddr"), M07_AXI_awlen("M07_AXI_awlen"), M07_AXI_awsize("M07_AXI_awsize"), M07_AXI_awburst("M07_AXI_awburst"), M07_AXI_awlock("M07_AXI_awlock"), M07_AXI_awcache("M07_AXI_awcache"), M07_AXI_awprot("M07_AXI_awprot"), M07_AXI_awqos("M07_AXI_awqos"), M07_AXI_awvalid("M07_AXI_awvalid"), M07_AXI_awready("M07_AXI_awready"), M07_AXI_wdata("M07_AXI_wdata"), M07_AXI_wstrb("M07_AXI_wstrb"), M07_AXI_wlast("M07_AXI_wlast"), M07_AXI_wvalid("M07_AXI_wvalid"), M07_AXI_wready("M07_AXI_wready"), M07_AXI_bresp("M07_AXI_bresp"), M07_AXI_bvalid("M07_AXI_bvalid"), M07_AXI_bready("M07_AXI_bready"), M07_AXI_araddr("M07_AXI_araddr"), M07_AXI_arlen("M07_AXI_arlen"), M07_AXI_arsize("M07_AXI_arsize"), M07_AXI_arburst("M07_AXI_arburst"), M07_AXI_arlock("M07_AXI_arlock"), M07_AXI_arcache("M07_AXI_arcache"), M07_AXI_arprot("M07_AXI_arprot"), M07_AXI_arqos("M07_AXI_arqos"), M07_AXI_arvalid("M07_AXI_arvalid"), M07_AXI_arready("M07_AXI_arready"), M07_AXI_rdata("M07_AXI_rdata"), M07_AXI_rresp("M07_AXI_rresp"), M07_AXI_rlast("M07_AXI_rlast"), M07_AXI_rvalid("M07_AXI_rvalid"), M07_AXI_rready("M07_AXI_rready"), M08_AXI_awaddr("M08_AXI_awaddr"), M08_AXI_awlen("M08_AXI_awlen"), M08_AXI_awsize("M08_AXI_awsize"), M08_AXI_awburst("M08_AXI_awburst"), M08_AXI_awlock("M08_AXI_awlock"), M08_AXI_awcache("M08_AXI_awcache"), M08_AXI_awprot("M08_AXI_awprot"), M08_AXI_awqos("M08_AXI_awqos"), M08_AXI_awvalid("M08_AXI_awvalid"), M08_AXI_awready("M08_AXI_awready"), M08_AXI_wdata("M08_AXI_wdata"), M08_AXI_wstrb("M08_AXI_wstrb"), M08_AXI_wlast("M08_AXI_wlast"), M08_AXI_wvalid("M08_AXI_wvalid"), M08_AXI_wready("M08_AXI_wready"), M08_AXI_bresp("M08_AXI_bresp"), M08_AXI_bvalid("M08_AXI_bvalid"), M08_AXI_bready("M08_AXI_bready"), M08_AXI_araddr("M08_AXI_araddr"), M08_AXI_arlen("M08_AXI_arlen"), M08_AXI_arsize("M08_AXI_arsize"), M08_AXI_arburst("M08_AXI_arburst"), M08_AXI_arlock("M08_AXI_arlock"), M08_AXI_arcache("M08_AXI_arcache"), M08_AXI_arprot("M08_AXI_arprot"), M08_AXI_arqos("M08_AXI_arqos"), M08_AXI_arvalid("M08_AXI_arvalid"), M08_AXI_arready("M08_AXI_arready"), M08_AXI_rdata("M08_AXI_rdata"), M08_AXI_rresp("M08_AXI_rresp"), M08_AXI_rlast("M08_AXI_rlast"), M08_AXI_rvalid("M08_AXI_rvalid"), M08_AXI_rready("M08_AXI_rready"), M09_AXI_awaddr("M09_AXI_awaddr"), M09_AXI_awlen("M09_AXI_awlen"), M09_AXI_awsize("M09_AXI_awsize"), M09_AXI_awburst("M09_AXI_awburst"), M09_AXI_awlock("M09_AXI_awlock"), M09_AXI_awcache("M09_AXI_awcache"), M09_AXI_awprot("M09_AXI_awprot"), M09_AXI_awqos("M09_AXI_awqos"), M09_AXI_awvalid("M09_AXI_awvalid"), M09_AXI_awready("M09_AXI_awready"), M09_AXI_wdata("M09_AXI_wdata"), M09_AXI_wstrb("M09_AXI_wstrb"), M09_AXI_wlast("M09_AXI_wlast"), M09_AXI_wvalid("M09_AXI_wvalid"), M09_AXI_wready("M09_AXI_wready"), M09_AXI_bresp("M09_AXI_bresp"), M09_AXI_bvalid("M09_AXI_bvalid"), M09_AXI_bready("M09_AXI_bready"), M09_AXI_araddr("M09_AXI_araddr"), M09_AXI_arlen("M09_AXI_arlen"), M09_AXI_arsize("M09_AXI_arsize"), M09_AXI_arburst("M09_AXI_arburst"), M09_AXI_arlock("M09_AXI_arlock"), M09_AXI_arcache("M09_AXI_arcache"), M09_AXI_arprot("M09_AXI_arprot"), M09_AXI_arqos("M09_AXI_arqos"), M09_AXI_arvalid("M09_AXI_arvalid"), M09_AXI_arready("M09_AXI_arready"), M09_AXI_rdata("M09_AXI_rdata"), M09_AXI_rresp("M09_AXI_rresp"), M09_AXI_rlast("M09_AXI_rlast"), M09_AXI_rvalid("M09_AXI_rvalid"), M09_AXI_rready("M09_AXI_rready"), M10_AXI_awaddr("M10_AXI_awaddr"), M10_AXI_awlen("M10_AXI_awlen"), M10_AXI_awsize("M10_AXI_awsize"), M10_AXI_awburst("M10_AXI_awburst"), M10_AXI_awlock("M10_AXI_awlock"), M10_AXI_awcache("M10_AXI_awcache"), M10_AXI_awprot("M10_AXI_awprot"), M10_AXI_awqos("M10_AXI_awqos"), M10_AXI_awvalid("M10_AXI_awvalid"), M10_AXI_awready("M10_AXI_awready"), M10_AXI_wdata("M10_AXI_wdata"), M10_AXI_wstrb("M10_AXI_wstrb"), M10_AXI_wlast("M10_AXI_wlast"), M10_AXI_wvalid("M10_AXI_wvalid"), M10_AXI_wready("M10_AXI_wready"), M10_AXI_bresp("M10_AXI_bresp"), M10_AXI_bvalid("M10_AXI_bvalid"), M10_AXI_bready("M10_AXI_bready"), M10_AXI_araddr("M10_AXI_araddr"), M10_AXI_arlen("M10_AXI_arlen"), M10_AXI_arsize("M10_AXI_arsize"), M10_AXI_arburst("M10_AXI_arburst"), M10_AXI_arlock("M10_AXI_arlock"), M10_AXI_arcache("M10_AXI_arcache"), M10_AXI_arprot("M10_AXI_arprot"), M10_AXI_arqos("M10_AXI_arqos"), M10_AXI_arvalid("M10_AXI_arvalid"), M10_AXI_arready("M10_AXI_arready"), M10_AXI_rdata("M10_AXI_rdata"), M10_AXI_rresp("M10_AXI_rresp"), M10_AXI_rlast("M10_AXI_rlast"), M10_AXI_rvalid("M10_AXI_rvalid"), M10_AXI_rready("M10_AXI_rready"), M11_AXI_awaddr("M11_AXI_awaddr"), M11_AXI_awlen("M11_AXI_awlen"), M11_AXI_awsize("M11_AXI_awsize"), M11_AXI_awburst("M11_AXI_awburst"), M11_AXI_awlock("M11_AXI_awlock"), M11_AXI_awcache("M11_AXI_awcache"), M11_AXI_awprot("M11_AXI_awprot"), M11_AXI_awqos("M11_AXI_awqos"), M11_AXI_awvalid("M11_AXI_awvalid"), M11_AXI_awready("M11_AXI_awready"), M11_AXI_wdata("M11_AXI_wdata"), M11_AXI_wstrb("M11_AXI_wstrb"), M11_AXI_wlast("M11_AXI_wlast"), M11_AXI_wvalid("M11_AXI_wvalid"), M11_AXI_wready("M11_AXI_wready"), M11_AXI_bresp("M11_AXI_bresp"), M11_AXI_bvalid("M11_AXI_bvalid"), M11_AXI_bready("M11_AXI_bready"), M11_AXI_araddr("M11_AXI_araddr"), M11_AXI_arlen("M11_AXI_arlen"), M11_AXI_arsize("M11_AXI_arsize"), M11_AXI_arburst("M11_AXI_arburst"), M11_AXI_arlock("M11_AXI_arlock"), M11_AXI_arcache("M11_AXI_arcache"), M11_AXI_arprot("M11_AXI_arprot"), M11_AXI_arqos("M11_AXI_arqos"), M11_AXI_arvalid("M11_AXI_arvalid"), M11_AXI_arready("M11_AXI_arready"), M11_AXI_rdata("M11_AXI_rdata"), M11_AXI_rresp("M11_AXI_rresp"), M11_AXI_rlast("M11_AXI_rlast"), M11_AXI_rvalid("M11_AXI_rvalid"), M11_AXI_rready("M11_AXI_rready"), M12_AXI_awaddr("M12_AXI_awaddr"), M12_AXI_awlen("M12_AXI_awlen"), M12_AXI_awsize("M12_AXI_awsize"), M12_AXI_awburst("M12_AXI_awburst"), M12_AXI_awlock("M12_AXI_awlock"), M12_AXI_awcache("M12_AXI_awcache"), M12_AXI_awprot("M12_AXI_awprot"), M12_AXI_awqos("M12_AXI_awqos"), M12_AXI_awvalid("M12_AXI_awvalid"), M12_AXI_awready("M12_AXI_awready"), M12_AXI_wdata("M12_AXI_wdata"), M12_AXI_wstrb("M12_AXI_wstrb"), M12_AXI_wlast("M12_AXI_wlast"), M12_AXI_wvalid("M12_AXI_wvalid"), M12_AXI_wready("M12_AXI_wready"), M12_AXI_bresp("M12_AXI_bresp"), M12_AXI_bvalid("M12_AXI_bvalid"), M12_AXI_bready("M12_AXI_bready"), M12_AXI_araddr("M12_AXI_araddr"), M12_AXI_arlen("M12_AXI_arlen"), M12_AXI_arsize("M12_AXI_arsize"), M12_AXI_arburst("M12_AXI_arburst"), M12_AXI_arlock("M12_AXI_arlock"), M12_AXI_arcache("M12_AXI_arcache"), M12_AXI_arprot("M12_AXI_arprot"), M12_AXI_arqos("M12_AXI_arqos"), M12_AXI_arvalid("M12_AXI_arvalid"), M12_AXI_arready("M12_AXI_arready"), M12_AXI_rdata("M12_AXI_rdata"), M12_AXI_rresp("M12_AXI_rresp"), M12_AXI_rlast("M12_AXI_rlast"), M12_AXI_rvalid("M12_AXI_rvalid"), M12_AXI_rready("M12_AXI_rready"), M13_AXI_awaddr("M13_AXI_awaddr"), M13_AXI_awlen("M13_AXI_awlen"), M13_AXI_awsize("M13_AXI_awsize"), M13_AXI_awburst("M13_AXI_awburst"), M13_AXI_awlock("M13_AXI_awlock"), M13_AXI_awcache("M13_AXI_awcache"), M13_AXI_awprot("M13_AXI_awprot"), M13_AXI_awqos("M13_AXI_awqos"), M13_AXI_awvalid("M13_AXI_awvalid"), M13_AXI_awready("M13_AXI_awready"), M13_AXI_wdata("M13_AXI_wdata"), M13_AXI_wstrb("M13_AXI_wstrb"), M13_AXI_wlast("M13_AXI_wlast"), M13_AXI_wvalid("M13_AXI_wvalid"), M13_AXI_wready("M13_AXI_wready"), M13_AXI_bresp("M13_AXI_bresp"), M13_AXI_bvalid("M13_AXI_bvalid"), M13_AXI_bready("M13_AXI_bready"), M13_AXI_araddr("M13_AXI_araddr"), M13_AXI_arlen("M13_AXI_arlen"), M13_AXI_arsize("M13_AXI_arsize"), M13_AXI_arburst("M13_AXI_arburst"), M13_AXI_arlock("M13_AXI_arlock"), M13_AXI_arcache("M13_AXI_arcache"), M13_AXI_arprot("M13_AXI_arprot"), M13_AXI_arqos("M13_AXI_arqos"), M13_AXI_arvalid("M13_AXI_arvalid"), M13_AXI_arready("M13_AXI_arready"), M13_AXI_rdata("M13_AXI_rdata"), M13_AXI_rresp("M13_AXI_rresp"), M13_AXI_rlast("M13_AXI_rlast"), M13_AXI_rvalid("M13_AXI_rvalid"), M13_AXI_rready("M13_AXI_rready"), M14_AXI_awaddr("M14_AXI_awaddr"), M14_AXI_awlen("M14_AXI_awlen"), M14_AXI_awsize("M14_AXI_awsize"), M14_AXI_awburst("M14_AXI_awburst"), M14_AXI_awlock("M14_AXI_awlock"), M14_AXI_awcache("M14_AXI_awcache"), M14_AXI_awprot("M14_AXI_awprot"), M14_AXI_awqos("M14_AXI_awqos"), M14_AXI_awvalid("M14_AXI_awvalid"), M14_AXI_awready("M14_AXI_awready"), M14_AXI_wdata("M14_AXI_wdata"), M14_AXI_wstrb("M14_AXI_wstrb"), M14_AXI_wlast("M14_AXI_wlast"), M14_AXI_wvalid("M14_AXI_wvalid"), M14_AXI_wready("M14_AXI_wready"), M14_AXI_bresp("M14_AXI_bresp"), M14_AXI_bvalid("M14_AXI_bvalid"), M14_AXI_bready("M14_AXI_bready"), M14_AXI_araddr("M14_AXI_araddr"), M14_AXI_arlen("M14_AXI_arlen"), M14_AXI_arsize("M14_AXI_arsize"), M14_AXI_arburst("M14_AXI_arburst"), M14_AXI_arlock("M14_AXI_arlock"), M14_AXI_arcache("M14_AXI_arcache"), M14_AXI_arprot("M14_AXI_arprot"), M14_AXI_arqos("M14_AXI_arqos"), M14_AXI_arvalid("M14_AXI_arvalid"), M14_AXI_arready("M14_AXI_arready"), M14_AXI_rdata("M14_AXI_rdata"), M14_AXI_rresp("M14_AXI_rresp"), M14_AXI_rlast("M14_AXI_rlast"), M14_AXI_rvalid("M14_AXI_rvalid"), M14_AXI_rready("M14_AXI_rready"), M15_AXI_awaddr("M15_AXI_awaddr"), M15_AXI_awlen("M15_AXI_awlen"), M15_AXI_awsize("M15_AXI_awsize"), M15_AXI_awburst("M15_AXI_awburst"), M15_AXI_awlock("M15_AXI_awlock"), M15_AXI_awcache("M15_AXI_awcache"), M15_AXI_awprot("M15_AXI_awprot"), M15_AXI_awqos("M15_AXI_awqos"), M15_AXI_awvalid("M15_AXI_awvalid"), M15_AXI_awready("M15_AXI_awready"), M15_AXI_wdata("M15_AXI_wdata"), M15_AXI_wstrb("M15_AXI_wstrb"), M15_AXI_wlast("M15_AXI_wlast"), M15_AXI_wvalid("M15_AXI_wvalid"), M15_AXI_wready("M15_AXI_wready"), M15_AXI_bresp("M15_AXI_bresp"), M15_AXI_bvalid("M15_AXI_bvalid"), M15_AXI_bready("M15_AXI_bready"), M15_AXI_araddr("M15_AXI_araddr"), M15_AXI_arlen("M15_AXI_arlen"), M15_AXI_arsize("M15_AXI_arsize"), M15_AXI_arburst("M15_AXI_arburst"), M15_AXI_arlock("M15_AXI_arlock"), M15_AXI_arcache("M15_AXI_arcache"), M15_AXI_arprot("M15_AXI_arprot"), M15_AXI_arqos("M15_AXI_arqos"), M15_AXI_arvalid("M15_AXI_arvalid"), M15_AXI_arready("M15_AXI_arready"), M15_AXI_rdata("M15_AXI_rdata"), M15_AXI_rresp("M15_AXI_rresp"), M15_AXI_rlast("M15_AXI_rlast"), M15_AXI_rvalid("M15_AXI_rvalid"), M15_AXI_rready("M15_AXI_rready"), M16_AXI_awaddr("M16_AXI_awaddr"), M16_AXI_awlen("M16_AXI_awlen"), M16_AXI_awsize("M16_AXI_awsize"), M16_AXI_awburst("M16_AXI_awburst"), M16_AXI_awlock("M16_AXI_awlock"), M16_AXI_awcache("M16_AXI_awcache"), M16_AXI_awprot("M16_AXI_awprot"), M16_AXI_awqos("M16_AXI_awqos"), M16_AXI_awvalid("M16_AXI_awvalid"), M16_AXI_awready("M16_AXI_awready"), M16_AXI_wdata("M16_AXI_wdata"), M16_AXI_wstrb("M16_AXI_wstrb"), M16_AXI_wlast("M16_AXI_wlast"), M16_AXI_wvalid("M16_AXI_wvalid"), M16_AXI_wready("M16_AXI_wready"), M16_AXI_bresp("M16_AXI_bresp"), M16_AXI_bvalid("M16_AXI_bvalid"), M16_AXI_bready("M16_AXI_bready"), M16_AXI_araddr("M16_AXI_araddr"), M16_AXI_arlen("M16_AXI_arlen"), M16_AXI_arsize("M16_AXI_arsize"), M16_AXI_arburst("M16_AXI_arburst"), M16_AXI_arlock("M16_AXI_arlock"), M16_AXI_arcache("M16_AXI_arcache"), M16_AXI_arprot("M16_AXI_arprot"), M16_AXI_arqos("M16_AXI_arqos"), M16_AXI_arvalid("M16_AXI_arvalid"), M16_AXI_arready("M16_AXI_arready"), M16_AXI_rdata("M16_AXI_rdata"), M16_AXI_rresp("M16_AXI_rresp"), M16_AXI_rlast("M16_AXI_rlast"), M16_AXI_rvalid("M16_AXI_rvalid"), M16_AXI_rready("M16_AXI_rready"), M17_AXI_awaddr("M17_AXI_awaddr"), M17_AXI_awlen("M17_AXI_awlen"), M17_AXI_awsize("M17_AXI_awsize"), M17_AXI_awburst("M17_AXI_awburst"), M17_AXI_awlock("M17_AXI_awlock"), M17_AXI_awcache("M17_AXI_awcache"), M17_AXI_awprot("M17_AXI_awprot"), M17_AXI_awqos("M17_AXI_awqos"), M17_AXI_awvalid("M17_AXI_awvalid"), M17_AXI_awready("M17_AXI_awready"), M17_AXI_wdata("M17_AXI_wdata"), M17_AXI_wstrb("M17_AXI_wstrb"), M17_AXI_wlast("M17_AXI_wlast"), M17_AXI_wvalid("M17_AXI_wvalid"), M17_AXI_wready("M17_AXI_wready"), M17_AXI_bresp("M17_AXI_bresp"), M17_AXI_bvalid("M17_AXI_bvalid"), M17_AXI_bready("M17_AXI_bready"), M17_AXI_araddr("M17_AXI_araddr"), M17_AXI_arlen("M17_AXI_arlen"), M17_AXI_arsize("M17_AXI_arsize"), M17_AXI_arburst("M17_AXI_arburst"), M17_AXI_arlock("M17_AXI_arlock"), M17_AXI_arcache("M17_AXI_arcache"), M17_AXI_arprot("M17_AXI_arprot"), M17_AXI_arqos("M17_AXI_arqos"), M17_AXI_arvalid("M17_AXI_arvalid"), M17_AXI_arready("M17_AXI_arready"), M17_AXI_rdata("M17_AXI_rdata"), M17_AXI_rresp("M17_AXI_rresp"), M17_AXI_rlast("M17_AXI_rlast"), M17_AXI_rvalid("M17_AXI_rvalid"), M17_AXI_rready("M17_AXI_rready"), M18_AXI_awaddr("M18_AXI_awaddr"), M18_AXI_awlen("M18_AXI_awlen"), M18_AXI_awsize("M18_AXI_awsize"), M18_AXI_awburst("M18_AXI_awburst"), M18_AXI_awlock("M18_AXI_awlock"), M18_AXI_awcache("M18_AXI_awcache"), M18_AXI_awprot("M18_AXI_awprot"), M18_AXI_awqos("M18_AXI_awqos"), M18_AXI_awvalid("M18_AXI_awvalid"), M18_AXI_awready("M18_AXI_awready"), M18_AXI_wdata("M18_AXI_wdata"), M18_AXI_wstrb("M18_AXI_wstrb"), M18_AXI_wlast("M18_AXI_wlast"), M18_AXI_wvalid("M18_AXI_wvalid"), M18_AXI_wready("M18_AXI_wready"), M18_AXI_bresp("M18_AXI_bresp"), M18_AXI_bvalid("M18_AXI_bvalid"), M18_AXI_bready("M18_AXI_bready"), M18_AXI_araddr("M18_AXI_araddr"), M18_AXI_arlen("M18_AXI_arlen"), M18_AXI_arsize("M18_AXI_arsize"), M18_AXI_arburst("M18_AXI_arburst"), M18_AXI_arlock("M18_AXI_arlock"), M18_AXI_arcache("M18_AXI_arcache"), M18_AXI_arprot("M18_AXI_arprot"), M18_AXI_arqos("M18_AXI_arqos"), M18_AXI_arvalid("M18_AXI_arvalid"), M18_AXI_arready("M18_AXI_arready"), M18_AXI_rdata("M18_AXI_rdata"), M18_AXI_rresp("M18_AXI_rresp"), M18_AXI_rlast("M18_AXI_rlast"), M18_AXI_rvalid("M18_AXI_rvalid"), M18_AXI_rready("M18_AXI_rready"), M19_AXI_awaddr("M19_AXI_awaddr"), M19_AXI_awlen("M19_AXI_awlen"), M19_AXI_awsize("M19_AXI_awsize"), M19_AXI_awburst("M19_AXI_awburst"), M19_AXI_awlock("M19_AXI_awlock"), M19_AXI_awcache("M19_AXI_awcache"), M19_AXI_awprot("M19_AXI_awprot"), M19_AXI_awqos("M19_AXI_awqos"), M19_AXI_awvalid("M19_AXI_awvalid"), M19_AXI_awready("M19_AXI_awready"), M19_AXI_wdata("M19_AXI_wdata"), M19_AXI_wstrb("M19_AXI_wstrb"), M19_AXI_wlast("M19_AXI_wlast"), M19_AXI_wvalid("M19_AXI_wvalid"), M19_AXI_wready("M19_AXI_wready"), M19_AXI_bresp("M19_AXI_bresp"), M19_AXI_bvalid("M19_AXI_bvalid"), M19_AXI_bready("M19_AXI_bready"), M19_AXI_araddr("M19_AXI_araddr"), M19_AXI_arlen("M19_AXI_arlen"), M19_AXI_arsize("M19_AXI_arsize"), M19_AXI_arburst("M19_AXI_arburst"), M19_AXI_arlock("M19_AXI_arlock"), M19_AXI_arcache("M19_AXI_arcache"), M19_AXI_arprot("M19_AXI_arprot"), M19_AXI_arqos("M19_AXI_arqos"), M19_AXI_arvalid("M19_AXI_arvalid"), M19_AXI_arready("M19_AXI_arready"), M19_AXI_rdata("M19_AXI_rdata"), M19_AXI_rresp("M19_AXI_rresp"), M19_AXI_rlast("M19_AXI_rlast"), M19_AXI_rvalid("M19_AXI_rvalid"), M19_AXI_rready("M19_AXI_rready"), M20_AXI_awaddr("M20_AXI_awaddr"), M20_AXI_awlen("M20_AXI_awlen"), M20_AXI_awsize("M20_AXI_awsize"), M20_AXI_awburst("M20_AXI_awburst"), M20_AXI_awlock("M20_AXI_awlock"), M20_AXI_awcache("M20_AXI_awcache"), M20_AXI_awprot("M20_AXI_awprot"), M20_AXI_awqos("M20_AXI_awqos"), M20_AXI_awvalid("M20_AXI_awvalid"), M20_AXI_awready("M20_AXI_awready"), M20_AXI_wdata("M20_AXI_wdata"), M20_AXI_wstrb("M20_AXI_wstrb"), M20_AXI_wlast("M20_AXI_wlast"), M20_AXI_wvalid("M20_AXI_wvalid"), M20_AXI_wready("M20_AXI_wready"), M20_AXI_bresp("M20_AXI_bresp"), M20_AXI_bvalid("M20_AXI_bvalid"), M20_AXI_bready("M20_AXI_bready"), M20_AXI_araddr("M20_AXI_araddr"), M20_AXI_arlen("M20_AXI_arlen"), M20_AXI_arsize("M20_AXI_arsize"), M20_AXI_arburst("M20_AXI_arburst"), M20_AXI_arlock("M20_AXI_arlock"), M20_AXI_arcache("M20_AXI_arcache"), M20_AXI_arprot("M20_AXI_arprot"), M20_AXI_arqos("M20_AXI_arqos"), M20_AXI_arvalid("M20_AXI_arvalid"), M20_AXI_arready("M20_AXI_arready"), M20_AXI_rdata("M20_AXI_rdata"), M20_AXI_rresp("M20_AXI_rresp"), M20_AXI_rlast("M20_AXI_rlast"), M20_AXI_rvalid("M20_AXI_rvalid"), M20_AXI_rready("M20_AXI_rready"), M21_AXI_awaddr("M21_AXI_awaddr"), M21_AXI_awlen("M21_AXI_awlen"), M21_AXI_awsize("M21_AXI_awsize"), M21_AXI_awburst("M21_AXI_awburst"), M21_AXI_awlock("M21_AXI_awlock"), M21_AXI_awcache("M21_AXI_awcache"), M21_AXI_awprot("M21_AXI_awprot"), M21_AXI_awqos("M21_AXI_awqos"), M21_AXI_awvalid("M21_AXI_awvalid"), M21_AXI_awready("M21_AXI_awready"), M21_AXI_wdata("M21_AXI_wdata"), M21_AXI_wstrb("M21_AXI_wstrb"), M21_AXI_wlast("M21_AXI_wlast"), M21_AXI_wvalid("M21_AXI_wvalid"), M21_AXI_wready("M21_AXI_wready"), M21_AXI_bresp("M21_AXI_bresp"), M21_AXI_bvalid("M21_AXI_bvalid"), M21_AXI_bready("M21_AXI_bready"), M21_AXI_araddr("M21_AXI_araddr"), M21_AXI_arlen("M21_AXI_arlen"), M21_AXI_arsize("M21_AXI_arsize"), M21_AXI_arburst("M21_AXI_arburst"), M21_AXI_arlock("M21_AXI_arlock"), M21_AXI_arcache("M21_AXI_arcache"), M21_AXI_arprot("M21_AXI_arprot"), M21_AXI_arqos("M21_AXI_arqos"), M21_AXI_arvalid("M21_AXI_arvalid"), M21_AXI_arready("M21_AXI_arready"), M21_AXI_rdata("M21_AXI_rdata"), M21_AXI_rresp("M21_AXI_rresp"), M21_AXI_rlast("M21_AXI_rlast"), M21_AXI_rvalid("M21_AXI_rvalid"), M21_AXI_rready("M21_AXI_rready"), M22_AXI_awaddr("M22_AXI_awaddr"), M22_AXI_awlen("M22_AXI_awlen"), M22_AXI_awsize("M22_AXI_awsize"), M22_AXI_awburst("M22_AXI_awburst"), M22_AXI_awlock("M22_AXI_awlock"), M22_AXI_awcache("M22_AXI_awcache"), M22_AXI_awprot("M22_AXI_awprot"), M22_AXI_awqos("M22_AXI_awqos"), M22_AXI_awvalid("M22_AXI_awvalid"), M22_AXI_awready("M22_AXI_awready"), M22_AXI_wdata("M22_AXI_wdata"), M22_AXI_wstrb("M22_AXI_wstrb"), M22_AXI_wlast("M22_AXI_wlast"), M22_AXI_wvalid("M22_AXI_wvalid"), M22_AXI_wready("M22_AXI_wready"), M22_AXI_bresp("M22_AXI_bresp"), M22_AXI_bvalid("M22_AXI_bvalid"), M22_AXI_bready("M22_AXI_bready"), M22_AXI_araddr("M22_AXI_araddr"), M22_AXI_arlen("M22_AXI_arlen"), M22_AXI_arsize("M22_AXI_arsize"), M22_AXI_arburst("M22_AXI_arburst"), M22_AXI_arlock("M22_AXI_arlock"), M22_AXI_arcache("M22_AXI_arcache"), M22_AXI_arprot("M22_AXI_arprot"), M22_AXI_arqos("M22_AXI_arqos"), M22_AXI_arvalid("M22_AXI_arvalid"), M22_AXI_arready("M22_AXI_arready"), M22_AXI_rdata("M22_AXI_rdata"), M22_AXI_rresp("M22_AXI_rresp"), M22_AXI_rlast("M22_AXI_rlast"), M22_AXI_rvalid("M22_AXI_rvalid"), M22_AXI_rready("M22_AXI_rready"), M23_AXI_awaddr("M23_AXI_awaddr"), M23_AXI_awlen("M23_AXI_awlen"), M23_AXI_awsize("M23_AXI_awsize"), M23_AXI_awburst("M23_AXI_awburst"), M23_AXI_awlock("M23_AXI_awlock"), M23_AXI_awcache("M23_AXI_awcache"), M23_AXI_awprot("M23_AXI_awprot"), M23_AXI_awqos("M23_AXI_awqos"), M23_AXI_awvalid("M23_AXI_awvalid"), M23_AXI_awready("M23_AXI_awready"), M23_AXI_wdata("M23_AXI_wdata"), M23_AXI_wstrb("M23_AXI_wstrb"), M23_AXI_wlast("M23_AXI_wlast"), M23_AXI_wvalid("M23_AXI_wvalid"), M23_AXI_wready("M23_AXI_wready"), M23_AXI_bresp("M23_AXI_bresp"), M23_AXI_bvalid("M23_AXI_bvalid"), M23_AXI_bready("M23_AXI_bready"), M23_AXI_araddr("M23_AXI_araddr"), M23_AXI_arlen("M23_AXI_arlen"), M23_AXI_arsize("M23_AXI_arsize"), M23_AXI_arburst("M23_AXI_arburst"), M23_AXI_arlock("M23_AXI_arlock"), M23_AXI_arcache("M23_AXI_arcache"), M23_AXI_arprot("M23_AXI_arprot"), M23_AXI_arqos("M23_AXI_arqos"), M23_AXI_arvalid("M23_AXI_arvalid"), M23_AXI_arready("M23_AXI_arready"), M23_AXI_rdata("M23_AXI_rdata"), M23_AXI_rresp("M23_AXI_rresp"), M23_AXI_rlast("M23_AXI_rlast"), M23_AXI_rvalid("M23_AXI_rvalid"), M23_AXI_rready("M23_AXI_rready")
{
  // initialize pins
  mp_impl->aclk(aclk);
  mp_impl->aresetn(aresetn);

  // initialize transactors
  mp_S00_AXI_transactor = NULL;
  mp_S00_AXI_awlock_converter = NULL;
  mp_S00_AXI_arlock_converter = NULL;
  mp_M00_AXI_transactor = NULL;
  mp_M00_AXI_awlock_converter = NULL;
  mp_M00_AXI_arlock_converter = NULL;
  mp_M01_AXI_transactor = NULL;
  mp_M01_AXI_awlock_converter = NULL;
  mp_M01_AXI_arlock_converter = NULL;
  mp_M02_AXI_transactor = NULL;
  mp_M02_AXI_awlock_converter = NULL;
  mp_M02_AXI_arlock_converter = NULL;
  mp_M03_AXI_transactor = NULL;
  mp_M03_AXI_awlock_converter = NULL;
  mp_M03_AXI_arlock_converter = NULL;
  mp_M04_AXI_transactor = NULL;
  mp_M04_AXI_awlock_converter = NULL;
  mp_M04_AXI_arlock_converter = NULL;
  mp_M05_AXI_transactor = NULL;
  mp_M05_AXI_awlock_converter = NULL;
  mp_M05_AXI_arlock_converter = NULL;
  mp_M06_AXI_transactor = NULL;
  mp_M06_AXI_awlock_converter = NULL;
  mp_M06_AXI_arlock_converter = NULL;
  mp_M07_AXI_transactor = NULL;
  mp_M07_AXI_awlock_converter = NULL;
  mp_M07_AXI_arlock_converter = NULL;
  mp_M08_AXI_transactor = NULL;
  mp_M08_AXI_awlock_converter = NULL;
  mp_M08_AXI_arlock_converter = NULL;
  mp_M09_AXI_transactor = NULL;
  mp_M09_AXI_awlock_converter = NULL;
  mp_M09_AXI_arlock_converter = NULL;
  mp_M10_AXI_transactor = NULL;
  mp_M10_AXI_awlock_converter = NULL;
  mp_M10_AXI_arlock_converter = NULL;
  mp_M11_AXI_transactor = NULL;
  mp_M11_AXI_awlock_converter = NULL;
  mp_M11_AXI_arlock_converter = NULL;
  mp_M12_AXI_transactor = NULL;
  mp_M12_AXI_awlock_converter = NULL;
  mp_M12_AXI_arlock_converter = NULL;
  mp_M13_AXI_transactor = NULL;
  mp_M13_AXI_awlock_converter = NULL;
  mp_M13_AXI_arlock_converter = NULL;
  mp_M14_AXI_transactor = NULL;
  mp_M14_AXI_awlock_converter = NULL;
  mp_M14_AXI_arlock_converter = NULL;
  mp_M15_AXI_transactor = NULL;
  mp_M15_AXI_awlock_converter = NULL;
  mp_M15_AXI_arlock_converter = NULL;
  mp_M16_AXI_transactor = NULL;
  mp_M16_AXI_awlock_converter = NULL;
  mp_M16_AXI_arlock_converter = NULL;
  mp_M17_AXI_transactor = NULL;
  mp_M17_AXI_awlock_converter = NULL;
  mp_M17_AXI_arlock_converter = NULL;
  mp_M18_AXI_transactor = NULL;
  mp_M18_AXI_awlock_converter = NULL;
  mp_M18_AXI_arlock_converter = NULL;
  mp_M19_AXI_transactor = NULL;
  mp_M19_AXI_awlock_converter = NULL;
  mp_M19_AXI_arlock_converter = NULL;
  mp_M20_AXI_transactor = NULL;
  mp_M20_AXI_awlock_converter = NULL;
  mp_M20_AXI_arlock_converter = NULL;
  mp_M21_AXI_transactor = NULL;
  mp_M21_AXI_awlock_converter = NULL;
  mp_M21_AXI_arlock_converter = NULL;
  mp_M22_AXI_transactor = NULL;
  mp_M22_AXI_awlock_converter = NULL;
  mp_M22_AXI_arlock_converter = NULL;
  mp_M23_AXI_transactor = NULL;
  mp_M23_AXI_awlock_converter = NULL;
  mp_M23_AXI_arlock_converter = NULL;

  // Instantiate Socket Stubs

  // configure S00_AXI_transactor
    xsc::common_cpp::properties S00_AXI_transactor_param_props;
    S00_AXI_transactor_param_props.addLong("DATA_WIDTH", "32");
    S00_AXI_transactor_param_props.addLong("FREQ_HZ", "100000000");
    S00_AXI_transactor_param_props.addLong("ID_WIDTH", "0");
    S00_AXI_transactor_param_props.addLong("ADDR_WIDTH", "32");
    S00_AXI_transactor_param_props.addLong("AWUSER_WIDTH", "0");
    S00_AXI_transactor_param_props.addLong("ARUSER_WIDTH", "0");
    S00_AXI_transactor_param_props.addLong("WUSER_WIDTH", "0");
    S00_AXI_transactor_param_props.addLong("RUSER_WIDTH", "0");
    S00_AXI_transactor_param_props.addLong("BUSER_WIDTH", "0");
    S00_AXI_transactor_param_props.addLong("HAS_BURST", "1");
    S00_AXI_transactor_param_props.addLong("HAS_LOCK", "1");
    S00_AXI_transactor_param_props.addLong("HAS_PROT", "1");
    S00_AXI_transactor_param_props.addLong("HAS_CACHE", "1");
    S00_AXI_transactor_param_props.addLong("HAS_QOS", "1");
    S00_AXI_transactor_param_props.addLong("HAS_REGION", "0");
    S00_AXI_transactor_param_props.addLong("HAS_WSTRB", "1");
    S00_AXI_transactor_param_props.addLong("HAS_BRESP", "1");
    S00_AXI_transactor_param_props.addLong("HAS_RRESP", "1");
    S00_AXI_transactor_param_props.addLong("SUPPORTS_NARROW_BURST", "0");
    S00_AXI_transactor_param_props.addLong("NUM_READ_OUTSTANDING", "2");
    S00_AXI_transactor_param_props.addLong("NUM_WRITE_OUTSTANDING", "2");
    S00_AXI_transactor_param_props.addLong("MAX_BURST_LENGTH", "32");
    S00_AXI_transactor_param_props.addLong("NUM_READ_THREADS", "1");
    S00_AXI_transactor_param_props.addLong("NUM_WRITE_THREADS", "1");
    S00_AXI_transactor_param_props.addLong("RUSER_BITS_PER_BYTE", "0");
    S00_AXI_transactor_param_props.addLong("WUSER_BITS_PER_BYTE", "0");
    S00_AXI_transactor_param_props.addLong("HAS_SIZE", "1");
    S00_AXI_transactor_param_props.addLong("HAS_RESET", "1");
    S00_AXI_transactor_param_props.addFloat("PHASE", "0.0");
    S00_AXI_transactor_param_props.addString("PROTOCOL", "AXI4");
    S00_AXI_transactor_param_props.addString("READ_WRITE_MODE", "READ_WRITE");
    S00_AXI_transactor_param_props.addString("CLK_DOMAIN", "Multi_convo_core_processing_system7_0_0_FCLK_CLK0");

    mp_S00_AXI_transactor = new xtlm::xaximm_pin2xtlm_t<32,32,1,1,1,1,1,1>("S00_AXI_transactor", S00_AXI_transactor_param_props);
  mp_S00_AXI_transactor->AWADDR(S00_AXI_awaddr);
  mp_S00_AXI_transactor->AWLEN(S00_AXI_awlen);
  mp_S00_AXI_transactor->AWSIZE(S00_AXI_awsize);
  mp_S00_AXI_transactor->AWBURST(S00_AXI_awburst);
  mp_S00_AXI_awlock_converter = new xsc::common::vectorN2scalar_converter<1>("S00_AXI_awlock_converter");
  mp_S00_AXI_awlock_converter->vector_in(S00_AXI_awlock);
  mp_S00_AXI_awlock_converter->scalar_out(m_S00_AXI_awlock_converter_signal);
  mp_S00_AXI_transactor->AWLOCK(m_S00_AXI_awlock_converter_signal);
  mp_S00_AXI_transactor->AWCACHE(S00_AXI_awcache);
  mp_S00_AXI_transactor->AWPROT(S00_AXI_awprot);
  mp_S00_AXI_transactor->AWQOS(S00_AXI_awqos);
  mp_S00_AXI_transactor->AWVALID(S00_AXI_awvalid);
  mp_S00_AXI_transactor->AWREADY(S00_AXI_awready);
  mp_S00_AXI_transactor->WDATA(S00_AXI_wdata);
  mp_S00_AXI_transactor->WSTRB(S00_AXI_wstrb);
  mp_S00_AXI_transactor->WLAST(S00_AXI_wlast);
  mp_S00_AXI_transactor->WVALID(S00_AXI_wvalid);
  mp_S00_AXI_transactor->WREADY(S00_AXI_wready);
  mp_S00_AXI_transactor->BRESP(S00_AXI_bresp);
  mp_S00_AXI_transactor->BVALID(S00_AXI_bvalid);
  mp_S00_AXI_transactor->BREADY(S00_AXI_bready);
  mp_S00_AXI_transactor->ARADDR(S00_AXI_araddr);
  mp_S00_AXI_transactor->ARLEN(S00_AXI_arlen);
  mp_S00_AXI_transactor->ARSIZE(S00_AXI_arsize);
  mp_S00_AXI_transactor->ARBURST(S00_AXI_arburst);
  mp_S00_AXI_arlock_converter = new xsc::common::vectorN2scalar_converter<1>("S00_AXI_arlock_converter");
  mp_S00_AXI_arlock_converter->vector_in(S00_AXI_arlock);
  mp_S00_AXI_arlock_converter->scalar_out(m_S00_AXI_arlock_converter_signal);
  mp_S00_AXI_transactor->ARLOCK(m_S00_AXI_arlock_converter_signal);
  mp_S00_AXI_transactor->ARCACHE(S00_AXI_arcache);
  mp_S00_AXI_transactor->ARPROT(S00_AXI_arprot);
  mp_S00_AXI_transactor->ARQOS(S00_AXI_arqos);
  mp_S00_AXI_transactor->ARVALID(S00_AXI_arvalid);
  mp_S00_AXI_transactor->ARREADY(S00_AXI_arready);
  mp_S00_AXI_transactor->RDATA(S00_AXI_rdata);
  mp_S00_AXI_transactor->RRESP(S00_AXI_rresp);
  mp_S00_AXI_transactor->RLAST(S00_AXI_rlast);
  mp_S00_AXI_transactor->RVALID(S00_AXI_rvalid);
  mp_S00_AXI_transactor->RREADY(S00_AXI_rready);
  mp_S00_AXI_transactor->CLK(aclk);
  mp_S00_AXI_transactor->RST(aresetn);
  // configure M00_AXI_transactor
    xsc::common_cpp::properties M00_AXI_transactor_param_props;
    M00_AXI_transactor_param_props.addLong("DATA_WIDTH", "32");
    M00_AXI_transactor_param_props.addLong("FREQ_HZ", "100000000");
    M00_AXI_transactor_param_props.addLong("ID_WIDTH", "0");
    M00_AXI_transactor_param_props.addLong("ADDR_WIDTH", "12");
    M00_AXI_transactor_param_props.addLong("AWUSER_WIDTH", "0");
    M00_AXI_transactor_param_props.addLong("ARUSER_WIDTH", "0");
    M00_AXI_transactor_param_props.addLong("WUSER_WIDTH", "0");
    M00_AXI_transactor_param_props.addLong("RUSER_WIDTH", "0");
    M00_AXI_transactor_param_props.addLong("BUSER_WIDTH", "0");
    M00_AXI_transactor_param_props.addLong("HAS_BURST", "1");
    M00_AXI_transactor_param_props.addLong("HAS_LOCK", "1");
    M00_AXI_transactor_param_props.addLong("HAS_PROT", "1");
    M00_AXI_transactor_param_props.addLong("HAS_CACHE", "1");
    M00_AXI_transactor_param_props.addLong("HAS_QOS", "1");
    M00_AXI_transactor_param_props.addLong("HAS_REGION", "0");
    M00_AXI_transactor_param_props.addLong("HAS_WSTRB", "1");
    M00_AXI_transactor_param_props.addLong("HAS_BRESP", "1");
    M00_AXI_transactor_param_props.addLong("HAS_RRESP", "1");
    M00_AXI_transactor_param_props.addLong("SUPPORTS_NARROW_BURST", "0");
    M00_AXI_transactor_param_props.addLong("NUM_READ_OUTSTANDING", "2");
    M00_AXI_transactor_param_props.addLong("NUM_WRITE_OUTSTANDING", "2");
    M00_AXI_transactor_param_props.addLong("MAX_BURST_LENGTH", "256");
    M00_AXI_transactor_param_props.addLong("NUM_READ_THREADS", "1");
    M00_AXI_transactor_param_props.addLong("NUM_WRITE_THREADS", "1");
    M00_AXI_transactor_param_props.addLong("RUSER_BITS_PER_BYTE", "0");
    M00_AXI_transactor_param_props.addLong("WUSER_BITS_PER_BYTE", "0");
    M00_AXI_transactor_param_props.addLong("HAS_SIZE", "1");
    M00_AXI_transactor_param_props.addLong("HAS_RESET", "1");
    M00_AXI_transactor_param_props.addFloat("PHASE", "0.0");
    M00_AXI_transactor_param_props.addString("PROTOCOL", "AXI4");
    M00_AXI_transactor_param_props.addString("READ_WRITE_MODE", "READ_WRITE");
    M00_AXI_transactor_param_props.addString("CLK_DOMAIN", "Multi_convo_core_processing_system7_0_0_FCLK_CLK0");

    mp_M00_AXI_transactor = new xtlm::xaximm_xtlm2pin_t<32,12,1,1,1,1,1,1>("M00_AXI_transactor", M00_AXI_transactor_param_props);
  mp_M00_AXI_transactor->AWADDR(M00_AXI_awaddr);
  mp_M00_AXI_transactor->AWLEN(M00_AXI_awlen);
  mp_M00_AXI_transactor->AWSIZE(M00_AXI_awsize);
  mp_M00_AXI_transactor->AWBURST(M00_AXI_awburst);
  mp_M00_AXI_awlock_converter = new xsc::common::scalar2vectorN_converter<1>("M00_AXI_awlock_converter");
  mp_M00_AXI_awlock_converter->scalar_in(m_M00_AXI_awlock_converter_signal);
  mp_M00_AXI_awlock_converter->vector_out(M00_AXI_awlock);
  mp_M00_AXI_transactor->AWLOCK(m_M00_AXI_awlock_converter_signal);
  mp_M00_AXI_transactor->AWCACHE(M00_AXI_awcache);
  mp_M00_AXI_transactor->AWPROT(M00_AXI_awprot);
  mp_M00_AXI_transactor->AWQOS(M00_AXI_awqos);
  mp_M00_AXI_transactor->AWVALID(M00_AXI_awvalid);
  mp_M00_AXI_transactor->AWREADY(M00_AXI_awready);
  mp_M00_AXI_transactor->WDATA(M00_AXI_wdata);
  mp_M00_AXI_transactor->WSTRB(M00_AXI_wstrb);
  mp_M00_AXI_transactor->WLAST(M00_AXI_wlast);
  mp_M00_AXI_transactor->WVALID(M00_AXI_wvalid);
  mp_M00_AXI_transactor->WREADY(M00_AXI_wready);
  mp_M00_AXI_transactor->BRESP(M00_AXI_bresp);
  mp_M00_AXI_transactor->BVALID(M00_AXI_bvalid);
  mp_M00_AXI_transactor->BREADY(M00_AXI_bready);
  mp_M00_AXI_transactor->ARADDR(M00_AXI_araddr);
  mp_M00_AXI_transactor->ARLEN(M00_AXI_arlen);
  mp_M00_AXI_transactor->ARSIZE(M00_AXI_arsize);
  mp_M00_AXI_transactor->ARBURST(M00_AXI_arburst);
  mp_M00_AXI_arlock_converter = new xsc::common::scalar2vectorN_converter<1>("M00_AXI_arlock_converter");
  mp_M00_AXI_arlock_converter->scalar_in(m_M00_AXI_arlock_converter_signal);
  mp_M00_AXI_arlock_converter->vector_out(M00_AXI_arlock);
  mp_M00_AXI_transactor->ARLOCK(m_M00_AXI_arlock_converter_signal);
  mp_M00_AXI_transactor->ARCACHE(M00_AXI_arcache);
  mp_M00_AXI_transactor->ARPROT(M00_AXI_arprot);
  mp_M00_AXI_transactor->ARQOS(M00_AXI_arqos);
  mp_M00_AXI_transactor->ARVALID(M00_AXI_arvalid);
  mp_M00_AXI_transactor->ARREADY(M00_AXI_arready);
  mp_M00_AXI_transactor->RDATA(M00_AXI_rdata);
  mp_M00_AXI_transactor->RRESP(M00_AXI_rresp);
  mp_M00_AXI_transactor->RLAST(M00_AXI_rlast);
  mp_M00_AXI_transactor->RVALID(M00_AXI_rvalid);
  mp_M00_AXI_transactor->RREADY(M00_AXI_rready);
  mp_M00_AXI_transactor->CLK(aclk);
  mp_M00_AXI_transactor->RST(aresetn);
  // configure M01_AXI_transactor
    xsc::common_cpp::properties M01_AXI_transactor_param_props;
    M01_AXI_transactor_param_props.addLong("DATA_WIDTH", "32");
    M01_AXI_transactor_param_props.addLong("FREQ_HZ", "100000000");
    M01_AXI_transactor_param_props.addLong("ID_WIDTH", "0");
    M01_AXI_transactor_param_props.addLong("ADDR_WIDTH", "12");
    M01_AXI_transactor_param_props.addLong("AWUSER_WIDTH", "0");
    M01_AXI_transactor_param_props.addLong("ARUSER_WIDTH", "0");
    M01_AXI_transactor_param_props.addLong("WUSER_WIDTH", "0");
    M01_AXI_transactor_param_props.addLong("RUSER_WIDTH", "0");
    M01_AXI_transactor_param_props.addLong("BUSER_WIDTH", "0");
    M01_AXI_transactor_param_props.addLong("HAS_BURST", "1");
    M01_AXI_transactor_param_props.addLong("HAS_LOCK", "1");
    M01_AXI_transactor_param_props.addLong("HAS_PROT", "1");
    M01_AXI_transactor_param_props.addLong("HAS_CACHE", "1");
    M01_AXI_transactor_param_props.addLong("HAS_QOS", "1");
    M01_AXI_transactor_param_props.addLong("HAS_REGION", "0");
    M01_AXI_transactor_param_props.addLong("HAS_WSTRB", "1");
    M01_AXI_transactor_param_props.addLong("HAS_BRESP", "1");
    M01_AXI_transactor_param_props.addLong("HAS_RRESP", "1");
    M01_AXI_transactor_param_props.addLong("SUPPORTS_NARROW_BURST", "0");
    M01_AXI_transactor_param_props.addLong("NUM_READ_OUTSTANDING", "2");
    M01_AXI_transactor_param_props.addLong("NUM_WRITE_OUTSTANDING", "2");
    M01_AXI_transactor_param_props.addLong("MAX_BURST_LENGTH", "256");
    M01_AXI_transactor_param_props.addLong("NUM_READ_THREADS", "1");
    M01_AXI_transactor_param_props.addLong("NUM_WRITE_THREADS", "1");
    M01_AXI_transactor_param_props.addLong("RUSER_BITS_PER_BYTE", "0");
    M01_AXI_transactor_param_props.addLong("WUSER_BITS_PER_BYTE", "0");
    M01_AXI_transactor_param_props.addLong("HAS_SIZE", "1");
    M01_AXI_transactor_param_props.addLong("HAS_RESET", "1");
    M01_AXI_transactor_param_props.addFloat("PHASE", "0.0");
    M01_AXI_transactor_param_props.addString("PROTOCOL", "AXI4");
    M01_AXI_transactor_param_props.addString("READ_WRITE_MODE", "READ_WRITE");
    M01_AXI_transactor_param_props.addString("CLK_DOMAIN", "Multi_convo_core_processing_system7_0_0_FCLK_CLK0");

    mp_M01_AXI_transactor = new xtlm::xaximm_xtlm2pin_t<32,12,1,1,1,1,1,1>("M01_AXI_transactor", M01_AXI_transactor_param_props);
  mp_M01_AXI_transactor->AWADDR(M01_AXI_awaddr);
  mp_M01_AXI_transactor->AWLEN(M01_AXI_awlen);
  mp_M01_AXI_transactor->AWSIZE(M01_AXI_awsize);
  mp_M01_AXI_transactor->AWBURST(M01_AXI_awburst);
  mp_M01_AXI_awlock_converter = new xsc::common::scalar2vectorN_converter<1>("M01_AXI_awlock_converter");
  mp_M01_AXI_awlock_converter->scalar_in(m_M01_AXI_awlock_converter_signal);
  mp_M01_AXI_awlock_converter->vector_out(M01_AXI_awlock);
  mp_M01_AXI_transactor->AWLOCK(m_M01_AXI_awlock_converter_signal);
  mp_M01_AXI_transactor->AWCACHE(M01_AXI_awcache);
  mp_M01_AXI_transactor->AWPROT(M01_AXI_awprot);
  mp_M01_AXI_transactor->AWQOS(M01_AXI_awqos);
  mp_M01_AXI_transactor->AWVALID(M01_AXI_awvalid);
  mp_M01_AXI_transactor->AWREADY(M01_AXI_awready);
  mp_M01_AXI_transactor->WDATA(M01_AXI_wdata);
  mp_M01_AXI_transactor->WSTRB(M01_AXI_wstrb);
  mp_M01_AXI_transactor->WLAST(M01_AXI_wlast);
  mp_M01_AXI_transactor->WVALID(M01_AXI_wvalid);
  mp_M01_AXI_transactor->WREADY(M01_AXI_wready);
  mp_M01_AXI_transactor->BRESP(M01_AXI_bresp);
  mp_M01_AXI_transactor->BVALID(M01_AXI_bvalid);
  mp_M01_AXI_transactor->BREADY(M01_AXI_bready);
  mp_M01_AXI_transactor->ARADDR(M01_AXI_araddr);
  mp_M01_AXI_transactor->ARLEN(M01_AXI_arlen);
  mp_M01_AXI_transactor->ARSIZE(M01_AXI_arsize);
  mp_M01_AXI_transactor->ARBURST(M01_AXI_arburst);
  mp_M01_AXI_arlock_converter = new xsc::common::scalar2vectorN_converter<1>("M01_AXI_arlock_converter");
  mp_M01_AXI_arlock_converter->scalar_in(m_M01_AXI_arlock_converter_signal);
  mp_M01_AXI_arlock_converter->vector_out(M01_AXI_arlock);
  mp_M01_AXI_transactor->ARLOCK(m_M01_AXI_arlock_converter_signal);
  mp_M01_AXI_transactor->ARCACHE(M01_AXI_arcache);
  mp_M01_AXI_transactor->ARPROT(M01_AXI_arprot);
  mp_M01_AXI_transactor->ARQOS(M01_AXI_arqos);
  mp_M01_AXI_transactor->ARVALID(M01_AXI_arvalid);
  mp_M01_AXI_transactor->ARREADY(M01_AXI_arready);
  mp_M01_AXI_transactor->RDATA(M01_AXI_rdata);
  mp_M01_AXI_transactor->RRESP(M01_AXI_rresp);
  mp_M01_AXI_transactor->RLAST(M01_AXI_rlast);
  mp_M01_AXI_transactor->RVALID(M01_AXI_rvalid);
  mp_M01_AXI_transactor->RREADY(M01_AXI_rready);
  mp_M01_AXI_transactor->CLK(aclk);
  mp_M01_AXI_transactor->RST(aresetn);
  // configure M02_AXI_transactor
    xsc::common_cpp::properties M02_AXI_transactor_param_props;
    M02_AXI_transactor_param_props.addLong("DATA_WIDTH", "32");
    M02_AXI_transactor_param_props.addLong("FREQ_HZ", "100000000");
    M02_AXI_transactor_param_props.addLong("ID_WIDTH", "0");
    M02_AXI_transactor_param_props.addLong("ADDR_WIDTH", "12");
    M02_AXI_transactor_param_props.addLong("AWUSER_WIDTH", "0");
    M02_AXI_transactor_param_props.addLong("ARUSER_WIDTH", "0");
    M02_AXI_transactor_param_props.addLong("WUSER_WIDTH", "0");
    M02_AXI_transactor_param_props.addLong("RUSER_WIDTH", "0");
    M02_AXI_transactor_param_props.addLong("BUSER_WIDTH", "0");
    M02_AXI_transactor_param_props.addLong("HAS_BURST", "1");
    M02_AXI_transactor_param_props.addLong("HAS_LOCK", "1");
    M02_AXI_transactor_param_props.addLong("HAS_PROT", "1");
    M02_AXI_transactor_param_props.addLong("HAS_CACHE", "1");
    M02_AXI_transactor_param_props.addLong("HAS_QOS", "1");
    M02_AXI_transactor_param_props.addLong("HAS_REGION", "0");
    M02_AXI_transactor_param_props.addLong("HAS_WSTRB", "1");
    M02_AXI_transactor_param_props.addLong("HAS_BRESP", "1");
    M02_AXI_transactor_param_props.addLong("HAS_RRESP", "1");
    M02_AXI_transactor_param_props.addLong("SUPPORTS_NARROW_BURST", "0");
    M02_AXI_transactor_param_props.addLong("NUM_READ_OUTSTANDING", "2");
    M02_AXI_transactor_param_props.addLong("NUM_WRITE_OUTSTANDING", "2");
    M02_AXI_transactor_param_props.addLong("MAX_BURST_LENGTH", "256");
    M02_AXI_transactor_param_props.addLong("NUM_READ_THREADS", "1");
    M02_AXI_transactor_param_props.addLong("NUM_WRITE_THREADS", "1");
    M02_AXI_transactor_param_props.addLong("RUSER_BITS_PER_BYTE", "0");
    M02_AXI_transactor_param_props.addLong("WUSER_BITS_PER_BYTE", "0");
    M02_AXI_transactor_param_props.addLong("HAS_SIZE", "1");
    M02_AXI_transactor_param_props.addLong("HAS_RESET", "1");
    M02_AXI_transactor_param_props.addFloat("PHASE", "0.0");
    M02_AXI_transactor_param_props.addString("PROTOCOL", "AXI4");
    M02_AXI_transactor_param_props.addString("READ_WRITE_MODE", "READ_WRITE");
    M02_AXI_transactor_param_props.addString("CLK_DOMAIN", "Multi_convo_core_processing_system7_0_0_FCLK_CLK0");

    mp_M02_AXI_transactor = new xtlm::xaximm_xtlm2pin_t<32,12,1,1,1,1,1,1>("M02_AXI_transactor", M02_AXI_transactor_param_props);
  mp_M02_AXI_transactor->AWADDR(M02_AXI_awaddr);
  mp_M02_AXI_transactor->AWLEN(M02_AXI_awlen);
  mp_M02_AXI_transactor->AWSIZE(M02_AXI_awsize);
  mp_M02_AXI_transactor->AWBURST(M02_AXI_awburst);
  mp_M02_AXI_awlock_converter = new xsc::common::scalar2vectorN_converter<1>("M02_AXI_awlock_converter");
  mp_M02_AXI_awlock_converter->scalar_in(m_M02_AXI_awlock_converter_signal);
  mp_M02_AXI_awlock_converter->vector_out(M02_AXI_awlock);
  mp_M02_AXI_transactor->AWLOCK(m_M02_AXI_awlock_converter_signal);
  mp_M02_AXI_transactor->AWCACHE(M02_AXI_awcache);
  mp_M02_AXI_transactor->AWPROT(M02_AXI_awprot);
  mp_M02_AXI_transactor->AWQOS(M02_AXI_awqos);
  mp_M02_AXI_transactor->AWVALID(M02_AXI_awvalid);
  mp_M02_AXI_transactor->AWREADY(M02_AXI_awready);
  mp_M02_AXI_transactor->WDATA(M02_AXI_wdata);
  mp_M02_AXI_transactor->WSTRB(M02_AXI_wstrb);
  mp_M02_AXI_transactor->WLAST(M02_AXI_wlast);
  mp_M02_AXI_transactor->WVALID(M02_AXI_wvalid);
  mp_M02_AXI_transactor->WREADY(M02_AXI_wready);
  mp_M02_AXI_transactor->BRESP(M02_AXI_bresp);
  mp_M02_AXI_transactor->BVALID(M02_AXI_bvalid);
  mp_M02_AXI_transactor->BREADY(M02_AXI_bready);
  mp_M02_AXI_transactor->ARADDR(M02_AXI_araddr);
  mp_M02_AXI_transactor->ARLEN(M02_AXI_arlen);
  mp_M02_AXI_transactor->ARSIZE(M02_AXI_arsize);
  mp_M02_AXI_transactor->ARBURST(M02_AXI_arburst);
  mp_M02_AXI_arlock_converter = new xsc::common::scalar2vectorN_converter<1>("M02_AXI_arlock_converter");
  mp_M02_AXI_arlock_converter->scalar_in(m_M02_AXI_arlock_converter_signal);
  mp_M02_AXI_arlock_converter->vector_out(M02_AXI_arlock);
  mp_M02_AXI_transactor->ARLOCK(m_M02_AXI_arlock_converter_signal);
  mp_M02_AXI_transactor->ARCACHE(M02_AXI_arcache);
  mp_M02_AXI_transactor->ARPROT(M02_AXI_arprot);
  mp_M02_AXI_transactor->ARQOS(M02_AXI_arqos);
  mp_M02_AXI_transactor->ARVALID(M02_AXI_arvalid);
  mp_M02_AXI_transactor->ARREADY(M02_AXI_arready);
  mp_M02_AXI_transactor->RDATA(M02_AXI_rdata);
  mp_M02_AXI_transactor->RRESP(M02_AXI_rresp);
  mp_M02_AXI_transactor->RLAST(M02_AXI_rlast);
  mp_M02_AXI_transactor->RVALID(M02_AXI_rvalid);
  mp_M02_AXI_transactor->RREADY(M02_AXI_rready);
  mp_M02_AXI_transactor->CLK(aclk);
  mp_M02_AXI_transactor->RST(aresetn);
  // configure M03_AXI_transactor
    xsc::common_cpp::properties M03_AXI_transactor_param_props;
    M03_AXI_transactor_param_props.addLong("DATA_WIDTH", "32");
    M03_AXI_transactor_param_props.addLong("FREQ_HZ", "100000000");
    M03_AXI_transactor_param_props.addLong("ID_WIDTH", "0");
    M03_AXI_transactor_param_props.addLong("ADDR_WIDTH", "12");
    M03_AXI_transactor_param_props.addLong("AWUSER_WIDTH", "0");
    M03_AXI_transactor_param_props.addLong("ARUSER_WIDTH", "0");
    M03_AXI_transactor_param_props.addLong("WUSER_WIDTH", "0");
    M03_AXI_transactor_param_props.addLong("RUSER_WIDTH", "0");
    M03_AXI_transactor_param_props.addLong("BUSER_WIDTH", "0");
    M03_AXI_transactor_param_props.addLong("HAS_BURST", "1");
    M03_AXI_transactor_param_props.addLong("HAS_LOCK", "1");
    M03_AXI_transactor_param_props.addLong("HAS_PROT", "1");
    M03_AXI_transactor_param_props.addLong("HAS_CACHE", "1");
    M03_AXI_transactor_param_props.addLong("HAS_QOS", "1");
    M03_AXI_transactor_param_props.addLong("HAS_REGION", "0");
    M03_AXI_transactor_param_props.addLong("HAS_WSTRB", "1");
    M03_AXI_transactor_param_props.addLong("HAS_BRESP", "1");
    M03_AXI_transactor_param_props.addLong("HAS_RRESP", "1");
    M03_AXI_transactor_param_props.addLong("SUPPORTS_NARROW_BURST", "0");
    M03_AXI_transactor_param_props.addLong("NUM_READ_OUTSTANDING", "2");
    M03_AXI_transactor_param_props.addLong("NUM_WRITE_OUTSTANDING", "2");
    M03_AXI_transactor_param_props.addLong("MAX_BURST_LENGTH", "256");
    M03_AXI_transactor_param_props.addLong("NUM_READ_THREADS", "1");
    M03_AXI_transactor_param_props.addLong("NUM_WRITE_THREADS", "1");
    M03_AXI_transactor_param_props.addLong("RUSER_BITS_PER_BYTE", "0");
    M03_AXI_transactor_param_props.addLong("WUSER_BITS_PER_BYTE", "0");
    M03_AXI_transactor_param_props.addLong("HAS_SIZE", "1");
    M03_AXI_transactor_param_props.addLong("HAS_RESET", "1");
    M03_AXI_transactor_param_props.addFloat("PHASE", "0.0");
    M03_AXI_transactor_param_props.addString("PROTOCOL", "AXI4");
    M03_AXI_transactor_param_props.addString("READ_WRITE_MODE", "READ_WRITE");
    M03_AXI_transactor_param_props.addString("CLK_DOMAIN", "Multi_convo_core_processing_system7_0_0_FCLK_CLK0");

    mp_M03_AXI_transactor = new xtlm::xaximm_xtlm2pin_t<32,12,1,1,1,1,1,1>("M03_AXI_transactor", M03_AXI_transactor_param_props);
  mp_M03_AXI_transactor->AWADDR(M03_AXI_awaddr);
  mp_M03_AXI_transactor->AWLEN(M03_AXI_awlen);
  mp_M03_AXI_transactor->AWSIZE(M03_AXI_awsize);
  mp_M03_AXI_transactor->AWBURST(M03_AXI_awburst);
  mp_M03_AXI_awlock_converter = new xsc::common::scalar2vectorN_converter<1>("M03_AXI_awlock_converter");
  mp_M03_AXI_awlock_converter->scalar_in(m_M03_AXI_awlock_converter_signal);
  mp_M03_AXI_awlock_converter->vector_out(M03_AXI_awlock);
  mp_M03_AXI_transactor->AWLOCK(m_M03_AXI_awlock_converter_signal);
  mp_M03_AXI_transactor->AWCACHE(M03_AXI_awcache);
  mp_M03_AXI_transactor->AWPROT(M03_AXI_awprot);
  mp_M03_AXI_transactor->AWQOS(M03_AXI_awqos);
  mp_M03_AXI_transactor->AWVALID(M03_AXI_awvalid);
  mp_M03_AXI_transactor->AWREADY(M03_AXI_awready);
  mp_M03_AXI_transactor->WDATA(M03_AXI_wdata);
  mp_M03_AXI_transactor->WSTRB(M03_AXI_wstrb);
  mp_M03_AXI_transactor->WLAST(M03_AXI_wlast);
  mp_M03_AXI_transactor->WVALID(M03_AXI_wvalid);
  mp_M03_AXI_transactor->WREADY(M03_AXI_wready);
  mp_M03_AXI_transactor->BRESP(M03_AXI_bresp);
  mp_M03_AXI_transactor->BVALID(M03_AXI_bvalid);
  mp_M03_AXI_transactor->BREADY(M03_AXI_bready);
  mp_M03_AXI_transactor->ARADDR(M03_AXI_araddr);
  mp_M03_AXI_transactor->ARLEN(M03_AXI_arlen);
  mp_M03_AXI_transactor->ARSIZE(M03_AXI_arsize);
  mp_M03_AXI_transactor->ARBURST(M03_AXI_arburst);
  mp_M03_AXI_arlock_converter = new xsc::common::scalar2vectorN_converter<1>("M03_AXI_arlock_converter");
  mp_M03_AXI_arlock_converter->scalar_in(m_M03_AXI_arlock_converter_signal);
  mp_M03_AXI_arlock_converter->vector_out(M03_AXI_arlock);
  mp_M03_AXI_transactor->ARLOCK(m_M03_AXI_arlock_converter_signal);
  mp_M03_AXI_transactor->ARCACHE(M03_AXI_arcache);
  mp_M03_AXI_transactor->ARPROT(M03_AXI_arprot);
  mp_M03_AXI_transactor->ARQOS(M03_AXI_arqos);
  mp_M03_AXI_transactor->ARVALID(M03_AXI_arvalid);
  mp_M03_AXI_transactor->ARREADY(M03_AXI_arready);
  mp_M03_AXI_transactor->RDATA(M03_AXI_rdata);
  mp_M03_AXI_transactor->RRESP(M03_AXI_rresp);
  mp_M03_AXI_transactor->RLAST(M03_AXI_rlast);
  mp_M03_AXI_transactor->RVALID(M03_AXI_rvalid);
  mp_M03_AXI_transactor->RREADY(M03_AXI_rready);
  mp_M03_AXI_transactor->CLK(aclk);
  mp_M03_AXI_transactor->RST(aresetn);
  // configure M04_AXI_transactor
    xsc::common_cpp::properties M04_AXI_transactor_param_props;
    M04_AXI_transactor_param_props.addLong("DATA_WIDTH", "32");
    M04_AXI_transactor_param_props.addLong("FREQ_HZ", "100000000");
    M04_AXI_transactor_param_props.addLong("ID_WIDTH", "0");
    M04_AXI_transactor_param_props.addLong("ADDR_WIDTH", "12");
    M04_AXI_transactor_param_props.addLong("AWUSER_WIDTH", "0");
    M04_AXI_transactor_param_props.addLong("ARUSER_WIDTH", "0");
    M04_AXI_transactor_param_props.addLong("WUSER_WIDTH", "0");
    M04_AXI_transactor_param_props.addLong("RUSER_WIDTH", "0");
    M04_AXI_transactor_param_props.addLong("BUSER_WIDTH", "0");
    M04_AXI_transactor_param_props.addLong("HAS_BURST", "1");
    M04_AXI_transactor_param_props.addLong("HAS_LOCK", "1");
    M04_AXI_transactor_param_props.addLong("HAS_PROT", "1");
    M04_AXI_transactor_param_props.addLong("HAS_CACHE", "1");
    M04_AXI_transactor_param_props.addLong("HAS_QOS", "1");
    M04_AXI_transactor_param_props.addLong("HAS_REGION", "0");
    M04_AXI_transactor_param_props.addLong("HAS_WSTRB", "1");
    M04_AXI_transactor_param_props.addLong("HAS_BRESP", "1");
    M04_AXI_transactor_param_props.addLong("HAS_RRESP", "1");
    M04_AXI_transactor_param_props.addLong("SUPPORTS_NARROW_BURST", "0");
    M04_AXI_transactor_param_props.addLong("NUM_READ_OUTSTANDING", "2");
    M04_AXI_transactor_param_props.addLong("NUM_WRITE_OUTSTANDING", "2");
    M04_AXI_transactor_param_props.addLong("MAX_BURST_LENGTH", "256");
    M04_AXI_transactor_param_props.addLong("NUM_READ_THREADS", "1");
    M04_AXI_transactor_param_props.addLong("NUM_WRITE_THREADS", "1");
    M04_AXI_transactor_param_props.addLong("RUSER_BITS_PER_BYTE", "0");
    M04_AXI_transactor_param_props.addLong("WUSER_BITS_PER_BYTE", "0");
    M04_AXI_transactor_param_props.addLong("HAS_SIZE", "1");
    M04_AXI_transactor_param_props.addLong("HAS_RESET", "1");
    M04_AXI_transactor_param_props.addFloat("PHASE", "0.0");
    M04_AXI_transactor_param_props.addString("PROTOCOL", "AXI4");
    M04_AXI_transactor_param_props.addString("READ_WRITE_MODE", "READ_WRITE");
    M04_AXI_transactor_param_props.addString("CLK_DOMAIN", "Multi_convo_core_processing_system7_0_0_FCLK_CLK0");

    mp_M04_AXI_transactor = new xtlm::xaximm_xtlm2pin_t<32,12,1,1,1,1,1,1>("M04_AXI_transactor", M04_AXI_transactor_param_props);
  mp_M04_AXI_transactor->AWADDR(M04_AXI_awaddr);
  mp_M04_AXI_transactor->AWLEN(M04_AXI_awlen);
  mp_M04_AXI_transactor->AWSIZE(M04_AXI_awsize);
  mp_M04_AXI_transactor->AWBURST(M04_AXI_awburst);
  mp_M04_AXI_awlock_converter = new xsc::common::scalar2vectorN_converter<1>("M04_AXI_awlock_converter");
  mp_M04_AXI_awlock_converter->scalar_in(m_M04_AXI_awlock_converter_signal);
  mp_M04_AXI_awlock_converter->vector_out(M04_AXI_awlock);
  mp_M04_AXI_transactor->AWLOCK(m_M04_AXI_awlock_converter_signal);
  mp_M04_AXI_transactor->AWCACHE(M04_AXI_awcache);
  mp_M04_AXI_transactor->AWPROT(M04_AXI_awprot);
  mp_M04_AXI_transactor->AWQOS(M04_AXI_awqos);
  mp_M04_AXI_transactor->AWVALID(M04_AXI_awvalid);
  mp_M04_AXI_transactor->AWREADY(M04_AXI_awready);
  mp_M04_AXI_transactor->WDATA(M04_AXI_wdata);
  mp_M04_AXI_transactor->WSTRB(M04_AXI_wstrb);
  mp_M04_AXI_transactor->WLAST(M04_AXI_wlast);
  mp_M04_AXI_transactor->WVALID(M04_AXI_wvalid);
  mp_M04_AXI_transactor->WREADY(M04_AXI_wready);
  mp_M04_AXI_transactor->BRESP(M04_AXI_bresp);
  mp_M04_AXI_transactor->BVALID(M04_AXI_bvalid);
  mp_M04_AXI_transactor->BREADY(M04_AXI_bready);
  mp_M04_AXI_transactor->ARADDR(M04_AXI_araddr);
  mp_M04_AXI_transactor->ARLEN(M04_AXI_arlen);
  mp_M04_AXI_transactor->ARSIZE(M04_AXI_arsize);
  mp_M04_AXI_transactor->ARBURST(M04_AXI_arburst);
  mp_M04_AXI_arlock_converter = new xsc::common::scalar2vectorN_converter<1>("M04_AXI_arlock_converter");
  mp_M04_AXI_arlock_converter->scalar_in(m_M04_AXI_arlock_converter_signal);
  mp_M04_AXI_arlock_converter->vector_out(M04_AXI_arlock);
  mp_M04_AXI_transactor->ARLOCK(m_M04_AXI_arlock_converter_signal);
  mp_M04_AXI_transactor->ARCACHE(M04_AXI_arcache);
  mp_M04_AXI_transactor->ARPROT(M04_AXI_arprot);
  mp_M04_AXI_transactor->ARQOS(M04_AXI_arqos);
  mp_M04_AXI_transactor->ARVALID(M04_AXI_arvalid);
  mp_M04_AXI_transactor->ARREADY(M04_AXI_arready);
  mp_M04_AXI_transactor->RDATA(M04_AXI_rdata);
  mp_M04_AXI_transactor->RRESP(M04_AXI_rresp);
  mp_M04_AXI_transactor->RLAST(M04_AXI_rlast);
  mp_M04_AXI_transactor->RVALID(M04_AXI_rvalid);
  mp_M04_AXI_transactor->RREADY(M04_AXI_rready);
  mp_M04_AXI_transactor->CLK(aclk);
  mp_M04_AXI_transactor->RST(aresetn);
  // configure M05_AXI_transactor
    xsc::common_cpp::properties M05_AXI_transactor_param_props;
    M05_AXI_transactor_param_props.addLong("DATA_WIDTH", "32");
    M05_AXI_transactor_param_props.addLong("FREQ_HZ", "100000000");
    M05_AXI_transactor_param_props.addLong("ID_WIDTH", "0");
    M05_AXI_transactor_param_props.addLong("ADDR_WIDTH", "12");
    M05_AXI_transactor_param_props.addLong("AWUSER_WIDTH", "0");
    M05_AXI_transactor_param_props.addLong("ARUSER_WIDTH", "0");
    M05_AXI_transactor_param_props.addLong("WUSER_WIDTH", "0");
    M05_AXI_transactor_param_props.addLong("RUSER_WIDTH", "0");
    M05_AXI_transactor_param_props.addLong("BUSER_WIDTH", "0");
    M05_AXI_transactor_param_props.addLong("HAS_BURST", "1");
    M05_AXI_transactor_param_props.addLong("HAS_LOCK", "1");
    M05_AXI_transactor_param_props.addLong("HAS_PROT", "1");
    M05_AXI_transactor_param_props.addLong("HAS_CACHE", "1");
    M05_AXI_transactor_param_props.addLong("HAS_QOS", "1");
    M05_AXI_transactor_param_props.addLong("HAS_REGION", "0");
    M05_AXI_transactor_param_props.addLong("HAS_WSTRB", "1");
    M05_AXI_transactor_param_props.addLong("HAS_BRESP", "1");
    M05_AXI_transactor_param_props.addLong("HAS_RRESP", "1");
    M05_AXI_transactor_param_props.addLong("SUPPORTS_NARROW_BURST", "0");
    M05_AXI_transactor_param_props.addLong("NUM_READ_OUTSTANDING", "2");
    M05_AXI_transactor_param_props.addLong("NUM_WRITE_OUTSTANDING", "2");
    M05_AXI_transactor_param_props.addLong("MAX_BURST_LENGTH", "256");
    M05_AXI_transactor_param_props.addLong("NUM_READ_THREADS", "1");
    M05_AXI_transactor_param_props.addLong("NUM_WRITE_THREADS", "1");
    M05_AXI_transactor_param_props.addLong("RUSER_BITS_PER_BYTE", "0");
    M05_AXI_transactor_param_props.addLong("WUSER_BITS_PER_BYTE", "0");
    M05_AXI_transactor_param_props.addLong("HAS_SIZE", "1");
    M05_AXI_transactor_param_props.addLong("HAS_RESET", "1");
    M05_AXI_transactor_param_props.addFloat("PHASE", "0.0");
    M05_AXI_transactor_param_props.addString("PROTOCOL", "AXI4");
    M05_AXI_transactor_param_props.addString("READ_WRITE_MODE", "READ_WRITE");
    M05_AXI_transactor_param_props.addString("CLK_DOMAIN", "Multi_convo_core_processing_system7_0_0_FCLK_CLK0");

    mp_M05_AXI_transactor = new xtlm::xaximm_xtlm2pin_t<32,12,1,1,1,1,1,1>("M05_AXI_transactor", M05_AXI_transactor_param_props);
  mp_M05_AXI_transactor->AWADDR(M05_AXI_awaddr);
  mp_M05_AXI_transactor->AWLEN(M05_AXI_awlen);
  mp_M05_AXI_transactor->AWSIZE(M05_AXI_awsize);
  mp_M05_AXI_transactor->AWBURST(M05_AXI_awburst);
  mp_M05_AXI_awlock_converter = new xsc::common::scalar2vectorN_converter<1>("M05_AXI_awlock_converter");
  mp_M05_AXI_awlock_converter->scalar_in(m_M05_AXI_awlock_converter_signal);
  mp_M05_AXI_awlock_converter->vector_out(M05_AXI_awlock);
  mp_M05_AXI_transactor->AWLOCK(m_M05_AXI_awlock_converter_signal);
  mp_M05_AXI_transactor->AWCACHE(M05_AXI_awcache);
  mp_M05_AXI_transactor->AWPROT(M05_AXI_awprot);
  mp_M05_AXI_transactor->AWQOS(M05_AXI_awqos);
  mp_M05_AXI_transactor->AWVALID(M05_AXI_awvalid);
  mp_M05_AXI_transactor->AWREADY(M05_AXI_awready);
  mp_M05_AXI_transactor->WDATA(M05_AXI_wdata);
  mp_M05_AXI_transactor->WSTRB(M05_AXI_wstrb);
  mp_M05_AXI_transactor->WLAST(M05_AXI_wlast);
  mp_M05_AXI_transactor->WVALID(M05_AXI_wvalid);
  mp_M05_AXI_transactor->WREADY(M05_AXI_wready);
  mp_M05_AXI_transactor->BRESP(M05_AXI_bresp);
  mp_M05_AXI_transactor->BVALID(M05_AXI_bvalid);
  mp_M05_AXI_transactor->BREADY(M05_AXI_bready);
  mp_M05_AXI_transactor->ARADDR(M05_AXI_araddr);
  mp_M05_AXI_transactor->ARLEN(M05_AXI_arlen);
  mp_M05_AXI_transactor->ARSIZE(M05_AXI_arsize);
  mp_M05_AXI_transactor->ARBURST(M05_AXI_arburst);
  mp_M05_AXI_arlock_converter = new xsc::common::scalar2vectorN_converter<1>("M05_AXI_arlock_converter");
  mp_M05_AXI_arlock_converter->scalar_in(m_M05_AXI_arlock_converter_signal);
  mp_M05_AXI_arlock_converter->vector_out(M05_AXI_arlock);
  mp_M05_AXI_transactor->ARLOCK(m_M05_AXI_arlock_converter_signal);
  mp_M05_AXI_transactor->ARCACHE(M05_AXI_arcache);
  mp_M05_AXI_transactor->ARPROT(M05_AXI_arprot);
  mp_M05_AXI_transactor->ARQOS(M05_AXI_arqos);
  mp_M05_AXI_transactor->ARVALID(M05_AXI_arvalid);
  mp_M05_AXI_transactor->ARREADY(M05_AXI_arready);
  mp_M05_AXI_transactor->RDATA(M05_AXI_rdata);
  mp_M05_AXI_transactor->RRESP(M05_AXI_rresp);
  mp_M05_AXI_transactor->RLAST(M05_AXI_rlast);
  mp_M05_AXI_transactor->RVALID(M05_AXI_rvalid);
  mp_M05_AXI_transactor->RREADY(M05_AXI_rready);
  mp_M05_AXI_transactor->CLK(aclk);
  mp_M05_AXI_transactor->RST(aresetn);
  // configure M06_AXI_transactor
    xsc::common_cpp::properties M06_AXI_transactor_param_props;
    M06_AXI_transactor_param_props.addLong("DATA_WIDTH", "32");
    M06_AXI_transactor_param_props.addLong("FREQ_HZ", "100000000");
    M06_AXI_transactor_param_props.addLong("ID_WIDTH", "0");
    M06_AXI_transactor_param_props.addLong("ADDR_WIDTH", "12");
    M06_AXI_transactor_param_props.addLong("AWUSER_WIDTH", "0");
    M06_AXI_transactor_param_props.addLong("ARUSER_WIDTH", "0");
    M06_AXI_transactor_param_props.addLong("WUSER_WIDTH", "0");
    M06_AXI_transactor_param_props.addLong("RUSER_WIDTH", "0");
    M06_AXI_transactor_param_props.addLong("BUSER_WIDTH", "0");
    M06_AXI_transactor_param_props.addLong("HAS_BURST", "1");
    M06_AXI_transactor_param_props.addLong("HAS_LOCK", "1");
    M06_AXI_transactor_param_props.addLong("HAS_PROT", "1");
    M06_AXI_transactor_param_props.addLong("HAS_CACHE", "1");
    M06_AXI_transactor_param_props.addLong("HAS_QOS", "1");
    M06_AXI_transactor_param_props.addLong("HAS_REGION", "0");
    M06_AXI_transactor_param_props.addLong("HAS_WSTRB", "1");
    M06_AXI_transactor_param_props.addLong("HAS_BRESP", "1");
    M06_AXI_transactor_param_props.addLong("HAS_RRESP", "1");
    M06_AXI_transactor_param_props.addLong("SUPPORTS_NARROW_BURST", "0");
    M06_AXI_transactor_param_props.addLong("NUM_READ_OUTSTANDING", "2");
    M06_AXI_transactor_param_props.addLong("NUM_WRITE_OUTSTANDING", "2");
    M06_AXI_transactor_param_props.addLong("MAX_BURST_LENGTH", "256");
    M06_AXI_transactor_param_props.addLong("NUM_READ_THREADS", "1");
    M06_AXI_transactor_param_props.addLong("NUM_WRITE_THREADS", "1");
    M06_AXI_transactor_param_props.addLong("RUSER_BITS_PER_BYTE", "0");
    M06_AXI_transactor_param_props.addLong("WUSER_BITS_PER_BYTE", "0");
    M06_AXI_transactor_param_props.addLong("HAS_SIZE", "1");
    M06_AXI_transactor_param_props.addLong("HAS_RESET", "1");
    M06_AXI_transactor_param_props.addFloat("PHASE", "0.0");
    M06_AXI_transactor_param_props.addString("PROTOCOL", "AXI4");
    M06_AXI_transactor_param_props.addString("READ_WRITE_MODE", "READ_WRITE");
    M06_AXI_transactor_param_props.addString("CLK_DOMAIN", "Multi_convo_core_processing_system7_0_0_FCLK_CLK0");

    mp_M06_AXI_transactor = new xtlm::xaximm_xtlm2pin_t<32,12,1,1,1,1,1,1>("M06_AXI_transactor", M06_AXI_transactor_param_props);
  mp_M06_AXI_transactor->AWADDR(M06_AXI_awaddr);
  mp_M06_AXI_transactor->AWLEN(M06_AXI_awlen);
  mp_M06_AXI_transactor->AWSIZE(M06_AXI_awsize);
  mp_M06_AXI_transactor->AWBURST(M06_AXI_awburst);
  mp_M06_AXI_awlock_converter = new xsc::common::scalar2vectorN_converter<1>("M06_AXI_awlock_converter");
  mp_M06_AXI_awlock_converter->scalar_in(m_M06_AXI_awlock_converter_signal);
  mp_M06_AXI_awlock_converter->vector_out(M06_AXI_awlock);
  mp_M06_AXI_transactor->AWLOCK(m_M06_AXI_awlock_converter_signal);
  mp_M06_AXI_transactor->AWCACHE(M06_AXI_awcache);
  mp_M06_AXI_transactor->AWPROT(M06_AXI_awprot);
  mp_M06_AXI_transactor->AWQOS(M06_AXI_awqos);
  mp_M06_AXI_transactor->AWVALID(M06_AXI_awvalid);
  mp_M06_AXI_transactor->AWREADY(M06_AXI_awready);
  mp_M06_AXI_transactor->WDATA(M06_AXI_wdata);
  mp_M06_AXI_transactor->WSTRB(M06_AXI_wstrb);
  mp_M06_AXI_transactor->WLAST(M06_AXI_wlast);
  mp_M06_AXI_transactor->WVALID(M06_AXI_wvalid);
  mp_M06_AXI_transactor->WREADY(M06_AXI_wready);
  mp_M06_AXI_transactor->BRESP(M06_AXI_bresp);
  mp_M06_AXI_transactor->BVALID(M06_AXI_bvalid);
  mp_M06_AXI_transactor->BREADY(M06_AXI_bready);
  mp_M06_AXI_transactor->ARADDR(M06_AXI_araddr);
  mp_M06_AXI_transactor->ARLEN(M06_AXI_arlen);
  mp_M06_AXI_transactor->ARSIZE(M06_AXI_arsize);
  mp_M06_AXI_transactor->ARBURST(M06_AXI_arburst);
  mp_M06_AXI_arlock_converter = new xsc::common::scalar2vectorN_converter<1>("M06_AXI_arlock_converter");
  mp_M06_AXI_arlock_converter->scalar_in(m_M06_AXI_arlock_converter_signal);
  mp_M06_AXI_arlock_converter->vector_out(M06_AXI_arlock);
  mp_M06_AXI_transactor->ARLOCK(m_M06_AXI_arlock_converter_signal);
  mp_M06_AXI_transactor->ARCACHE(M06_AXI_arcache);
  mp_M06_AXI_transactor->ARPROT(M06_AXI_arprot);
  mp_M06_AXI_transactor->ARQOS(M06_AXI_arqos);
  mp_M06_AXI_transactor->ARVALID(M06_AXI_arvalid);
  mp_M06_AXI_transactor->ARREADY(M06_AXI_arready);
  mp_M06_AXI_transactor->RDATA(M06_AXI_rdata);
  mp_M06_AXI_transactor->RRESP(M06_AXI_rresp);
  mp_M06_AXI_transactor->RLAST(M06_AXI_rlast);
  mp_M06_AXI_transactor->RVALID(M06_AXI_rvalid);
  mp_M06_AXI_transactor->RREADY(M06_AXI_rready);
  mp_M06_AXI_transactor->CLK(aclk);
  mp_M06_AXI_transactor->RST(aresetn);
  // configure M07_AXI_transactor
    xsc::common_cpp::properties M07_AXI_transactor_param_props;
    M07_AXI_transactor_param_props.addLong("DATA_WIDTH", "32");
    M07_AXI_transactor_param_props.addLong("FREQ_HZ", "100000000");
    M07_AXI_transactor_param_props.addLong("ID_WIDTH", "0");
    M07_AXI_transactor_param_props.addLong("ADDR_WIDTH", "12");
    M07_AXI_transactor_param_props.addLong("AWUSER_WIDTH", "0");
    M07_AXI_transactor_param_props.addLong("ARUSER_WIDTH", "0");
    M07_AXI_transactor_param_props.addLong("WUSER_WIDTH", "0");
    M07_AXI_transactor_param_props.addLong("RUSER_WIDTH", "0");
    M07_AXI_transactor_param_props.addLong("BUSER_WIDTH", "0");
    M07_AXI_transactor_param_props.addLong("HAS_BURST", "1");
    M07_AXI_transactor_param_props.addLong("HAS_LOCK", "1");
    M07_AXI_transactor_param_props.addLong("HAS_PROT", "1");
    M07_AXI_transactor_param_props.addLong("HAS_CACHE", "1");
    M07_AXI_transactor_param_props.addLong("HAS_QOS", "1");
    M07_AXI_transactor_param_props.addLong("HAS_REGION", "0");
    M07_AXI_transactor_param_props.addLong("HAS_WSTRB", "1");
    M07_AXI_transactor_param_props.addLong("HAS_BRESP", "1");
    M07_AXI_transactor_param_props.addLong("HAS_RRESP", "1");
    M07_AXI_transactor_param_props.addLong("SUPPORTS_NARROW_BURST", "0");
    M07_AXI_transactor_param_props.addLong("NUM_READ_OUTSTANDING", "2");
    M07_AXI_transactor_param_props.addLong("NUM_WRITE_OUTSTANDING", "2");
    M07_AXI_transactor_param_props.addLong("MAX_BURST_LENGTH", "256");
    M07_AXI_transactor_param_props.addLong("NUM_READ_THREADS", "1");
    M07_AXI_transactor_param_props.addLong("NUM_WRITE_THREADS", "1");
    M07_AXI_transactor_param_props.addLong("RUSER_BITS_PER_BYTE", "0");
    M07_AXI_transactor_param_props.addLong("WUSER_BITS_PER_BYTE", "0");
    M07_AXI_transactor_param_props.addLong("HAS_SIZE", "1");
    M07_AXI_transactor_param_props.addLong("HAS_RESET", "1");
    M07_AXI_transactor_param_props.addFloat("PHASE", "0.0");
    M07_AXI_transactor_param_props.addString("PROTOCOL", "AXI4");
    M07_AXI_transactor_param_props.addString("READ_WRITE_MODE", "READ_WRITE");
    M07_AXI_transactor_param_props.addString("CLK_DOMAIN", "Multi_convo_core_processing_system7_0_0_FCLK_CLK0");

    mp_M07_AXI_transactor = new xtlm::xaximm_xtlm2pin_t<32,12,1,1,1,1,1,1>("M07_AXI_transactor", M07_AXI_transactor_param_props);
  mp_M07_AXI_transactor->AWADDR(M07_AXI_awaddr);
  mp_M07_AXI_transactor->AWLEN(M07_AXI_awlen);
  mp_M07_AXI_transactor->AWSIZE(M07_AXI_awsize);
  mp_M07_AXI_transactor->AWBURST(M07_AXI_awburst);
  mp_M07_AXI_awlock_converter = new xsc::common::scalar2vectorN_converter<1>("M07_AXI_awlock_converter");
  mp_M07_AXI_awlock_converter->scalar_in(m_M07_AXI_awlock_converter_signal);
  mp_M07_AXI_awlock_converter->vector_out(M07_AXI_awlock);
  mp_M07_AXI_transactor->AWLOCK(m_M07_AXI_awlock_converter_signal);
  mp_M07_AXI_transactor->AWCACHE(M07_AXI_awcache);
  mp_M07_AXI_transactor->AWPROT(M07_AXI_awprot);
  mp_M07_AXI_transactor->AWQOS(M07_AXI_awqos);
  mp_M07_AXI_transactor->AWVALID(M07_AXI_awvalid);
  mp_M07_AXI_transactor->AWREADY(M07_AXI_awready);
  mp_M07_AXI_transactor->WDATA(M07_AXI_wdata);
  mp_M07_AXI_transactor->WSTRB(M07_AXI_wstrb);
  mp_M07_AXI_transactor->WLAST(M07_AXI_wlast);
  mp_M07_AXI_transactor->WVALID(M07_AXI_wvalid);
  mp_M07_AXI_transactor->WREADY(M07_AXI_wready);
  mp_M07_AXI_transactor->BRESP(M07_AXI_bresp);
  mp_M07_AXI_transactor->BVALID(M07_AXI_bvalid);
  mp_M07_AXI_transactor->BREADY(M07_AXI_bready);
  mp_M07_AXI_transactor->ARADDR(M07_AXI_araddr);
  mp_M07_AXI_transactor->ARLEN(M07_AXI_arlen);
  mp_M07_AXI_transactor->ARSIZE(M07_AXI_arsize);
  mp_M07_AXI_transactor->ARBURST(M07_AXI_arburst);
  mp_M07_AXI_arlock_converter = new xsc::common::scalar2vectorN_converter<1>("M07_AXI_arlock_converter");
  mp_M07_AXI_arlock_converter->scalar_in(m_M07_AXI_arlock_converter_signal);
  mp_M07_AXI_arlock_converter->vector_out(M07_AXI_arlock);
  mp_M07_AXI_transactor->ARLOCK(m_M07_AXI_arlock_converter_signal);
  mp_M07_AXI_transactor->ARCACHE(M07_AXI_arcache);
  mp_M07_AXI_transactor->ARPROT(M07_AXI_arprot);
  mp_M07_AXI_transactor->ARQOS(M07_AXI_arqos);
  mp_M07_AXI_transactor->ARVALID(M07_AXI_arvalid);
  mp_M07_AXI_transactor->ARREADY(M07_AXI_arready);
  mp_M07_AXI_transactor->RDATA(M07_AXI_rdata);
  mp_M07_AXI_transactor->RRESP(M07_AXI_rresp);
  mp_M07_AXI_transactor->RLAST(M07_AXI_rlast);
  mp_M07_AXI_transactor->RVALID(M07_AXI_rvalid);
  mp_M07_AXI_transactor->RREADY(M07_AXI_rready);
  mp_M07_AXI_transactor->CLK(aclk);
  mp_M07_AXI_transactor->RST(aresetn);
  // configure M08_AXI_transactor
    xsc::common_cpp::properties M08_AXI_transactor_param_props;
    M08_AXI_transactor_param_props.addLong("DATA_WIDTH", "32");
    M08_AXI_transactor_param_props.addLong("FREQ_HZ", "100000000");
    M08_AXI_transactor_param_props.addLong("ID_WIDTH", "0");
    M08_AXI_transactor_param_props.addLong("ADDR_WIDTH", "12");
    M08_AXI_transactor_param_props.addLong("AWUSER_WIDTH", "0");
    M08_AXI_transactor_param_props.addLong("ARUSER_WIDTH", "0");
    M08_AXI_transactor_param_props.addLong("WUSER_WIDTH", "0");
    M08_AXI_transactor_param_props.addLong("RUSER_WIDTH", "0");
    M08_AXI_transactor_param_props.addLong("BUSER_WIDTH", "0");
    M08_AXI_transactor_param_props.addLong("HAS_BURST", "1");
    M08_AXI_transactor_param_props.addLong("HAS_LOCK", "1");
    M08_AXI_transactor_param_props.addLong("HAS_PROT", "1");
    M08_AXI_transactor_param_props.addLong("HAS_CACHE", "1");
    M08_AXI_transactor_param_props.addLong("HAS_QOS", "1");
    M08_AXI_transactor_param_props.addLong("HAS_REGION", "0");
    M08_AXI_transactor_param_props.addLong("HAS_WSTRB", "1");
    M08_AXI_transactor_param_props.addLong("HAS_BRESP", "1");
    M08_AXI_transactor_param_props.addLong("HAS_RRESP", "1");
    M08_AXI_transactor_param_props.addLong("SUPPORTS_NARROW_BURST", "0");
    M08_AXI_transactor_param_props.addLong("NUM_READ_OUTSTANDING", "2");
    M08_AXI_transactor_param_props.addLong("NUM_WRITE_OUTSTANDING", "2");
    M08_AXI_transactor_param_props.addLong("MAX_BURST_LENGTH", "256");
    M08_AXI_transactor_param_props.addLong("NUM_READ_THREADS", "1");
    M08_AXI_transactor_param_props.addLong("NUM_WRITE_THREADS", "1");
    M08_AXI_transactor_param_props.addLong("RUSER_BITS_PER_BYTE", "0");
    M08_AXI_transactor_param_props.addLong("WUSER_BITS_PER_BYTE", "0");
    M08_AXI_transactor_param_props.addLong("HAS_SIZE", "1");
    M08_AXI_transactor_param_props.addLong("HAS_RESET", "1");
    M08_AXI_transactor_param_props.addFloat("PHASE", "0.0");
    M08_AXI_transactor_param_props.addString("PROTOCOL", "AXI4");
    M08_AXI_transactor_param_props.addString("READ_WRITE_MODE", "READ_WRITE");
    M08_AXI_transactor_param_props.addString("CLK_DOMAIN", "Multi_convo_core_processing_system7_0_0_FCLK_CLK0");

    mp_M08_AXI_transactor = new xtlm::xaximm_xtlm2pin_t<32,12,1,1,1,1,1,1>("M08_AXI_transactor", M08_AXI_transactor_param_props);
  mp_M08_AXI_transactor->AWADDR(M08_AXI_awaddr);
  mp_M08_AXI_transactor->AWLEN(M08_AXI_awlen);
  mp_M08_AXI_transactor->AWSIZE(M08_AXI_awsize);
  mp_M08_AXI_transactor->AWBURST(M08_AXI_awburst);
  mp_M08_AXI_awlock_converter = new xsc::common::scalar2vectorN_converter<1>("M08_AXI_awlock_converter");
  mp_M08_AXI_awlock_converter->scalar_in(m_M08_AXI_awlock_converter_signal);
  mp_M08_AXI_awlock_converter->vector_out(M08_AXI_awlock);
  mp_M08_AXI_transactor->AWLOCK(m_M08_AXI_awlock_converter_signal);
  mp_M08_AXI_transactor->AWCACHE(M08_AXI_awcache);
  mp_M08_AXI_transactor->AWPROT(M08_AXI_awprot);
  mp_M08_AXI_transactor->AWQOS(M08_AXI_awqos);
  mp_M08_AXI_transactor->AWVALID(M08_AXI_awvalid);
  mp_M08_AXI_transactor->AWREADY(M08_AXI_awready);
  mp_M08_AXI_transactor->WDATA(M08_AXI_wdata);
  mp_M08_AXI_transactor->WSTRB(M08_AXI_wstrb);
  mp_M08_AXI_transactor->WLAST(M08_AXI_wlast);
  mp_M08_AXI_transactor->WVALID(M08_AXI_wvalid);
  mp_M08_AXI_transactor->WREADY(M08_AXI_wready);
  mp_M08_AXI_transactor->BRESP(M08_AXI_bresp);
  mp_M08_AXI_transactor->BVALID(M08_AXI_bvalid);
  mp_M08_AXI_transactor->BREADY(M08_AXI_bready);
  mp_M08_AXI_transactor->ARADDR(M08_AXI_araddr);
  mp_M08_AXI_transactor->ARLEN(M08_AXI_arlen);
  mp_M08_AXI_transactor->ARSIZE(M08_AXI_arsize);
  mp_M08_AXI_transactor->ARBURST(M08_AXI_arburst);
  mp_M08_AXI_arlock_converter = new xsc::common::scalar2vectorN_converter<1>("M08_AXI_arlock_converter");
  mp_M08_AXI_arlock_converter->scalar_in(m_M08_AXI_arlock_converter_signal);
  mp_M08_AXI_arlock_converter->vector_out(M08_AXI_arlock);
  mp_M08_AXI_transactor->ARLOCK(m_M08_AXI_arlock_converter_signal);
  mp_M08_AXI_transactor->ARCACHE(M08_AXI_arcache);
  mp_M08_AXI_transactor->ARPROT(M08_AXI_arprot);
  mp_M08_AXI_transactor->ARQOS(M08_AXI_arqos);
  mp_M08_AXI_transactor->ARVALID(M08_AXI_arvalid);
  mp_M08_AXI_transactor->ARREADY(M08_AXI_arready);
  mp_M08_AXI_transactor->RDATA(M08_AXI_rdata);
  mp_M08_AXI_transactor->RRESP(M08_AXI_rresp);
  mp_M08_AXI_transactor->RLAST(M08_AXI_rlast);
  mp_M08_AXI_transactor->RVALID(M08_AXI_rvalid);
  mp_M08_AXI_transactor->RREADY(M08_AXI_rready);
  mp_M08_AXI_transactor->CLK(aclk);
  mp_M08_AXI_transactor->RST(aresetn);
  // configure M09_AXI_transactor
    xsc::common_cpp::properties M09_AXI_transactor_param_props;
    M09_AXI_transactor_param_props.addLong("DATA_WIDTH", "32");
    M09_AXI_transactor_param_props.addLong("FREQ_HZ", "100000000");
    M09_AXI_transactor_param_props.addLong("ID_WIDTH", "0");
    M09_AXI_transactor_param_props.addLong("ADDR_WIDTH", "12");
    M09_AXI_transactor_param_props.addLong("AWUSER_WIDTH", "0");
    M09_AXI_transactor_param_props.addLong("ARUSER_WIDTH", "0");
    M09_AXI_transactor_param_props.addLong("WUSER_WIDTH", "0");
    M09_AXI_transactor_param_props.addLong("RUSER_WIDTH", "0");
    M09_AXI_transactor_param_props.addLong("BUSER_WIDTH", "0");
    M09_AXI_transactor_param_props.addLong("HAS_BURST", "1");
    M09_AXI_transactor_param_props.addLong("HAS_LOCK", "1");
    M09_AXI_transactor_param_props.addLong("HAS_PROT", "1");
    M09_AXI_transactor_param_props.addLong("HAS_CACHE", "1");
    M09_AXI_transactor_param_props.addLong("HAS_QOS", "1");
    M09_AXI_transactor_param_props.addLong("HAS_REGION", "0");
    M09_AXI_transactor_param_props.addLong("HAS_WSTRB", "1");
    M09_AXI_transactor_param_props.addLong("HAS_BRESP", "1");
    M09_AXI_transactor_param_props.addLong("HAS_RRESP", "1");
    M09_AXI_transactor_param_props.addLong("SUPPORTS_NARROW_BURST", "0");
    M09_AXI_transactor_param_props.addLong("NUM_READ_OUTSTANDING", "2");
    M09_AXI_transactor_param_props.addLong("NUM_WRITE_OUTSTANDING", "2");
    M09_AXI_transactor_param_props.addLong("MAX_BURST_LENGTH", "256");
    M09_AXI_transactor_param_props.addLong("NUM_READ_THREADS", "1");
    M09_AXI_transactor_param_props.addLong("NUM_WRITE_THREADS", "1");
    M09_AXI_transactor_param_props.addLong("RUSER_BITS_PER_BYTE", "0");
    M09_AXI_transactor_param_props.addLong("WUSER_BITS_PER_BYTE", "0");
    M09_AXI_transactor_param_props.addLong("HAS_SIZE", "1");
    M09_AXI_transactor_param_props.addLong("HAS_RESET", "1");
    M09_AXI_transactor_param_props.addFloat("PHASE", "0.0");
    M09_AXI_transactor_param_props.addString("PROTOCOL", "AXI4");
    M09_AXI_transactor_param_props.addString("READ_WRITE_MODE", "READ_WRITE");
    M09_AXI_transactor_param_props.addString("CLK_DOMAIN", "Multi_convo_core_processing_system7_0_0_FCLK_CLK0");

    mp_M09_AXI_transactor = new xtlm::xaximm_xtlm2pin_t<32,12,1,1,1,1,1,1>("M09_AXI_transactor", M09_AXI_transactor_param_props);
  mp_M09_AXI_transactor->AWADDR(M09_AXI_awaddr);
  mp_M09_AXI_transactor->AWLEN(M09_AXI_awlen);
  mp_M09_AXI_transactor->AWSIZE(M09_AXI_awsize);
  mp_M09_AXI_transactor->AWBURST(M09_AXI_awburst);
  mp_M09_AXI_awlock_converter = new xsc::common::scalar2vectorN_converter<1>("M09_AXI_awlock_converter");
  mp_M09_AXI_awlock_converter->scalar_in(m_M09_AXI_awlock_converter_signal);
  mp_M09_AXI_awlock_converter->vector_out(M09_AXI_awlock);
  mp_M09_AXI_transactor->AWLOCK(m_M09_AXI_awlock_converter_signal);
  mp_M09_AXI_transactor->AWCACHE(M09_AXI_awcache);
  mp_M09_AXI_transactor->AWPROT(M09_AXI_awprot);
  mp_M09_AXI_transactor->AWQOS(M09_AXI_awqos);
  mp_M09_AXI_transactor->AWVALID(M09_AXI_awvalid);
  mp_M09_AXI_transactor->AWREADY(M09_AXI_awready);
  mp_M09_AXI_transactor->WDATA(M09_AXI_wdata);
  mp_M09_AXI_transactor->WSTRB(M09_AXI_wstrb);
  mp_M09_AXI_transactor->WLAST(M09_AXI_wlast);
  mp_M09_AXI_transactor->WVALID(M09_AXI_wvalid);
  mp_M09_AXI_transactor->WREADY(M09_AXI_wready);
  mp_M09_AXI_transactor->BRESP(M09_AXI_bresp);
  mp_M09_AXI_transactor->BVALID(M09_AXI_bvalid);
  mp_M09_AXI_transactor->BREADY(M09_AXI_bready);
  mp_M09_AXI_transactor->ARADDR(M09_AXI_araddr);
  mp_M09_AXI_transactor->ARLEN(M09_AXI_arlen);
  mp_M09_AXI_transactor->ARSIZE(M09_AXI_arsize);
  mp_M09_AXI_transactor->ARBURST(M09_AXI_arburst);
  mp_M09_AXI_arlock_converter = new xsc::common::scalar2vectorN_converter<1>("M09_AXI_arlock_converter");
  mp_M09_AXI_arlock_converter->scalar_in(m_M09_AXI_arlock_converter_signal);
  mp_M09_AXI_arlock_converter->vector_out(M09_AXI_arlock);
  mp_M09_AXI_transactor->ARLOCK(m_M09_AXI_arlock_converter_signal);
  mp_M09_AXI_transactor->ARCACHE(M09_AXI_arcache);
  mp_M09_AXI_transactor->ARPROT(M09_AXI_arprot);
  mp_M09_AXI_transactor->ARQOS(M09_AXI_arqos);
  mp_M09_AXI_transactor->ARVALID(M09_AXI_arvalid);
  mp_M09_AXI_transactor->ARREADY(M09_AXI_arready);
  mp_M09_AXI_transactor->RDATA(M09_AXI_rdata);
  mp_M09_AXI_transactor->RRESP(M09_AXI_rresp);
  mp_M09_AXI_transactor->RLAST(M09_AXI_rlast);
  mp_M09_AXI_transactor->RVALID(M09_AXI_rvalid);
  mp_M09_AXI_transactor->RREADY(M09_AXI_rready);
  mp_M09_AXI_transactor->CLK(aclk);
  mp_M09_AXI_transactor->RST(aresetn);
  // configure M10_AXI_transactor
    xsc::common_cpp::properties M10_AXI_transactor_param_props;
    M10_AXI_transactor_param_props.addLong("DATA_WIDTH", "32");
    M10_AXI_transactor_param_props.addLong("FREQ_HZ", "100000000");
    M10_AXI_transactor_param_props.addLong("ID_WIDTH", "0");
    M10_AXI_transactor_param_props.addLong("ADDR_WIDTH", "12");
    M10_AXI_transactor_param_props.addLong("AWUSER_WIDTH", "0");
    M10_AXI_transactor_param_props.addLong("ARUSER_WIDTH", "0");
    M10_AXI_transactor_param_props.addLong("WUSER_WIDTH", "0");
    M10_AXI_transactor_param_props.addLong("RUSER_WIDTH", "0");
    M10_AXI_transactor_param_props.addLong("BUSER_WIDTH", "0");
    M10_AXI_transactor_param_props.addLong("HAS_BURST", "1");
    M10_AXI_transactor_param_props.addLong("HAS_LOCK", "1");
    M10_AXI_transactor_param_props.addLong("HAS_PROT", "1");
    M10_AXI_transactor_param_props.addLong("HAS_CACHE", "1");
    M10_AXI_transactor_param_props.addLong("HAS_QOS", "1");
    M10_AXI_transactor_param_props.addLong("HAS_REGION", "0");
    M10_AXI_transactor_param_props.addLong("HAS_WSTRB", "1");
    M10_AXI_transactor_param_props.addLong("HAS_BRESP", "1");
    M10_AXI_transactor_param_props.addLong("HAS_RRESP", "1");
    M10_AXI_transactor_param_props.addLong("SUPPORTS_NARROW_BURST", "0");
    M10_AXI_transactor_param_props.addLong("NUM_READ_OUTSTANDING", "2");
    M10_AXI_transactor_param_props.addLong("NUM_WRITE_OUTSTANDING", "2");
    M10_AXI_transactor_param_props.addLong("MAX_BURST_LENGTH", "256");
    M10_AXI_transactor_param_props.addLong("NUM_READ_THREADS", "1");
    M10_AXI_transactor_param_props.addLong("NUM_WRITE_THREADS", "1");
    M10_AXI_transactor_param_props.addLong("RUSER_BITS_PER_BYTE", "0");
    M10_AXI_transactor_param_props.addLong("WUSER_BITS_PER_BYTE", "0");
    M10_AXI_transactor_param_props.addLong("HAS_SIZE", "1");
    M10_AXI_transactor_param_props.addLong("HAS_RESET", "1");
    M10_AXI_transactor_param_props.addFloat("PHASE", "0.0");
    M10_AXI_transactor_param_props.addString("PROTOCOL", "AXI4");
    M10_AXI_transactor_param_props.addString("READ_WRITE_MODE", "READ_WRITE");
    M10_AXI_transactor_param_props.addString("CLK_DOMAIN", "Multi_convo_core_processing_system7_0_0_FCLK_CLK0");

    mp_M10_AXI_transactor = new xtlm::xaximm_xtlm2pin_t<32,12,1,1,1,1,1,1>("M10_AXI_transactor", M10_AXI_transactor_param_props);
  mp_M10_AXI_transactor->AWADDR(M10_AXI_awaddr);
  mp_M10_AXI_transactor->AWLEN(M10_AXI_awlen);
  mp_M10_AXI_transactor->AWSIZE(M10_AXI_awsize);
  mp_M10_AXI_transactor->AWBURST(M10_AXI_awburst);
  mp_M10_AXI_awlock_converter = new xsc::common::scalar2vectorN_converter<1>("M10_AXI_awlock_converter");
  mp_M10_AXI_awlock_converter->scalar_in(m_M10_AXI_awlock_converter_signal);
  mp_M10_AXI_awlock_converter->vector_out(M10_AXI_awlock);
  mp_M10_AXI_transactor->AWLOCK(m_M10_AXI_awlock_converter_signal);
  mp_M10_AXI_transactor->AWCACHE(M10_AXI_awcache);
  mp_M10_AXI_transactor->AWPROT(M10_AXI_awprot);
  mp_M10_AXI_transactor->AWQOS(M10_AXI_awqos);
  mp_M10_AXI_transactor->AWVALID(M10_AXI_awvalid);
  mp_M10_AXI_transactor->AWREADY(M10_AXI_awready);
  mp_M10_AXI_transactor->WDATA(M10_AXI_wdata);
  mp_M10_AXI_transactor->WSTRB(M10_AXI_wstrb);
  mp_M10_AXI_transactor->WLAST(M10_AXI_wlast);
  mp_M10_AXI_transactor->WVALID(M10_AXI_wvalid);
  mp_M10_AXI_transactor->WREADY(M10_AXI_wready);
  mp_M10_AXI_transactor->BRESP(M10_AXI_bresp);
  mp_M10_AXI_transactor->BVALID(M10_AXI_bvalid);
  mp_M10_AXI_transactor->BREADY(M10_AXI_bready);
  mp_M10_AXI_transactor->ARADDR(M10_AXI_araddr);
  mp_M10_AXI_transactor->ARLEN(M10_AXI_arlen);
  mp_M10_AXI_transactor->ARSIZE(M10_AXI_arsize);
  mp_M10_AXI_transactor->ARBURST(M10_AXI_arburst);
  mp_M10_AXI_arlock_converter = new xsc::common::scalar2vectorN_converter<1>("M10_AXI_arlock_converter");
  mp_M10_AXI_arlock_converter->scalar_in(m_M10_AXI_arlock_converter_signal);
  mp_M10_AXI_arlock_converter->vector_out(M10_AXI_arlock);
  mp_M10_AXI_transactor->ARLOCK(m_M10_AXI_arlock_converter_signal);
  mp_M10_AXI_transactor->ARCACHE(M10_AXI_arcache);
  mp_M10_AXI_transactor->ARPROT(M10_AXI_arprot);
  mp_M10_AXI_transactor->ARQOS(M10_AXI_arqos);
  mp_M10_AXI_transactor->ARVALID(M10_AXI_arvalid);
  mp_M10_AXI_transactor->ARREADY(M10_AXI_arready);
  mp_M10_AXI_transactor->RDATA(M10_AXI_rdata);
  mp_M10_AXI_transactor->RRESP(M10_AXI_rresp);
  mp_M10_AXI_transactor->RLAST(M10_AXI_rlast);
  mp_M10_AXI_transactor->RVALID(M10_AXI_rvalid);
  mp_M10_AXI_transactor->RREADY(M10_AXI_rready);
  mp_M10_AXI_transactor->CLK(aclk);
  mp_M10_AXI_transactor->RST(aresetn);
  // configure M11_AXI_transactor
    xsc::common_cpp::properties M11_AXI_transactor_param_props;
    M11_AXI_transactor_param_props.addLong("DATA_WIDTH", "32");
    M11_AXI_transactor_param_props.addLong("FREQ_HZ", "100000000");
    M11_AXI_transactor_param_props.addLong("ID_WIDTH", "0");
    M11_AXI_transactor_param_props.addLong("ADDR_WIDTH", "12");
    M11_AXI_transactor_param_props.addLong("AWUSER_WIDTH", "0");
    M11_AXI_transactor_param_props.addLong("ARUSER_WIDTH", "0");
    M11_AXI_transactor_param_props.addLong("WUSER_WIDTH", "0");
    M11_AXI_transactor_param_props.addLong("RUSER_WIDTH", "0");
    M11_AXI_transactor_param_props.addLong("BUSER_WIDTH", "0");
    M11_AXI_transactor_param_props.addLong("HAS_BURST", "1");
    M11_AXI_transactor_param_props.addLong("HAS_LOCK", "1");
    M11_AXI_transactor_param_props.addLong("HAS_PROT", "1");
    M11_AXI_transactor_param_props.addLong("HAS_CACHE", "1");
    M11_AXI_transactor_param_props.addLong("HAS_QOS", "1");
    M11_AXI_transactor_param_props.addLong("HAS_REGION", "0");
    M11_AXI_transactor_param_props.addLong("HAS_WSTRB", "1");
    M11_AXI_transactor_param_props.addLong("HAS_BRESP", "1");
    M11_AXI_transactor_param_props.addLong("HAS_RRESP", "1");
    M11_AXI_transactor_param_props.addLong("SUPPORTS_NARROW_BURST", "0");
    M11_AXI_transactor_param_props.addLong("NUM_READ_OUTSTANDING", "2");
    M11_AXI_transactor_param_props.addLong("NUM_WRITE_OUTSTANDING", "2");
    M11_AXI_transactor_param_props.addLong("MAX_BURST_LENGTH", "256");
    M11_AXI_transactor_param_props.addLong("NUM_READ_THREADS", "1");
    M11_AXI_transactor_param_props.addLong("NUM_WRITE_THREADS", "1");
    M11_AXI_transactor_param_props.addLong("RUSER_BITS_PER_BYTE", "0");
    M11_AXI_transactor_param_props.addLong("WUSER_BITS_PER_BYTE", "0");
    M11_AXI_transactor_param_props.addLong("HAS_SIZE", "1");
    M11_AXI_transactor_param_props.addLong("HAS_RESET", "1");
    M11_AXI_transactor_param_props.addFloat("PHASE", "0.0");
    M11_AXI_transactor_param_props.addString("PROTOCOL", "AXI4");
    M11_AXI_transactor_param_props.addString("READ_WRITE_MODE", "READ_WRITE");
    M11_AXI_transactor_param_props.addString("CLK_DOMAIN", "Multi_convo_core_processing_system7_0_0_FCLK_CLK0");

    mp_M11_AXI_transactor = new xtlm::xaximm_xtlm2pin_t<32,12,1,1,1,1,1,1>("M11_AXI_transactor", M11_AXI_transactor_param_props);
  mp_M11_AXI_transactor->AWADDR(M11_AXI_awaddr);
  mp_M11_AXI_transactor->AWLEN(M11_AXI_awlen);
  mp_M11_AXI_transactor->AWSIZE(M11_AXI_awsize);
  mp_M11_AXI_transactor->AWBURST(M11_AXI_awburst);
  mp_M11_AXI_awlock_converter = new xsc::common::scalar2vectorN_converter<1>("M11_AXI_awlock_converter");
  mp_M11_AXI_awlock_converter->scalar_in(m_M11_AXI_awlock_converter_signal);
  mp_M11_AXI_awlock_converter->vector_out(M11_AXI_awlock);
  mp_M11_AXI_transactor->AWLOCK(m_M11_AXI_awlock_converter_signal);
  mp_M11_AXI_transactor->AWCACHE(M11_AXI_awcache);
  mp_M11_AXI_transactor->AWPROT(M11_AXI_awprot);
  mp_M11_AXI_transactor->AWQOS(M11_AXI_awqos);
  mp_M11_AXI_transactor->AWVALID(M11_AXI_awvalid);
  mp_M11_AXI_transactor->AWREADY(M11_AXI_awready);
  mp_M11_AXI_transactor->WDATA(M11_AXI_wdata);
  mp_M11_AXI_transactor->WSTRB(M11_AXI_wstrb);
  mp_M11_AXI_transactor->WLAST(M11_AXI_wlast);
  mp_M11_AXI_transactor->WVALID(M11_AXI_wvalid);
  mp_M11_AXI_transactor->WREADY(M11_AXI_wready);
  mp_M11_AXI_transactor->BRESP(M11_AXI_bresp);
  mp_M11_AXI_transactor->BVALID(M11_AXI_bvalid);
  mp_M11_AXI_transactor->BREADY(M11_AXI_bready);
  mp_M11_AXI_transactor->ARADDR(M11_AXI_araddr);
  mp_M11_AXI_transactor->ARLEN(M11_AXI_arlen);
  mp_M11_AXI_transactor->ARSIZE(M11_AXI_arsize);
  mp_M11_AXI_transactor->ARBURST(M11_AXI_arburst);
  mp_M11_AXI_arlock_converter = new xsc::common::scalar2vectorN_converter<1>("M11_AXI_arlock_converter");
  mp_M11_AXI_arlock_converter->scalar_in(m_M11_AXI_arlock_converter_signal);
  mp_M11_AXI_arlock_converter->vector_out(M11_AXI_arlock);
  mp_M11_AXI_transactor->ARLOCK(m_M11_AXI_arlock_converter_signal);
  mp_M11_AXI_transactor->ARCACHE(M11_AXI_arcache);
  mp_M11_AXI_transactor->ARPROT(M11_AXI_arprot);
  mp_M11_AXI_transactor->ARQOS(M11_AXI_arqos);
  mp_M11_AXI_transactor->ARVALID(M11_AXI_arvalid);
  mp_M11_AXI_transactor->ARREADY(M11_AXI_arready);
  mp_M11_AXI_transactor->RDATA(M11_AXI_rdata);
  mp_M11_AXI_transactor->RRESP(M11_AXI_rresp);
  mp_M11_AXI_transactor->RLAST(M11_AXI_rlast);
  mp_M11_AXI_transactor->RVALID(M11_AXI_rvalid);
  mp_M11_AXI_transactor->RREADY(M11_AXI_rready);
  mp_M11_AXI_transactor->CLK(aclk);
  mp_M11_AXI_transactor->RST(aresetn);
  // configure M12_AXI_transactor
    xsc::common_cpp::properties M12_AXI_transactor_param_props;
    M12_AXI_transactor_param_props.addLong("DATA_WIDTH", "32");
    M12_AXI_transactor_param_props.addLong("FREQ_HZ", "100000000");
    M12_AXI_transactor_param_props.addLong("ID_WIDTH", "0");
    M12_AXI_transactor_param_props.addLong("ADDR_WIDTH", "12");
    M12_AXI_transactor_param_props.addLong("AWUSER_WIDTH", "0");
    M12_AXI_transactor_param_props.addLong("ARUSER_WIDTH", "0");
    M12_AXI_transactor_param_props.addLong("WUSER_WIDTH", "0");
    M12_AXI_transactor_param_props.addLong("RUSER_WIDTH", "0");
    M12_AXI_transactor_param_props.addLong("BUSER_WIDTH", "0");
    M12_AXI_transactor_param_props.addLong("HAS_BURST", "1");
    M12_AXI_transactor_param_props.addLong("HAS_LOCK", "1");
    M12_AXI_transactor_param_props.addLong("HAS_PROT", "1");
    M12_AXI_transactor_param_props.addLong("HAS_CACHE", "1");
    M12_AXI_transactor_param_props.addLong("HAS_QOS", "1");
    M12_AXI_transactor_param_props.addLong("HAS_REGION", "0");
    M12_AXI_transactor_param_props.addLong("HAS_WSTRB", "1");
    M12_AXI_transactor_param_props.addLong("HAS_BRESP", "1");
    M12_AXI_transactor_param_props.addLong("HAS_RRESP", "1");
    M12_AXI_transactor_param_props.addLong("SUPPORTS_NARROW_BURST", "0");
    M12_AXI_transactor_param_props.addLong("NUM_READ_OUTSTANDING", "2");
    M12_AXI_transactor_param_props.addLong("NUM_WRITE_OUTSTANDING", "2");
    M12_AXI_transactor_param_props.addLong("MAX_BURST_LENGTH", "256");
    M12_AXI_transactor_param_props.addLong("NUM_READ_THREADS", "1");
    M12_AXI_transactor_param_props.addLong("NUM_WRITE_THREADS", "1");
    M12_AXI_transactor_param_props.addLong("RUSER_BITS_PER_BYTE", "0");
    M12_AXI_transactor_param_props.addLong("WUSER_BITS_PER_BYTE", "0");
    M12_AXI_transactor_param_props.addLong("HAS_SIZE", "1");
    M12_AXI_transactor_param_props.addLong("HAS_RESET", "1");
    M12_AXI_transactor_param_props.addFloat("PHASE", "0.0");
    M12_AXI_transactor_param_props.addString("PROTOCOL", "AXI4");
    M12_AXI_transactor_param_props.addString("READ_WRITE_MODE", "READ_WRITE");
    M12_AXI_transactor_param_props.addString("CLK_DOMAIN", "Multi_convo_core_processing_system7_0_0_FCLK_CLK0");

    mp_M12_AXI_transactor = new xtlm::xaximm_xtlm2pin_t<32,12,1,1,1,1,1,1>("M12_AXI_transactor", M12_AXI_transactor_param_props);
  mp_M12_AXI_transactor->AWADDR(M12_AXI_awaddr);
  mp_M12_AXI_transactor->AWLEN(M12_AXI_awlen);
  mp_M12_AXI_transactor->AWSIZE(M12_AXI_awsize);
  mp_M12_AXI_transactor->AWBURST(M12_AXI_awburst);
  mp_M12_AXI_awlock_converter = new xsc::common::scalar2vectorN_converter<1>("M12_AXI_awlock_converter");
  mp_M12_AXI_awlock_converter->scalar_in(m_M12_AXI_awlock_converter_signal);
  mp_M12_AXI_awlock_converter->vector_out(M12_AXI_awlock);
  mp_M12_AXI_transactor->AWLOCK(m_M12_AXI_awlock_converter_signal);
  mp_M12_AXI_transactor->AWCACHE(M12_AXI_awcache);
  mp_M12_AXI_transactor->AWPROT(M12_AXI_awprot);
  mp_M12_AXI_transactor->AWQOS(M12_AXI_awqos);
  mp_M12_AXI_transactor->AWVALID(M12_AXI_awvalid);
  mp_M12_AXI_transactor->AWREADY(M12_AXI_awready);
  mp_M12_AXI_transactor->WDATA(M12_AXI_wdata);
  mp_M12_AXI_transactor->WSTRB(M12_AXI_wstrb);
  mp_M12_AXI_transactor->WLAST(M12_AXI_wlast);
  mp_M12_AXI_transactor->WVALID(M12_AXI_wvalid);
  mp_M12_AXI_transactor->WREADY(M12_AXI_wready);
  mp_M12_AXI_transactor->BRESP(M12_AXI_bresp);
  mp_M12_AXI_transactor->BVALID(M12_AXI_bvalid);
  mp_M12_AXI_transactor->BREADY(M12_AXI_bready);
  mp_M12_AXI_transactor->ARADDR(M12_AXI_araddr);
  mp_M12_AXI_transactor->ARLEN(M12_AXI_arlen);
  mp_M12_AXI_transactor->ARSIZE(M12_AXI_arsize);
  mp_M12_AXI_transactor->ARBURST(M12_AXI_arburst);
  mp_M12_AXI_arlock_converter = new xsc::common::scalar2vectorN_converter<1>("M12_AXI_arlock_converter");
  mp_M12_AXI_arlock_converter->scalar_in(m_M12_AXI_arlock_converter_signal);
  mp_M12_AXI_arlock_converter->vector_out(M12_AXI_arlock);
  mp_M12_AXI_transactor->ARLOCK(m_M12_AXI_arlock_converter_signal);
  mp_M12_AXI_transactor->ARCACHE(M12_AXI_arcache);
  mp_M12_AXI_transactor->ARPROT(M12_AXI_arprot);
  mp_M12_AXI_transactor->ARQOS(M12_AXI_arqos);
  mp_M12_AXI_transactor->ARVALID(M12_AXI_arvalid);
  mp_M12_AXI_transactor->ARREADY(M12_AXI_arready);
  mp_M12_AXI_transactor->RDATA(M12_AXI_rdata);
  mp_M12_AXI_transactor->RRESP(M12_AXI_rresp);
  mp_M12_AXI_transactor->RLAST(M12_AXI_rlast);
  mp_M12_AXI_transactor->RVALID(M12_AXI_rvalid);
  mp_M12_AXI_transactor->RREADY(M12_AXI_rready);
  mp_M12_AXI_transactor->CLK(aclk);
  mp_M12_AXI_transactor->RST(aresetn);
  // configure M13_AXI_transactor
    xsc::common_cpp::properties M13_AXI_transactor_param_props;
    M13_AXI_transactor_param_props.addLong("DATA_WIDTH", "32");
    M13_AXI_transactor_param_props.addLong("FREQ_HZ", "100000000");
    M13_AXI_transactor_param_props.addLong("ID_WIDTH", "0");
    M13_AXI_transactor_param_props.addLong("ADDR_WIDTH", "12");
    M13_AXI_transactor_param_props.addLong("AWUSER_WIDTH", "0");
    M13_AXI_transactor_param_props.addLong("ARUSER_WIDTH", "0");
    M13_AXI_transactor_param_props.addLong("WUSER_WIDTH", "0");
    M13_AXI_transactor_param_props.addLong("RUSER_WIDTH", "0");
    M13_AXI_transactor_param_props.addLong("BUSER_WIDTH", "0");
    M13_AXI_transactor_param_props.addLong("HAS_BURST", "1");
    M13_AXI_transactor_param_props.addLong("HAS_LOCK", "1");
    M13_AXI_transactor_param_props.addLong("HAS_PROT", "1");
    M13_AXI_transactor_param_props.addLong("HAS_CACHE", "1");
    M13_AXI_transactor_param_props.addLong("HAS_QOS", "1");
    M13_AXI_transactor_param_props.addLong("HAS_REGION", "0");
    M13_AXI_transactor_param_props.addLong("HAS_WSTRB", "1");
    M13_AXI_transactor_param_props.addLong("HAS_BRESP", "1");
    M13_AXI_transactor_param_props.addLong("HAS_RRESP", "1");
    M13_AXI_transactor_param_props.addLong("SUPPORTS_NARROW_BURST", "0");
    M13_AXI_transactor_param_props.addLong("NUM_READ_OUTSTANDING", "2");
    M13_AXI_transactor_param_props.addLong("NUM_WRITE_OUTSTANDING", "2");
    M13_AXI_transactor_param_props.addLong("MAX_BURST_LENGTH", "256");
    M13_AXI_transactor_param_props.addLong("NUM_READ_THREADS", "1");
    M13_AXI_transactor_param_props.addLong("NUM_WRITE_THREADS", "1");
    M13_AXI_transactor_param_props.addLong("RUSER_BITS_PER_BYTE", "0");
    M13_AXI_transactor_param_props.addLong("WUSER_BITS_PER_BYTE", "0");
    M13_AXI_transactor_param_props.addLong("HAS_SIZE", "1");
    M13_AXI_transactor_param_props.addLong("HAS_RESET", "1");
    M13_AXI_transactor_param_props.addFloat("PHASE", "0.0");
    M13_AXI_transactor_param_props.addString("PROTOCOL", "AXI4");
    M13_AXI_transactor_param_props.addString("READ_WRITE_MODE", "READ_WRITE");
    M13_AXI_transactor_param_props.addString("CLK_DOMAIN", "Multi_convo_core_processing_system7_0_0_FCLK_CLK0");

    mp_M13_AXI_transactor = new xtlm::xaximm_xtlm2pin_t<32,12,1,1,1,1,1,1>("M13_AXI_transactor", M13_AXI_transactor_param_props);
  mp_M13_AXI_transactor->AWADDR(M13_AXI_awaddr);
  mp_M13_AXI_transactor->AWLEN(M13_AXI_awlen);
  mp_M13_AXI_transactor->AWSIZE(M13_AXI_awsize);
  mp_M13_AXI_transactor->AWBURST(M13_AXI_awburst);
  mp_M13_AXI_awlock_converter = new xsc::common::scalar2vectorN_converter<1>("M13_AXI_awlock_converter");
  mp_M13_AXI_awlock_converter->scalar_in(m_M13_AXI_awlock_converter_signal);
  mp_M13_AXI_awlock_converter->vector_out(M13_AXI_awlock);
  mp_M13_AXI_transactor->AWLOCK(m_M13_AXI_awlock_converter_signal);
  mp_M13_AXI_transactor->AWCACHE(M13_AXI_awcache);
  mp_M13_AXI_transactor->AWPROT(M13_AXI_awprot);
  mp_M13_AXI_transactor->AWQOS(M13_AXI_awqos);
  mp_M13_AXI_transactor->AWVALID(M13_AXI_awvalid);
  mp_M13_AXI_transactor->AWREADY(M13_AXI_awready);
  mp_M13_AXI_transactor->WDATA(M13_AXI_wdata);
  mp_M13_AXI_transactor->WSTRB(M13_AXI_wstrb);
  mp_M13_AXI_transactor->WLAST(M13_AXI_wlast);
  mp_M13_AXI_transactor->WVALID(M13_AXI_wvalid);
  mp_M13_AXI_transactor->WREADY(M13_AXI_wready);
  mp_M13_AXI_transactor->BRESP(M13_AXI_bresp);
  mp_M13_AXI_transactor->BVALID(M13_AXI_bvalid);
  mp_M13_AXI_transactor->BREADY(M13_AXI_bready);
  mp_M13_AXI_transactor->ARADDR(M13_AXI_araddr);
  mp_M13_AXI_transactor->ARLEN(M13_AXI_arlen);
  mp_M13_AXI_transactor->ARSIZE(M13_AXI_arsize);
  mp_M13_AXI_transactor->ARBURST(M13_AXI_arburst);
  mp_M13_AXI_arlock_converter = new xsc::common::scalar2vectorN_converter<1>("M13_AXI_arlock_converter");
  mp_M13_AXI_arlock_converter->scalar_in(m_M13_AXI_arlock_converter_signal);
  mp_M13_AXI_arlock_converter->vector_out(M13_AXI_arlock);
  mp_M13_AXI_transactor->ARLOCK(m_M13_AXI_arlock_converter_signal);
  mp_M13_AXI_transactor->ARCACHE(M13_AXI_arcache);
  mp_M13_AXI_transactor->ARPROT(M13_AXI_arprot);
  mp_M13_AXI_transactor->ARQOS(M13_AXI_arqos);
  mp_M13_AXI_transactor->ARVALID(M13_AXI_arvalid);
  mp_M13_AXI_transactor->ARREADY(M13_AXI_arready);
  mp_M13_AXI_transactor->RDATA(M13_AXI_rdata);
  mp_M13_AXI_transactor->RRESP(M13_AXI_rresp);
  mp_M13_AXI_transactor->RLAST(M13_AXI_rlast);
  mp_M13_AXI_transactor->RVALID(M13_AXI_rvalid);
  mp_M13_AXI_transactor->RREADY(M13_AXI_rready);
  mp_M13_AXI_transactor->CLK(aclk);
  mp_M13_AXI_transactor->RST(aresetn);
  // configure M14_AXI_transactor
    xsc::common_cpp::properties M14_AXI_transactor_param_props;
    M14_AXI_transactor_param_props.addLong("DATA_WIDTH", "32");
    M14_AXI_transactor_param_props.addLong("FREQ_HZ", "100000000");
    M14_AXI_transactor_param_props.addLong("ID_WIDTH", "0");
    M14_AXI_transactor_param_props.addLong("ADDR_WIDTH", "12");
    M14_AXI_transactor_param_props.addLong("AWUSER_WIDTH", "0");
    M14_AXI_transactor_param_props.addLong("ARUSER_WIDTH", "0");
    M14_AXI_transactor_param_props.addLong("WUSER_WIDTH", "0");
    M14_AXI_transactor_param_props.addLong("RUSER_WIDTH", "0");
    M14_AXI_transactor_param_props.addLong("BUSER_WIDTH", "0");
    M14_AXI_transactor_param_props.addLong("HAS_BURST", "1");
    M14_AXI_transactor_param_props.addLong("HAS_LOCK", "1");
    M14_AXI_transactor_param_props.addLong("HAS_PROT", "1");
    M14_AXI_transactor_param_props.addLong("HAS_CACHE", "1");
    M14_AXI_transactor_param_props.addLong("HAS_QOS", "1");
    M14_AXI_transactor_param_props.addLong("HAS_REGION", "0");
    M14_AXI_transactor_param_props.addLong("HAS_WSTRB", "1");
    M14_AXI_transactor_param_props.addLong("HAS_BRESP", "1");
    M14_AXI_transactor_param_props.addLong("HAS_RRESP", "1");
    M14_AXI_transactor_param_props.addLong("SUPPORTS_NARROW_BURST", "0");
    M14_AXI_transactor_param_props.addLong("NUM_READ_OUTSTANDING", "2");
    M14_AXI_transactor_param_props.addLong("NUM_WRITE_OUTSTANDING", "2");
    M14_AXI_transactor_param_props.addLong("MAX_BURST_LENGTH", "256");
    M14_AXI_transactor_param_props.addLong("NUM_READ_THREADS", "1");
    M14_AXI_transactor_param_props.addLong("NUM_WRITE_THREADS", "1");
    M14_AXI_transactor_param_props.addLong("RUSER_BITS_PER_BYTE", "0");
    M14_AXI_transactor_param_props.addLong("WUSER_BITS_PER_BYTE", "0");
    M14_AXI_transactor_param_props.addLong("HAS_SIZE", "1");
    M14_AXI_transactor_param_props.addLong("HAS_RESET", "1");
    M14_AXI_transactor_param_props.addFloat("PHASE", "0.0");
    M14_AXI_transactor_param_props.addString("PROTOCOL", "AXI4");
    M14_AXI_transactor_param_props.addString("READ_WRITE_MODE", "READ_WRITE");
    M14_AXI_transactor_param_props.addString("CLK_DOMAIN", "Multi_convo_core_processing_system7_0_0_FCLK_CLK0");

    mp_M14_AXI_transactor = new xtlm::xaximm_xtlm2pin_t<32,12,1,1,1,1,1,1>("M14_AXI_transactor", M14_AXI_transactor_param_props);
  mp_M14_AXI_transactor->AWADDR(M14_AXI_awaddr);
  mp_M14_AXI_transactor->AWLEN(M14_AXI_awlen);
  mp_M14_AXI_transactor->AWSIZE(M14_AXI_awsize);
  mp_M14_AXI_transactor->AWBURST(M14_AXI_awburst);
  mp_M14_AXI_awlock_converter = new xsc::common::scalar2vectorN_converter<1>("M14_AXI_awlock_converter");
  mp_M14_AXI_awlock_converter->scalar_in(m_M14_AXI_awlock_converter_signal);
  mp_M14_AXI_awlock_converter->vector_out(M14_AXI_awlock);
  mp_M14_AXI_transactor->AWLOCK(m_M14_AXI_awlock_converter_signal);
  mp_M14_AXI_transactor->AWCACHE(M14_AXI_awcache);
  mp_M14_AXI_transactor->AWPROT(M14_AXI_awprot);
  mp_M14_AXI_transactor->AWQOS(M14_AXI_awqos);
  mp_M14_AXI_transactor->AWVALID(M14_AXI_awvalid);
  mp_M14_AXI_transactor->AWREADY(M14_AXI_awready);
  mp_M14_AXI_transactor->WDATA(M14_AXI_wdata);
  mp_M14_AXI_transactor->WSTRB(M14_AXI_wstrb);
  mp_M14_AXI_transactor->WLAST(M14_AXI_wlast);
  mp_M14_AXI_transactor->WVALID(M14_AXI_wvalid);
  mp_M14_AXI_transactor->WREADY(M14_AXI_wready);
  mp_M14_AXI_transactor->BRESP(M14_AXI_bresp);
  mp_M14_AXI_transactor->BVALID(M14_AXI_bvalid);
  mp_M14_AXI_transactor->BREADY(M14_AXI_bready);
  mp_M14_AXI_transactor->ARADDR(M14_AXI_araddr);
  mp_M14_AXI_transactor->ARLEN(M14_AXI_arlen);
  mp_M14_AXI_transactor->ARSIZE(M14_AXI_arsize);
  mp_M14_AXI_transactor->ARBURST(M14_AXI_arburst);
  mp_M14_AXI_arlock_converter = new xsc::common::scalar2vectorN_converter<1>("M14_AXI_arlock_converter");
  mp_M14_AXI_arlock_converter->scalar_in(m_M14_AXI_arlock_converter_signal);
  mp_M14_AXI_arlock_converter->vector_out(M14_AXI_arlock);
  mp_M14_AXI_transactor->ARLOCK(m_M14_AXI_arlock_converter_signal);
  mp_M14_AXI_transactor->ARCACHE(M14_AXI_arcache);
  mp_M14_AXI_transactor->ARPROT(M14_AXI_arprot);
  mp_M14_AXI_transactor->ARQOS(M14_AXI_arqos);
  mp_M14_AXI_transactor->ARVALID(M14_AXI_arvalid);
  mp_M14_AXI_transactor->ARREADY(M14_AXI_arready);
  mp_M14_AXI_transactor->RDATA(M14_AXI_rdata);
  mp_M14_AXI_transactor->RRESP(M14_AXI_rresp);
  mp_M14_AXI_transactor->RLAST(M14_AXI_rlast);
  mp_M14_AXI_transactor->RVALID(M14_AXI_rvalid);
  mp_M14_AXI_transactor->RREADY(M14_AXI_rready);
  mp_M14_AXI_transactor->CLK(aclk);
  mp_M14_AXI_transactor->RST(aresetn);
  // configure M15_AXI_transactor
    xsc::common_cpp::properties M15_AXI_transactor_param_props;
    M15_AXI_transactor_param_props.addLong("DATA_WIDTH", "32");
    M15_AXI_transactor_param_props.addLong("FREQ_HZ", "100000000");
    M15_AXI_transactor_param_props.addLong("ID_WIDTH", "0");
    M15_AXI_transactor_param_props.addLong("ADDR_WIDTH", "12");
    M15_AXI_transactor_param_props.addLong("AWUSER_WIDTH", "0");
    M15_AXI_transactor_param_props.addLong("ARUSER_WIDTH", "0");
    M15_AXI_transactor_param_props.addLong("WUSER_WIDTH", "0");
    M15_AXI_transactor_param_props.addLong("RUSER_WIDTH", "0");
    M15_AXI_transactor_param_props.addLong("BUSER_WIDTH", "0");
    M15_AXI_transactor_param_props.addLong("HAS_BURST", "1");
    M15_AXI_transactor_param_props.addLong("HAS_LOCK", "1");
    M15_AXI_transactor_param_props.addLong("HAS_PROT", "1");
    M15_AXI_transactor_param_props.addLong("HAS_CACHE", "1");
    M15_AXI_transactor_param_props.addLong("HAS_QOS", "1");
    M15_AXI_transactor_param_props.addLong("HAS_REGION", "0");
    M15_AXI_transactor_param_props.addLong("HAS_WSTRB", "1");
    M15_AXI_transactor_param_props.addLong("HAS_BRESP", "1");
    M15_AXI_transactor_param_props.addLong("HAS_RRESP", "1");
    M15_AXI_transactor_param_props.addLong("SUPPORTS_NARROW_BURST", "0");
    M15_AXI_transactor_param_props.addLong("NUM_READ_OUTSTANDING", "2");
    M15_AXI_transactor_param_props.addLong("NUM_WRITE_OUTSTANDING", "2");
    M15_AXI_transactor_param_props.addLong("MAX_BURST_LENGTH", "256");
    M15_AXI_transactor_param_props.addLong("NUM_READ_THREADS", "1");
    M15_AXI_transactor_param_props.addLong("NUM_WRITE_THREADS", "1");
    M15_AXI_transactor_param_props.addLong("RUSER_BITS_PER_BYTE", "0");
    M15_AXI_transactor_param_props.addLong("WUSER_BITS_PER_BYTE", "0");
    M15_AXI_transactor_param_props.addLong("HAS_SIZE", "1");
    M15_AXI_transactor_param_props.addLong("HAS_RESET", "1");
    M15_AXI_transactor_param_props.addFloat("PHASE", "0.0");
    M15_AXI_transactor_param_props.addString("PROTOCOL", "AXI4");
    M15_AXI_transactor_param_props.addString("READ_WRITE_MODE", "READ_WRITE");
    M15_AXI_transactor_param_props.addString("CLK_DOMAIN", "Multi_convo_core_processing_system7_0_0_FCLK_CLK0");

    mp_M15_AXI_transactor = new xtlm::xaximm_xtlm2pin_t<32,12,1,1,1,1,1,1>("M15_AXI_transactor", M15_AXI_transactor_param_props);
  mp_M15_AXI_transactor->AWADDR(M15_AXI_awaddr);
  mp_M15_AXI_transactor->AWLEN(M15_AXI_awlen);
  mp_M15_AXI_transactor->AWSIZE(M15_AXI_awsize);
  mp_M15_AXI_transactor->AWBURST(M15_AXI_awburst);
  mp_M15_AXI_awlock_converter = new xsc::common::scalar2vectorN_converter<1>("M15_AXI_awlock_converter");
  mp_M15_AXI_awlock_converter->scalar_in(m_M15_AXI_awlock_converter_signal);
  mp_M15_AXI_awlock_converter->vector_out(M15_AXI_awlock);
  mp_M15_AXI_transactor->AWLOCK(m_M15_AXI_awlock_converter_signal);
  mp_M15_AXI_transactor->AWCACHE(M15_AXI_awcache);
  mp_M15_AXI_transactor->AWPROT(M15_AXI_awprot);
  mp_M15_AXI_transactor->AWQOS(M15_AXI_awqos);
  mp_M15_AXI_transactor->AWVALID(M15_AXI_awvalid);
  mp_M15_AXI_transactor->AWREADY(M15_AXI_awready);
  mp_M15_AXI_transactor->WDATA(M15_AXI_wdata);
  mp_M15_AXI_transactor->WSTRB(M15_AXI_wstrb);
  mp_M15_AXI_transactor->WLAST(M15_AXI_wlast);
  mp_M15_AXI_transactor->WVALID(M15_AXI_wvalid);
  mp_M15_AXI_transactor->WREADY(M15_AXI_wready);
  mp_M15_AXI_transactor->BRESP(M15_AXI_bresp);
  mp_M15_AXI_transactor->BVALID(M15_AXI_bvalid);
  mp_M15_AXI_transactor->BREADY(M15_AXI_bready);
  mp_M15_AXI_transactor->ARADDR(M15_AXI_araddr);
  mp_M15_AXI_transactor->ARLEN(M15_AXI_arlen);
  mp_M15_AXI_transactor->ARSIZE(M15_AXI_arsize);
  mp_M15_AXI_transactor->ARBURST(M15_AXI_arburst);
  mp_M15_AXI_arlock_converter = new xsc::common::scalar2vectorN_converter<1>("M15_AXI_arlock_converter");
  mp_M15_AXI_arlock_converter->scalar_in(m_M15_AXI_arlock_converter_signal);
  mp_M15_AXI_arlock_converter->vector_out(M15_AXI_arlock);
  mp_M15_AXI_transactor->ARLOCK(m_M15_AXI_arlock_converter_signal);
  mp_M15_AXI_transactor->ARCACHE(M15_AXI_arcache);
  mp_M15_AXI_transactor->ARPROT(M15_AXI_arprot);
  mp_M15_AXI_transactor->ARQOS(M15_AXI_arqos);
  mp_M15_AXI_transactor->ARVALID(M15_AXI_arvalid);
  mp_M15_AXI_transactor->ARREADY(M15_AXI_arready);
  mp_M15_AXI_transactor->RDATA(M15_AXI_rdata);
  mp_M15_AXI_transactor->RRESP(M15_AXI_rresp);
  mp_M15_AXI_transactor->RLAST(M15_AXI_rlast);
  mp_M15_AXI_transactor->RVALID(M15_AXI_rvalid);
  mp_M15_AXI_transactor->RREADY(M15_AXI_rready);
  mp_M15_AXI_transactor->CLK(aclk);
  mp_M15_AXI_transactor->RST(aresetn);
  // configure M16_AXI_transactor
    xsc::common_cpp::properties M16_AXI_transactor_param_props;
    M16_AXI_transactor_param_props.addLong("DATA_WIDTH", "32");
    M16_AXI_transactor_param_props.addLong("FREQ_HZ", "100000000");
    M16_AXI_transactor_param_props.addLong("ID_WIDTH", "0");
    M16_AXI_transactor_param_props.addLong("ADDR_WIDTH", "12");
    M16_AXI_transactor_param_props.addLong("AWUSER_WIDTH", "0");
    M16_AXI_transactor_param_props.addLong("ARUSER_WIDTH", "0");
    M16_AXI_transactor_param_props.addLong("WUSER_WIDTH", "0");
    M16_AXI_transactor_param_props.addLong("RUSER_WIDTH", "0");
    M16_AXI_transactor_param_props.addLong("BUSER_WIDTH", "0");
    M16_AXI_transactor_param_props.addLong("HAS_BURST", "1");
    M16_AXI_transactor_param_props.addLong("HAS_LOCK", "1");
    M16_AXI_transactor_param_props.addLong("HAS_PROT", "1");
    M16_AXI_transactor_param_props.addLong("HAS_CACHE", "1");
    M16_AXI_transactor_param_props.addLong("HAS_QOS", "1");
    M16_AXI_transactor_param_props.addLong("HAS_REGION", "0");
    M16_AXI_transactor_param_props.addLong("HAS_WSTRB", "1");
    M16_AXI_transactor_param_props.addLong("HAS_BRESP", "1");
    M16_AXI_transactor_param_props.addLong("HAS_RRESP", "1");
    M16_AXI_transactor_param_props.addLong("SUPPORTS_NARROW_BURST", "0");
    M16_AXI_transactor_param_props.addLong("NUM_READ_OUTSTANDING", "2");
    M16_AXI_transactor_param_props.addLong("NUM_WRITE_OUTSTANDING", "2");
    M16_AXI_transactor_param_props.addLong("MAX_BURST_LENGTH", "256");
    M16_AXI_transactor_param_props.addLong("NUM_READ_THREADS", "1");
    M16_AXI_transactor_param_props.addLong("NUM_WRITE_THREADS", "1");
    M16_AXI_transactor_param_props.addLong("RUSER_BITS_PER_BYTE", "0");
    M16_AXI_transactor_param_props.addLong("WUSER_BITS_PER_BYTE", "0");
    M16_AXI_transactor_param_props.addLong("HAS_SIZE", "1");
    M16_AXI_transactor_param_props.addLong("HAS_RESET", "1");
    M16_AXI_transactor_param_props.addFloat("PHASE", "0.0");
    M16_AXI_transactor_param_props.addString("PROTOCOL", "AXI4");
    M16_AXI_transactor_param_props.addString("READ_WRITE_MODE", "READ_WRITE");
    M16_AXI_transactor_param_props.addString("CLK_DOMAIN", "Multi_convo_core_processing_system7_0_0_FCLK_CLK0");

    mp_M16_AXI_transactor = new xtlm::xaximm_xtlm2pin_t<32,12,1,1,1,1,1,1>("M16_AXI_transactor", M16_AXI_transactor_param_props);
  mp_M16_AXI_transactor->AWADDR(M16_AXI_awaddr);
  mp_M16_AXI_transactor->AWLEN(M16_AXI_awlen);
  mp_M16_AXI_transactor->AWSIZE(M16_AXI_awsize);
  mp_M16_AXI_transactor->AWBURST(M16_AXI_awburst);
  mp_M16_AXI_awlock_converter = new xsc::common::scalar2vectorN_converter<1>("M16_AXI_awlock_converter");
  mp_M16_AXI_awlock_converter->scalar_in(m_M16_AXI_awlock_converter_signal);
  mp_M16_AXI_awlock_converter->vector_out(M16_AXI_awlock);
  mp_M16_AXI_transactor->AWLOCK(m_M16_AXI_awlock_converter_signal);
  mp_M16_AXI_transactor->AWCACHE(M16_AXI_awcache);
  mp_M16_AXI_transactor->AWPROT(M16_AXI_awprot);
  mp_M16_AXI_transactor->AWQOS(M16_AXI_awqos);
  mp_M16_AXI_transactor->AWVALID(M16_AXI_awvalid);
  mp_M16_AXI_transactor->AWREADY(M16_AXI_awready);
  mp_M16_AXI_transactor->WDATA(M16_AXI_wdata);
  mp_M16_AXI_transactor->WSTRB(M16_AXI_wstrb);
  mp_M16_AXI_transactor->WLAST(M16_AXI_wlast);
  mp_M16_AXI_transactor->WVALID(M16_AXI_wvalid);
  mp_M16_AXI_transactor->WREADY(M16_AXI_wready);
  mp_M16_AXI_transactor->BRESP(M16_AXI_bresp);
  mp_M16_AXI_transactor->BVALID(M16_AXI_bvalid);
  mp_M16_AXI_transactor->BREADY(M16_AXI_bready);
  mp_M16_AXI_transactor->ARADDR(M16_AXI_araddr);
  mp_M16_AXI_transactor->ARLEN(M16_AXI_arlen);
  mp_M16_AXI_transactor->ARSIZE(M16_AXI_arsize);
  mp_M16_AXI_transactor->ARBURST(M16_AXI_arburst);
  mp_M16_AXI_arlock_converter = new xsc::common::scalar2vectorN_converter<1>("M16_AXI_arlock_converter");
  mp_M16_AXI_arlock_converter->scalar_in(m_M16_AXI_arlock_converter_signal);
  mp_M16_AXI_arlock_converter->vector_out(M16_AXI_arlock);
  mp_M16_AXI_transactor->ARLOCK(m_M16_AXI_arlock_converter_signal);
  mp_M16_AXI_transactor->ARCACHE(M16_AXI_arcache);
  mp_M16_AXI_transactor->ARPROT(M16_AXI_arprot);
  mp_M16_AXI_transactor->ARQOS(M16_AXI_arqos);
  mp_M16_AXI_transactor->ARVALID(M16_AXI_arvalid);
  mp_M16_AXI_transactor->ARREADY(M16_AXI_arready);
  mp_M16_AXI_transactor->RDATA(M16_AXI_rdata);
  mp_M16_AXI_transactor->RRESP(M16_AXI_rresp);
  mp_M16_AXI_transactor->RLAST(M16_AXI_rlast);
  mp_M16_AXI_transactor->RVALID(M16_AXI_rvalid);
  mp_M16_AXI_transactor->RREADY(M16_AXI_rready);
  mp_M16_AXI_transactor->CLK(aclk);
  mp_M16_AXI_transactor->RST(aresetn);
  // configure M17_AXI_transactor
    xsc::common_cpp::properties M17_AXI_transactor_param_props;
    M17_AXI_transactor_param_props.addLong("DATA_WIDTH", "32");
    M17_AXI_transactor_param_props.addLong("FREQ_HZ", "100000000");
    M17_AXI_transactor_param_props.addLong("ID_WIDTH", "0");
    M17_AXI_transactor_param_props.addLong("ADDR_WIDTH", "12");
    M17_AXI_transactor_param_props.addLong("AWUSER_WIDTH", "0");
    M17_AXI_transactor_param_props.addLong("ARUSER_WIDTH", "0");
    M17_AXI_transactor_param_props.addLong("WUSER_WIDTH", "0");
    M17_AXI_transactor_param_props.addLong("RUSER_WIDTH", "0");
    M17_AXI_transactor_param_props.addLong("BUSER_WIDTH", "0");
    M17_AXI_transactor_param_props.addLong("HAS_BURST", "1");
    M17_AXI_transactor_param_props.addLong("HAS_LOCK", "1");
    M17_AXI_transactor_param_props.addLong("HAS_PROT", "1");
    M17_AXI_transactor_param_props.addLong("HAS_CACHE", "1");
    M17_AXI_transactor_param_props.addLong("HAS_QOS", "1");
    M17_AXI_transactor_param_props.addLong("HAS_REGION", "0");
    M17_AXI_transactor_param_props.addLong("HAS_WSTRB", "1");
    M17_AXI_transactor_param_props.addLong("HAS_BRESP", "1");
    M17_AXI_transactor_param_props.addLong("HAS_RRESP", "1");
    M17_AXI_transactor_param_props.addLong("SUPPORTS_NARROW_BURST", "0");
    M17_AXI_transactor_param_props.addLong("NUM_READ_OUTSTANDING", "2");
    M17_AXI_transactor_param_props.addLong("NUM_WRITE_OUTSTANDING", "2");
    M17_AXI_transactor_param_props.addLong("MAX_BURST_LENGTH", "256");
    M17_AXI_transactor_param_props.addLong("NUM_READ_THREADS", "1");
    M17_AXI_transactor_param_props.addLong("NUM_WRITE_THREADS", "1");
    M17_AXI_transactor_param_props.addLong("RUSER_BITS_PER_BYTE", "0");
    M17_AXI_transactor_param_props.addLong("WUSER_BITS_PER_BYTE", "0");
    M17_AXI_transactor_param_props.addLong("HAS_SIZE", "1");
    M17_AXI_transactor_param_props.addLong("HAS_RESET", "1");
    M17_AXI_transactor_param_props.addFloat("PHASE", "0.0");
    M17_AXI_transactor_param_props.addString("PROTOCOL", "AXI4");
    M17_AXI_transactor_param_props.addString("READ_WRITE_MODE", "READ_WRITE");
    M17_AXI_transactor_param_props.addString("CLK_DOMAIN", "Multi_convo_core_processing_system7_0_0_FCLK_CLK0");

    mp_M17_AXI_transactor = new xtlm::xaximm_xtlm2pin_t<32,12,1,1,1,1,1,1>("M17_AXI_transactor", M17_AXI_transactor_param_props);
  mp_M17_AXI_transactor->AWADDR(M17_AXI_awaddr);
  mp_M17_AXI_transactor->AWLEN(M17_AXI_awlen);
  mp_M17_AXI_transactor->AWSIZE(M17_AXI_awsize);
  mp_M17_AXI_transactor->AWBURST(M17_AXI_awburst);
  mp_M17_AXI_awlock_converter = new xsc::common::scalar2vectorN_converter<1>("M17_AXI_awlock_converter");
  mp_M17_AXI_awlock_converter->scalar_in(m_M17_AXI_awlock_converter_signal);
  mp_M17_AXI_awlock_converter->vector_out(M17_AXI_awlock);
  mp_M17_AXI_transactor->AWLOCK(m_M17_AXI_awlock_converter_signal);
  mp_M17_AXI_transactor->AWCACHE(M17_AXI_awcache);
  mp_M17_AXI_transactor->AWPROT(M17_AXI_awprot);
  mp_M17_AXI_transactor->AWQOS(M17_AXI_awqos);
  mp_M17_AXI_transactor->AWVALID(M17_AXI_awvalid);
  mp_M17_AXI_transactor->AWREADY(M17_AXI_awready);
  mp_M17_AXI_transactor->WDATA(M17_AXI_wdata);
  mp_M17_AXI_transactor->WSTRB(M17_AXI_wstrb);
  mp_M17_AXI_transactor->WLAST(M17_AXI_wlast);
  mp_M17_AXI_transactor->WVALID(M17_AXI_wvalid);
  mp_M17_AXI_transactor->WREADY(M17_AXI_wready);
  mp_M17_AXI_transactor->BRESP(M17_AXI_bresp);
  mp_M17_AXI_transactor->BVALID(M17_AXI_bvalid);
  mp_M17_AXI_transactor->BREADY(M17_AXI_bready);
  mp_M17_AXI_transactor->ARADDR(M17_AXI_araddr);
  mp_M17_AXI_transactor->ARLEN(M17_AXI_arlen);
  mp_M17_AXI_transactor->ARSIZE(M17_AXI_arsize);
  mp_M17_AXI_transactor->ARBURST(M17_AXI_arburst);
  mp_M17_AXI_arlock_converter = new xsc::common::scalar2vectorN_converter<1>("M17_AXI_arlock_converter");
  mp_M17_AXI_arlock_converter->scalar_in(m_M17_AXI_arlock_converter_signal);
  mp_M17_AXI_arlock_converter->vector_out(M17_AXI_arlock);
  mp_M17_AXI_transactor->ARLOCK(m_M17_AXI_arlock_converter_signal);
  mp_M17_AXI_transactor->ARCACHE(M17_AXI_arcache);
  mp_M17_AXI_transactor->ARPROT(M17_AXI_arprot);
  mp_M17_AXI_transactor->ARQOS(M17_AXI_arqos);
  mp_M17_AXI_transactor->ARVALID(M17_AXI_arvalid);
  mp_M17_AXI_transactor->ARREADY(M17_AXI_arready);
  mp_M17_AXI_transactor->RDATA(M17_AXI_rdata);
  mp_M17_AXI_transactor->RRESP(M17_AXI_rresp);
  mp_M17_AXI_transactor->RLAST(M17_AXI_rlast);
  mp_M17_AXI_transactor->RVALID(M17_AXI_rvalid);
  mp_M17_AXI_transactor->RREADY(M17_AXI_rready);
  mp_M17_AXI_transactor->CLK(aclk);
  mp_M17_AXI_transactor->RST(aresetn);
  // configure M18_AXI_transactor
    xsc::common_cpp::properties M18_AXI_transactor_param_props;
    M18_AXI_transactor_param_props.addLong("DATA_WIDTH", "32");
    M18_AXI_transactor_param_props.addLong("FREQ_HZ", "100000000");
    M18_AXI_transactor_param_props.addLong("ID_WIDTH", "0");
    M18_AXI_transactor_param_props.addLong("ADDR_WIDTH", "12");
    M18_AXI_transactor_param_props.addLong("AWUSER_WIDTH", "0");
    M18_AXI_transactor_param_props.addLong("ARUSER_WIDTH", "0");
    M18_AXI_transactor_param_props.addLong("WUSER_WIDTH", "0");
    M18_AXI_transactor_param_props.addLong("RUSER_WIDTH", "0");
    M18_AXI_transactor_param_props.addLong("BUSER_WIDTH", "0");
    M18_AXI_transactor_param_props.addLong("HAS_BURST", "1");
    M18_AXI_transactor_param_props.addLong("HAS_LOCK", "1");
    M18_AXI_transactor_param_props.addLong("HAS_PROT", "1");
    M18_AXI_transactor_param_props.addLong("HAS_CACHE", "1");
    M18_AXI_transactor_param_props.addLong("HAS_QOS", "1");
    M18_AXI_transactor_param_props.addLong("HAS_REGION", "0");
    M18_AXI_transactor_param_props.addLong("HAS_WSTRB", "1");
    M18_AXI_transactor_param_props.addLong("HAS_BRESP", "1");
    M18_AXI_transactor_param_props.addLong("HAS_RRESP", "1");
    M18_AXI_transactor_param_props.addLong("SUPPORTS_NARROW_BURST", "0");
    M18_AXI_transactor_param_props.addLong("NUM_READ_OUTSTANDING", "2");
    M18_AXI_transactor_param_props.addLong("NUM_WRITE_OUTSTANDING", "2");
    M18_AXI_transactor_param_props.addLong("MAX_BURST_LENGTH", "256");
    M18_AXI_transactor_param_props.addLong("NUM_READ_THREADS", "1");
    M18_AXI_transactor_param_props.addLong("NUM_WRITE_THREADS", "1");
    M18_AXI_transactor_param_props.addLong("RUSER_BITS_PER_BYTE", "0");
    M18_AXI_transactor_param_props.addLong("WUSER_BITS_PER_BYTE", "0");
    M18_AXI_transactor_param_props.addLong("HAS_SIZE", "1");
    M18_AXI_transactor_param_props.addLong("HAS_RESET", "1");
    M18_AXI_transactor_param_props.addFloat("PHASE", "0.0");
    M18_AXI_transactor_param_props.addString("PROTOCOL", "AXI4");
    M18_AXI_transactor_param_props.addString("READ_WRITE_MODE", "READ_WRITE");
    M18_AXI_transactor_param_props.addString("CLK_DOMAIN", "Multi_convo_core_processing_system7_0_0_FCLK_CLK0");

    mp_M18_AXI_transactor = new xtlm::xaximm_xtlm2pin_t<32,12,1,1,1,1,1,1>("M18_AXI_transactor", M18_AXI_transactor_param_props);
  mp_M18_AXI_transactor->AWADDR(M18_AXI_awaddr);
  mp_M18_AXI_transactor->AWLEN(M18_AXI_awlen);
  mp_M18_AXI_transactor->AWSIZE(M18_AXI_awsize);
  mp_M18_AXI_transactor->AWBURST(M18_AXI_awburst);
  mp_M18_AXI_awlock_converter = new xsc::common::scalar2vectorN_converter<1>("M18_AXI_awlock_converter");
  mp_M18_AXI_awlock_converter->scalar_in(m_M18_AXI_awlock_converter_signal);
  mp_M18_AXI_awlock_converter->vector_out(M18_AXI_awlock);
  mp_M18_AXI_transactor->AWLOCK(m_M18_AXI_awlock_converter_signal);
  mp_M18_AXI_transactor->AWCACHE(M18_AXI_awcache);
  mp_M18_AXI_transactor->AWPROT(M18_AXI_awprot);
  mp_M18_AXI_transactor->AWQOS(M18_AXI_awqos);
  mp_M18_AXI_transactor->AWVALID(M18_AXI_awvalid);
  mp_M18_AXI_transactor->AWREADY(M18_AXI_awready);
  mp_M18_AXI_transactor->WDATA(M18_AXI_wdata);
  mp_M18_AXI_transactor->WSTRB(M18_AXI_wstrb);
  mp_M18_AXI_transactor->WLAST(M18_AXI_wlast);
  mp_M18_AXI_transactor->WVALID(M18_AXI_wvalid);
  mp_M18_AXI_transactor->WREADY(M18_AXI_wready);
  mp_M18_AXI_transactor->BRESP(M18_AXI_bresp);
  mp_M18_AXI_transactor->BVALID(M18_AXI_bvalid);
  mp_M18_AXI_transactor->BREADY(M18_AXI_bready);
  mp_M18_AXI_transactor->ARADDR(M18_AXI_araddr);
  mp_M18_AXI_transactor->ARLEN(M18_AXI_arlen);
  mp_M18_AXI_transactor->ARSIZE(M18_AXI_arsize);
  mp_M18_AXI_transactor->ARBURST(M18_AXI_arburst);
  mp_M18_AXI_arlock_converter = new xsc::common::scalar2vectorN_converter<1>("M18_AXI_arlock_converter");
  mp_M18_AXI_arlock_converter->scalar_in(m_M18_AXI_arlock_converter_signal);
  mp_M18_AXI_arlock_converter->vector_out(M18_AXI_arlock);
  mp_M18_AXI_transactor->ARLOCK(m_M18_AXI_arlock_converter_signal);
  mp_M18_AXI_transactor->ARCACHE(M18_AXI_arcache);
  mp_M18_AXI_transactor->ARPROT(M18_AXI_arprot);
  mp_M18_AXI_transactor->ARQOS(M18_AXI_arqos);
  mp_M18_AXI_transactor->ARVALID(M18_AXI_arvalid);
  mp_M18_AXI_transactor->ARREADY(M18_AXI_arready);
  mp_M18_AXI_transactor->RDATA(M18_AXI_rdata);
  mp_M18_AXI_transactor->RRESP(M18_AXI_rresp);
  mp_M18_AXI_transactor->RLAST(M18_AXI_rlast);
  mp_M18_AXI_transactor->RVALID(M18_AXI_rvalid);
  mp_M18_AXI_transactor->RREADY(M18_AXI_rready);
  mp_M18_AXI_transactor->CLK(aclk);
  mp_M18_AXI_transactor->RST(aresetn);
  // configure M19_AXI_transactor
    xsc::common_cpp::properties M19_AXI_transactor_param_props;
    M19_AXI_transactor_param_props.addLong("DATA_WIDTH", "32");
    M19_AXI_transactor_param_props.addLong("FREQ_HZ", "100000000");
    M19_AXI_transactor_param_props.addLong("ID_WIDTH", "0");
    M19_AXI_transactor_param_props.addLong("ADDR_WIDTH", "12");
    M19_AXI_transactor_param_props.addLong("AWUSER_WIDTH", "0");
    M19_AXI_transactor_param_props.addLong("ARUSER_WIDTH", "0");
    M19_AXI_transactor_param_props.addLong("WUSER_WIDTH", "0");
    M19_AXI_transactor_param_props.addLong("RUSER_WIDTH", "0");
    M19_AXI_transactor_param_props.addLong("BUSER_WIDTH", "0");
    M19_AXI_transactor_param_props.addLong("HAS_BURST", "1");
    M19_AXI_transactor_param_props.addLong("HAS_LOCK", "1");
    M19_AXI_transactor_param_props.addLong("HAS_PROT", "1");
    M19_AXI_transactor_param_props.addLong("HAS_CACHE", "1");
    M19_AXI_transactor_param_props.addLong("HAS_QOS", "1");
    M19_AXI_transactor_param_props.addLong("HAS_REGION", "0");
    M19_AXI_transactor_param_props.addLong("HAS_WSTRB", "1");
    M19_AXI_transactor_param_props.addLong("HAS_BRESP", "1");
    M19_AXI_transactor_param_props.addLong("HAS_RRESP", "1");
    M19_AXI_transactor_param_props.addLong("SUPPORTS_NARROW_BURST", "0");
    M19_AXI_transactor_param_props.addLong("NUM_READ_OUTSTANDING", "2");
    M19_AXI_transactor_param_props.addLong("NUM_WRITE_OUTSTANDING", "2");
    M19_AXI_transactor_param_props.addLong("MAX_BURST_LENGTH", "256");
    M19_AXI_transactor_param_props.addLong("NUM_READ_THREADS", "1");
    M19_AXI_transactor_param_props.addLong("NUM_WRITE_THREADS", "1");
    M19_AXI_transactor_param_props.addLong("RUSER_BITS_PER_BYTE", "0");
    M19_AXI_transactor_param_props.addLong("WUSER_BITS_PER_BYTE", "0");
    M19_AXI_transactor_param_props.addLong("HAS_SIZE", "1");
    M19_AXI_transactor_param_props.addLong("HAS_RESET", "1");
    M19_AXI_transactor_param_props.addFloat("PHASE", "0.0");
    M19_AXI_transactor_param_props.addString("PROTOCOL", "AXI4");
    M19_AXI_transactor_param_props.addString("READ_WRITE_MODE", "READ_WRITE");
    M19_AXI_transactor_param_props.addString("CLK_DOMAIN", "Multi_convo_core_processing_system7_0_0_FCLK_CLK0");

    mp_M19_AXI_transactor = new xtlm::xaximm_xtlm2pin_t<32,12,1,1,1,1,1,1>("M19_AXI_transactor", M19_AXI_transactor_param_props);
  mp_M19_AXI_transactor->AWADDR(M19_AXI_awaddr);
  mp_M19_AXI_transactor->AWLEN(M19_AXI_awlen);
  mp_M19_AXI_transactor->AWSIZE(M19_AXI_awsize);
  mp_M19_AXI_transactor->AWBURST(M19_AXI_awburst);
  mp_M19_AXI_awlock_converter = new xsc::common::scalar2vectorN_converter<1>("M19_AXI_awlock_converter");
  mp_M19_AXI_awlock_converter->scalar_in(m_M19_AXI_awlock_converter_signal);
  mp_M19_AXI_awlock_converter->vector_out(M19_AXI_awlock);
  mp_M19_AXI_transactor->AWLOCK(m_M19_AXI_awlock_converter_signal);
  mp_M19_AXI_transactor->AWCACHE(M19_AXI_awcache);
  mp_M19_AXI_transactor->AWPROT(M19_AXI_awprot);
  mp_M19_AXI_transactor->AWQOS(M19_AXI_awqos);
  mp_M19_AXI_transactor->AWVALID(M19_AXI_awvalid);
  mp_M19_AXI_transactor->AWREADY(M19_AXI_awready);
  mp_M19_AXI_transactor->WDATA(M19_AXI_wdata);
  mp_M19_AXI_transactor->WSTRB(M19_AXI_wstrb);
  mp_M19_AXI_transactor->WLAST(M19_AXI_wlast);
  mp_M19_AXI_transactor->WVALID(M19_AXI_wvalid);
  mp_M19_AXI_transactor->WREADY(M19_AXI_wready);
  mp_M19_AXI_transactor->BRESP(M19_AXI_bresp);
  mp_M19_AXI_transactor->BVALID(M19_AXI_bvalid);
  mp_M19_AXI_transactor->BREADY(M19_AXI_bready);
  mp_M19_AXI_transactor->ARADDR(M19_AXI_araddr);
  mp_M19_AXI_transactor->ARLEN(M19_AXI_arlen);
  mp_M19_AXI_transactor->ARSIZE(M19_AXI_arsize);
  mp_M19_AXI_transactor->ARBURST(M19_AXI_arburst);
  mp_M19_AXI_arlock_converter = new xsc::common::scalar2vectorN_converter<1>("M19_AXI_arlock_converter");
  mp_M19_AXI_arlock_converter->scalar_in(m_M19_AXI_arlock_converter_signal);
  mp_M19_AXI_arlock_converter->vector_out(M19_AXI_arlock);
  mp_M19_AXI_transactor->ARLOCK(m_M19_AXI_arlock_converter_signal);
  mp_M19_AXI_transactor->ARCACHE(M19_AXI_arcache);
  mp_M19_AXI_transactor->ARPROT(M19_AXI_arprot);
  mp_M19_AXI_transactor->ARQOS(M19_AXI_arqos);
  mp_M19_AXI_transactor->ARVALID(M19_AXI_arvalid);
  mp_M19_AXI_transactor->ARREADY(M19_AXI_arready);
  mp_M19_AXI_transactor->RDATA(M19_AXI_rdata);
  mp_M19_AXI_transactor->RRESP(M19_AXI_rresp);
  mp_M19_AXI_transactor->RLAST(M19_AXI_rlast);
  mp_M19_AXI_transactor->RVALID(M19_AXI_rvalid);
  mp_M19_AXI_transactor->RREADY(M19_AXI_rready);
  mp_M19_AXI_transactor->CLK(aclk);
  mp_M19_AXI_transactor->RST(aresetn);
  // configure M20_AXI_transactor
    xsc::common_cpp::properties M20_AXI_transactor_param_props;
    M20_AXI_transactor_param_props.addLong("DATA_WIDTH", "32");
    M20_AXI_transactor_param_props.addLong("FREQ_HZ", "100000000");
    M20_AXI_transactor_param_props.addLong("ID_WIDTH", "0");
    M20_AXI_transactor_param_props.addLong("ADDR_WIDTH", "12");
    M20_AXI_transactor_param_props.addLong("AWUSER_WIDTH", "0");
    M20_AXI_transactor_param_props.addLong("ARUSER_WIDTH", "0");
    M20_AXI_transactor_param_props.addLong("WUSER_WIDTH", "0");
    M20_AXI_transactor_param_props.addLong("RUSER_WIDTH", "0");
    M20_AXI_transactor_param_props.addLong("BUSER_WIDTH", "0");
    M20_AXI_transactor_param_props.addLong("HAS_BURST", "1");
    M20_AXI_transactor_param_props.addLong("HAS_LOCK", "1");
    M20_AXI_transactor_param_props.addLong("HAS_PROT", "1");
    M20_AXI_transactor_param_props.addLong("HAS_CACHE", "1");
    M20_AXI_transactor_param_props.addLong("HAS_QOS", "1");
    M20_AXI_transactor_param_props.addLong("HAS_REGION", "0");
    M20_AXI_transactor_param_props.addLong("HAS_WSTRB", "1");
    M20_AXI_transactor_param_props.addLong("HAS_BRESP", "1");
    M20_AXI_transactor_param_props.addLong("HAS_RRESP", "1");
    M20_AXI_transactor_param_props.addLong("SUPPORTS_NARROW_BURST", "0");
    M20_AXI_transactor_param_props.addLong("NUM_READ_OUTSTANDING", "2");
    M20_AXI_transactor_param_props.addLong("NUM_WRITE_OUTSTANDING", "2");
    M20_AXI_transactor_param_props.addLong("MAX_BURST_LENGTH", "256");
    M20_AXI_transactor_param_props.addLong("NUM_READ_THREADS", "1");
    M20_AXI_transactor_param_props.addLong("NUM_WRITE_THREADS", "1");
    M20_AXI_transactor_param_props.addLong("RUSER_BITS_PER_BYTE", "0");
    M20_AXI_transactor_param_props.addLong("WUSER_BITS_PER_BYTE", "0");
    M20_AXI_transactor_param_props.addLong("HAS_SIZE", "1");
    M20_AXI_transactor_param_props.addLong("HAS_RESET", "1");
    M20_AXI_transactor_param_props.addFloat("PHASE", "0.0");
    M20_AXI_transactor_param_props.addString("PROTOCOL", "AXI4");
    M20_AXI_transactor_param_props.addString("READ_WRITE_MODE", "READ_WRITE");
    M20_AXI_transactor_param_props.addString("CLK_DOMAIN", "Multi_convo_core_processing_system7_0_0_FCLK_CLK0");

    mp_M20_AXI_transactor = new xtlm::xaximm_xtlm2pin_t<32,12,1,1,1,1,1,1>("M20_AXI_transactor", M20_AXI_transactor_param_props);
  mp_M20_AXI_transactor->AWADDR(M20_AXI_awaddr);
  mp_M20_AXI_transactor->AWLEN(M20_AXI_awlen);
  mp_M20_AXI_transactor->AWSIZE(M20_AXI_awsize);
  mp_M20_AXI_transactor->AWBURST(M20_AXI_awburst);
  mp_M20_AXI_awlock_converter = new xsc::common::scalar2vectorN_converter<1>("M20_AXI_awlock_converter");
  mp_M20_AXI_awlock_converter->scalar_in(m_M20_AXI_awlock_converter_signal);
  mp_M20_AXI_awlock_converter->vector_out(M20_AXI_awlock);
  mp_M20_AXI_transactor->AWLOCK(m_M20_AXI_awlock_converter_signal);
  mp_M20_AXI_transactor->AWCACHE(M20_AXI_awcache);
  mp_M20_AXI_transactor->AWPROT(M20_AXI_awprot);
  mp_M20_AXI_transactor->AWQOS(M20_AXI_awqos);
  mp_M20_AXI_transactor->AWVALID(M20_AXI_awvalid);
  mp_M20_AXI_transactor->AWREADY(M20_AXI_awready);
  mp_M20_AXI_transactor->WDATA(M20_AXI_wdata);
  mp_M20_AXI_transactor->WSTRB(M20_AXI_wstrb);
  mp_M20_AXI_transactor->WLAST(M20_AXI_wlast);
  mp_M20_AXI_transactor->WVALID(M20_AXI_wvalid);
  mp_M20_AXI_transactor->WREADY(M20_AXI_wready);
  mp_M20_AXI_transactor->BRESP(M20_AXI_bresp);
  mp_M20_AXI_transactor->BVALID(M20_AXI_bvalid);
  mp_M20_AXI_transactor->BREADY(M20_AXI_bready);
  mp_M20_AXI_transactor->ARADDR(M20_AXI_araddr);
  mp_M20_AXI_transactor->ARLEN(M20_AXI_arlen);
  mp_M20_AXI_transactor->ARSIZE(M20_AXI_arsize);
  mp_M20_AXI_transactor->ARBURST(M20_AXI_arburst);
  mp_M20_AXI_arlock_converter = new xsc::common::scalar2vectorN_converter<1>("M20_AXI_arlock_converter");
  mp_M20_AXI_arlock_converter->scalar_in(m_M20_AXI_arlock_converter_signal);
  mp_M20_AXI_arlock_converter->vector_out(M20_AXI_arlock);
  mp_M20_AXI_transactor->ARLOCK(m_M20_AXI_arlock_converter_signal);
  mp_M20_AXI_transactor->ARCACHE(M20_AXI_arcache);
  mp_M20_AXI_transactor->ARPROT(M20_AXI_arprot);
  mp_M20_AXI_transactor->ARQOS(M20_AXI_arqos);
  mp_M20_AXI_transactor->ARVALID(M20_AXI_arvalid);
  mp_M20_AXI_transactor->ARREADY(M20_AXI_arready);
  mp_M20_AXI_transactor->RDATA(M20_AXI_rdata);
  mp_M20_AXI_transactor->RRESP(M20_AXI_rresp);
  mp_M20_AXI_transactor->RLAST(M20_AXI_rlast);
  mp_M20_AXI_transactor->RVALID(M20_AXI_rvalid);
  mp_M20_AXI_transactor->RREADY(M20_AXI_rready);
  mp_M20_AXI_transactor->CLK(aclk);
  mp_M20_AXI_transactor->RST(aresetn);
  // configure M21_AXI_transactor
    xsc::common_cpp::properties M21_AXI_transactor_param_props;
    M21_AXI_transactor_param_props.addLong("DATA_WIDTH", "32");
    M21_AXI_transactor_param_props.addLong("FREQ_HZ", "100000000");
    M21_AXI_transactor_param_props.addLong("ID_WIDTH", "0");
    M21_AXI_transactor_param_props.addLong("ADDR_WIDTH", "12");
    M21_AXI_transactor_param_props.addLong("AWUSER_WIDTH", "0");
    M21_AXI_transactor_param_props.addLong("ARUSER_WIDTH", "0");
    M21_AXI_transactor_param_props.addLong("WUSER_WIDTH", "0");
    M21_AXI_transactor_param_props.addLong("RUSER_WIDTH", "0");
    M21_AXI_transactor_param_props.addLong("BUSER_WIDTH", "0");
    M21_AXI_transactor_param_props.addLong("HAS_BURST", "1");
    M21_AXI_transactor_param_props.addLong("HAS_LOCK", "1");
    M21_AXI_transactor_param_props.addLong("HAS_PROT", "1");
    M21_AXI_transactor_param_props.addLong("HAS_CACHE", "1");
    M21_AXI_transactor_param_props.addLong("HAS_QOS", "1");
    M21_AXI_transactor_param_props.addLong("HAS_REGION", "0");
    M21_AXI_transactor_param_props.addLong("HAS_WSTRB", "1");
    M21_AXI_transactor_param_props.addLong("HAS_BRESP", "1");
    M21_AXI_transactor_param_props.addLong("HAS_RRESP", "1");
    M21_AXI_transactor_param_props.addLong("SUPPORTS_NARROW_BURST", "0");
    M21_AXI_transactor_param_props.addLong("NUM_READ_OUTSTANDING", "2");
    M21_AXI_transactor_param_props.addLong("NUM_WRITE_OUTSTANDING", "2");
    M21_AXI_transactor_param_props.addLong("MAX_BURST_LENGTH", "256");
    M21_AXI_transactor_param_props.addLong("NUM_READ_THREADS", "1");
    M21_AXI_transactor_param_props.addLong("NUM_WRITE_THREADS", "1");
    M21_AXI_transactor_param_props.addLong("RUSER_BITS_PER_BYTE", "0");
    M21_AXI_transactor_param_props.addLong("WUSER_BITS_PER_BYTE", "0");
    M21_AXI_transactor_param_props.addLong("HAS_SIZE", "1");
    M21_AXI_transactor_param_props.addLong("HAS_RESET", "1");
    M21_AXI_transactor_param_props.addFloat("PHASE", "0.0");
    M21_AXI_transactor_param_props.addString("PROTOCOL", "AXI4");
    M21_AXI_transactor_param_props.addString("READ_WRITE_MODE", "READ_WRITE");
    M21_AXI_transactor_param_props.addString("CLK_DOMAIN", "Multi_convo_core_processing_system7_0_0_FCLK_CLK0");

    mp_M21_AXI_transactor = new xtlm::xaximm_xtlm2pin_t<32,12,1,1,1,1,1,1>("M21_AXI_transactor", M21_AXI_transactor_param_props);
  mp_M21_AXI_transactor->AWADDR(M21_AXI_awaddr);
  mp_M21_AXI_transactor->AWLEN(M21_AXI_awlen);
  mp_M21_AXI_transactor->AWSIZE(M21_AXI_awsize);
  mp_M21_AXI_transactor->AWBURST(M21_AXI_awburst);
  mp_M21_AXI_awlock_converter = new xsc::common::scalar2vectorN_converter<1>("M21_AXI_awlock_converter");
  mp_M21_AXI_awlock_converter->scalar_in(m_M21_AXI_awlock_converter_signal);
  mp_M21_AXI_awlock_converter->vector_out(M21_AXI_awlock);
  mp_M21_AXI_transactor->AWLOCK(m_M21_AXI_awlock_converter_signal);
  mp_M21_AXI_transactor->AWCACHE(M21_AXI_awcache);
  mp_M21_AXI_transactor->AWPROT(M21_AXI_awprot);
  mp_M21_AXI_transactor->AWQOS(M21_AXI_awqos);
  mp_M21_AXI_transactor->AWVALID(M21_AXI_awvalid);
  mp_M21_AXI_transactor->AWREADY(M21_AXI_awready);
  mp_M21_AXI_transactor->WDATA(M21_AXI_wdata);
  mp_M21_AXI_transactor->WSTRB(M21_AXI_wstrb);
  mp_M21_AXI_transactor->WLAST(M21_AXI_wlast);
  mp_M21_AXI_transactor->WVALID(M21_AXI_wvalid);
  mp_M21_AXI_transactor->WREADY(M21_AXI_wready);
  mp_M21_AXI_transactor->BRESP(M21_AXI_bresp);
  mp_M21_AXI_transactor->BVALID(M21_AXI_bvalid);
  mp_M21_AXI_transactor->BREADY(M21_AXI_bready);
  mp_M21_AXI_transactor->ARADDR(M21_AXI_araddr);
  mp_M21_AXI_transactor->ARLEN(M21_AXI_arlen);
  mp_M21_AXI_transactor->ARSIZE(M21_AXI_arsize);
  mp_M21_AXI_transactor->ARBURST(M21_AXI_arburst);
  mp_M21_AXI_arlock_converter = new xsc::common::scalar2vectorN_converter<1>("M21_AXI_arlock_converter");
  mp_M21_AXI_arlock_converter->scalar_in(m_M21_AXI_arlock_converter_signal);
  mp_M21_AXI_arlock_converter->vector_out(M21_AXI_arlock);
  mp_M21_AXI_transactor->ARLOCK(m_M21_AXI_arlock_converter_signal);
  mp_M21_AXI_transactor->ARCACHE(M21_AXI_arcache);
  mp_M21_AXI_transactor->ARPROT(M21_AXI_arprot);
  mp_M21_AXI_transactor->ARQOS(M21_AXI_arqos);
  mp_M21_AXI_transactor->ARVALID(M21_AXI_arvalid);
  mp_M21_AXI_transactor->ARREADY(M21_AXI_arready);
  mp_M21_AXI_transactor->RDATA(M21_AXI_rdata);
  mp_M21_AXI_transactor->RRESP(M21_AXI_rresp);
  mp_M21_AXI_transactor->RLAST(M21_AXI_rlast);
  mp_M21_AXI_transactor->RVALID(M21_AXI_rvalid);
  mp_M21_AXI_transactor->RREADY(M21_AXI_rready);
  mp_M21_AXI_transactor->CLK(aclk);
  mp_M21_AXI_transactor->RST(aresetn);
  // configure M22_AXI_transactor
    xsc::common_cpp::properties M22_AXI_transactor_param_props;
    M22_AXI_transactor_param_props.addLong("DATA_WIDTH", "32");
    M22_AXI_transactor_param_props.addLong("FREQ_HZ", "100000000");
    M22_AXI_transactor_param_props.addLong("ID_WIDTH", "0");
    M22_AXI_transactor_param_props.addLong("ADDR_WIDTH", "12");
    M22_AXI_transactor_param_props.addLong("AWUSER_WIDTH", "0");
    M22_AXI_transactor_param_props.addLong("ARUSER_WIDTH", "0");
    M22_AXI_transactor_param_props.addLong("WUSER_WIDTH", "0");
    M22_AXI_transactor_param_props.addLong("RUSER_WIDTH", "0");
    M22_AXI_transactor_param_props.addLong("BUSER_WIDTH", "0");
    M22_AXI_transactor_param_props.addLong("HAS_BURST", "1");
    M22_AXI_transactor_param_props.addLong("HAS_LOCK", "1");
    M22_AXI_transactor_param_props.addLong("HAS_PROT", "1");
    M22_AXI_transactor_param_props.addLong("HAS_CACHE", "1");
    M22_AXI_transactor_param_props.addLong("HAS_QOS", "1");
    M22_AXI_transactor_param_props.addLong("HAS_REGION", "0");
    M22_AXI_transactor_param_props.addLong("HAS_WSTRB", "1");
    M22_AXI_transactor_param_props.addLong("HAS_BRESP", "1");
    M22_AXI_transactor_param_props.addLong("HAS_RRESP", "1");
    M22_AXI_transactor_param_props.addLong("SUPPORTS_NARROW_BURST", "0");
    M22_AXI_transactor_param_props.addLong("NUM_READ_OUTSTANDING", "2");
    M22_AXI_transactor_param_props.addLong("NUM_WRITE_OUTSTANDING", "2");
    M22_AXI_transactor_param_props.addLong("MAX_BURST_LENGTH", "256");
    M22_AXI_transactor_param_props.addLong("NUM_READ_THREADS", "1");
    M22_AXI_transactor_param_props.addLong("NUM_WRITE_THREADS", "1");
    M22_AXI_transactor_param_props.addLong("RUSER_BITS_PER_BYTE", "0");
    M22_AXI_transactor_param_props.addLong("WUSER_BITS_PER_BYTE", "0");
    M22_AXI_transactor_param_props.addLong("HAS_SIZE", "1");
    M22_AXI_transactor_param_props.addLong("HAS_RESET", "1");
    M22_AXI_transactor_param_props.addFloat("PHASE", "0.0");
    M22_AXI_transactor_param_props.addString("PROTOCOL", "AXI4");
    M22_AXI_transactor_param_props.addString("READ_WRITE_MODE", "READ_WRITE");
    M22_AXI_transactor_param_props.addString("CLK_DOMAIN", "Multi_convo_core_processing_system7_0_0_FCLK_CLK0");

    mp_M22_AXI_transactor = new xtlm::xaximm_xtlm2pin_t<32,12,1,1,1,1,1,1>("M22_AXI_transactor", M22_AXI_transactor_param_props);
  mp_M22_AXI_transactor->AWADDR(M22_AXI_awaddr);
  mp_M22_AXI_transactor->AWLEN(M22_AXI_awlen);
  mp_M22_AXI_transactor->AWSIZE(M22_AXI_awsize);
  mp_M22_AXI_transactor->AWBURST(M22_AXI_awburst);
  mp_M22_AXI_awlock_converter = new xsc::common::scalar2vectorN_converter<1>("M22_AXI_awlock_converter");
  mp_M22_AXI_awlock_converter->scalar_in(m_M22_AXI_awlock_converter_signal);
  mp_M22_AXI_awlock_converter->vector_out(M22_AXI_awlock);
  mp_M22_AXI_transactor->AWLOCK(m_M22_AXI_awlock_converter_signal);
  mp_M22_AXI_transactor->AWCACHE(M22_AXI_awcache);
  mp_M22_AXI_transactor->AWPROT(M22_AXI_awprot);
  mp_M22_AXI_transactor->AWQOS(M22_AXI_awqos);
  mp_M22_AXI_transactor->AWVALID(M22_AXI_awvalid);
  mp_M22_AXI_transactor->AWREADY(M22_AXI_awready);
  mp_M22_AXI_transactor->WDATA(M22_AXI_wdata);
  mp_M22_AXI_transactor->WSTRB(M22_AXI_wstrb);
  mp_M22_AXI_transactor->WLAST(M22_AXI_wlast);
  mp_M22_AXI_transactor->WVALID(M22_AXI_wvalid);
  mp_M22_AXI_transactor->WREADY(M22_AXI_wready);
  mp_M22_AXI_transactor->BRESP(M22_AXI_bresp);
  mp_M22_AXI_transactor->BVALID(M22_AXI_bvalid);
  mp_M22_AXI_transactor->BREADY(M22_AXI_bready);
  mp_M22_AXI_transactor->ARADDR(M22_AXI_araddr);
  mp_M22_AXI_transactor->ARLEN(M22_AXI_arlen);
  mp_M22_AXI_transactor->ARSIZE(M22_AXI_arsize);
  mp_M22_AXI_transactor->ARBURST(M22_AXI_arburst);
  mp_M22_AXI_arlock_converter = new xsc::common::scalar2vectorN_converter<1>("M22_AXI_arlock_converter");
  mp_M22_AXI_arlock_converter->scalar_in(m_M22_AXI_arlock_converter_signal);
  mp_M22_AXI_arlock_converter->vector_out(M22_AXI_arlock);
  mp_M22_AXI_transactor->ARLOCK(m_M22_AXI_arlock_converter_signal);
  mp_M22_AXI_transactor->ARCACHE(M22_AXI_arcache);
  mp_M22_AXI_transactor->ARPROT(M22_AXI_arprot);
  mp_M22_AXI_transactor->ARQOS(M22_AXI_arqos);
  mp_M22_AXI_transactor->ARVALID(M22_AXI_arvalid);
  mp_M22_AXI_transactor->ARREADY(M22_AXI_arready);
  mp_M22_AXI_transactor->RDATA(M22_AXI_rdata);
  mp_M22_AXI_transactor->RRESP(M22_AXI_rresp);
  mp_M22_AXI_transactor->RLAST(M22_AXI_rlast);
  mp_M22_AXI_transactor->RVALID(M22_AXI_rvalid);
  mp_M22_AXI_transactor->RREADY(M22_AXI_rready);
  mp_M22_AXI_transactor->CLK(aclk);
  mp_M22_AXI_transactor->RST(aresetn);
  // configure M23_AXI_transactor
    xsc::common_cpp::properties M23_AXI_transactor_param_props;
    M23_AXI_transactor_param_props.addLong("DATA_WIDTH", "32");
    M23_AXI_transactor_param_props.addLong("FREQ_HZ", "100000000");
    M23_AXI_transactor_param_props.addLong("ID_WIDTH", "0");
    M23_AXI_transactor_param_props.addLong("ADDR_WIDTH", "12");
    M23_AXI_transactor_param_props.addLong("AWUSER_WIDTH", "0");
    M23_AXI_transactor_param_props.addLong("ARUSER_WIDTH", "0");
    M23_AXI_transactor_param_props.addLong("WUSER_WIDTH", "0");
    M23_AXI_transactor_param_props.addLong("RUSER_WIDTH", "0");
    M23_AXI_transactor_param_props.addLong("BUSER_WIDTH", "0");
    M23_AXI_transactor_param_props.addLong("HAS_BURST", "1");
    M23_AXI_transactor_param_props.addLong("HAS_LOCK", "1");
    M23_AXI_transactor_param_props.addLong("HAS_PROT", "1");
    M23_AXI_transactor_param_props.addLong("HAS_CACHE", "1");
    M23_AXI_transactor_param_props.addLong("HAS_QOS", "1");
    M23_AXI_transactor_param_props.addLong("HAS_REGION", "0");
    M23_AXI_transactor_param_props.addLong("HAS_WSTRB", "1");
    M23_AXI_transactor_param_props.addLong("HAS_BRESP", "1");
    M23_AXI_transactor_param_props.addLong("HAS_RRESP", "1");
    M23_AXI_transactor_param_props.addLong("SUPPORTS_NARROW_BURST", "0");
    M23_AXI_transactor_param_props.addLong("NUM_READ_OUTSTANDING", "2");
    M23_AXI_transactor_param_props.addLong("NUM_WRITE_OUTSTANDING", "2");
    M23_AXI_transactor_param_props.addLong("MAX_BURST_LENGTH", "256");
    M23_AXI_transactor_param_props.addLong("NUM_READ_THREADS", "1");
    M23_AXI_transactor_param_props.addLong("NUM_WRITE_THREADS", "1");
    M23_AXI_transactor_param_props.addLong("RUSER_BITS_PER_BYTE", "0");
    M23_AXI_transactor_param_props.addLong("WUSER_BITS_PER_BYTE", "0");
    M23_AXI_transactor_param_props.addLong("HAS_SIZE", "1");
    M23_AXI_transactor_param_props.addLong("HAS_RESET", "1");
    M23_AXI_transactor_param_props.addFloat("PHASE", "0.0");
    M23_AXI_transactor_param_props.addString("PROTOCOL", "AXI4");
    M23_AXI_transactor_param_props.addString("READ_WRITE_MODE", "READ_WRITE");
    M23_AXI_transactor_param_props.addString("CLK_DOMAIN", "Multi_convo_core_processing_system7_0_0_FCLK_CLK0");

    mp_M23_AXI_transactor = new xtlm::xaximm_xtlm2pin_t<32,12,1,1,1,1,1,1>("M23_AXI_transactor", M23_AXI_transactor_param_props);
  mp_M23_AXI_transactor->AWADDR(M23_AXI_awaddr);
  mp_M23_AXI_transactor->AWLEN(M23_AXI_awlen);
  mp_M23_AXI_transactor->AWSIZE(M23_AXI_awsize);
  mp_M23_AXI_transactor->AWBURST(M23_AXI_awburst);
  mp_M23_AXI_awlock_converter = new xsc::common::scalar2vectorN_converter<1>("M23_AXI_awlock_converter");
  mp_M23_AXI_awlock_converter->scalar_in(m_M23_AXI_awlock_converter_signal);
  mp_M23_AXI_awlock_converter->vector_out(M23_AXI_awlock);
  mp_M23_AXI_transactor->AWLOCK(m_M23_AXI_awlock_converter_signal);
  mp_M23_AXI_transactor->AWCACHE(M23_AXI_awcache);
  mp_M23_AXI_transactor->AWPROT(M23_AXI_awprot);
  mp_M23_AXI_transactor->AWQOS(M23_AXI_awqos);
  mp_M23_AXI_transactor->AWVALID(M23_AXI_awvalid);
  mp_M23_AXI_transactor->AWREADY(M23_AXI_awready);
  mp_M23_AXI_transactor->WDATA(M23_AXI_wdata);
  mp_M23_AXI_transactor->WSTRB(M23_AXI_wstrb);
  mp_M23_AXI_transactor->WLAST(M23_AXI_wlast);
  mp_M23_AXI_transactor->WVALID(M23_AXI_wvalid);
  mp_M23_AXI_transactor->WREADY(M23_AXI_wready);
  mp_M23_AXI_transactor->BRESP(M23_AXI_bresp);
  mp_M23_AXI_transactor->BVALID(M23_AXI_bvalid);
  mp_M23_AXI_transactor->BREADY(M23_AXI_bready);
  mp_M23_AXI_transactor->ARADDR(M23_AXI_araddr);
  mp_M23_AXI_transactor->ARLEN(M23_AXI_arlen);
  mp_M23_AXI_transactor->ARSIZE(M23_AXI_arsize);
  mp_M23_AXI_transactor->ARBURST(M23_AXI_arburst);
  mp_M23_AXI_arlock_converter = new xsc::common::scalar2vectorN_converter<1>("M23_AXI_arlock_converter");
  mp_M23_AXI_arlock_converter->scalar_in(m_M23_AXI_arlock_converter_signal);
  mp_M23_AXI_arlock_converter->vector_out(M23_AXI_arlock);
  mp_M23_AXI_transactor->ARLOCK(m_M23_AXI_arlock_converter_signal);
  mp_M23_AXI_transactor->ARCACHE(M23_AXI_arcache);
  mp_M23_AXI_transactor->ARPROT(M23_AXI_arprot);
  mp_M23_AXI_transactor->ARQOS(M23_AXI_arqos);
  mp_M23_AXI_transactor->ARVALID(M23_AXI_arvalid);
  mp_M23_AXI_transactor->ARREADY(M23_AXI_arready);
  mp_M23_AXI_transactor->RDATA(M23_AXI_rdata);
  mp_M23_AXI_transactor->RRESP(M23_AXI_rresp);
  mp_M23_AXI_transactor->RLAST(M23_AXI_rlast);
  mp_M23_AXI_transactor->RVALID(M23_AXI_rvalid);
  mp_M23_AXI_transactor->RREADY(M23_AXI_rready);
  mp_M23_AXI_transactor->CLK(aclk);
  mp_M23_AXI_transactor->RST(aresetn);

  // initialize transactors stubs
  S00_AXI_transactor_target_wr_socket_stub = nullptr;
  S00_AXI_transactor_target_rd_socket_stub = nullptr;
  M00_AXI_transactor_initiator_wr_socket_stub = nullptr;
  M00_AXI_transactor_initiator_rd_socket_stub = nullptr;
  M01_AXI_transactor_initiator_wr_socket_stub = nullptr;
  M01_AXI_transactor_initiator_rd_socket_stub = nullptr;
  M02_AXI_transactor_initiator_wr_socket_stub = nullptr;
  M02_AXI_transactor_initiator_rd_socket_stub = nullptr;
  M03_AXI_transactor_initiator_wr_socket_stub = nullptr;
  M03_AXI_transactor_initiator_rd_socket_stub = nullptr;
  M04_AXI_transactor_initiator_wr_socket_stub = nullptr;
  M04_AXI_transactor_initiator_rd_socket_stub = nullptr;
  M05_AXI_transactor_initiator_wr_socket_stub = nullptr;
  M05_AXI_transactor_initiator_rd_socket_stub = nullptr;
  M06_AXI_transactor_initiator_wr_socket_stub = nullptr;
  M06_AXI_transactor_initiator_rd_socket_stub = nullptr;
  M07_AXI_transactor_initiator_wr_socket_stub = nullptr;
  M07_AXI_transactor_initiator_rd_socket_stub = nullptr;
  M08_AXI_transactor_initiator_wr_socket_stub = nullptr;
  M08_AXI_transactor_initiator_rd_socket_stub = nullptr;
  M09_AXI_transactor_initiator_wr_socket_stub = nullptr;
  M09_AXI_transactor_initiator_rd_socket_stub = nullptr;
  M10_AXI_transactor_initiator_wr_socket_stub = nullptr;
  M10_AXI_transactor_initiator_rd_socket_stub = nullptr;
  M11_AXI_transactor_initiator_wr_socket_stub = nullptr;
  M11_AXI_transactor_initiator_rd_socket_stub = nullptr;
  M12_AXI_transactor_initiator_wr_socket_stub = nullptr;
  M12_AXI_transactor_initiator_rd_socket_stub = nullptr;
  M13_AXI_transactor_initiator_wr_socket_stub = nullptr;
  M13_AXI_transactor_initiator_rd_socket_stub = nullptr;
  M14_AXI_transactor_initiator_wr_socket_stub = nullptr;
  M14_AXI_transactor_initiator_rd_socket_stub = nullptr;
  M15_AXI_transactor_initiator_wr_socket_stub = nullptr;
  M15_AXI_transactor_initiator_rd_socket_stub = nullptr;
  M16_AXI_transactor_initiator_wr_socket_stub = nullptr;
  M16_AXI_transactor_initiator_rd_socket_stub = nullptr;
  M17_AXI_transactor_initiator_wr_socket_stub = nullptr;
  M17_AXI_transactor_initiator_rd_socket_stub = nullptr;
  M18_AXI_transactor_initiator_wr_socket_stub = nullptr;
  M18_AXI_transactor_initiator_rd_socket_stub = nullptr;
  M19_AXI_transactor_initiator_wr_socket_stub = nullptr;
  M19_AXI_transactor_initiator_rd_socket_stub = nullptr;
  M20_AXI_transactor_initiator_wr_socket_stub = nullptr;
  M20_AXI_transactor_initiator_rd_socket_stub = nullptr;
  M21_AXI_transactor_initiator_wr_socket_stub = nullptr;
  M21_AXI_transactor_initiator_rd_socket_stub = nullptr;
  M22_AXI_transactor_initiator_wr_socket_stub = nullptr;
  M22_AXI_transactor_initiator_rd_socket_stub = nullptr;
  M23_AXI_transactor_initiator_wr_socket_stub = nullptr;
  M23_AXI_transactor_initiator_rd_socket_stub = nullptr;

}

void Multi_convo_core_smartconnect_0_0::before_end_of_elaboration()
{
  // configure 'S00_AXI' transactor
  if (xsc::utils::xsc_sim_manager::getInstanceParameterInt("Multi_convo_core_smartconnect_0_0", "S00_AXI_TLM_MODE") != 1)
  {
    mp_impl->S00_AXI_tlm_aximm_read_socket->bind(*(mp_S00_AXI_transactor->rd_socket));
    mp_impl->S00_AXI_tlm_aximm_write_socket->bind(*(mp_S00_AXI_transactor->wr_socket));
  
  }
  else
  {
    S00_AXI_transactor_target_wr_socket_stub = new xtlm::xtlm_aximm_target_stub("wr_socket",0);
    S00_AXI_transactor_target_wr_socket_stub->bind(*(mp_S00_AXI_transactor->wr_socket));
    S00_AXI_transactor_target_rd_socket_stub = new xtlm::xtlm_aximm_target_stub("rd_socket",0);
    S00_AXI_transactor_target_rd_socket_stub->bind(*(mp_S00_AXI_transactor->rd_socket));
    mp_S00_AXI_transactor->disable_transactor();
  }

  // configure 'M00_AXI' transactor
  if (xsc::utils::xsc_sim_manager::getInstanceParameterInt("Multi_convo_core_smartconnect_0_0", "M00_AXI_TLM_MODE") != 1)
  {
    mp_impl->M00_AXI_tlm_aximm_read_socket->bind(*(mp_M00_AXI_transactor->rd_socket));
    mp_impl->M00_AXI_tlm_aximm_write_socket->bind(*(mp_M00_AXI_transactor->wr_socket));
  
  }
  else
  {
    M00_AXI_transactor_initiator_wr_socket_stub = new xtlm::xtlm_aximm_initiator_stub("wr_socket",0);
    M00_AXI_transactor_initiator_wr_socket_stub->bind(*(mp_M00_AXI_transactor->wr_socket));
    M00_AXI_transactor_initiator_rd_socket_stub = new xtlm::xtlm_aximm_initiator_stub("rd_socket",0);
    M00_AXI_transactor_initiator_rd_socket_stub->bind(*(mp_M00_AXI_transactor->rd_socket));
    mp_M00_AXI_transactor->disable_transactor();
  }

  // configure 'M01_AXI' transactor
  if (xsc::utils::xsc_sim_manager::getInstanceParameterInt("Multi_convo_core_smartconnect_0_0", "M01_AXI_TLM_MODE") != 1)
  {
    mp_impl->M01_AXI_tlm_aximm_read_socket->bind(*(mp_M01_AXI_transactor->rd_socket));
    mp_impl->M01_AXI_tlm_aximm_write_socket->bind(*(mp_M01_AXI_transactor->wr_socket));
  
  }
  else
  {
    M01_AXI_transactor_initiator_wr_socket_stub = new xtlm::xtlm_aximm_initiator_stub("wr_socket",0);
    M01_AXI_transactor_initiator_wr_socket_stub->bind(*(mp_M01_AXI_transactor->wr_socket));
    M01_AXI_transactor_initiator_rd_socket_stub = new xtlm::xtlm_aximm_initiator_stub("rd_socket",0);
    M01_AXI_transactor_initiator_rd_socket_stub->bind(*(mp_M01_AXI_transactor->rd_socket));
    mp_M01_AXI_transactor->disable_transactor();
  }

  // configure 'M02_AXI' transactor
  if (xsc::utils::xsc_sim_manager::getInstanceParameterInt("Multi_convo_core_smartconnect_0_0", "M02_AXI_TLM_MODE") != 1)
  {
    mp_impl->M02_AXI_tlm_aximm_read_socket->bind(*(mp_M02_AXI_transactor->rd_socket));
    mp_impl->M02_AXI_tlm_aximm_write_socket->bind(*(mp_M02_AXI_transactor->wr_socket));
  
  }
  else
  {
    M02_AXI_transactor_initiator_wr_socket_stub = new xtlm::xtlm_aximm_initiator_stub("wr_socket",0);
    M02_AXI_transactor_initiator_wr_socket_stub->bind(*(mp_M02_AXI_transactor->wr_socket));
    M02_AXI_transactor_initiator_rd_socket_stub = new xtlm::xtlm_aximm_initiator_stub("rd_socket",0);
    M02_AXI_transactor_initiator_rd_socket_stub->bind(*(mp_M02_AXI_transactor->rd_socket));
    mp_M02_AXI_transactor->disable_transactor();
  }

  // configure 'M03_AXI' transactor
  if (xsc::utils::xsc_sim_manager::getInstanceParameterInt("Multi_convo_core_smartconnect_0_0", "M03_AXI_TLM_MODE") != 1)
  {
    mp_impl->M03_AXI_tlm_aximm_read_socket->bind(*(mp_M03_AXI_transactor->rd_socket));
    mp_impl->M03_AXI_tlm_aximm_write_socket->bind(*(mp_M03_AXI_transactor->wr_socket));
  
  }
  else
  {
    M03_AXI_transactor_initiator_wr_socket_stub = new xtlm::xtlm_aximm_initiator_stub("wr_socket",0);
    M03_AXI_transactor_initiator_wr_socket_stub->bind(*(mp_M03_AXI_transactor->wr_socket));
    M03_AXI_transactor_initiator_rd_socket_stub = new xtlm::xtlm_aximm_initiator_stub("rd_socket",0);
    M03_AXI_transactor_initiator_rd_socket_stub->bind(*(mp_M03_AXI_transactor->rd_socket));
    mp_M03_AXI_transactor->disable_transactor();
  }

  // configure 'M04_AXI' transactor
  if (xsc::utils::xsc_sim_manager::getInstanceParameterInt("Multi_convo_core_smartconnect_0_0", "M04_AXI_TLM_MODE") != 1)
  {
    mp_impl->M04_AXI_tlm_aximm_read_socket->bind(*(mp_M04_AXI_transactor->rd_socket));
    mp_impl->M04_AXI_tlm_aximm_write_socket->bind(*(mp_M04_AXI_transactor->wr_socket));
  
  }
  else
  {
    M04_AXI_transactor_initiator_wr_socket_stub = new xtlm::xtlm_aximm_initiator_stub("wr_socket",0);
    M04_AXI_transactor_initiator_wr_socket_stub->bind(*(mp_M04_AXI_transactor->wr_socket));
    M04_AXI_transactor_initiator_rd_socket_stub = new xtlm::xtlm_aximm_initiator_stub("rd_socket",0);
    M04_AXI_transactor_initiator_rd_socket_stub->bind(*(mp_M04_AXI_transactor->rd_socket));
    mp_M04_AXI_transactor->disable_transactor();
  }

  // configure 'M05_AXI' transactor
  if (xsc::utils::xsc_sim_manager::getInstanceParameterInt("Multi_convo_core_smartconnect_0_0", "M05_AXI_TLM_MODE") != 1)
  {
    mp_impl->M05_AXI_tlm_aximm_read_socket->bind(*(mp_M05_AXI_transactor->rd_socket));
    mp_impl->M05_AXI_tlm_aximm_write_socket->bind(*(mp_M05_AXI_transactor->wr_socket));
  
  }
  else
  {
    M05_AXI_transactor_initiator_wr_socket_stub = new xtlm::xtlm_aximm_initiator_stub("wr_socket",0);
    M05_AXI_transactor_initiator_wr_socket_stub->bind(*(mp_M05_AXI_transactor->wr_socket));
    M05_AXI_transactor_initiator_rd_socket_stub = new xtlm::xtlm_aximm_initiator_stub("rd_socket",0);
    M05_AXI_transactor_initiator_rd_socket_stub->bind(*(mp_M05_AXI_transactor->rd_socket));
    mp_M05_AXI_transactor->disable_transactor();
  }

  // configure 'M06_AXI' transactor
  if (xsc::utils::xsc_sim_manager::getInstanceParameterInt("Multi_convo_core_smartconnect_0_0", "M06_AXI_TLM_MODE") != 1)
  {
    mp_impl->M06_AXI_tlm_aximm_read_socket->bind(*(mp_M06_AXI_transactor->rd_socket));
    mp_impl->M06_AXI_tlm_aximm_write_socket->bind(*(mp_M06_AXI_transactor->wr_socket));
  
  }
  else
  {
    M06_AXI_transactor_initiator_wr_socket_stub = new xtlm::xtlm_aximm_initiator_stub("wr_socket",0);
    M06_AXI_transactor_initiator_wr_socket_stub->bind(*(mp_M06_AXI_transactor->wr_socket));
    M06_AXI_transactor_initiator_rd_socket_stub = new xtlm::xtlm_aximm_initiator_stub("rd_socket",0);
    M06_AXI_transactor_initiator_rd_socket_stub->bind(*(mp_M06_AXI_transactor->rd_socket));
    mp_M06_AXI_transactor->disable_transactor();
  }

  // configure 'M07_AXI' transactor
  if (xsc::utils::xsc_sim_manager::getInstanceParameterInt("Multi_convo_core_smartconnect_0_0", "M07_AXI_TLM_MODE") != 1)
  {
    mp_impl->M07_AXI_tlm_aximm_read_socket->bind(*(mp_M07_AXI_transactor->rd_socket));
    mp_impl->M07_AXI_tlm_aximm_write_socket->bind(*(mp_M07_AXI_transactor->wr_socket));
  
  }
  else
  {
    M07_AXI_transactor_initiator_wr_socket_stub = new xtlm::xtlm_aximm_initiator_stub("wr_socket",0);
    M07_AXI_transactor_initiator_wr_socket_stub->bind(*(mp_M07_AXI_transactor->wr_socket));
    M07_AXI_transactor_initiator_rd_socket_stub = new xtlm::xtlm_aximm_initiator_stub("rd_socket",0);
    M07_AXI_transactor_initiator_rd_socket_stub->bind(*(mp_M07_AXI_transactor->rd_socket));
    mp_M07_AXI_transactor->disable_transactor();
  }

  // configure 'M08_AXI' transactor
  if (xsc::utils::xsc_sim_manager::getInstanceParameterInt("Multi_convo_core_smartconnect_0_0", "M08_AXI_TLM_MODE") != 1)
  {
    mp_impl->M08_AXI_tlm_aximm_read_socket->bind(*(mp_M08_AXI_transactor->rd_socket));
    mp_impl->M08_AXI_tlm_aximm_write_socket->bind(*(mp_M08_AXI_transactor->wr_socket));
  
  }
  else
  {
    M08_AXI_transactor_initiator_wr_socket_stub = new xtlm::xtlm_aximm_initiator_stub("wr_socket",0);
    M08_AXI_transactor_initiator_wr_socket_stub->bind(*(mp_M08_AXI_transactor->wr_socket));
    M08_AXI_transactor_initiator_rd_socket_stub = new xtlm::xtlm_aximm_initiator_stub("rd_socket",0);
    M08_AXI_transactor_initiator_rd_socket_stub->bind(*(mp_M08_AXI_transactor->rd_socket));
    mp_M08_AXI_transactor->disable_transactor();
  }

  // configure 'M09_AXI' transactor
  if (xsc::utils::xsc_sim_manager::getInstanceParameterInt("Multi_convo_core_smartconnect_0_0", "M09_AXI_TLM_MODE") != 1)
  {
    mp_impl->M09_AXI_tlm_aximm_read_socket->bind(*(mp_M09_AXI_transactor->rd_socket));
    mp_impl->M09_AXI_tlm_aximm_write_socket->bind(*(mp_M09_AXI_transactor->wr_socket));
  
  }
  else
  {
    M09_AXI_transactor_initiator_wr_socket_stub = new xtlm::xtlm_aximm_initiator_stub("wr_socket",0);
    M09_AXI_transactor_initiator_wr_socket_stub->bind(*(mp_M09_AXI_transactor->wr_socket));
    M09_AXI_transactor_initiator_rd_socket_stub = new xtlm::xtlm_aximm_initiator_stub("rd_socket",0);
    M09_AXI_transactor_initiator_rd_socket_stub->bind(*(mp_M09_AXI_transactor->rd_socket));
    mp_M09_AXI_transactor->disable_transactor();
  }

  // configure 'M10_AXI' transactor
  if (xsc::utils::xsc_sim_manager::getInstanceParameterInt("Multi_convo_core_smartconnect_0_0", "M10_AXI_TLM_MODE") != 1)
  {
    mp_impl->M10_AXI_tlm_aximm_read_socket->bind(*(mp_M10_AXI_transactor->rd_socket));
    mp_impl->M10_AXI_tlm_aximm_write_socket->bind(*(mp_M10_AXI_transactor->wr_socket));
  
  }
  else
  {
    M10_AXI_transactor_initiator_wr_socket_stub = new xtlm::xtlm_aximm_initiator_stub("wr_socket",0);
    M10_AXI_transactor_initiator_wr_socket_stub->bind(*(mp_M10_AXI_transactor->wr_socket));
    M10_AXI_transactor_initiator_rd_socket_stub = new xtlm::xtlm_aximm_initiator_stub("rd_socket",0);
    M10_AXI_transactor_initiator_rd_socket_stub->bind(*(mp_M10_AXI_transactor->rd_socket));
    mp_M10_AXI_transactor->disable_transactor();
  }

  // configure 'M11_AXI' transactor
  if (xsc::utils::xsc_sim_manager::getInstanceParameterInt("Multi_convo_core_smartconnect_0_0", "M11_AXI_TLM_MODE") != 1)
  {
    mp_impl->M11_AXI_tlm_aximm_read_socket->bind(*(mp_M11_AXI_transactor->rd_socket));
    mp_impl->M11_AXI_tlm_aximm_write_socket->bind(*(mp_M11_AXI_transactor->wr_socket));
  
  }
  else
  {
    M11_AXI_transactor_initiator_wr_socket_stub = new xtlm::xtlm_aximm_initiator_stub("wr_socket",0);
    M11_AXI_transactor_initiator_wr_socket_stub->bind(*(mp_M11_AXI_transactor->wr_socket));
    M11_AXI_transactor_initiator_rd_socket_stub = new xtlm::xtlm_aximm_initiator_stub("rd_socket",0);
    M11_AXI_transactor_initiator_rd_socket_stub->bind(*(mp_M11_AXI_transactor->rd_socket));
    mp_M11_AXI_transactor->disable_transactor();
  }

  // configure 'M12_AXI' transactor
  if (xsc::utils::xsc_sim_manager::getInstanceParameterInt("Multi_convo_core_smartconnect_0_0", "M12_AXI_TLM_MODE") != 1)
  {
    mp_impl->M12_AXI_tlm_aximm_read_socket->bind(*(mp_M12_AXI_transactor->rd_socket));
    mp_impl->M12_AXI_tlm_aximm_write_socket->bind(*(mp_M12_AXI_transactor->wr_socket));
  
  }
  else
  {
    M12_AXI_transactor_initiator_wr_socket_stub = new xtlm::xtlm_aximm_initiator_stub("wr_socket",0);
    M12_AXI_transactor_initiator_wr_socket_stub->bind(*(mp_M12_AXI_transactor->wr_socket));
    M12_AXI_transactor_initiator_rd_socket_stub = new xtlm::xtlm_aximm_initiator_stub("rd_socket",0);
    M12_AXI_transactor_initiator_rd_socket_stub->bind(*(mp_M12_AXI_transactor->rd_socket));
    mp_M12_AXI_transactor->disable_transactor();
  }

  // configure 'M13_AXI' transactor
  if (xsc::utils::xsc_sim_manager::getInstanceParameterInt("Multi_convo_core_smartconnect_0_0", "M13_AXI_TLM_MODE") != 1)
  {
    mp_impl->M13_AXI_tlm_aximm_read_socket->bind(*(mp_M13_AXI_transactor->rd_socket));
    mp_impl->M13_AXI_tlm_aximm_write_socket->bind(*(mp_M13_AXI_transactor->wr_socket));
  
  }
  else
  {
    M13_AXI_transactor_initiator_wr_socket_stub = new xtlm::xtlm_aximm_initiator_stub("wr_socket",0);
    M13_AXI_transactor_initiator_wr_socket_stub->bind(*(mp_M13_AXI_transactor->wr_socket));
    M13_AXI_transactor_initiator_rd_socket_stub = new xtlm::xtlm_aximm_initiator_stub("rd_socket",0);
    M13_AXI_transactor_initiator_rd_socket_stub->bind(*(mp_M13_AXI_transactor->rd_socket));
    mp_M13_AXI_transactor->disable_transactor();
  }

  // configure 'M14_AXI' transactor
  if (xsc::utils::xsc_sim_manager::getInstanceParameterInt("Multi_convo_core_smartconnect_0_0", "M14_AXI_TLM_MODE") != 1)
  {
    mp_impl->M14_AXI_tlm_aximm_read_socket->bind(*(mp_M14_AXI_transactor->rd_socket));
    mp_impl->M14_AXI_tlm_aximm_write_socket->bind(*(mp_M14_AXI_transactor->wr_socket));
  
  }
  else
  {
    M14_AXI_transactor_initiator_wr_socket_stub = new xtlm::xtlm_aximm_initiator_stub("wr_socket",0);
    M14_AXI_transactor_initiator_wr_socket_stub->bind(*(mp_M14_AXI_transactor->wr_socket));
    M14_AXI_transactor_initiator_rd_socket_stub = new xtlm::xtlm_aximm_initiator_stub("rd_socket",0);
    M14_AXI_transactor_initiator_rd_socket_stub->bind(*(mp_M14_AXI_transactor->rd_socket));
    mp_M14_AXI_transactor->disable_transactor();
  }

  // configure 'M15_AXI' transactor
  if (xsc::utils::xsc_sim_manager::getInstanceParameterInt("Multi_convo_core_smartconnect_0_0", "M15_AXI_TLM_MODE") != 1)
  {
    mp_impl->M15_AXI_tlm_aximm_read_socket->bind(*(mp_M15_AXI_transactor->rd_socket));
    mp_impl->M15_AXI_tlm_aximm_write_socket->bind(*(mp_M15_AXI_transactor->wr_socket));
  
  }
  else
  {
    M15_AXI_transactor_initiator_wr_socket_stub = new xtlm::xtlm_aximm_initiator_stub("wr_socket",0);
    M15_AXI_transactor_initiator_wr_socket_stub->bind(*(mp_M15_AXI_transactor->wr_socket));
    M15_AXI_transactor_initiator_rd_socket_stub = new xtlm::xtlm_aximm_initiator_stub("rd_socket",0);
    M15_AXI_transactor_initiator_rd_socket_stub->bind(*(mp_M15_AXI_transactor->rd_socket));
    mp_M15_AXI_transactor->disable_transactor();
  }

  // configure 'M16_AXI' transactor
  if (xsc::utils::xsc_sim_manager::getInstanceParameterInt("Multi_convo_core_smartconnect_0_0", "M16_AXI_TLM_MODE") != 1)
  {
    mp_impl->M16_AXI_tlm_aximm_read_socket->bind(*(mp_M16_AXI_transactor->rd_socket));
    mp_impl->M16_AXI_tlm_aximm_write_socket->bind(*(mp_M16_AXI_transactor->wr_socket));
  
  }
  else
  {
    M16_AXI_transactor_initiator_wr_socket_stub = new xtlm::xtlm_aximm_initiator_stub("wr_socket",0);
    M16_AXI_transactor_initiator_wr_socket_stub->bind(*(mp_M16_AXI_transactor->wr_socket));
    M16_AXI_transactor_initiator_rd_socket_stub = new xtlm::xtlm_aximm_initiator_stub("rd_socket",0);
    M16_AXI_transactor_initiator_rd_socket_stub->bind(*(mp_M16_AXI_transactor->rd_socket));
    mp_M16_AXI_transactor->disable_transactor();
  }

  // configure 'M17_AXI' transactor
  if (xsc::utils::xsc_sim_manager::getInstanceParameterInt("Multi_convo_core_smartconnect_0_0", "M17_AXI_TLM_MODE") != 1)
  {
    mp_impl->M17_AXI_tlm_aximm_read_socket->bind(*(mp_M17_AXI_transactor->rd_socket));
    mp_impl->M17_AXI_tlm_aximm_write_socket->bind(*(mp_M17_AXI_transactor->wr_socket));
  
  }
  else
  {
    M17_AXI_transactor_initiator_wr_socket_stub = new xtlm::xtlm_aximm_initiator_stub("wr_socket",0);
    M17_AXI_transactor_initiator_wr_socket_stub->bind(*(mp_M17_AXI_transactor->wr_socket));
    M17_AXI_transactor_initiator_rd_socket_stub = new xtlm::xtlm_aximm_initiator_stub("rd_socket",0);
    M17_AXI_transactor_initiator_rd_socket_stub->bind(*(mp_M17_AXI_transactor->rd_socket));
    mp_M17_AXI_transactor->disable_transactor();
  }

  // configure 'M18_AXI' transactor
  if (xsc::utils::xsc_sim_manager::getInstanceParameterInt("Multi_convo_core_smartconnect_0_0", "M18_AXI_TLM_MODE") != 1)
  {
    mp_impl->M18_AXI_tlm_aximm_read_socket->bind(*(mp_M18_AXI_transactor->rd_socket));
    mp_impl->M18_AXI_tlm_aximm_write_socket->bind(*(mp_M18_AXI_transactor->wr_socket));
  
  }
  else
  {
    M18_AXI_transactor_initiator_wr_socket_stub = new xtlm::xtlm_aximm_initiator_stub("wr_socket",0);
    M18_AXI_transactor_initiator_wr_socket_stub->bind(*(mp_M18_AXI_transactor->wr_socket));
    M18_AXI_transactor_initiator_rd_socket_stub = new xtlm::xtlm_aximm_initiator_stub("rd_socket",0);
    M18_AXI_transactor_initiator_rd_socket_stub->bind(*(mp_M18_AXI_transactor->rd_socket));
    mp_M18_AXI_transactor->disable_transactor();
  }

  // configure 'M19_AXI' transactor
  if (xsc::utils::xsc_sim_manager::getInstanceParameterInt("Multi_convo_core_smartconnect_0_0", "M19_AXI_TLM_MODE") != 1)
  {
    mp_impl->M19_AXI_tlm_aximm_read_socket->bind(*(mp_M19_AXI_transactor->rd_socket));
    mp_impl->M19_AXI_tlm_aximm_write_socket->bind(*(mp_M19_AXI_transactor->wr_socket));
  
  }
  else
  {
    M19_AXI_transactor_initiator_wr_socket_stub = new xtlm::xtlm_aximm_initiator_stub("wr_socket",0);
    M19_AXI_transactor_initiator_wr_socket_stub->bind(*(mp_M19_AXI_transactor->wr_socket));
    M19_AXI_transactor_initiator_rd_socket_stub = new xtlm::xtlm_aximm_initiator_stub("rd_socket",0);
    M19_AXI_transactor_initiator_rd_socket_stub->bind(*(mp_M19_AXI_transactor->rd_socket));
    mp_M19_AXI_transactor->disable_transactor();
  }

  // configure 'M20_AXI' transactor
  if (xsc::utils::xsc_sim_manager::getInstanceParameterInt("Multi_convo_core_smartconnect_0_0", "M20_AXI_TLM_MODE") != 1)
  {
    mp_impl->M20_AXI_tlm_aximm_read_socket->bind(*(mp_M20_AXI_transactor->rd_socket));
    mp_impl->M20_AXI_tlm_aximm_write_socket->bind(*(mp_M20_AXI_transactor->wr_socket));
  
  }
  else
  {
    M20_AXI_transactor_initiator_wr_socket_stub = new xtlm::xtlm_aximm_initiator_stub("wr_socket",0);
    M20_AXI_transactor_initiator_wr_socket_stub->bind(*(mp_M20_AXI_transactor->wr_socket));
    M20_AXI_transactor_initiator_rd_socket_stub = new xtlm::xtlm_aximm_initiator_stub("rd_socket",0);
    M20_AXI_transactor_initiator_rd_socket_stub->bind(*(mp_M20_AXI_transactor->rd_socket));
    mp_M20_AXI_transactor->disable_transactor();
  }

  // configure 'M21_AXI' transactor
  if (xsc::utils::xsc_sim_manager::getInstanceParameterInt("Multi_convo_core_smartconnect_0_0", "M21_AXI_TLM_MODE") != 1)
  {
    mp_impl->M21_AXI_tlm_aximm_read_socket->bind(*(mp_M21_AXI_transactor->rd_socket));
    mp_impl->M21_AXI_tlm_aximm_write_socket->bind(*(mp_M21_AXI_transactor->wr_socket));
  
  }
  else
  {
    M21_AXI_transactor_initiator_wr_socket_stub = new xtlm::xtlm_aximm_initiator_stub("wr_socket",0);
    M21_AXI_transactor_initiator_wr_socket_stub->bind(*(mp_M21_AXI_transactor->wr_socket));
    M21_AXI_transactor_initiator_rd_socket_stub = new xtlm::xtlm_aximm_initiator_stub("rd_socket",0);
    M21_AXI_transactor_initiator_rd_socket_stub->bind(*(mp_M21_AXI_transactor->rd_socket));
    mp_M21_AXI_transactor->disable_transactor();
  }

  // configure 'M22_AXI' transactor
  if (xsc::utils::xsc_sim_manager::getInstanceParameterInt("Multi_convo_core_smartconnect_0_0", "M22_AXI_TLM_MODE") != 1)
  {
    mp_impl->M22_AXI_tlm_aximm_read_socket->bind(*(mp_M22_AXI_transactor->rd_socket));
    mp_impl->M22_AXI_tlm_aximm_write_socket->bind(*(mp_M22_AXI_transactor->wr_socket));
  
  }
  else
  {
    M22_AXI_transactor_initiator_wr_socket_stub = new xtlm::xtlm_aximm_initiator_stub("wr_socket",0);
    M22_AXI_transactor_initiator_wr_socket_stub->bind(*(mp_M22_AXI_transactor->wr_socket));
    M22_AXI_transactor_initiator_rd_socket_stub = new xtlm::xtlm_aximm_initiator_stub("rd_socket",0);
    M22_AXI_transactor_initiator_rd_socket_stub->bind(*(mp_M22_AXI_transactor->rd_socket));
    mp_M22_AXI_transactor->disable_transactor();
  }

  // configure 'M23_AXI' transactor
  if (xsc::utils::xsc_sim_manager::getInstanceParameterInt("Multi_convo_core_smartconnect_0_0", "M23_AXI_TLM_MODE") != 1)
  {
    mp_impl->M23_AXI_tlm_aximm_read_socket->bind(*(mp_M23_AXI_transactor->rd_socket));
    mp_impl->M23_AXI_tlm_aximm_write_socket->bind(*(mp_M23_AXI_transactor->wr_socket));
  
  }
  else
  {
    M23_AXI_transactor_initiator_wr_socket_stub = new xtlm::xtlm_aximm_initiator_stub("wr_socket",0);
    M23_AXI_transactor_initiator_wr_socket_stub->bind(*(mp_M23_AXI_transactor->wr_socket));
    M23_AXI_transactor_initiator_rd_socket_stub = new xtlm::xtlm_aximm_initiator_stub("rd_socket",0);
    M23_AXI_transactor_initiator_rd_socket_stub->bind(*(mp_M23_AXI_transactor->rd_socket));
    mp_M23_AXI_transactor->disable_transactor();
  }

}

#endif // MTI_SYSTEMC




Multi_convo_core_smartconnect_0_0::~Multi_convo_core_smartconnect_0_0()
{
  delete mp_S00_AXI_transactor;
  delete mp_S00_AXI_awlock_converter;
  delete mp_S00_AXI_arlock_converter;

  delete mp_M00_AXI_transactor;
  delete mp_M00_AXI_awlock_converter;
  delete mp_M00_AXI_arlock_converter;

  delete mp_M01_AXI_transactor;
  delete mp_M01_AXI_awlock_converter;
  delete mp_M01_AXI_arlock_converter;

  delete mp_M02_AXI_transactor;
  delete mp_M02_AXI_awlock_converter;
  delete mp_M02_AXI_arlock_converter;

  delete mp_M03_AXI_transactor;
  delete mp_M03_AXI_awlock_converter;
  delete mp_M03_AXI_arlock_converter;

  delete mp_M04_AXI_transactor;
  delete mp_M04_AXI_awlock_converter;
  delete mp_M04_AXI_arlock_converter;

  delete mp_M05_AXI_transactor;
  delete mp_M05_AXI_awlock_converter;
  delete mp_M05_AXI_arlock_converter;

  delete mp_M06_AXI_transactor;
  delete mp_M06_AXI_awlock_converter;
  delete mp_M06_AXI_arlock_converter;

  delete mp_M07_AXI_transactor;
  delete mp_M07_AXI_awlock_converter;
  delete mp_M07_AXI_arlock_converter;

  delete mp_M08_AXI_transactor;
  delete mp_M08_AXI_awlock_converter;
  delete mp_M08_AXI_arlock_converter;

  delete mp_M09_AXI_transactor;
  delete mp_M09_AXI_awlock_converter;
  delete mp_M09_AXI_arlock_converter;

  delete mp_M10_AXI_transactor;
  delete mp_M10_AXI_awlock_converter;
  delete mp_M10_AXI_arlock_converter;

  delete mp_M11_AXI_transactor;
  delete mp_M11_AXI_awlock_converter;
  delete mp_M11_AXI_arlock_converter;

  delete mp_M12_AXI_transactor;
  delete mp_M12_AXI_awlock_converter;
  delete mp_M12_AXI_arlock_converter;

  delete mp_M13_AXI_transactor;
  delete mp_M13_AXI_awlock_converter;
  delete mp_M13_AXI_arlock_converter;

  delete mp_M14_AXI_transactor;
  delete mp_M14_AXI_awlock_converter;
  delete mp_M14_AXI_arlock_converter;

  delete mp_M15_AXI_transactor;
  delete mp_M15_AXI_awlock_converter;
  delete mp_M15_AXI_arlock_converter;

  delete mp_M16_AXI_transactor;
  delete mp_M16_AXI_awlock_converter;
  delete mp_M16_AXI_arlock_converter;

  delete mp_M17_AXI_transactor;
  delete mp_M17_AXI_awlock_converter;
  delete mp_M17_AXI_arlock_converter;

  delete mp_M18_AXI_transactor;
  delete mp_M18_AXI_awlock_converter;
  delete mp_M18_AXI_arlock_converter;

  delete mp_M19_AXI_transactor;
  delete mp_M19_AXI_awlock_converter;
  delete mp_M19_AXI_arlock_converter;

  delete mp_M20_AXI_transactor;
  delete mp_M20_AXI_awlock_converter;
  delete mp_M20_AXI_arlock_converter;

  delete mp_M21_AXI_transactor;
  delete mp_M21_AXI_awlock_converter;
  delete mp_M21_AXI_arlock_converter;

  delete mp_M22_AXI_transactor;
  delete mp_M22_AXI_awlock_converter;
  delete mp_M22_AXI_arlock_converter;

  delete mp_M23_AXI_transactor;
  delete mp_M23_AXI_awlock_converter;
  delete mp_M23_AXI_arlock_converter;

}

#ifdef MTI_SYSTEMC
SC_MODULE_EXPORT(Multi_convo_core_smartconnect_0_0);
#endif

#ifdef XM_SYSTEMC
XMSC_MODULE_EXPORT(Multi_convo_core_smartconnect_0_0);
#endif

#ifdef RIVIERA
SC_MODULE_EXPORT(Multi_convo_core_smartconnect_0_0);
#endif

