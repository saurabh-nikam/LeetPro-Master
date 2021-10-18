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
    bool isCousins(TreeNode* root, int x, int y) {
        int a = -1;
        int b = -1;
        if(root == nullptr)
            return false;
        queue<TreeNode*>q;
        q.push(root);
        
        int depth  = 0;
        
        while(!q.empty())
        {
            bool flag = false;
            bool f2 = false;
            int sz = q.size();
            for(int i = 0;i <sz;i++)
            {
                TreeNode* t = q.front();
                auto curr = t;
                q.pop();
                if(t->val == x)
                    flag = true;
                if(t->val == y)
                    f2 = true;
                if(t->left && t->right)  // check if x and y are children of the same parent 
                {
                    if((t->left->val == x && t->right->val == y) || (curr->left->val == y && curr->right->val == x))
                        return false;
                }
                if(t->left)
                    q.push(t->left);
                if(t->right)
                    q.push(t->right);
                if(flag && f2)
                    return true;
            }
            depth++;
        }
        
            return false;
        
    }
};