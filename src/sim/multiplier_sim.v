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

    mult_gen_0 uut (
      .CLK(CLK_0),  // input wire CLK
      .A(A_0),      // input wire [7 : 0] A
      .B(B_0),      // input wire [7 : 0] B
      .P(P_0)      // output wire [15 : 0] P
    );
    
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
