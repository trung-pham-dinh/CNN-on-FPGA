`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date: 01/17/2022 07:01:28 PM
// Design Name: 
// Module Name: in_addr_gen
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


module in_addr_gen(
clk,rst,
stride,
width,
channel,
addr_inc,

addr_r0, addr_r1, addr_r2,

entry_cnt,
row_cnt,
channel_cnt
    );
    parameter BRAM_ADDR_BIT = 32;

    input clk, rst, addr_inc;
    input [11:0]width, channel;
    input [1:0] stride;


    output reg [BRAM_ADDR_BIT-1:0]addr_r0, addr_r1, addr_r2;
    output reg [11:0]entry_cnt;
    output reg [11:0]row_cnt;
    output reg [11:0]channel_cnt;

    wire entry_end, row_end, channel_end;
/////////////////////////////////////////////////////////////////////////////
    assign entry_end = width < entry_cnt+ 3 + stride;
    assign row_end = width < row_cnt+ 3 + stride;
    assign channel_end = channel_cnt==channel-1;
/////////////////////////////////////////////////////////////////////////////

    // entry counter
    always@(posedge clk) begin
        if(rst) begin
            entry_cnt <= 0;
        end
        else if(addr_inc)begin
            if(width < entry_cnt+ 3 + stride) begin
                entry_cnt <= 0;
            end
            else begin
                entry_cnt <= entry_cnt+stride;
            end
        end
    end

    // row counter
    always@(posedge clk) begin
        if(rst) begin
            row_cnt <= 0;
        end
        else if(addr_inc)begin
            if(entry_end) begin
                if(width < row_cnt+ 3 + stride) begin
                    row_cnt <= 0;
                end
                else begin
                    row_cnt <= row_cnt+stride;
                end
            end
        end
    end

    // channel counter
    always@(posedge clk) begin
        if(rst) begin
            channel_cnt <= 0;
        end
        else if(addr_inc)begin
            if(entry_end & row_end) begin
                if(channel_cnt==channel-1) begin
                    channel_cnt <= 0;
                end
                else begin
                    channel_cnt <= channel_cnt+1;
                end
            end
        end
    end

    always@(posedge clk) begin
        if(rst) begin
            addr_r0<=0;
            addr_r1<= width;
            addr_r2<= {width, 1'b0};
        end
        else if(addr_inc)begin
            if(row_end & entry_end & channel_end) begin
                addr_r0<=0;
                addr_r1<= width;
                addr_r2<= {width, 1'b0};
            end
            else if(row_end & entry_end) begin
                addr_r0<=addr_r0 -entry_cnt + {width, 1'b0} + (width << (width - row_cnt-3));
                addr_r1<=addr_r1 -entry_cnt + {width, 1'b0} + (width << (width - row_cnt-3));
                addr_r2<=addr_r2 -entry_cnt + {width, 1'b0} + (width << (width - row_cnt-3));
            end
             else if(entry_end) begin
                addr_r0<= addr_r0 - entry_cnt + (width<<(stride -1));
                addr_r1<= addr_r1 - entry_cnt + (width<<(stride -1));
                addr_r2<= addr_r2 - entry_cnt + (width<<(stride -1));
            end
            else begin
                addr_r0<=addr_r0+stride;
                addr_r1<=addr_r1+stride;
                addr_r2<=addr_r2+stride;
            end
        end
    end

endmodule
