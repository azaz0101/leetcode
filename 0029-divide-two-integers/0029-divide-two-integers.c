int divide(int dividend, int divisor) {
    if (dividend == INT_MIN){
        if (divisor == -1)
            return INT_MAX;
        else if (divisor == 1)
            return INT_MIN;
    }
    int sign;
    sign = (dividend < 0) ^ (divisor < 0) ? -1 : 1;
    long long int dend = llabs((long long int)dividend);
    long long int dsor = llabs((long long int)divisor);

    int res=0;
    for (int i=31;i>=0;i--){
        if ((dend >> i) >= dsor){
            dend -= (dsor << i);
            res += (1 << i);
        }
    }
    if (sign == 1)
        return res;
    else 
        return -res;
}