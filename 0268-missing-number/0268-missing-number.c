int missingNumber(int* nums, int numsSize) {
    int tmp=0,total;
    for (int i=0;i<numsSize;i++){
        tmp += nums[i];
    }
    total = (numsSize * (numsSize + 1)) / 2;
    return (total - tmp);
}