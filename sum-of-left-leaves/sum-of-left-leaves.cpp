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
    int ch(TreeNode* t)
    {
       if(t == NULL)
           return 0;
        if(t != nullptr && t->left != NULL && t->left->left == NULL && t->left->right == NULL)
            return t->left->val;
        
        return 0;
    }
    void go(TreeNode* node,int &sum)
    {
        if(node == NULL)
            return;
        go(node->left,sum);
        sum += ch(node);
        go(node->right,sum);
    }
    int sumOfLeftLeaves(TreeNode* root) {
        int sum = 0;
        go(root,sum);
        return sum;
        
        
    }
};