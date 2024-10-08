/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int *ans=NULL;
int cnt;

void preTra(struct TreeNode *r){
    if (r == NULL){
        return;
    }
    ans[cnt] = r->val;
    cnt++;
    preTra(r->left);
    preTra(r->right);
}

int* preorderTraversal(struct TreeNode* root, int* returnSize) {
    ans = malloc(100 * sizeof(int));
    cnt = 0;
    preTra(root);
    *returnSize = cnt;
    return ans;
}