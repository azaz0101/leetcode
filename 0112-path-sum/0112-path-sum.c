/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
// bool ans;

// void pathSum(struct TreeNode *root, int sum, int tarSum, int flag){
//     if (ans == true)
//         return;
//     if (root == NULL){
//         if (sum == tarSum && flag){
//             ans = true;
//         }  
//         return;
//     }
//     sum += root->val;
//     if (root->left == NULL && root->right == NULL)
//         flag = 1;
//     pathSum(root->left, sum, tarSum, flag);
//     pathSum(root->right, sum, tarSum, flag);
// }

bool hasPathSum(struct TreeNode* root, int targetSum) {
    // ans = false;
    // if (root != NULL)
    //     pathSum(root, 0, targetSum, 0);
    // return ans;
    
        // 如果 root 是空節點，直接返回 false
    if (root == NULL) {
        return false;
    }

    // 如果到達葉節點，檢查當前節點的值是否等於 targetSum
    if (root->left == NULL && root->right == NULL) {
        return root->val == targetSum;
    }

    // 遞迴檢查左子樹和右子樹，減去當前節點的值
    int remainingSum = targetSum - root->val;
    return hasPathSum(root->left, remainingSum) || hasPathSum(root->right, remainingSum);
}