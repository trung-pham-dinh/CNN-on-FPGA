`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date: 01/12/2022 10:10:06 AM
// Design Name: 
// Module Name: computing_core
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


module computing_core(
clk,rst,

activate_ready, // connect to ff_ren
weight_load,

activate0,
activate1,
activate2,

weight0,
weight1,
weight2,
weight3,


weight_load_done,

out_psum0,
out_psum1,
out_psum2,
out_psum3,
out_psum_vld

    );
///////////////////////////////////////////////////////////////////////////
    parameter WIDTH = 8;
///////////////////////////////////////////////////////////////////////////
    input  wire                 clk,rst,weight_load, activate_ready;
    
    input  wire [WIDTH-1:0]     weight0,weight1,weight2,weight3;
    
    input  wire [3*WIDTH-1:0]   activate0;
    input  wire [3*WIDTH-1:0]   activate1;
    input  wire [3*WIDTH-1:0]   activate2;

    output wire [WIDTH-1:0]     out_psum0;
    output wire [WIDTH-1:0]     out_psum1;
    output wire [WIDTH-1:0]     out_psum2;
    output wire [WIDTH-1:0]     out_psum3;
    output wire                 weight_load_done;
    output wire                 out_psum_vld;
///////////////////////////////////////////////////////////////////////////
    integer i;
    
    reg [WIDTH-1:0] weight0_reg [0:8];
    reg [WIDTH-1:0] weight1_reg [0:8];
    reg [WIDTH-1:0] weight2_reg [0:8];
    reg [WIDTH-1:0] weight3_reg [0:8];
    reg [3:0]       weight_index;
    
    wire [3:0]      psum_vld;
    
    reg             activate_ready_reg;
//    reg             weight_load_done_reg;
    wire            load_done; 
///////////////////////////////////////////////////////////////////////////
    assign out_psum_vld = psum_vld[0] & psum_vld[1] & psum_vld[2] & psum_vld[3];
    assign weight_load_done = (weight_index == 7 || weight_index == 8);
    assign load_done = ~weight_load & activate_ready;
///////////////////////////////////////////////////////////////////////////
//  first core
    pcore #(.WIDTH(WIDTH))p0(.clk(clk), .rst(rst), .in_update(load_done),
            .activate2(activate0),
            .activate1(activate1),
            .activate0(activate2),
            .weight2({weight0_reg[0],weight0_reg[1],weight0_reg[2]}),
            .weight1({weight0_reg[3],weight0_reg[4],weight0_reg[5]}),
            .weight0({weight0_reg[6],weight0_reg[7],weight0_reg[8]}),
            .out_psum(out_psum0), .out_psum_vld(psum_vld[0]));
            
    pcore #(.WIDTH(WIDTH))p1(.clk(clk), .rst(rst), .in_update(load_done),
            .activate2(activate0),
            .activate1(activate1),
            .activate0(activate2),
            .weight2({weight1_reg[0],weight1_reg[1],weight1_reg[2]}),
            .weight1({weight1_reg[3],weight1_reg[4],weight1_reg[5]}),
            .weight0({weight1_reg[6],weight1_reg[7],weight1_reg[8]}),
            .out_psum(out_psum1), .out_psum_vld(psum_vld[1]));
            
    pcore #(.WIDTH(WIDTH))p2(.clk(clk), .rst(rst), .in_update(load_done),
            .activate2(activate0),
            .activate1(activate1),
            .activate0(activate2),
            .weight2({weight2_reg[0],weight2_reg[1],weight2_reg[2]}),
            .weight1({weight2_reg[3],weight2_reg[4],weight2_reg[5]}),
            .weight0({weight2_reg[6],weight2_reg[7],weight2_reg[8]}),
            .out_psum(out_psum2), .out_psum_vld(psum_vld[2]));
            
    pcore #(.WIDTH(WIDTH))p3(.clk(clk), .rst(rst), .in_update(load_done),
            .activate2(activate0),
            .activate1(activate1),
            .activate0(activate2),
            .weight2({weight3_reg[0],weight3_reg[1],weight3_reg[2]}),
            .weight1({weight3_reg[3],weight3_reg[4],weight3_reg[5]}),
            .weight0({weight3_reg[6],weight3_reg[7],weight3_reg[8]}),
            .out_psum(out_psum3), .out_psum_vld(psum_vld[3]));
///////////////////////////////////////////////////////////////////////////
    always@(posedge clk) begin
        if(rst) begin
            for(i=0; i < 9; i=i+1) begin
                weight0_reg[i] <= 0;
                weight1_reg[i] <= 0;
                weight2_reg[i] <= 0;
                weight3_reg[i] <= 0;
            end
            weight_index <= 0;
        end
        else begin
            if(weight_load) begin
                weight_index <= (weight_index == 8)? 0:weight_index+1;
                weight0_reg[weight_index] <= weight0;
                weight1_reg[weight_index] <= weight1;
                weight2_reg[weight_index] <= weight2;
                weight3_reg[weight_index] <= weight3;
            end
        end
    end
    
    always@(posedge clk) begin
        if(rst) begin
            activate_ready_reg <= 0;
        end
        else begin
            activate_ready_reg <= activate_ready;
        end
    end
endmodule
