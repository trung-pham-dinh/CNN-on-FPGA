`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date: 01/27/2022 03:10:16 PM
// Design Name: 
// Module Name: BRAM_selector
// Project Name: 
// Target Devices: 
// Tool Versions: 
// Description: 
// 
// Dependencies: 
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
//////////////////////////////////////////////////////////////////////////////////


module BRAM_selector(
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
BRAM_out_wen,
    );
    parameter BRAM_ADDR_BIT = 32;
    parameter BRAM_WIDTH = 32;
    input                           clk,sel;
    
    input  [BRAM_ADDR_BIT-1:0]      BRAM_in1_addr;
    input  [BRAM_WIDTH-1:0]         BRAM_in1_din;
    output [BRAM_WIDTH-1:0]         BRAM_in1_dout;
    input                           BRAM_in1_en;
    input                           BRAM_in1_rst;
    input  [3:0]                    BRAM_in1_wen;
    
    input  [BRAM_ADDR_BIT-1:0]      BRAM_in2_addr;
    input  [BRAM_WIDTH-1:0]         BRAM_in2_din;
    output [BRAM_WIDTH-1:0]         BRAM_in2_dout;
    input                           BRAM_in2_en;
    input                           BRAM_in2_rst;
    input  [3:0]                    BRAM_in2_wen;
    
    output [BRAM_ADDR_BIT-1:0]      BRAM_out_addr;
    output                          BRAM_out_clk;
    output [BRAM_WIDTH-1:0]         BRAM_out_din;
    input  [BRAM_WIDTH-1:0]         BRAM_out_dout;
    output                          BRAM_out_en;
    output                          BRAM_out_rst;
    output [3:0]                    BRAM_out_wen;
    
    assign BRAM_out_addr =(sel==0)? BRAM_in1_addr:BRAM_in2_addr;
    assign BRAM_out_clk = clk;
    assign BRAM_out_din = (sel==0)? BRAM_in1_din :BRAM_in2_din;
    assign BRAM_in1_dout = BRAM_out_dout;
    assign BRAM_in2_dout = BRAM_out_dout;
    assign BRAM_out_en =  (sel==0)? BRAM_in1_en  :BRAM_in2_en;
    assign BRAM_out_rst = (sel==0)? BRAM_in1_rst :BRAM_in2_rst;
    assign BRAM_out_wen = (sel==0)? BRAM_in1_wen :BRAM_in2_wen;
endmodule
