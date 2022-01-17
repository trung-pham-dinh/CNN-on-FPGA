`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date: 01/17/2022 05:54:19 PM
// Design Name: 
// Module Name: ConvoFIFOCtrl_1
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


module ConvoFIFOCtrl_1(
    clk,
    rst,
    load_done,
    empty,
    stride,
    row_len,
    
    ff_rst,
    ff_ren,
    ff_wen,
    ff_stride,
    ff_row_len,
    counter
    
);

input clk, rst, load_done;
input empty;
input [2:0] stride;
input [4:0] row_len;

output reg ff_rst;
output reg ff_ren;
output reg ff_wen;
output reg [2:0] ff_stride;
output reg [4:0] ff_row_len;
output reg [1:0]  counter;


reg [2:0] s_count;
localparam STATE_IDLE = 0;
localparam STATE_WEN = 1;
localparam STATE_WENREN = 2;
reg     [1:0]                   state;
reg     [1:0]                   steps;
always @(posedge clk) begin
    if(rst) begin
        ff_ren <= 0;
        ff_wen <= 0;
        ff_stride <= stride;
        ff_row_len <= row_len;
        state <= STATE_WEN;
        steps <= (stride == 1)?0:((stride == 2)? 1: 0);
        s_count <= 0;
    end
    else begin
        case(state) 
            STATE_WEN: begin
                ff_wen <= 1;
                if(load_done) begin
                    counter <= 0;
                    s_count <= 1;
                end
                
                case(s_count)
                    1: begin
                        s_count <= 2;
                    end
                    2: begin
                        s_count <= 3;
                    end
                    3: begin
                        s_count <= 4;
                    end
                    4: begin
                        s_count <= 5;
                        
                    end
                    5: begin
                        s_count <=6;
                        

                    end
                    6: begin
                        s_count <= 0;
                        state <= STATE_WENREN;
                    end
                    
                    7: begin
                        s_count <= 0;
       
                    end
                endcase
                
            end
            
            STATE_WENREN: begin
                ff_wen <= 1;
                ff_ren <= 1;
                counter <= (counter == (row_len -3) >> steps)? 0: counter+1;
                ff_stride <= (counter == (row_len -3) >> steps)? ((steps == 0)? 3 : ( (row_len << steps) - 2)) : stride;
            end
        endcase

    end
end

endmodule
