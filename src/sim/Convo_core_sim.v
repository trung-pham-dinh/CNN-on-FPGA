`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date: 01/13/2022 04:09:50 PM
// Design Name: 
// Module Name: Convo_core_sim
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


module Convo_core_sim(

    );
  reg addr_rst_0;
  reg [11:0]channel_0;
  reg clk_0;
  reg en_0;
  reg init_signal_0;
  reg load_weight_start;
  wire [7:0]out_psum0_0;
  wire [7:0]out_psum1_0;
  wire [7:0]out_psum2_0;
  wire [7:0]out_psum3_0;
  wire out_psum_vld_0;
  reg rst_0;
  reg [2:0]stride_0;
  wire weight_done;
  reg [11:0]width_0;
  
  reg i;
    Convo_core_wrapper uut
   (addr_rst_0,
    channel_0,
    clk_0,
    en_0,
    init_signal_0,
    load_weight_start,
    out_psum0_0,
    out_psum1_0,
    out_psum2_0,
    out_psum3_0,
    out_psum_vld_0,
    rst_0,
    stride_0,
    weight_done,
    width_0);
  
  
    
    always #10 clk_0 = ~clk_0;
    
    initial begin
        clk_0 <= 0;
        rst_0 <= 1;
        en_0 <= 1;
        channel_0 <= 4;
        stride_0 <= 1;
        width_0 <= 5;
        init_signal_0 <= 0;
        addr_rst_0 <= 0;
        load_weight_start <= 0;
        #150;
        rst_0 <= 0;
    end
    
    initial begin
        #200;
        load_weight_start <= 1;
        #20;
        load_weight_start <= 0;
    end
    initial begin
        #790;
        init_signal_0 <= 1;
        #20;
        init_signal_0 <= 0;
    end
    
//    initial begin
//        #1050;
//        activate_ready_0 <= 1;
//        #200;
//        activate_ready_0 <= 0;
//    end
endmodule
