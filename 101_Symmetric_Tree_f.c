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
    vector<int> temp;
    
    bool isSymmetric(TreeNode* root) {
        return check(root->left, root->right);
    }
    
    bool check(TreeNode* left, TreeNode* right){
        if (left == nullptr && right == nullptr){
            return true;
        }else if(left == nullptr || right == nullptr){
            return false;
        }else if (left->val != right->val){
            return false;
        }else{
            if (left == nullptr){
                return true;
            }else{
                if (check(left->left, right->right)){
                    if(check(left->right, right->left)){
                        return true;
                    }
                }
                return false;
            }
        }
    }
};

//遞迴
//time<95.57%
//space<47.48%