bool isIsomorphic(char* s, char* t) {
    int len = strlen(s);
    int c;
    char table_s[128]={0};
    char table_t[128]={0};
    for (int i=0;i<len;i++){
        if (table_s[s[i]] == 0 && table_t[t[i]] == 0){
            table_s[s[i]] = t[i];
            table_t[t[i]] = s[i];
        }
        else {
            if (table_s[s[i]] != t[i] || table_t[t[i]] != s[i]){
                return false;
            }
        }
    }
    return true;
}