`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date: 01/20/2022 03:12:33 PM
// Design Name: 
// Module Name: pipeline
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


module pipeline(
clk, rst,

en,          // connect to controller
init_signal, // connect to controller
activate_ready, // connect to activate load done signal
weight_ready, // connect to buffer_ready of load_weight_ctrl
core_end, // connect to accumulator done signal

start_core, // connect to core module
start_load // connect to load_activate moddule
    );
    localparam STATE_IDLE = 0;
    localparam STATE_START = 1;
    
    localparam STATE_CORE_FREE = 0;
    localparam STATE_CORE_BUSY = 1;
    
    localparam STATE_ACTIVATE_FREE = 0;
    localparam STATE_ACTIVATE_BUSY = 1;
    
    input clk, rst;
    input en, init_signal, core_end, activate_ready, weight_ready;
    
    output start_core;
    output start_load;
    
    reg state;
    reg start_core_reg;
    
    reg activate_state, activate_vld;
    reg core_state, core_free;
    
    
//    assign core_begin = start_core_reg;
    assign start_core = en & start_core_reg;
    assign start_load = init_signal | start_core;
    // start_com_load signal
    always@(posedge clk) begin
        if(rst) begin
            start_core_reg <= 0;
            state <= STATE_IDLE;
        end
        else begin
            case(state)
                STATE_IDLE: begin
                    if(core_free & activate_ready & weight_ready) begin
                        state <= STATE_START;
                        start_core_reg <= 1;
                    end
                end
                STATE_START: begin
                    state <= STATE_IDLE;
                    start_core_reg <= 0;
                end
            endcase
        end
    end
    
    
    // core_free signal
    always@(posedge clk) begin
        if(rst) begin
            core_state <= STATE_CORE_FREE;
            core_free <= 1;
        end
        else begin
            case(core_state)
                STATE_CORE_FREE: begin
                    if(start_core_reg) begin
                        core_state <= STATE_CORE_BUSY;
                        core_free <= 0;
                    end
                end
                STATE_CORE_BUSY: begin
                    if(core_end) begin
                        core_state <= STATE_CORE_FREE;
                        core_free <= 1;
                    end
                end
            endcase
        end
    end
    
//    always@(posedge clk) begin
//        if(rst) begin
//            activate_state <= STATE_ACTIVATE_BUSY;
//            activate_vld <= 0;
//        end
//        else begin
//            case(activate_state)
//                STATE_ACTIVATE_FREE: begin
//                    if(start_core_reg) begin
//                        activate_state <= STATE_ACTIVATE_BUSY;
//                        activate_vld <= 0;
//                    end
//                end
//                STATE_ACTIVATE_BUSY: begin
//                    if(activate_ready) begin
//                        activate_state <= STATE_ACTIVATE_FREE;
//                        activate_vld <= 1;
//                    end
//                end
//            endcase
//        end
//    end
    
endmodule
