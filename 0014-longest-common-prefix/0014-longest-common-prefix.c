char* longestCommonPrefix(char** strs, int strsSize) {
    char *ans=NULL;
    char tmp;
    int len,cnt,flag;
    ans = calloc(200, sizeof(char));
    len = 500;
    cnt = 0;
    for (int i=0;i<strsSize;i++){
        len = strlen(strs[i]) < len ? strlen(strs[i]) : len;
    }
    for (int i=0;i<len;i++){
        tmp = strs[0][i];
        flag = 0;
        for (int j=1;j<strsSize;j++){
            if (tmp != strs[j][i]){
                flag = 1;
            }
        }
        if (!flag){
            cnt++;
        }
        else {
            break;
        }
    }
    strncpy(ans, strs[0], cnt);
    return ans;
}