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
     int id ;
   
    TreeNode* build(vector<int>& inorder, vector<int>& postorder,int start,int end)
    {
        if(start > end)
            return nullptr;
        TreeNode* node = new TreeNode(postorder[id--]);
        if(start == end)
            return node;
        int pos;
        for(int i = start;i<=end;i++)
        {
            if(node->val == inorder[i])
            {
                pos = i;
                break;
            }
        }
        node->right  = build(inorder,postorder,pos+1,end);
        node->left = build(inorder,postorder,start,pos-1);
        
        return node;
    }
    TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder) {
        int n = postorder.size();
        id = n-1;
        return build(inorder,postorder,0,n-1);
        
    }
};