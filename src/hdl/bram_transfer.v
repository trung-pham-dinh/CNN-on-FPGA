`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date: 02/03/2022 05:18:46 PM
// Design Name: 
// Module Name: bram_transfer
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


module bram_transfer(
    clk, rst,
    
    load_start,
    quantites,
    load_done,
    
    BRAM_IN_clk,
    BRAM_IN_en,
    BRAM_IN_rst,
    BRAM0_IN_din,
    BRAM1_IN_din,
    BRAM2_IN_din,
    BRAM3_IN_din,
    BRAM_IN_wen,
    BRAM_IN_addr,

    BRAM_OUT_clk,
    BRAM_OUT_en,
    BRAM_OUT_rst,
    BRAM_OUT_wen,
    BRAM_OUT_addr,
    BRAM0_OUT_dout,
    BRAM1_OUT_dout,
    BRAM2_OUT_dout,
    BRAM3_OUT_dout    
    );
    parameter BRAM_ADDR_BIT = 32;
    parameter BRAM_WIDTH = 32;
    
    parameter BRAM_BYTE = BRAM_ADDR_BIT/8;
    localparam STATE_IDLE = 0;
    localparam STATE_LOAD = 1;
////////////////////////////////////////////////////////////////////
    input clk, rst, load_start;
    input [31:0]quantites;
    output reg load_done;
    
    output BRAM_IN_clk, BRAM_IN_en, BRAM_IN_rst;
    output [BRAM_WIDTH-1:0] BRAM0_IN_din, BRAM1_IN_din, BRAM2_IN_din, BRAM3_IN_din;
    output reg [BRAM_BYTE-1:0] BRAM_IN_wen;
    output reg [BRAM_ADDR_BIT-1:0] BRAM_IN_addr;
    
    output BRAM_OUT_clk, BRAM_OUT_en, BRAM_OUT_rst;
    output [BRAM_BYTE-1:0] BRAM_OUT_wen;
    output reg [BRAM_ADDR_BIT-1:0] BRAM_OUT_addr;
    input [BRAM_WIDTH-1:0] BRAM0_OUT_dout, BRAM1_OUT_dout, BRAM2_OUT_dout, BRAM3_OUT_dout;   
////////////////////////////////////////////////////////////////////
    reg       state;
    reg [31:0]cnt;
////////////////////////////////////////////////////////////////////
    assign BRAM_IN_clk  = clk;
    assign BRAM_IN_en   = 1;
    assign BRAM_IN_rst  = 0;
    
    assign BRAM_OUT_clk  = clk;
    assign BRAM_OUT_en  = 1;
    assign BRAM_OUT_rst = 0;
    assign BRAM_OUT_wen = 0;

    assign BRAM0_IN_din = BRAM0_OUT_dout;
    assign BRAM1_IN_din = BRAM1_OUT_dout;
    assign BRAM2_IN_din = BRAM2_OUT_dout;
    assign BRAM3_IN_din = BRAM3_OUT_dout;
//////////////////////////////////////////////////////////////////// 
    always@(posedge clk) begin
        if(rst) begin
            BRAM_IN_wen   <= 0;
            BRAM_IN_addr  <= 0;
        end
        else begin
            BRAM_IN_addr <= BRAM_OUT_addr;
            BRAM_IN_wen  <= {4{state}};
        end
    end
    
    always@(posedge clk) begin
        if(rst) begin
            state         <= STATE_IDLE;
            BRAM_OUT_addr <= 0;
            cnt           <= 0;
            load_done     <= 0;
        end
        else begin 
            case(state)
                STATE_IDLE: begin
                    if(load_start) begin
                        state        <= STATE_LOAD;
                    end
                    load_done     <= 0;
                end
                STATE_LOAD: begin
                    if(cnt == (quantites-1)) begin
                        state     <= STATE_IDLE;
                        load_done <= 1;
                        cnt           <= 0;
                        BRAM_OUT_addr <= 0; 
                    end
                    else begin
                        BRAM_OUT_addr <= BRAM_OUT_addr + 4;
                        cnt           <= cnt + 1;
                    end
                end
             endcase    
        end
    end
endmodule
