filename = "bram_input_init_"
def append_hex(a, b,size):
    sizeof_b = 8*size
    return (a << sizeof_b) | b

def bram_input_init(input, width, height, channel):
	quarterNumberOfEntries = int(width*height*channel/4)
	for i in range(4):
	    filename_temp = filename + str(i) + ".coe"
	    f = open(filename_temp, "w")
	    f.write("memory_initialization_radix=16;\nmemory_initialization_vector=")
	    count = 0
	    temp = 0x0
	    for j in range(quarterNumberOfEntries):
	    	temp = append_hex(input[i*quarterNumberOfEntries+j],temp,count)
	    	count = count + 1
	    	if(count == 4):
	    		f.write(str(hex(temp)[2:])+ " ")
	    		temp = 0x0
	    		count = 0
	    if (quarterNumberOfEntries % 4 != 0):
	    	f.write(str(hex(temp)[2:])+" ")
	    f.write(";")
	    f.close()

bram_input_init([i+1 for i in range(5*5*8)],5,5,8) # parameters: input array, width, height, channel