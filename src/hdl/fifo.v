`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: phamdinhtrung
// 
// Create Date: 10/01/2021 03:18:55 PM
// Design Name: 
// Module Name: fifo
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
module fifo(
    clk,
    rst,
    ren,
    wen,
    in,
    out,
    empty,
    full,
    almost_full,
    gray_cnt
    );
////////////////////////////////////////////////////////////////////////////////

parameter WIDTH = 8;
parameter ADDR_BIT = 3;

////////////////////////////////////////////////////////////////////////////////

localparam DEPTH = 2**ADDR_BIT;

////////////////////////////////////////////////////////////////////////////////

input   wire                    clk;
input   wire                    rst;
input   wire                    ren;
input   wire                    wen;
input   wire    [WIDTH-1:0]     in;
output  reg     [WIDTH-1:0]     out;
output  wire                    empty;
output  wire                    full;
output  wire                    almost_full;
output  wire    [ADDR_BIT:0]    gray_cnt; //[ADDR_BIT:0]: to be able to display (max value of [ADDR_BIT-1:0]) + 1

////////////////////////////////////////////////////////////////////////////////

reg [WIDTH-1:0]     mem [DEPTH-1:0];
reg [ADDR_BIT:0]    cnt; //[ADDR_BIT:0]: to be able to display (max value of [ADDR_BIT-1:0]) + 1
reg [ADDR_BIT-1:0]  frontAddr;
reg [ADDR_BIT-1:0]  rearAddr;

integer i;

////////////////////////////////////////////////////////////////////////////////

assign empty = (cnt == 0);
assign almost_full = (cnt == DEPTH-1);
assign full = (cnt == DEPTH);

genvar bit;
// binary to gray converter
assign gray_cnt[ADDR_BIT] = cnt[ADDR_BIT];
generate 
for (bit = 0; bit < ADDR_BIT; bit = bit+1) begin
    assign gray_cnt[bit] = cnt[bit+1] ^ cnt[bit];
end
endgenerate

////////////////////////////////////////////////////////////////////////////////

// counter control
always @(posedge clk, posedge rst) begin
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
always @(posedge clk, posedge rst) begin
    if(rst) begin
        for(i = 0; i < DEPTH; i = i + 1) begin
            mem[i] <= 0;
        end
        rearAddr <= 0;
    end
	else if((!full && wen) && (!empty && ren)) begin
		mem[rearAddr] <= mem[rearAddr];
        rearAddr <= rearAddr;
	end
    else if(!full && wen) begin
        mem[rearAddr] <= in;
        rearAddr <= rearAddr + 1;
    end
end

// read from front
always @(posedge clk, posedge rst) begin
    if(rst) begin
        out <= 0;
        frontAddr <=0;
    end
	else if((!full && wen) && (!empty && ren)) begin
		out <= mem[frontAddr];
        frontAddr <= frontAddr;
	end
    else if(!empty && ren) begin
        out <= mem[frontAddr];
        frontAddr <= frontAddr + 1;
    end
end

endmodule
