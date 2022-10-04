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
    bool hasPathSum(TreeNode* root, int targetSum) {
        if (root == nullptr)
            return false;
        else
            return DFS(root, targetSum);
    }

    bool DFS(TreeNode* node, int targetSum) {

        targetSum -= node->val;

        if ((node->left == nullptr) && (node->right == nullptr)) {
            if (targetSum == 0)
                return true;
            else
                return false;
        }



        if (node->left)
            if (node->right)
                return DFS(node->left, targetSum) || DFS(node->right, targetSum);
            else
                return DFS(node->left, targetSum);
        else
            return DFS(node->right, targetSum);


        cout<<"??\n";

    }
};


#time<77.40%
#space<74.14%