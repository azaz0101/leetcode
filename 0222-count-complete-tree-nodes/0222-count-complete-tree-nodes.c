/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
int countNodes(struct TreeNode* root) {
    if (root == NULL){
        return 0;
    }
    struct TreeNode *left, *right;
    int l_h, r_h;
    l_h = 0;
    r_h = 0;
    left = root;
    right = root;
    while(left != NULL){
        l_h++;
        left = left->left;
    }
    while(right != NULL){
        r_h++;
        right = right->right;
    }
    if (l_h == r_h){
        return (1 << l_h) - 1;
    }
    return 1 + countNodes(root->left) + countNodes(root->right);
}