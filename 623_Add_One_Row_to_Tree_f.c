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
    TreeNode* addOneRow(TreeNode* root, int val, int depth) {
        if (depth == 1){
            TreeNode* temp = new TreeNode(val);
            temp->left = root;
            root = temp;
        }else
            searchDepth(root, 1, val, depth);

        return root;
    }


    void searchDepth(TreeNode* node, int currentDepth, int val, int depth){

        if (currentDepth + 1 < depth) {
            if (node == nullptr)
                return;
            searchDepth(node->left, currentDepth+1, val, depth);
            searchDepth(node->right, currentDepth+1, val, depth);
        }


        if (currentDepth + 1 == depth){
            if (node == nullptr)
                return;
            if (node->left) {
                TreeNode* temp = new TreeNode(val);
                temp->left = node->left;
                node->left = temp;
            }else{
                TreeNode* temp = new TreeNode(val);
                node->left = temp;
            }
            if (node->right) {
                TreeNode* temp = new TreeNode(val);
                temp->right = node->right;
                node->right = temp;
            }else{
                TreeNode* temp = new TreeNode(val);
                node->right = temp;
            }
        }

        if (currentDepth == depth)
            return;


    }
};

//DFS
//time<80.11%
//space<86.98%
