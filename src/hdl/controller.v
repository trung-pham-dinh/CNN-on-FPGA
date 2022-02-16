`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date: 01/04/2022 07:30:54 AM
// Design Name: 
// Module Name: controller
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


module controller(
clk, rst,
start_core_in,
weight_end_in,
img_end_in,

start_core_out, // init signal for core
en_core_out, // enable core
end_core_out // end signal
    );
    localparam [1:0]
               STATE_IDLE = 2'b00,
               STATE_PROCESS = 2'b01,
               STATE_END = 2'b10;
    input clk, rst;
    input start_core_in;
    input weight_end_in, img_end_in;
    output reg start_core_out;
    output reg en_core_out,end_core_out;
    
    reg [1:0]state_reg, state_next;
    
    always@(posedge clk) begin
        state_reg <= state_next;
    end
    
    always@* begin
        state_next = state_reg;
        start_core_out = 0;
        en_core_out = 0;
        end_core_out = 0;
        case(state_reg)
            STATE_IDLE: begin
                end_core_out = 1;
                en_core_out = 0;
                if(start_core_in) begin
                    state_next = STATE_PROCESS;
                    start_core_out = 1;
                    en_core_out = 1;
                    end_core_out = 0;
                end
            end
            STATE_PROCESS: begin
                en_core_out = 1;
                if(weight_end_in) begin
                    state_next = STATE_END;
                    en_core_out = 1;
                end
            end
            STATE_END: begin
                en_core_out = 1;
                if(img_end_in) begin
                    state_next = STATE_IDLE;
                    en_core_out = 0;
                    end_core_out = 1;
                end
            end
            default: begin
                state_next = STATE_IDLE;
            end
        endcase
    end
endmodule
