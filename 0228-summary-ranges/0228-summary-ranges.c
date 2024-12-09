/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
char** summaryRanges(int* nums, int numsSize, int* returnSize) {
    int cnt=0;
    int start, end;
    char **ans = (char **)malloc(numsSize * sizeof(char *));
    for (int i=0;i<numsSize;){
        start = nums[i];
        end = start;
        while (((i + 1) < numsSize) && (nums[i+1] == (nums[i] + 1))){
            end = nums[i+1];
            i++;
        }
        char *data = (char *)malloc(25 * sizeof(char));
        if (start == end){
            sprintf(data, "%d", start);
        }       
        else {
            sprintf(data, "%d->%d", start, end);
        }
        ans[cnt] = data;
        cnt++;
        i++;
    }
    *returnSize = cnt;
    return ans;
}