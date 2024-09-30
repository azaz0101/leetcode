/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
struct TreeNode* convert(int *nums, int left, int right){
    int mid;
    if (left > right)
        return NULL;
    else {
        mid = (left + right) / 2;
        struct TreeNode *n=NULL;
        n = (struct TreeNode *)malloc(sizeof(struct TreeNode));
        n->val = nums[mid];
        n->left = convert(nums, left, mid-1);
        n->right = convert(nums, mid+1, right);
        return n;
    }
}

struct TreeNode* sortedArrayToBST(int* nums, int numsSize) {

    return convert(nums, 0, numsSize-1);
}