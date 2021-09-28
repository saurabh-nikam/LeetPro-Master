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
    bool help(TreeNode* root,TreeNode* node)
    {
        if(root == NULL and node == NULL)
            return true;
        if(root == NULL || node == NULL)
            return false;
        
        return root->val == node->val && help(root->left,node->left) && help(root->right,node->right);
    }
    bool isSubtree(TreeNode* root, TreeNode* subRoot) {
        if(root == nullptr)
            return false;
        if(subRoot == nullptr)
            return true;
         if(help(root,subRoot))
             return true;
        
        return isSubtree(root->left,subRoot) || isSubtree(root->right,subRoot);
    }
};