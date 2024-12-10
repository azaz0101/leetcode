int cmp(const void *a, const void *b){
    return (*(char *)a - *(char *)b);
}

bool isAnagram(char* s, char* t) {
    int lenS = strlen(s);
    int lenT = strlen(t);
    if (lenS != lenT){
        return false;
    }
    else {
        qsort(s, lenS, sizeof(char), cmp);
        qsort(t, lenT, sizeof(char), cmp);
        for (int i=0;i<lenS;i++){
            if (s[i] != t[i]){
                return false;
            }
        }
    }
    return true;
}