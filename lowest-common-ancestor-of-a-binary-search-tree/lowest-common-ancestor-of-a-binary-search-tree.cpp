/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

class Solution {
public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
         if(root == NULL)
            return nullptr;
        if(root == p || root == q)
            return root;
       TreeNode* ll = lowestCommonAncestor(root->left,p,q);
        TreeNode* rr = lowestCommonAncestor(root->right,p,q);
        
        //result
        if(ll == NULL)
            return rr;
        else if(rr == nullptr)
            return ll;
        else
        {
            return root;
        }
    }
};