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
//     void dfs(TreeNode* root,string &text)
//     {
//         if(root == NULL)
//             return;
//         if(root->left == NULL &&  root->right == NULL)
//         {
//             text += to_string(root->val);
//         }
//         dfs(root->left,text);
//         dfs(root->right,text);
        
//     }
//     bool leafSimilar(TreeNode* root1, TreeNode* root2) {
//         string s1,s2;
//         dfs(root1,s1);
//         dfs(root2,s2);
        
//         return s1 == s2;
        
//     }
     bool leafSimilar(TreeNode* root1, TreeNode* root2) {
        string t1, t2;
        DFS(root1, t1);
        DFS(root2, t2);
        return t1==t2;
    }
    
    void DFS(TreeNode* root, string& s) {
        if(root==NULL) return;
        if(root->left==NULL&&root->right==NULL) s+=to_string(root->val)+"#";
        DFS(root->left, s);
        DFS(root->right, s);
    }
};