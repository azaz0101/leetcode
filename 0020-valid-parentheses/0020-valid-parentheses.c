bool isValid(char* s) {
    char *prefix=NULL;
    int len,cnt,flag;
    len = strlen(s);
    prefix = calloc(len, sizeof(char));
    cnt = 0;
    flag = 0;
    for (int i=0;i<len;i++){
        if (s[i] == '(' || s[i] == '[' || s[i] == '{'){
            prefix[cnt] = s[i];
            cnt++;
        }
        else {
            if (cnt == 0){
                flag = 1;
                break;
            }
            if (s[i] == ')'){
                if (prefix[cnt-1] != '('){
                    flag = 1;
                    break;
                }
                else {
                    prefix[cnt-1] = '\0';
                    cnt--;
                }
            }
            else if (s[i] == ']'){
                if (prefix[cnt-1] != '['){
                    flag = 1;
                    break;
                }
                else {
                    prefix[cnt-1] = '\0';
                    cnt--;
                }
            }
            else {
                if (prefix[cnt-1] != '{'){
                    flag = 1;
                    break;
                }
                else {
                    prefix[cnt-1] = '\0';
                    cnt--;
                }
            }
        }
    }
    if (!flag && (cnt == 0))
        return true;
    else
        return false;
}