int majorityElement(int* nums, int numsSize) {
    int maj, cnt;
    cnt = 0;
    maj = 0;
    for (int i=0;i<numsSize;i++){
        if (cnt == 0){
            maj = nums[i];
            cnt = 1;
        }
        else if (nums[i] == maj){
            cnt++;
        }
        else {
            cnt--;
        }
    }
    return maj;
}