filename = "bram_weight_init_"

def append_hex(a, b,size):
    sizeof_b = 8*size
    return (a << sizeof_b) | b
    
def bram_weight_init(weight, kernel, width, height, channel):
	numberOfEntries = width * height

	quarterOfChannel = channel/4
	quarterOfKernel = kernel/4

	value = 0
	file_index = [0,4,8,12,1,5,9,13,2,6,10,14,3,7,11,15]
	for i in file_index:
	    filename_temp = filename + str(i) + ".coe"
	    f = open(filename_temp, "w")
	    f.write("memory_initialization_radix=16;\nmemory_initialization_vector=")
	    count = 0
	    temp = 0x0
	    for j in range (int(numberOfEntries*quarterOfKernel*quarterOfChannel)):
	        temp = append_hex(weight[value],temp,count)
	        value = value + 1
	        count = count + 1
	        if(count == 4):
	            f.write(str(hex(temp)[2:])+ " ")
	            temp = 0x0
	            count = 0
	    if (int(numberOfEntries*quarterOfKernel*quarterOfChannel) % 4 != 0):
	        f.write(str(hex(temp)[2:])+" ")
	    f.write(";")
	    f.close()

bram_weight_init([i+1 for i in range(4*3*3*8)],4,3,3,8) #parameters: weight, kernel, width, height, channel
