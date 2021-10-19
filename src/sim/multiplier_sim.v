`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date: 10/09/2021 07:29:11 PM
// Design Name: 
// Module Name: multiplier_sim
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


module multiplier_sim(
    );
reg [7:0]A_0;
reg [7:0]B_0;
reg CLK_0;
wire [15:0]P_0;

    multiplier_8x8_wrapper uut(A_0,
    B_0,
    CLK_0,
    P_0);
    
    always #10 CLK_0 = ~ CLK_0;
    initial begin
        CLK_0 = 0;
        A_0 = -30;
        B_0 = 40;
        #20;
        A_0 = -20;
        B_0 = 40;
        #20;
        A_0 = -10;
        B_0 = 40;
    end
    
endmodule
