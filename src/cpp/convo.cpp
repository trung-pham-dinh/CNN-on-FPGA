template<class T>
void convo(T img[], T kernel[], int img_size, int row_len) {
    for(int i = 0; i < img_size; i++) {
        T ps1 = img[i%img_size]*kernel[0] + img[(i+1)%img_size]*kernel[1] + img[(i+2)%img_size]*kernel[2];
        T ps2 = img[(i+row_len)%img_size]*kernel[3] + img[(i+row_len+1)%img_size]*kernel[4] + img[(i+row_len+2)%img_size]*kernel[5];
        T ps3 = img[(i+2*row_len)%img_size]*kernel[6] + img[(i+2*row_len+1)%img_size]*kernel[7] + img[(i+2*row_len+2)%img_size]*kernel[8];
        cout<<int(T(ps1+ps2+ps3))<<" ";
    }
}