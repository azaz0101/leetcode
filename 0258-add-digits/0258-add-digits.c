int addDigits(int num) {
    int digit;
    while(1){
        digit = 0;
        while(num){
            digit += (num % 10);
            num /= 10;
        }
        num = digit;
        if (digit < 10){
            break;
        }
    }

    return digit;
}