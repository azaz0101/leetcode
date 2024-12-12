char* convert(char* s, int numRows) {
    if (numRows == 1){
        return s;
    }
    int len=strlen(s);
    char *ans = (char *)malloc((len + 1) * sizeof(char));
    int interval,j,tmp,next;
    int cnt=0;
    interval = 2 * numRows - 2;
    for (int i=0;i<numRows;i++){
        if (i == 0 || i == (numRows - 1)){
            for (int j=i;j<len;j+=interval){
                ans[cnt] = s[j];
                cnt++;
            }
        }
        else {
            j = i;
            next = 2 * (numRows - j - 1);
            while(j < len){
                ans[cnt] = s[j];
                j += next;
                tmp = abs(interval - next);
                next = tmp;
                cnt++;
            }
        }
    }
    
    ans[cnt] = 0;
    return ans;
}