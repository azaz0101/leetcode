/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */

int diameter=0;

int tree_height(struct TreeNode *root){
    if (root == NULL){
        return 0;
    }
    else {
        int l_h, r_h;
        l_h = tree_height(root->left);
        r_h = tree_height(root->right);
        if ((l_h + r_h) > diameter){
            diameter = l_h + r_h;
        }
        return (l_h > r_h) ? l_h + 1 : r_h + 1;
    }
}

int diameterOfBinaryTree(struct TreeNode* root) {
    diameter = 0;
    tree_height(root);
    return diameter;
}