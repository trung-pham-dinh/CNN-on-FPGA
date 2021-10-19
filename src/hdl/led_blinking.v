`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date: 10/18/2021 06:36:20 PM
// Design Name: 
// Module Name: led_blinking
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


module led_blinking(
    clk,
    led
    );
input   clk;
output  led;

reg  [15:0] prescaler;

assign led = prescaler[15];

always @(posedge clk) begin
    prescaler <= prescaler + 1;
end

endmodule
