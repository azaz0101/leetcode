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

void postTra(struct TreeNode *r){
    if (r == NULL){
        return;
    }
    postTra(r->left);
    postTra(r->right);
    ans[cnt] = r->val;
    cnt++;
}

int* postorderTraversal(struct TreeNode* root, int* returnSize) {
    ans = malloc(100 * sizeof(int));
    cnt = 0;
    postTra(root);
    *returnSize = cnt;
    return ans;
}