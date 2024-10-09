int hammingWeight(int n) {
    int ans;
    ans = 0;
    while(n){
        ans++;
        n &= (n - 1);
    }
    return ans;
}