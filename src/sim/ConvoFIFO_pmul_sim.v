`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date: 01/07/2022 06:53:19 PM
// Design Name: 
// Module Name: ConvoFIFO_pmul_sim
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


module ConvoFIFO_pmul_sim(

    );
    parameter FF_WIDTH = 8;
    parameter FF_ADDR_BIT = 10;
    
    reg                               clk,rst;
    reg                               ff_ren,ff_wen;
    reg [FF_ADDR_BIT:0]               ff_row_len;
    reg [2:0]                         ff_stride;
    reg   [FF_WIDTH-1:0]              ff_din;
    
    wire  [3*FF_WIDTH-1:0]            ff_out2;
    wire  [3*FF_WIDTH-1:0]            ff_out1;
    wire  [3*FF_WIDTH-1:0]            ff_out0;
    wire                              ff_load_done;
    wire                              ff_empty;
    wire                              ff_full;
    wire [FF_ADDR_BIT:0]              ff_cnt;
    
    wire [FF_WIDTH-1:0]               entry;
    wire                              entry_vld;
    
    integer i;
    
    ConvoFIFO_pmul #(.FF_WIDTH(FF_WIDTH), .FF_ADDR_BIT(FF_ADDR_BIT))uut(
    clk,rst,
    
    ff_ren,
    ff_wen,
    ff_row_len,
    ff_stride,
    ff_din,
    ff_out2,ff_out1,ff_out0,
    
    ff_load_done,
    ff_empty, ff_full, ff_cnt,
    
    entry,
    entry_vld
        );
        
    always #10 clk = ~clk;
    
    initial begin // reset
        clk = 0;
        ff_ren = 0;
        ff_wen = 0;
        ff_row_len = 8;
        ff_stride = 1;
        ff_din = 0;
        rst = 1;
        #20;
        rst = 0;
    end
    
    initial begin
        #20;
        ff_wen <= 1;
        for(i=0;i<24;i=i+1) begin
            ff_din <= ff_din+1;
            #20;
        end
        ff_wen <= 0;
        
        #60;
        for(i=0;i<24;i=i+1) begin
            ff_ren <= 1;
            #10;
            ff_ren <= 0;
            #10;
        end
    end
endmodule
