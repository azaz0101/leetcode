/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
bool res;

int height(struct TreeNode *root){
    int lh,rh;
    if (root == NULL || res == false){
        return 0;
    }
    else {
        lh = height(root->left);
        rh = height(root->right);
        if (abs(lh - rh) > 1){
            res = false;
            return 0;
        }
        return (lh > rh) ? (lh + 1) : (rh + 1);
    }
}

bool isBalanced(struct TreeNode* root) {
    res = true;
    height(root);

    return res;
}