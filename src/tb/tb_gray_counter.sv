`timescale 1ns/10ps
module tb_gray_counter;
    parameter NUM_BITS = 4;
    
    // pinouts
    logic inc;
    logic full;
    logic empty;
    logic clk;
    logic rst;
    logic [NUM_BITS-1 : 0] gray;
    
    // instantiate target module
    gray_counter #(.NUM_BITS(NUM_BITS)) u_gray_counter(.*);
    
    // start clock simulation
    initial clk = '0;
    always clk  = #5 ~clk;
    
    // main test
    initial begin
        $printtimescale(tb_gray_counter);
        // let counter count 20 times in normal mode
        inc   = '1;
        full  = '0;
        empty = '0;
        rst   = '1;
        #100;
        
        // reset the counter during counting
        rst = '0;
        #50;
        
        // enable the counter again
        rst = '1;
        #50;
        
        // count with other block signal
        inc = '0;
        #50;
        $stop;
    end
    
endmodule