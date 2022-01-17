`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date: 01/14/2022 05:24:51 PM
// Design Name: 
// Module Name: ConvoFIFOCtrl
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


module ConvoFIFOCtrl(
    clk,
    rst,
    load_done,
    empty,
    stride,
    row_len,
    
    ff_rst,
    ff_ren,
    ff_wen,
    ff_stride,
    ff_row_len,
    counter
    
);

input clk, rst, load_done;
input empty;
input [2:0] stride;
input [4:0] row_len;


reg r;
reg w;
reg [4:0] rl;
reg rs;


output wire ff_rst;
output wire ff_ren;
output wire ff_wen;
output wire [2:0] ff_stride;
output wire [4:0] ff_row_len;


wire [2:0] steps;
assign steps = (stride == 1)?0:( (stride == 2)? 1: 0);

assign ff_row_len = rl;
assign ff_stride = (counter == (row_len -3) >> steps)? ((steps == 0)?stride : row_len) : stride;
assign ff_wen = w;
assign ff_ren = r;
assign ff_rst = rs;
output reg [1:0]  counter;

always @(posedge clk) begin
    if(rst) begin
        rl <= row_len;
        rs <= 1;
        r <= 0;
        w <= 0;
    end
    else begin
        rs <= 0;
    end
    
    if(empty) begin
        w <= 1;
    end
    
    if(load_done)begin
        w<=1;
        r<=1;
    end
   
    
end

always @(posedge clk)begin
    if(load_done)begin
        counter <=0;
    end
    else begin
        counter <= (counter == row_len -3 >> steps)? 0: counter+1;
    
    end
end


endmodule
