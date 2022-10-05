class Solution {
public:
    TreeNode* addOneRow(TreeNode* root, int val, int depth) {

        if(!root && depth > 1) return NULL;

        if(depth == 1)
        {
            TreeNode *head = new TreeNode(val);
            head -> left = root;
            head -> right = NULL;

            return head;
        }

        queue<TreeNode *> q;
        q.push(root);

        int curLevel = 1, flag = 0;

        while(!q.empty()&& !flag)
        {
            int n = q.size();

            curLevel++;

            while(n--)
            {
                TreeNode *cur = q.front(); q.pop();

                if(cur -> left) q.push(cur -> left);
                if(cur -> right) q.push(cur -> right);

                if(curLevel == depth)
                {
                    flag = 1;

                    TreeNode *rootLeft = new TreeNode(val);
                    TreeNode *rootRight = new TreeNode(val);

                    rootLeft -> left = cur -> left;
                    rootRight -> right = cur -> right;

                    cur -> left = rootLeft;
                    cur -> right = rootRight;
                }
            }
        }

        return root;
    }
};

//BFS
//time<63.06
//space<16.59%