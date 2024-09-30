/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
bool isSym(struct TreeNode *l, struct TreeNode *r){
    if (l == NULL && r == NULL)
        return true;
    if (l == NULL || r == NULL)
        return false;
    if (l->val != r->val)
        return false;
    
    return isSym(l->left, r->right) && isSym(l->right, r->left);
}

bool isSymmetric(struct TreeNode* root) {
    if (root == NULL)
        return true;

    return isSym(root->left, root->right);
}