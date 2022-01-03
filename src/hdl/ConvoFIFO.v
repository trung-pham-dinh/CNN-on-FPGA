`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date: 12/31/2021 05:58:00 PM
// Design Name: 
// Module Name: ConvoFIFO
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


module ConvoFIFO(
    clk,
    rst,
    ren,
    wen,
    in,
    row_len,
    out2,
    out1,
    out0,
    load_done,
    empty,
    full,
    cnt
    );
////////////////////////////////////////////////////////////////////////////////

parameter WIDTH = 8;
parameter ADDR_BIT = 5;

////////////////////////////////////////////////////////////////////////////////

localparam DEPTH = 2**ADDR_BIT;
////////////////////////////////////////////////////////////////////////////////

input   wire                    clk;
input   wire                    rst;
input   wire                    ren;
input   wire                    wen;
input   wire    [WIDTH-1:0]     in;
input   wire    [ADDR_BIT-1:0]  row_len;
output  reg     [3*WIDTH-1:0]   out2;
output  reg     [3*WIDTH-1:0]   out1;
output  reg     [3*WIDTH-1:0]   out0;
output  wire                    load_done;
output  wire                    empty;
output  wire                    full;
output  reg     [ADDR_BIT:0]    cnt; //[ADDR_BIT:0]: to be able to display (max value of [ADDR_BIT-1:0]) + 1

////////////////////////////////////////////////////////////////////////////////

reg [WIDTH-1:0]      mem [DEPTH-1:0];

reg  [ADDR_BIT:0]  outAddr22;
wire [ADDR_BIT-1:0]  outAddr21;
wire [ADDR_BIT-1:0]  outAddr20;

wire [ADDR_BIT-1:0]  outAddr12;
wire [ADDR_BIT-1:0]  outAddr11;
wire [ADDR_BIT-1:0]  outAddr10;

wire [ADDR_BIT-1:0]  outAddr02;
wire [ADDR_BIT-1:0]  outAddr01;
wire [ADDR_BIT-1:0]  outAddr00;

reg [ADDR_BIT:0]   inAddr;


integer i;

////////////////////////////////////////////////////////////////////////////////

assign empty = (inAddr == outAddr22);
assign full = (inAddr[ADDR_BIT-1:0] == outAddr22[ADDR_BIT-1:0]) & (inAddr[ADDR_BIT] != outAddr22[ADDR_BIT]);
assign load_done = (inAddr[ADDR_BIT-1:0] == (outAddr02+row_len));

////////////////////////////////////////////////////////////////////////////////

// counter control
always @(posedge clk) begin
    if(rst) begin
        cnt <= 0;
    end
	else if((!empty && ren)&&(!full && wen)) begin
		cnt <= cnt;
	end
    else if(!empty && ren) begin
        cnt <= cnt - 1;
    end
    else if(!full && wen) begin
        cnt <= cnt + 1;
    end
end

// write to rear
always @(posedge clk) begin
    if(rst) begin
        for(i = 0; i < DEPTH; i = i + 1) begin
            mem[i] <= 0;
        end
        inAddr <= 0;
    end
    else if(!full && wen) begin
        mem[inAddr[ADDR_BIT-1:0]] <= in;
        inAddr <= inAddr + 1;
    end
end

// read from front

assign outAddr21 = outAddr22 + 2'b1;
assign outAddr20 = outAddr22 + 2'b10;


assign outAddr12 = outAddr22 + row_len;
assign outAddr11 = outAddr12 + 2'b1;
assign outAddr10 = outAddr12 + 2'b10;

assign outAddr02 = outAddr12 + row_len;
assign outAddr01 = outAddr02 + 2'b1;
assign outAddr00 = outAddr02 + 2'b10;



always @(posedge clk) begin
    if(rst) begin
        outAddr22 <=0;
    end
    else begin
        if(!empty && ren) begin
            outAddr22 <= outAddr22 + 1;
            
            out2[3*WIDTH-1:2*WIDTH] <= mem[outAddr22[ADDR_BIT-1:0]];
            out2[2*WIDTH-1:1*WIDTH] <= mem[outAddr21];
            out2[1*WIDTH-1:0]       <= mem[outAddr20];
            
            out1[3*WIDTH-1:2*WIDTH] <= mem[outAddr12];
            out1[2*WIDTH-1:1*WIDTH] <= mem[outAddr11];
            out1[1*WIDTH-1:0]       <= mem[outAddr10];
            
            out0[3*WIDTH-1:2*WIDTH] <= mem[outAddr02];
            out0[2*WIDTH-1:1*WIDTH] <= mem[outAddr01];
            out0[1*WIDTH-1:0]       <= mem[outAddr00];
        end
    end
end
endmodule
