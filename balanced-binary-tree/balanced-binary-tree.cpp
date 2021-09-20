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
    int height(TreeNode* node)
    {
        if(node == NULL)
            return 0;
        int lh = height(node->left);
        int rh = height(node->right);
        
        if(abs(lh-rh) >=2)
            return -1;
        if(lh == -1 || rh == -1)
            return -1;
        
        return 1+max(lh,rh);
    }
    bool isBalanced(TreeNode* node) {
        if(node == NULL)
            return true;
        int ll = height(node->left);
        int rr = height(node->right);
        
        if(abs(ll - rr) >= 2)
            return false;
        if(ll == -1 || rr == -1)
            return false;
        
        return true;
    }
};