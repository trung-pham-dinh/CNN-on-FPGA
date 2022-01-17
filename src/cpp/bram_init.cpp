#include <iostream>
#include  <iomanip>
using namespace std;

void bram_gen(uint8_t weight8[], int len) {
    uint32_t* weight32 = new uint32_t[len / 4];
    for(int i = 0; i < len/4; i++) {
        //cout<<uint32_t(weight8[4*i])<<24;
        weight32[i] = uint32_t(weight8[4*i+3])<<24 | uint32_t(weight8[4*i+2])<<16 | uint32_t(weight8[4*i+1])<<8 | uint32_t(weight8[4*i]);
        cout << setfill('0') << setw(8) << right << hex << weight32[i] << ' ';
    }
}

int main() {
    int weight_size = 50;
    uint8_t weight[weight_size];
    for(int i = 0; i<weight_size; i++) {
        weight[i] = i+1;
    }
    bram_gen(weight, weight_size);
}