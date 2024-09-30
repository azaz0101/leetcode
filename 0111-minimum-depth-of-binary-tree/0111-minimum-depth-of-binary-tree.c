/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
int depth(struct TreeNode *root){
    int lh, rh;
    if (root == NULL)
        return 0;
    else {
        lh = depth(root->left);
        rh = depth(root->right);
        if (lh == 0 && rh != 0){
            return (rh + 1);
        }
        else if (lh != 0 && rh == 0){
            return (lh + 1);
        }
        else {
            return lh > rh ? (rh + 1) : (lh + 1);
        }
    }
}

int minDepth(struct TreeNode* root) {
    return depth(root);
}