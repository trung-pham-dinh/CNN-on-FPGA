`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date: 01/22/2022 02:54:10 PM
// Design Name: 
// Module Name: load_weight_ctrl
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


module load_weight_ctrl(
clk, rst, init,
load_done,
channel_end, core_free,
weight0_in,weight1_in,weight2_in,weight3_in,
weight0_out,weight1_out,weight2_out,weight3_out,
buffer_ready, // connect to end_gate in pipeline.v
load_start, // connect to load_weight
state
    );
    parameter WEIGHT_WIDTH = 8;
    
    localparam STATE_INIT = 0;
    localparam STATE_SYNC = 1;
    localparam STATE_NON_SYNC = 2;
    
    input clk,rst, init, load_done, core_free, channel_end;
    
    input [9*WEIGHT_WIDTH-1:0]     weight0_in;
    input [9*WEIGHT_WIDTH-1:0]     weight1_in;
    input [9*WEIGHT_WIDTH-1:0]     weight2_in;
    input [9*WEIGHT_WIDTH-1:0]     weight3_in;
    output reg[9*WEIGHT_WIDTH-1:0]    weight0_out;
    output reg[9*WEIGHT_WIDTH-1:0]    weight1_out;
    output reg[9*WEIGHT_WIDTH-1:0]    weight2_out;
    output reg[9*WEIGHT_WIDTH-1:0]    weight3_out;
    output reg                     buffer_ready;
    output reg                     load_start;
    
    reg                          latch;
    output reg [2:0]state;
    wire                          load_new_weight;
    
    assign load_new_weight = channel_end & core_free;
    
    always@(posedge clk) begin
        if(rst) begin
            state <= STATE_INIT;
            load_start <= 0;
            buffer_ready <= 0;
            latch <= 0;
        end
        else begin
            case(state)
                STATE_INIT: begin
                    if(init) begin
                        load_start <= 1;
                    end
                    else if(load_done) begin
                        state <= STATE_SYNC;
                        latch <= 1;
                        load_start <= 1;
                        buffer_ready <= 1;
                    end
                    else load_start <= 0;
                end
                STATE_SYNC: begin
                    if(load_done) begin
                        state <= STATE_NON_SYNC;
                    end
                    else begin
                        latch <= 0;
                        load_start <= 0;
                    end
                end
                STATE_NON_SYNC: begin
                    if(load_new_weight) begin
                        state <= STATE_SYNC;
                        load_start <= 1;
                        latch <= 1;
                    end
                end
            endcase
        end
    end
    
    always@(posedge clk) begin
        if(rst) begin
            weight0_out <= 0;
            weight1_out <= 0;
            weight2_out <= 0;
            weight3_out <= 0;
        end
        else begin
            if(latch) begin
                weight0_out <= weight0_in;
                weight1_out <= weight1_in;
                weight2_out <= weight2_in;
                weight3_out <= weight3_in;
            end
        end
    end
endmodule
