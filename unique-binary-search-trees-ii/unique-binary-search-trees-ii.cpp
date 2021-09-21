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
    vector<TreeNode*> help(int start,int end)
    {
        vector<TreeNode* >res;
        if(start > end)
        {
            res.push_back(NULL);
            return res;
        }
        for(int i = start;i<=end;i++)
        {
            vector<TreeNode*>lefts,rights;
            lefts = help(start,i-1);
            rights = help(i+1,end);
            for(int j = 0;j<int(lefts.size());j++)
                for(int k = 0;k<int(rights.size());k++)
                {
                    TreeNode * root = new TreeNode(i);
                    root->left = lefts[j];
                    root->right = rights[k];
                    res.push_back(root);
                }
        }
        return res;
    }
    
    vector<TreeNode*> generateTrees(int n) {
        if(n == 0)
            return vector<TreeNode*>(0);
        return help(1,n);
        
    }
};
//let dfs(start,end) 
    //will do the genrate the all tree from start to end
    //for leftsubtree dfs(start , cur-1)
    //for right substree dfs(cur+1 ,start)