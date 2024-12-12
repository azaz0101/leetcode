char* intToRoman(int num) {
    char *ans=(char *)malloc(50 * sizeof(char));
    int cnt=0;
    while(num){
        if (num >= 1000){
            num -= 1000;
            ans[cnt++] = 'M';
        }
        else if (num >= 500){
            if (num >= 900){
                num -= 900;
                ans[cnt++] = 'C';
                ans[cnt++] = 'M';
            }
            else {
                num -= 500;
                ans[cnt++] = 'D';
            }
        }
        else if (num >= 100){
            if (num >= 400){
                num -= 400;
                ans[cnt++] = 'C';
                ans[cnt++] = 'D';
            }
            else {
                num -= 100;
                ans[cnt++] = 'C';
            }
        }
        else if (num >= 50){
            if (num >= 90){
                num -= 90;
                ans[cnt++] = 'X';
                ans[cnt++] = 'C';
            }
            else {
                num -= 50;
                ans[cnt++] = 'L';
            }
        }
        else if (num >= 10){
            if (num >= 40){
                num -= 40;
                ans[cnt++] = 'X';
                ans[cnt++] = 'L';
            }
            else {
                num -= 10;
                ans[cnt++] = 'X';
            }
        }
        else if (num >= 5){
            if (num >= 9){
                num -= 9;
                ans[cnt++] = 'I';
                ans[cnt++] = 'X';
            }
            else {
                num -= 5;
                ans[cnt++] = 'V';
            }
        }
        else if (num >= 1){
            if (num >= 4){
                num -= 4;
                ans[cnt++] = 'I';
                ans[cnt++] = 'V';
            }
            else {
                num -= 1;
                ans[cnt++] = 'I';
            }
        }
    }
    ans[cnt] = 0;
    return ans;
}