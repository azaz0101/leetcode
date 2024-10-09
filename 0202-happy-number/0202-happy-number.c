bool isHappy(int n) {
    int table[10] = {0, 1, 4, 9, 16, 25, 36, 49, 64, 81};
    int cnt;
    while(n != 1 && n != 4){
        cnt = 0;
        while(n){
            cnt += table[n % 10];
            n /= 10;        
        }
        n = cnt;
    }
    return n == 1;
}