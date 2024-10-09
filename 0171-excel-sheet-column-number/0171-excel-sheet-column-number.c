int titleToNumber(char* columnTitle) {
    long long int len,tmp,ans;
    len = strlen(columnTitle);
    ans = 0;
    tmp = 1;
    for (int i=len-1;i>=0;i--){
        ans += ((columnTitle[i] - 'A' + 1) * tmp);
        tmp *= 26;
    }

    return ans;
}