void swap(int *a, int *b){
    *a = *a ^ *b;
    *b = *a ^ *b;
    *a = *a ^ *b;
}

void reverse(int *num, int len){
    for (int i=0;i<len/2;i++){
        swap(&num[i], &num[len - i - 1]);
    }
}

void nextPermutation(int* nums, int numsSize) {
    int idx=0;
    for (int i=0;i<numsSize-1;i++){
        if (nums[i+1] > nums[i]){
            idx = i;
        }
    }
    for (int i=numsSize-1;i>=0;i--){
        if (nums[i] > nums[idx]){
            swap(&nums[i], &nums[idx]);
            idx++;
            break;
        }
    }
    int len = numsSize - idx;
    reverse(&nums[idx], len);
}