`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date: 01/18/2022 07:31:39 PM
// Design Name: 
// Module Name: load_activation
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


module load_activation(
clk, rst,

stride,width,channel,

load_start,
activate0,activate1,activate2,
done,
channel_end,
img_end,

BRAM_clk,
BRAM_en,
BRAM_rst,
BRAM_din,
BRAM_wen,

BRAM_0_addr,
BRAM_0_dout,

BRAM_1_addr,
BRAM_1_dout
    );
    parameter BRAM_ADDR_BIT = 32;
    parameter BRAM_WIDTH = 32;
    parameter WEIGHT_WIDTH = 8;
    
    parameter BRAM_BYTE = BRAM_ADDR_BIT/8;
    localparam STATE_IDLE = 0;
    localparam STATE_WAIT = 1;
    localparam STATE_LOAD_2 = 2;
    localparam STATE_LOAD_1 = 3;
////////////////////////////////////////////////////////////////////
    input clk,rst,load_start;
    
    input [11:0]width,channel;
    input [2:0]stride;
    output reg done;
    output [3*WEIGHT_WIDTH-1:0]activate0,activate1,activate2;
    output wire channel_end, img_end;
    
    output                          BRAM_clk,BRAM_en,BRAM_rst;
    output [BRAM_WIDTH-1:0]         BRAM_din;
    output [BRAM_BYTE-1:0]          BRAM_wen;
    output [BRAM_ADDR_BIT-1:0]      BRAM_0_addr,BRAM_1_addr;
    input  [BRAM_WIDTH-1:0]         BRAM_0_dout,BRAM_1_dout;
////////////////////////////////////////////////////////////////////
    reg [1:0]state;
    reg [9*WEIGHT_WIDTH-1:0]activate;
    reg [1:0]cnt[0:1];
    reg addr_inc;
    reg switch_addr;
    reg [1:0]addr_offset[0:1];
    
    wire [BRAM_ADDR_BIT-1:0] addr_r0, addr_r1, addr_r2;
////////////////////////////////////////////////////////////////////
    assign BRAM_clk = clk;
    assign BRAM_en = 1;
    assign BRAM_rst = 0;
    assign BRAM_din = 0;
    assign BRAM_wen = 0;
    
    assign BRAM_0_addr = (~switch_addr)? (addr_r0 + cnt[0]):(addr_r2 + cnt[0]);
    assign BRAM_1_addr = addr_r1 + cnt[0];
    
    assign activate0 = activate[0 +:24];
    assign activate1 = activate[24+:24];
    assign activate2 = activate[48+:24];
////////////////////////////////////////////////////////////////////
    in_addr_gen #(.BRAM_ADDR_BIT(BRAM_ADDR_BIT))gen_addr
                (.clk(clk), .rst(rst),
                .stride(stride),
                .width(width),
                .channel(channel),
                .addr_inc(addr_inc),
                .addr_r0(addr_r0), .addr_r1(addr_r1), .addr_r2(addr_r2), .channel_end_out(channel_end), .img_end_out(img_end));

////////////////////////////////////////////////////////////////////

    always@(posedge clk) begin
        if(rst) begin
            cnt[0] <= 0;
            switch_addr <= 0;
        end
        else if(state!=STATE_IDLE)begin
            if(cnt[0] == 2) begin
                cnt[0] <= 0;
                switch_addr <= ~switch_addr;
            end
            else begin
                cnt[0] <= (cnt[0] == 2)? 0:cnt[0]+1;
            end
        end
        else begin
            cnt[0] <= 0;
        end
    end
    
    always@(posedge clk) begin
        if(rst) begin
            cnt[1] <= 0;
        end
        else begin
            cnt[1] <= cnt[0];
        end
    end
    
    always@(posedge clk) begin
        if(rst) begin
            state <= STATE_IDLE;
            activate<= 0;
            addr_inc <= 0;
            done <= 0;
        end
        else begin
            case(state)
                STATE_IDLE: begin
                    if(load_start) begin
                        state <= STATE_WAIT;
                        done <= 0;
                    end
                    done <= 0;
                    addr_inc <= 0;
                end
                STATE_WAIT: begin
                    state <= STATE_LOAD_2;
                end
                STATE_LOAD_2: begin
                    activate[{(2'd2 - cnt[1]), 3'b0} +:8] <= BRAM_0_dout[{addr_offset[0],3'b0}+:8];
                    activate[({(2'd2 - cnt[1]), 3'b0}+24) +:8] <= BRAM_1_dout[{addr_offset[1],3'b0}+:8];
                    if(cnt[1] == 2) begin
                        state <= STATE_LOAD_1;
                    end
                end
                STATE_LOAD_1: begin
                    activate[({(2'd2 - cnt[1]), 3'b0}+48) +:8] <= BRAM_0_dout[{addr_offset[0],3'b0}+:8];
                    if(cnt[1] == 2) begin
                        state <= STATE_IDLE;
                        addr_inc <= 1;
                        done <= 1;
                    end
                end
            endcase
        end
    end
    
    always@(posedge clk) begin
        if(rst) begin
            addr_offset[0] <= 0;
            addr_offset[1] <= 0;
        end
        else begin
            addr_offset[0] <= BRAM_0_addr[1:0];
            addr_offset[1] <= BRAM_1_addr[1:0];
        end
    end
endmodule
