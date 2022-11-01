/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    int maxDepth(TreeNode* root) {
        if (root == nullptr)
            return 0;
        // if (maxDepth(root->left) > maxDepth(root->right))  這樣寫會超時
        //     return maxDepth(root->left)+1;
        // return maxDepth(root->right)+1;
        int LDepth = maxDepth(root->left);
        int RDepth = maxDepth(root->right);
        return max(LDepth, RDepth)+1;
    }
};