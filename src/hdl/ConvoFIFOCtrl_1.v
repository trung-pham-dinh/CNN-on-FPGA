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
    stride,
    row_len,
    bramin,
    
    
    data_out,
    ff_rst,
    ff_ren,
    ff_wen,
    ff_stride,
    ff_row_len,
    counter,
    addraghi
    
);
parameter WIDTH = 8;
parameter ADDR_BIT = 9;

////////////////////////////////////////////////////////////////////////////////

localparam DEPTH = 2**ADDR_BIT;


input clk, rst, load_done;
input [2:0] stride;
input [ADDR_BIT-1:0] row_len;
input [31:0] bramin;

output reg [7:0] data_out;
output reg ff_rst;
output reg ff_ren;
output reg ff_wen;
output reg [2:0] ff_stride;
output reg [ADDR_BIT-1:0] ff_row_len;
output reg [1:0]  counter;
output reg [31:0] addraghi;


reg ff_wen_reg;
reg [31:0] addra_reg;
reg [2:0] s_count;
localparam STATE_IDLE = 0;
localparam STATE_WEN = 1;
localparam STATE_WENREN = 2;
reg     [1:0]                   state;
reg     [1:0]                   steps;
always @(posedge clk) begin
    if(rst) begin
        ff_ren <= 0;
        ff_wen <= ff_wen_reg;
        ff_stride <= stride;
        ff_row_len <= row_len;
        state <= STATE_WEN;
        steps <= (stride == 1)?0:((stride == 2)? 1: 0);
        s_count <= 0;
        addraghi <= 0;
    end
    else begin
        case(state) 
            STATE_WEN: begin
                ff_wen_reg <= 1;
                ff_wen <= ff_wen_reg;
                data_out <= bramin[   {addra_reg[1:0], 3'b0 } +:8      ];
                addraghi <= addraghi + 1;
                
                
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
                addraghi <= addraghi + 1;
                data_out <= bramin[   {addra_reg[1:0], 3'b0 } +:8      ];
                ff_wen <= 1;
                ff_ren <= 1;
                counter <= (counter == (row_len -3) >> steps)? 0: counter+1;
                ff_stride <= (counter == (row_len -3) >> steps)? ((steps == 0)? 3 : ( (row_len << steps) - 2)) : stride;
                
            end
        endcase

    end
end




always@(posedge clk) begin

    if(rst) begin
        addraghi <= 0;
        //ff_wen_reg <= 1;
    end
    else begin
        addra_reg <= addraghi;

    end
    
    
    
end

endmodule
