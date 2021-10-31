`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: phamdinhtrung
// 
// Create Date: 10/09/2021 09:19:41 PM
// Design Name: 
// Module Name: pe
// Project Name: 
// Target Devices: 
// Tool Versions: 
// Description: 
//              Wait 1 clk cycle after syn reset signal to reset the module
//              Wait PIPELINE_STAGE clk cycle to have an output after an input update
//
// 
// Dependencies: multiplier_8x8.bd
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
//////////////////////////////////////////////////////////////////////////////////


module pe(
clk, 
rst,

in_data, 
in_weight, 
in_psum,

in_data_update, 
in_weight_update, 
in_psum_update,

out_psum, 
out_psum_vld
    );


parameter WIDTH             = 8;
parameter PIPELINE_STAGE    = 3;

//////////////////////////////////////////////////////////////////////////////////

input                               clk;
input                               rst;
input   [WIDTH - 1 : 0]             in_data;
input   [WIDTH - 1 : 0]             in_weight;
input   [WIDTH * 2 - 1 : 0]         in_psum;
input                               in_data_update;
input                               in_weight_update;
input                               in_psum_update;
output  [WIDTH * 2 - 1 : 0]         out_psum;
output                              out_psum_vld;

//////////////////////////////////////////////////////////////////////////////////

reg     [WIDTH - 1 : 0]             in_data_reg;
reg     [WIDTH - 1 : 0]             in_weight_reg;
reg     [WIDTH - 1 : 0]             in_psum_reg;
wire                                in_update;
wire    [WIDTH * 2 - 1 : 0]         out_mult;
reg     [WIDTH * 2 - 1 : 0]         in_psum_pipeline        [0 : PIPELINE_STAGE - 1];
reg                                 out_psum_vld_pipeline   [0 : PIPELINE_STAGE];

integer i;

//////////////////////////////////////////////////////////////////////////////////

multiplier_8x8_wrapper mult_unit(in_data_reg, in_weight_reg, clk, out_mult);

assign in_update = (in_data_update | in_weight_update | in_psum_update);
assign out_psum = in_psum_pipeline[PIPELINE_STAGE-1] + out_mult;
assign out_psum_vld = out_psum_vld_pipeline[PIPELINE_STAGE];

//////////////////////////////////////////////////////////////////////////////////

// Read input
always @(posedge clk) begin
    if(rst) begin
        in_data_reg <= 0;
        in_weight_reg <= 0;
        in_psum_reg <= 0;
    end
    else begin
        if(in_data_update) begin
            in_data_reg <= in_data;
        end
        if(in_weight_update) begin
            in_weight_reg <= in_weight;
        end
        if(in_psum_update) begin
            in_psum_reg <= in_psum;
        end
    end
end

// Pipeline for output validation
always @(posedge clk) begin
    if(rst) begin
        for(i = 0; i < PIPELINE_STAGE; i = i + 1) begin: zero_init_out_psum_vld
            out_psum_vld_pipeline[i] <= 0;
        end 
    end
    else begin
        out_psum_vld_pipeline[0] <= in_update;
        for(i = 0; i < PIPELINE_STAGE; i = i + 1) begin: pipeline_stage_out_psum_vld
            out_psum_vld_pipeline[i+1] <= out_psum_vld_pipeline[i];
        end 
    end
end

// Pipeline for input_psum validation
always @(posedge clk) begin
    if(rst) begin
        for(i = 0; i < PIPELINE_STAGE - 1; i = i + 1) begin: zero_init_in_psum
            in_psum_pipeline[i] <= 0;
        end 
    end
    else begin
        in_psum_pipeline[0] <= in_psum_reg;
        for(i = 0; i < PIPELINE_STAGE - 1; i = i + 1) begin: pipeline_stage_in_psum
            in_psum_pipeline[i+1] <= in_psum_pipeline[i];
        end 
    end
end
endmodule
