void palindrome(char *s, int left, int right, int *start, int *maxLen, int size){
    while(left >= 0 && right < size && s[left] == s[right]){
        left--;
        right++;
    }
    if ((right - left - 1) > *maxLen){
        *maxLen = (right - left - 1);
        *start = left + 1;
    }
}

char* longestPalindrome(char* s) {
    int len=strlen(s);
    if (len == 1){
        return s;
    }
    int maxLen=0;
    int start=0;
    char *ans=(char *)malloc((len + 1) * sizeof(char));
    memset(ans, 0, len+1);
    for (int i=0;i<len-1;i++){
        palindrome(s, i, i, &start, &maxLen, len);
        palindrome(s, i, i+1, &start, &maxLen, len);
    }
    strncpy(ans, s+start, maxLen);

    return ans;
}