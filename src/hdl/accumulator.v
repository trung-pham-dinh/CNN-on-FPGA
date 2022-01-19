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


//module accumulator(
//clk,rst,
//addr_in,
//in_psum0,
//in_psum1,
//in_psum2,
//in_psum3,
//in_vld,

//BRAM_addr, 
//BRAM_clk,
//BRAM_din,
//BRAM_dout,
//BRAM_en,
//BRAM_rst,
//BRAM_wen
//    );
//    parameter PSUM_WIDTH = 8;
//    parameter BRAM_WIDTH = 32;
//    parameter BRAM_ADDR_BIT = 32;
//    parameter BRAM_BYTE = BRAM_ADDR_BIT/8;
///////////////////////////////////////////////////////////////////////////////
//    input   [PSUM_WIDTH-1:0]        in_psum0,in_psum1,in_psum2,in_psum3;
//    input                           in_vld;
//    input                           clk,rst;
//    input   [BRAM_ADDR_BIT-1:0]     addr_in;
    
//    output  [BRAM_ADDR_BIT-1:0]     BRAM_addr;
//    output                          BRAM_clk;
//    output  [BRAM_WIDTH-1:0]        BRAM_din;
//    input   [BRAM_WIDTH-1:0]        BRAM_dout;
//    output                          BRAM_en;
//    output                          BRAM_rst;
//    output  [BRAM_BYTE-1:0]         BRAM_wen;
///////////////////////////////////////////////////////////////////////////////
//    reg     [1:0]                   in_vld_reg;
//    reg     [1:0]                   addr_offset;
///////////////////////////////////////////////////////////////////////////////
//    assign BRAM_en  = 1;
//    assign BRAM_rst = 0;
    
//    assign BRAM_din = BRAM_dout[{addr_offset, 3'b0} +: 8] + in_psum0 + in_psum1 + in_psum2 + in_psum3;
//    assign BRAM_wen = {3'b0,in_vld_reg[1]};
//    assign BRAM_addr = addr_in;
///////////////////////////////////////////////////////////////////////////////    
//    always@(posedge clk) begin
//        if(rst) begin
//            in_vld_reg <= 0;
//        end
//        else begin
//            in_vld_reg[0] <= in_vld;
//            in_vld_reg[1] <= in_vld_reg[0];
//        end
//    end
    
//    always@(posedge clk) begin
//        if(rst) begin
//            addr_offset <= 0;
//        end
//        else begin
//            addr_offset <= addr_in[1:0];
//        end
//    end
///////////////////////////////////////////////////////////////////////////////    
//endmodule
module accumulator(
clk,rst,
addr_rst,

no_entry,
no_channel,

BRAM_rready, // connect to ff_ren
BRAM_wready, // connect to out_psum_vld

in_psum0,
in_psum1,
in_psum2,
in_psum3,


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
    input                               clk,rst,addr_rst;
    input   [NO_ENTRY_BIT-1:0]          no_entry;
    input   [NO_CHANNEL_BIT-1:0]        no_channel;
    input   [PSUM_WIDTH-1:0]            in_psum0,in_psum1,in_psum2,in_psum3;
    input                               BRAM_rready,BRAM_wready;

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
                             .addr_rst(addr_rst), .addr_inc(addr_inc),
                             .no_entry(no_entry), .no_channel(no_channel), .addr(addr));
/////////////////////////////////////////////////////////////////////////////    
  
    always@(posedge clk) begin
        if(rst) begin
            state <= STATE_READ;
            BRAM_wen <= 0;
            BRAM_addr <= 0;
            BRAM_din <= 0;
        end
        else begin
            case(state)
                STATE_READ: begin
                    if(BRAM_rready) begin
                        state <= STATE_WAIT;
                        BRAM_addr <= addr;
                    end
                    BRAM_wen <= 0;
                    BRAM_din <= 0;
                end
                STATE_WAIT: begin
                    state <= STATE_WRITE;
                end
                STATE_WRITE: begin
                    state <= STATE_READ;
                    BRAM_wen[BRAM_addr[1:0]] <= 1;
                    BRAM_din[{BRAM_addr[1:0],3'b0} +: 8] <= BRAM_dout[{BRAM_addr[1:0],3'b0} +: 8] + in_psum0 + in_psum1 + in_psum2 + in_psum3;
                end
            endcase
        end
    end
endmodule

