bool isPalindrome(char* s) {
    int len,j,start,end;
    char *str=NULL;
    if (s == NULL){
        return true;
    }
    len = strlen(s);
    str = (char *)malloc((len+1) * sizeof(char));
    j = 0;
    for (int i=0;i<len;i++){
        if (s[i] >= 'a' && s[i] <= 'z'){
            str[j] = s[i];
            j++;
        }
        else if (s[i] >= 'A' && s[i] <= 'Z'){
            str[j] = s[i] + 32;
            j++;
        }
        else if (s[i] >= '0' && s[i] <= '9'){
            str[j] = s[i];
            j++;            
        }
    }
    str[j] = '\0';
    len = strlen(str);
    start = 0;
    end = len - 1;
    while(start < (len / 2)){
        if (str[start] != str[end]){
            free(str);
            return false;
        }
        else {
            start++;
            end--;
        }
    }
    free(str);
    return true;
}