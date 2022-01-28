`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date: 01/16/2022 09:44:55 AM
// Design Name: 
// Module Name: out_addr_gen
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


module out_addr_gen(
clk,rst,

addr_rst,
addr_inc, // connect to ff_ren
no_entry, // number of entries in 1 channel (width*width)
no_channel,

addr
    );
    
    parameter BRAM_ADDR_BIT = 32;
    parameter NO_ENTRY_BIT = 16;
    parameter NO_CHANNEL_BIT = 11;
/////////////////////////////////////////////////////////////////////////////
    input                               clk,rst,addr_inc;
    input       [NO_ENTRY_BIT-1:0]      no_entry;
    input       [NO_CHANNEL_BIT-1:0]    no_channel;
    input                               addr_rst;
    output  reg [BRAM_ADDR_BIT-1:0]     addr;
/////////////////////////////////////////////////////////////////////////////
    reg     [BRAM_ADDR_BIT-1:0]         addr_savePoint;
    
    reg     [NO_ENTRY_BIT-1:0]          entry_cnt;
    wire                                entry_end;
    reg     [NO_CHANNEL_BIT-1:0]        channel_cnt;
    wire                                channel_end;
/////////////////////////////////////////////////////////////////////////////
    assign entry_end = entry_cnt==no_entry-1;
    assign channel_end = channel_cnt== no_channel-1;
/////////////////////////////////////////////////////////////////////////////
    always@(posedge clk) begin
        if(rst|addr_rst) begin
            entry_cnt <= 0;
        end
        else if(addr_inc)begin
            if(entry_cnt==no_entry-1) begin
                entry_cnt <= 0;
            end
            else begin
                entry_cnt <= entry_cnt+1;
            end
        end
    end
    
    always@(posedge clk) begin
        if(rst|addr_rst) begin
            channel_cnt <= 0;
        end
        else if(addr_inc)begin
            if(entry_end) begin
                if(channel_cnt== no_channel-1) begin
                    channel_cnt <= 0;
                end
                else begin
                    channel_cnt <= channel_cnt+1;
                end
            end
        end
    end
    
    always@(posedge clk) begin
        if(rst|addr_rst) begin
            addr <= 0;
            addr_savePoint <= 0;
        end
        else if(addr_inc)begin
            if(entry_end && channel_end) begin
                addr <= addr_savePoint + no_entry;
                addr_savePoint <= addr_savePoint + no_entry;
            end
            else if(entry_end) begin
                addr <= addr_savePoint;
            end
            else begin
                addr <= addr + 1;
            end
        end
    end
endmodule
