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
    reg [23:0]activate0_0;
    reg [23:0]activate1_0;
    reg [23:0]activate2_0;
    reg activate_ready_0;
    reg addr_rst_0;
    reg clk_0;
    reg load_start_0;
    wire [7:0]out_psum0_0;
    wire [7:0]out_psum1_0;
    wire [7:0]out_psum2_0;
    wire [7:0]out_psum3_0;
    wire out_psum_vld_0;
    reg rst_0;
    wire weight_done;
    
    reg [7:0] ai;
    
    Convo_core_wrapper uut(activate0_0,
    activate1_0,
    activate2_0,
    activate_ready_0,
    addr_rst_0,
    clk_0,
    load_start_0,
    out_psum0_0,
    out_psum1_0,
    out_psum2_0,
    out_psum3_0,
    out_psum_vld_0,
    rst_0,
    weight_done);
    
    always #10 clk_0 = ~clk_0;
    
    always@(posedge clk_0) begin
        if(activate_ready_0) begin
            ai <= ai+1;
            activate0_0 <= {ai+8'd0, ai+8'd1, ai+8'd2};
            activate1_0 <= {ai+8'd8, ai+8'd9, ai+8'd10};
            activate2_0 <= {ai+8'd16, ai+8'd17, ai+8'd18};
        end
        else begin
            ai <= 0;
        end
    end
    
    initial begin
        clk_0 <= 0;
        rst_0 <= 1;
        activate0_0 <= 0;
        activate1_0 <= 0;
        activate2_0 <= 0;
        activate_ready_0 <= 0;
        addr_rst_0 <= 0;
        load_start_0 <= 0;
        #150;
        rst_0 <= 0;
    end
    
    initial begin
        #150;
        load_start_0 <= 1;
        #20;
        load_start_0 <= 0;
    end
    
    initial begin
        #450;
        activate_ready_0 <= 1;
        #200;
        activate_ready_0 <= 0;
    end
endmodule
