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
    int id = 0;
    TreeNode* go(int instart,int inend,vector<int>& preorder, vector<int>& inorder)
    {
        if(instart > inend)
            return nullptr;
        TreeNode* node = new TreeNode(preorder[id++]);
        int pos;
        for(int i = instart;i<=inend;i++)
        {
            if(node->val == inorder[i])
            {
                pos = i;
                break;
            }
        }
        node->left = go(instart,pos-1,preorder,inorder);
        node->right = go(pos+1,inend,preorder,inorder);
        return node;
        
    }
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        return go(0,preorder.size()-1,preorder,inorder);
        
    }
};