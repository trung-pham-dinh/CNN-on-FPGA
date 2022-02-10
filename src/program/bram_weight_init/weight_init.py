filename = "bram_weight_init_"

def append_hex(a, b,size):
    sizeof_b = 8*size
    return (a << sizeof_b) | b
    
def bram_weight_init(weight, kernel, width, height, channel):
	numberOfEntries = width * height

	quarterOfChannel = channel/4
	quarterOfKernel = kernel/4
	entriesInOneFilter = width * height
	entriesInOneKernel = width * height * channel

	starting_point = 0
	file_count = 0
	file_index = [0,4,8,12,1,5,9,13,2,6,10,14,3,7,11,15]
	for i in file_index:
	    filename_temp = filename + str(i) + ".coe"
	    f = open(filename_temp, "w")
	    f.write("memory_initialization_radix=16;\nmemory_initialization_vector=")
	    count = 0
	    temp = 0x0
	    for j in range (int(quarterOfKernel)):
	    	for m in range(int(quarterOfChannel)):
	    		for n in range(entriesInOneFilter):
			        temp = append_hex(weight[int(starting_point + n + m*entriesInOneFilter + j*entriesInOneKernel)]%256,temp,count)
			        count = count + 1
			        if(count == 4):
			            f.write(str(hex(temp)[2:])+ " ")
			            temp = 0x0
			            count = 0
	    if (int(numberOfEntries*quarterOfKernel*quarterOfChannel) % 4 != 0):
	        f.write(str(hex(temp)[2:])+" ")
	    f.write(";")
	    f.close()
	    file_count = file_count + 1
	    if (file_count%4 == 0):
	    	starting_point = starting_point + entriesInOneFilter*quarterOfChannel + entriesInOneKernel*(quarterOfKernel-1)
	    else:
	    	starting_point = starting_point + entriesInOneFilter*quarterOfChannel


bram_weight_init([i+1 for i in range(8*3*3*8)],8,3,3,8) #parameters: weight, kernel, width, height, channel
