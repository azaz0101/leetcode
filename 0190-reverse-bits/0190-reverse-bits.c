uint32_t reverseBits(uint32_t n) {
    uint32_t ans; 
    int tmp;   
    for (int i=0;i<32;i++){
        if ((n & 1) == 1){
            ans = (ans << 1) + 1;
        }
        else {
            ans = (ans << 1);
        }
        n >>= 1;
    }
    return ans;
}