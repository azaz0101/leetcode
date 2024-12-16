int element(char *s, char c){
    int len=strlen(s);
    for (int i=0;i<len;i++){
        if (s[i] == c){
            return i;
        }
    }
    return -1;
}

int lengthOfLongestSubstring(char* s) {
    int len=strlen(s);
    int left, cnt, ans, index, j;
    char *str=(char *)malloc(len * sizeof(char));
    memset(str, 0, len);
    cnt = 0;
    left = 0;
    ans = 0;
    for (int right=0;right<len;right++){
        index = element(str, s[right]);
        if (index == -1){
            str[cnt++] = s[right];
        }
        else {
            left = left + index + 1;
            j = 0;
            memset(str, 0, len);
            for (int i=left;i<=right;i++){
                str[j++] = s[i];
            }
            cnt = j;
        }
        ans = ans > cnt ? ans : cnt;
    }

    return ans;
}