int myAtoi(char* s) {
    long long int ans=0;
    char *p=s;
    int i;
    if (*s == NULL){
        return 0;
    }
    ans = 0;
    p = strtok(s, " ");
    if (p == NULL){
        return 0;
    }
    if (!isdigit(p[0]) && p[0] != '-' && p[0] != '+'){
        return 0;
    }
    int len = strlen(p);
    if (p[0] == '-' || p[0] == '+'){
        i = 1;
    }
    else {
        i = 0;
    }
    for (i;i<len;i++){
        if (isdigit(p[i])){
            ans = ans * 10 + (p[i] - '0');
            if ((ans > INT_MAX) && (p[0] != '-')){
                ans = INT_MAX;
                break;
            }
            else if (p[0] == '-' && (ans - 1 > INT_MAX)){
                ans = INT_MIN;
                break;
            }
        }
        else {
            break;
        }
    }
    if (p[0] == '-' && ans != INT_MIN){
        ans *= -1; 
    }
    return ans;
}