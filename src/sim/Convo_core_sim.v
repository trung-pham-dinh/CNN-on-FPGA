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
  wire [7:0]out_psum0_0;
  wire [7:0]out_psum1_0;
  wire [7:0]out_psum2_0;
  wire [7:0]out_psum3_0;
  wire out_psum_vld_0;
  reg rst_0;
  reg [2:0]stride_0;
  wire weight_done;
  reg [11:0]width_0;
  reg [31:0]weight_size_0;
  
  wire [71:0]weight0_sim;
  wire [71:0]  weight1_sim;
  wire [71:0]  weight2_sim;
  wire [71:0]  weight3_sim;
  wire [23:0]activate0_sim;
  wire [23:0]activate1_sim;
  wire [23:0]activate2_sim;
  wire start_core_sim;
  wire channel_end_out;
  wire weight_end_0;
  wire [31:0]BRAM_addr_weight;
  Convo_core_wrapper uut
   (BRAM_addr_weight,
    activate0_sim,
    activate1_sim,
    activate2_sim,
    addr_rst_0,
    channel_0,
    channel_end_out,
    clk_0,
    en_0,
    init_signal_0,
    out_psum0_0,
    out_psum1_0,
    out_psum2_0,
    out_psum3_0,
    out_psum_vld_0,
    rst_0,
    start_core_sim,
    stride_0,
    weight0_sim,
    weight1_sim,
    weight2_sim,
    weight3_sim,
    weight_done,
    weight_end_0,
    weight_size_0,
    width_0);
  
  
    
    always #10 clk_0 = ~clk_0;
    
    initial begin
        clk_0 <= 0;
        rst_0 <= 1;
        en_0 <= 1;
        channel_0 <= 2;
        stride_0 <= 1;
        width_0 <= 5;
        init_signal_0 <= 0;
        addr_rst_0 <= 0;
        weight_size_0 <= 3*3*2;
        #150;
        rst_0 <= 0;
    end
    
    initial begin
        #790;
        init_signal_0 <= 1;
        #20;
        init_signal_0 <= 0;
    end
    
    initial begin
        //#1950;
        //en_0 <= 0;
    end
    
//    initial begin
//        #1050;
//        activate_ready_0 <= 1;
//        #200;
//        activate_ready_0 <= 0;
//    end
endmodule
