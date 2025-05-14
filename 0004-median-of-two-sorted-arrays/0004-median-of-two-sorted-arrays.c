double findMedianSortedArrays(int* nums1, int nums1Size, int* nums2, int nums2Size) {
    double ans=0;
    int tot=nums1Size + nums2Size;
    int *arr=(int *)malloc(tot * sizeof(int));
    int n1_idx,n2_idx;
    n1_idx = n2_idx = 0;
    if (nums1Size == 0){
        free(arr);
        arr = nums2;
    }
    else if (nums2Size == 0){
        free(arr);
        arr = nums1;
    }
    else {
        for (int i=0;i<tot;i++){
            if ((n1_idx < nums1Size) && (n2_idx < nums2Size)){
                if (nums1[n1_idx] > nums2[n2_idx]){
                    arr[i] = nums2[n2_idx++];
                }
                else {
                    arr[i] = nums1[n1_idx++];
                }
            }
            else if(n1_idx >= nums1Size){
                arr[i] = nums2[n2_idx++];
            }
            else {
                arr[i] = nums1[n1_idx++];
            }
        }
    }
    if (tot & 1){
        ans = arr[tot/2];
    }
    else {
        ans = (arr[tot/2] + arr[tot/2-1]);
        ans /= 2;
    }
    free(arr);
    return ans;
}