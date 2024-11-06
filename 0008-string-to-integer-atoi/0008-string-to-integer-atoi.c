int myAtoi(char* s) {
    long long int ans=0;
    int sign=1;
    int i;
    while (isspace(s[i])){
        i++;
    }
    if (s[i] == '-' || s[i] == '+'){
        if (s[i] == '-'){
            sign = -1;
        }
        i++;
    }
    while (isdigit(s[i])){
        ans = ans * 10 + (s[i] - '0');
        if (sign == 1 && ans > INT_MAX){
            return INT_MAX;
        }
        else if (sign == -1 && -ans < INT_MIN){
            return INT_MIN;
        }
        i++;
    }
    return sign * ans;
}