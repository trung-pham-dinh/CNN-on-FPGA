`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date: 01/28/2022 09:47:31 AM
// Design Name: 
// Module Name: and_gate_accum
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


module and_gate_accum(
in0,
in1,
in2,
in3,

and_out
    );
    input in0,in1,in2,in3;
    output and_out;
    
    assign and_out = in0&in1&in2&in3;
endmodule
