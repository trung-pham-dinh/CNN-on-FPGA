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
    depth,
    out2,
    out1,
    out0,
    empty,
    almost_empty,
    full,
    almost_full,
    cnt
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
input   wire    [ADDR_BIT:0]    depth;
output  wire    [WIDTH-1:0]     out0;
output  wire    [WIDTH-1:0]     out1;
output  wire    [WIDTH-1:0]     out2;
output  wire                    empty;
output  wire                    almost_empty;
output  wire                    full;
output  wire                    almost_full;
output  reg     [ADDR_BIT:0]    cnt; //[ADDR_BIT:0]: to be able to display (max value of [ADDR_BIT-1:0]) + 1
//output  wire    [ADDR_BIT:0]    gray_cnt; //[ADDR_BIT:0]: to be able to display (max value of [ADDR_BIT-1:0]) + 1

////////////////////////////////////////////////////////////////////////////////

reg [WIDTH-1:0]     mem [DEPTH-1:0];
wire [WIDTH-1:0]     out_reg[2:0];
reg [ADDR_BIT-1:0]  frontAddr0;
wire [ADDR_BIT-1:0]  frontAddr1;
wire [ADDR_BIT-1:0]  frontAddr2;
reg [ADDR_BIT-1:0]  rearAddr;


integer i;

////////////////////////////////////////////////////////////////////////////////

assign empty = (cnt == 0);
assign almost_empty = (cnt == 1) | empty;
assign full = (cnt == depth);
assign almost_full = (cnt == depth-1) | full;

assign mem0 = mem[0];

assign out_reg[0] = mem[frontAddr0];
assign out_reg[1] = mem[frontAddr1];
assign out_reg[2] = mem[frontAddr2];
//bin_to_gray #(.WIDTH(ADDR_BIT+1))cvt(cnt, gray_cnt);

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
        rearAddr <= 0;
    end
    else if(!full && wen) begin
        mem[rearAddr] <= in;
        rearAddr <= rearAddr + 1;
    end
end

// read from front

assign out0 = out_reg[2];
assign out1 = out_reg[1];
assign out2 = out_reg[0];

assign frontAddr1 = frontAddr0 + 3'd1;
assign frontAddr2 = frontAddr0 + 3'd2;

always @(posedge clk) begin
    if(rst) begin
        frontAddr0 <=0;
    end
    else begin
        if(!empty && ren) begin
            frontAddr0 <= frontAddr0 + 1;
        end
    end
end

endmodule
