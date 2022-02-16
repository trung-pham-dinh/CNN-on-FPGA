`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date: 01/14/2022 10:37:25 AM
// Design Name: 
// Module Name: accumulator
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

module accumulator(
clk,rst,
no_entry,
no_channel,

BRAM_rready,

in_psum0,
in_psum1,
in_psum2,
in_psum3,
accum_done,

BRAM_addr, 
BRAM_clk,
BRAM_din,
BRAM_dout,
BRAM_en,
BRAM_rst,
BRAM_wen
    );
    parameter PSUM_WIDTH = 8;
    
    parameter BRAM_WIDTH = 32;
    parameter BRAM_ADDR_BIT = 32;
    parameter BRAM_BYTE = BRAM_ADDR_BIT/8;
    
    parameter NO_ENTRY_BIT = 16;
    parameter NO_CHANNEL_BIT = 11;
/////////////////////////////////////////////////////////////////////////////
    
    localparam STATE_READ = 0;
    localparam STATE_WAIT = 1;
    localparam STATE_WRITE = 2;
/////////////////////////////////////////////////////////////////////////////
    input                               clk,rst;
    input   [NO_ENTRY_BIT-1:0]          no_entry;
    input   [NO_CHANNEL_BIT-1:0]        no_channel;
    input   [PSUM_WIDTH-1:0]            in_psum0,in_psum1,in_psum2,in_psum3;
    input                               BRAM_rready;
    output  reg                         accum_done;

    output  reg[BRAM_ADDR_BIT-1:0]      BRAM_addr;
    output                              BRAM_clk;
    output  reg[BRAM_WIDTH-1:0]         BRAM_din;
    input   [BRAM_WIDTH-1:0]            BRAM_dout;
    output                              BRAM_en;
    output                              BRAM_rst;
    output  reg[BRAM_BYTE-1:0]          BRAM_wen;
/////////////////////////////////////////////////////////////////////////////
    wire    [BRAM_ADDR_BIT-1:0]     addr;
    wire    [PSUM_WIDTH-1:0]        accum;
    reg     [1:0]                   state;
    wire                            addr_inc;
/////////////////////////////////////////////////////////////////////////////
    assign BRAM_clk = clk;
    assign BRAM_en  = 1;
    assign BRAM_rst = 0;
    
    assign addr_inc = (BRAM_rready & state==STATE_READ);
/////////////////////////////////////////////////////////////////////////////    
    out_addr_gen #(.BRAM_ADDR_BIT(BRAM_ADDR_BIT), .NO_ENTRY_BIT(NO_ENTRY_BIT), .NO_CHANNEL_BIT(NO_CHANNEL_BIT))
                    addr_gen(.clk(clk), .rst(rst), 
                             .addr_rst(rst), .addr_inc(addr_inc),
                             .no_entry(no_entry), .no_channel(no_channel), .addr(addr));
/////////////////////////////////////////////////////////////////////////////    
  
    always@(posedge clk) begin
        if(rst) begin
            state <= STATE_READ;
            BRAM_wen <= 0;
            BRAM_addr <= 0;
            BRAM_din <= 0;
            accum_done <= 0;
        end
        else begin
            case(state)
                STATE_READ: begin
                    if(BRAM_rready) begin
                        state <= STATE_WAIT;
                        BRAM_addr <= addr;
                    end
                    accum_done <= 0;
                    BRAM_wen <= 0;
                    BRAM_din <= 0;
                end
                STATE_WAIT: begin
                    state <= STATE_WRITE;
                end
                STATE_WRITE: begin
                    state <= STATE_READ;
                    accum_done <= 1;
                    BRAM_wen[BRAM_addr[1:0]] <= 1;
                    BRAM_din[{BRAM_addr[1:0],3'b0} +: 8] <= BRAM_dout[{BRAM_addr[1:0],3'b0} +: 8] + in_psum0 + in_psum1 + in_psum2 + in_psum3;
                end
            endcase
        end
    end
endmodule