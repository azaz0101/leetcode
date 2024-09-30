int strStr(char* haystack, char* needle) {
    int ans;
    ans = 0;
    char *ptr=NULL;
    ptr = strstr(haystack, needle);
    if (ptr == NULL){
        ans = -1;
        return ans;
    }
    ans  = (ptr - haystack);

    return ans;    
}