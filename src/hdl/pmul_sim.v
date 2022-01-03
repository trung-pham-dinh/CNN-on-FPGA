`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date: 01/01/2022 04:27:25 PM
// Design Name: 
// Module Name: pmul_sim
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


module pmul_sim(

    );
    parameter WIDTH = 8;
    
    reg clk;
    reg rst;
    
    reg [WIDTH-1:0] in_data2;
    reg [WIDTH-1:0] in_data1;
    reg [WIDTH-1:0] in_data0;
    
    reg [WIDTH-1:0] in_weight2;
    reg [WIDTH-1:0] in_weight1;
    reg [WIDTH-1:0] in_weight0;
    
    reg             in_update;
    
    wire [WIDTH-1:0] psum;
    wire psum_vld;
    
    pmul uut(clk,rst,
            in_data2,
            in_data1,
            in_data0,
            
            in_update,
            
            in_weight2,
            in_weight1,
            in_weight0,
            
            psum,
            psum_vld);
    
    always #10 clk=~clk;
    initial begin
        clk <= 0;
        rst <= 1;
        
        in_data2 <= 6;
        in_data1 <= 1;
        in_data0 <= 2;
        
        in_weight2 <= 3;
        in_weight1 <= 4;
        in_weight0 <= 5;
        
        in_update <= 0;
        
        #20;
        rst <= 0;
        #290;
        in_update <= 1;
        #20;
        
        in_update <= 0;
    end
endmodule
