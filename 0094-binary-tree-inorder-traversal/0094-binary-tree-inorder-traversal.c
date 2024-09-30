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
int tmp[100];
int cnt;

void inorder(struct TreeNode* n){
    if (n != NULL){
        inorder(n->left);
        tmp[cnt] = n->val;
        cnt++;
        inorder(n->right);
    }
}

int* inorderTraversal(struct TreeNode* root, int* returnSize){
    int *ans=NULL;
    memset(tmp, 0, 100);
    cnt = 0;
    inorder(root);
    ans = malloc(cnt * sizeof(int));
    for (int i=0;i<cnt;i++){
        ans[i] = tmp[i];
    }
    *returnSize = cnt;
    
    return ans;
}