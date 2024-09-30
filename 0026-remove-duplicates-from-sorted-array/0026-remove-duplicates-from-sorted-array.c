int removeDuplicates(int* nums, int numsSize) {
    int ans,tmp,i;
    ans = 1;
    i = 0;
    while(i < (numsSize-1)){
        if (nums[i] != nums[i+1]){
            nums[ans] = nums[i+1];
            ans++;
        }
        i++;
    }
    return ans;
}