/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* getRow(int rowIndex, int* returnSize) {
    int *ans=NULL;
    ans = malloc((rowIndex + 1) * sizeof(int));
    ans[0] = 1;
    for (int i=1;i<rowIndex+1;i++){
        ans[i] = 1;
        for (int j=i-1;j>0;j--){
            ans[j] += ans[j-1];
        }     
    }
    *returnSize = rowIndex + 1;

    return ans;
}