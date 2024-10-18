/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* shuffle(int* nums, int numsSize, int n, int* returnSize){
    int *ans=NULL;
    ans = malloc(numsSize * sizeof(int));
    for (int i=0;i<numsSize;i++){
        if (i & 1){
            ans[i] = nums[n+i/2];
        }
        else {
            ans[i] = nums[i/2];
        }
    }
    *returnSize = numsSize;

    return ans;
}