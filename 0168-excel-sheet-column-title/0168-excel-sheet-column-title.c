char* convertToTitle(int columnNumber) {
    char *ans=malloc(10 * sizeof(char));
    int x,cnt;
    char tmp;
    cnt = 0;
    memset(ans, 0, 10);
    while(columnNumber){
        columnNumber--;
        x = columnNumber % 26;
        columnNumber /= 26;
        ans[cnt] = x + 'A';
        cnt++;
    }
    for (int i=0;i<cnt/2;i++){
        tmp = ans[i];
        ans[i] = ans[cnt-i-1];
        ans[cnt-i-1] = tmp;
    }

    return ans;
}