`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date: 01/13/2022 08:52:21 AM
// Design Name: 
// Module Name: load_weight
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


module load_weight(
clk, rst,

load_start,
addr_rst,
weight_size, // k*w*h*c
load_end,
weight_end,

weight0,
weight1,
weight2,
weight3,

BRAM_clk,
BRAM_en,
BRAM_rst,
BRAM_din,
BRAM_wen,

BRAM_0_addr,
BRAM_0_dout,

BRAM_1_addr,
BRAM_1_dout,

BRAM_2_addr,
BRAM_2_dout,

BRAM_3_addr,
BRAM_3_dout
    );
    parameter BRAM_ADDR_BIT = 32;
    parameter BRAM_WIDTH = 32;
    parameter WEIGHT_WIDTH = 8;
    
    parameter BRAM_BYTE = BRAM_ADDR_BIT/8;
////////////////////////////////////////////////////////////////////
    localparam STATE_IDLE = 0;
    localparam STATE_LOAD = 1;
//////////////////////////////////////////////////////////////////// 
    input                           clk,rst;
    input                           load_start,addr_rst;
    input  [BRAM_ADDR_BIT-1:0]      weight_size;
    output reg                      load_end;
    output [9*WEIGHT_WIDTH-1:0]     weight0;
    output [9*WEIGHT_WIDTH-1:0]     weight1;
    output [9*WEIGHT_WIDTH-1:0]     weight2;
    output [9*WEIGHT_WIDTH-1:0]     weight3;
    output                          weight_end;
    
    
    output                          BRAM_clk,BRAM_en,BRAM_rst;
    output [BRAM_WIDTH-1:0]         BRAM_din;
    output [BRAM_BYTE-1:0]          BRAM_wen;
  
    
    output reg [BRAM_ADDR_BIT-1:0]  BRAM_0_addr;
    input  [BRAM_WIDTH-1:0]         BRAM_0_dout;
    
    output reg [BRAM_ADDR_BIT-1:0]  BRAM_1_addr;
    input  [BRAM_WIDTH-1:0]         BRAM_1_dout;
    
    output reg [BRAM_ADDR_BIT-1:0]  BRAM_2_addr;
    input  [BRAM_WIDTH-1:0]         BRAM_2_dout;
    
    output reg [BRAM_ADDR_BIT-1:0]  BRAM_3_addr;
    input  [BRAM_WIDTH-1:0]         BRAM_3_dout;
    
////////////////////////////////////////////////////////////////////
    reg                             state;
    reg                             addr_inc;
    reg     [1:0]                   addr_offset[0:3];
    wire                            load_done;
    
    reg [WEIGHT_WIDTH-1:0]          weight0_reg [0:8];
    reg [WEIGHT_WIDTH-1:0]          weight1_reg [0:8];
    reg [WEIGHT_WIDTH-1:0]          weight2_reg [0:8];
    reg [WEIGHT_WIDTH-1:0]          weight3_reg [0:8];
    reg                             weight_vld;
    reg     [3:0]                   weight_index;
    
    integer i;
///////////////////////////////////////////////////////////////////
    assign BRAM_clk = clk;
    assign BRAM_en = 1;
    assign BRAM_rst = 0; 
    assign BRAM_din = 0;
    assign BRAM_wen = 0;
    
    assign load_done = (weight_index == 7 || weight_index == 8);
    
    assign weight0 = {weight0_reg[0], weight0_reg[1], weight0_reg[2], weight0_reg[3], weight0_reg[4], weight0_reg[5], weight0_reg[6], weight0_reg[7], weight0_reg[8]};
    assign weight1 = {weight1_reg[0], weight1_reg[1], weight1_reg[2], weight1_reg[3], weight1_reg[4], weight1_reg[5], weight1_reg[6], weight1_reg[7], weight1_reg[8]};
    assign weight2 = {weight2_reg[0], weight2_reg[1], weight2_reg[2], weight2_reg[3], weight2_reg[4], weight2_reg[5], weight2_reg[6], weight2_reg[7], weight2_reg[8]};
    assign weight3 = {weight3_reg[0], weight3_reg[1], weight3_reg[2], weight3_reg[3], weight3_reg[4], weight3_reg[5], weight3_reg[6], weight3_reg[7], weight3_reg[8]};
    assign weight_end = (weight_size-1 == BRAM_0_addr);
////////////////////////////////////////////////////////////////////
    always@(posedge clk) begin
        if(rst) begin
            state <= STATE_IDLE;
            addr_inc <= 0;
            load_end <= 0;
        end
        else begin
            case(state)
                STATE_IDLE: begin
                    if(load_start) begin
                        state <= STATE_LOAD;
                        addr_inc <= 1;
                    end
                    else load_end <= 0;
                end
                STATE_LOAD: begin
                    if(load_done) begin
                        state <= STATE_IDLE;
                        addr_inc <= 0;
                        load_end <= 1;
                    end
                end
            endcase
        end
    end
    
    always@(posedge clk) begin
        if(rst) begin
            weight_vld <= 0;
        end
        else begin
            weight_vld <= addr_inc;
        end
    end
    
    always@(posedge clk) begin
        if(rst | addr_rst) begin
            BRAM_0_addr <= 0;
            BRAM_1_addr <= 0;
            BRAM_2_addr <= 0;
            BRAM_3_addr <= 0;
        end
        else begin
            if(addr_inc) begin
                BRAM_0_addr <= BRAM_0_addr + 1;
                BRAM_1_addr <= BRAM_1_addr + 1;
                BRAM_2_addr <= BRAM_2_addr + 1;
                BRAM_3_addr <= BRAM_3_addr + 1;
            end
        end
    end
    
    always@(posedge clk) begin
        if(rst) begin
            addr_offset[0] <= 0;
            addr_offset[1] <= 0;
            addr_offset[2] <= 0;
            addr_offset[3] <= 0;
        end
        else begin
            addr_offset[0] <= BRAM_0_addr[1:0];
            addr_offset[1] <= BRAM_1_addr[1:0];
            addr_offset[2] <= BRAM_2_addr[1:0];
            addr_offset[3] <= BRAM_3_addr[1:0];
        end
    end
    
    // write to weight register
    always@(posedge clk) begin
        if(rst) begin
            for(i=0; i < 9; i=i+1) begin
                weight0_reg[i] <= 0;
                weight1_reg[i] <= 0;
                weight2_reg[i] <= 0;
                weight3_reg[i] <= 0;
            end
            weight_index <= 0;
        end
        else begin
            if(weight_vld) begin
                weight_index <= (weight_index == 8)? 0:weight_index+1;
                weight0_reg[weight_index] <= BRAM_0_dout[{addr_offset[0],3'b0} +: 8];
                weight1_reg[weight_index] <= BRAM_1_dout[{addr_offset[1],3'b0} +: 8];
                weight2_reg[weight_index] <= BRAM_2_dout[{addr_offset[2],3'b0} +: 8];
                weight3_reg[weight_index] <= BRAM_3_dout[{addr_offset[3],3'b0} +: 8];
            end
        end
    end
endmodule