#include <iostream>
#include  <iomanip>
#include <fstream>
#include <string>   

using namespace std;

void bram_gen(uint8_t weight8[], int len) {
    ofstream myfile;
    myfile.open("bram_init.coe");

    uint32_t* weight32 = new uint32_t[len / 4];
    for(int i = 0; i < len/4; i++) {
        weight32[i] = uint32_t(weight8[4*i+3])<<24 | uint32_t(weight8[4*i+2])<<16 | uint32_t(weight8[4*i+1])<<8 | uint32_t(weight8[4*i]);
        myfile << setfill('0') << setw(8) << right << hex << weight32[i] << ' ';
    }
    myfile.close();
}

int main(int argc, char* argv[]) {
    if(argc < 2) {
        cout << "Please input the weight_size and run executed file again." << endl;
        exit(1);
    }
    int weight_size = stoi(argv[1]);
    uint8_t* weight = new uint8_t[weight_size];
    for(int i = 0; i<weight_size; i++) {
        weight[i] = i+1;
    }
    bram_gen(weight, weight_size);
    delete[] weight;
}
