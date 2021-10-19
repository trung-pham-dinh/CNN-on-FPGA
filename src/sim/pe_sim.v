`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date: 10/09/2021 09:44:33 PM
// Design Name: 
// Module Name: pe_sim
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


module pe_sim(
    );
parameter WIDTH             = 8;
parameter PIPELINE_STAGE    = 3;    

reg           clk;
reg           rst;
reg           in_data_update;
reg [7:0]     in_data;
reg           in_weight_update;
reg [7:0]     in_weight;
reg           in_psum_update;
reg [15:0]    in_psum;

wire            out_psum_vld;
wire [15:0]    out_psum;
integer i;

    pe #(.WIDTH(WIDTH), .PIPELINE_STAGE(PIPELINE_STAGE))uut (clk,
                                                            rst,
                                                            in_data,
                                                            in_weight,
                                                            in_psum,
                                                            
                                                            in_data_update,
                                                            in_weight_update,
                                                            in_psum_update,
                                                            
                                                            out_psum,
                                                            out_psum_vld);
    always #10 clk = ~clk;
    initial begin
        clk <= 0;
        rst <= 1;
        in_data <= 3;
        in_weight <= 4;
        in_psum <= 5;
        in_data_update <= 0;
        in_weight_update <= 0;
        in_psum_update <= 0;
        #20;
//        rst <= 0;
//        in_data_update <= 1;
//        in_weight_update <= 1;
//        in_psum_update <= 1;
//        #20;
//        in_data_update <= 0;
//        in_weight_update <= 0;
//        in_psum_update <= 0;
        rst <= 0;
        for(i = 0; i < 5; i = i + 1) begin
            in_data_update <= 1;
            in_weight_update <= 1;
            in_psum_update <= 1;
        
            in_data <= in_data + 1;
            in_weight <= in_weight + 1;
            in_psum <= in_psum + 1;
            
            #20;
            
            in_data_update <= 0;
            in_weight_update <= 0;
            in_psum_update <= 0;
            
            #20;
        end
        
    end
endmodule
