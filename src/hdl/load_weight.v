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
load_done, //  connect to weight_load_done
addr_rst,

weight0,
weight1,
weight2,
weight3,
weight_vld,

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
BRAM_3_dout,

    );
    parameter BRAM_ADDR_BIT = 32;
    parameter BRAM_WIDTH = 32;
    parameter WEIGHT_WIDTH = 8;
    
    parameter BRAM_BYTE = BRAM_ADDR_BIT/8;
////////////////////////////////////////////////////////////////////
    //localparam BRAM_BYTE = BRAM_ADDR_BIT/8;
    localparam STATE_IDLE = 0;
    localparam STATE_LOAD = 1;
//////////////////////////////////////////////////////////////////// 
    input                           clk,rst;
    input                           load_start,load_done,addr_rst;
    output [WEIGHT_WIDTH-1:0]       weight0;
    output [WEIGHT_WIDTH-1:0]       weight1;
    output [WEIGHT_WIDTH-1:0]       weight2;
    output [WEIGHT_WIDTH-1:0]       weight3;
    output reg                      weight_vld;
    
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
////////////////////////////////////////////////////////////////////
    assign BRAM_clk = clk;
    assign BRAM_en = 1;
    assign BRAM_rst = 0; 
    assign BRAM_din = 0;
    assign BRAM_wen = 0;
    
    
    assign weight0 = BRAM_0_dout[{addr_offset[0],3'b0} +: 8];
    assign weight1 = BRAM_1_dout[{addr_offset[1],3'b0} +: 8];
    assign weight2 = BRAM_2_dout[{addr_offset[2],3'b0} +: 8];
    assign weight3 = BRAM_3_dout[{addr_offset[3],3'b0} +: 8];
////////////////////////////////////////////////////////////////////
    always@(posedge clk) begin
        if(rst) begin
            state <= STATE_IDLE;
            addr_inc <= 0;
        end
        else begin
            case(state)
                STATE_IDLE: begin
                    if(load_start) begin
                        state <= STATE_LOAD;
                        addr_inc <= 1;
                    end
                end
                STATE_LOAD: begin
                    if(load_done) begin
                        state <= STATE_IDLE;
                        addr_inc <= 0;
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
endmodule
