char *RLE(char *s){
    int len=strlen(s);
    int count, idx=0;
    char *tmp=malloc((len * 2 + 1) * sizeof(char));
    char c;
    for (int i=0;i<len;){
        c = s[i];
        count = 0;
        while(c == s[i] && i < len){
            i++;
            count++;
        }
        idx += sprintf(tmp+idx, "%d%c", count, c);
    }

    return tmp;
}

char * countAndSay(int n){
    char *ans=NULL;
    char c;
    ans = malloc(2 * sizeof(char));
    memset(ans, 0, 2);
    ans[0] = '1';
    for (int i=1;i<n;i++){
        char *newStr = RLE(ans);
        free(ans);
        ans = newStr;
    }
    return ans;
}