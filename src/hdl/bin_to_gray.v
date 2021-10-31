`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: phamdinhtrung
// 
// Create Date: 10/31/2021 03:21:46 PM
// Design Name: 
// Module Name: bin_to_gray
// Project Name: 
// Target Devices: 
// Tool Versions: 
// Description: base on Minh design
// 
// Dependencies: 
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
//////////////////////////////////////////////////////////////////////////////////


module bin_to_gray(
    bin,
    gray,
    );
    parameter WIDTH = 4;
    input [WIDTH-1:0]bin;
    output [WIDTH-1:0]gray;
    
    assign gray = bin ^ {1'b0, bin[WIDTH-1:1]};
endmodule
