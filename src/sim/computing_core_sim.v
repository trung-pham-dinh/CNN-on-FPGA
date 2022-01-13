`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date: 01/12/2022 07:38:34 PM
// Design Name: 
// Module Name: computing_core_sim
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


module computing_core_sim(

    );
    parameter WIDTH = 8;
    
    reg                 clk,rst,weight_load, activate_ready;
    
    reg [WIDTH-1:0]     weight0,weight1,weight2,weight3;
    
    reg [3*WIDTH-1:0]   activate0;
    reg [3*WIDTH-1:0]   activate1;
    reg [3*WIDTH-1:0]   activate2;
    
    reg                 weight_load_begin;

    wire [WIDTH-1:0]     out_psum0;
    wire [WIDTH-1:0]     out_psum1;
    wire [WIDTH-1:0]     out_psum2;
    wire [WIDTH-1:0]     out_psum3;
    wire                 weight_load_done;
    wire                 out_psum_vld;
    
    reg [WIDTH-1:0] wi,ai;
    
    computing_core #(.WIDTH(WIDTH))uut(clk,rst,
                    activate_ready, weight_load,
                    activate0,activate1,activate2,
                    weight0,weight1,weight2,weight3,
                    weight_load_done,
                    out_psum0,out_psum1,out_psum2,out_psum3,
                    out_psum_vld);
                    
    always #10 clk=~clk;
    
    always@(posedge clk) begin
        if(activate_ready) begin
            ai <= ai+1;
            activate0 <= {ai+8'd0, ai+8'd1, ai+8'd2};
            activate1 <= {ai+8'd8, ai+8'd9, ai+8'd10};
            activate2 <= {ai+8'd16, ai+8'd17, ai+8'd18};
        end
        else begin
            ai <= 0;
        end
    end
    
    always@(posedge clk) begin
        if(rst) begin
            weight_load <= 0;
        end
        else begin
            if(weight_load_begin) begin
                weight_load <= 1;
            end
            else if(weight_load_done)begin
                weight_load <= 0;
            end
        end
    end
    
    always@(posedge clk) begin
        if(rst) begin
            weight0 <= 0;
        end
        else begin
            if(weight_load) begin
                weight0 <= weight0+1;
            end
            else begin
                weight0 <= 0;
            end
        end
    end
    
    
    initial begin
        clk <= 0;
        rst <= 1;
        weight_load_begin<=0;
        activate_ready <= 0;
        activate0 <=0;
        activate1 <=0;
        activate2 <= 0;
        weight0 <= 0;
        weight1 <= 0;
        weight2 <= 0;
        weight3 <= 0;
        #90;
        rst <= 0;
    end
    
    initial begin
        #90;
        weight_load_begin <= 1;
        #20;
        weight_load_begin <= 0;
    end
    
    initial begin
        #290;
        activate_ready <= 1;
        #200;
        activate_ready <= 0;
    end
endmodule
