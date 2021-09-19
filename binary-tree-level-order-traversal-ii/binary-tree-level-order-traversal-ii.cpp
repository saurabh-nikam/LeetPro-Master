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
    vector<vector<int>> levelOrderBottom(TreeNode* root) {
         vector<vector<int>>ans;
        if(root == NULL)
           return ans;
        queue<TreeNode* >q;
        q.push(root);
        vector<int>row;int count = 1;
        while(!q.empty())
        {
            
           
           TreeNode* data = q.front();
            if(data->left)
                q.push(data->left);
            if(data->right)
                q.push(data->right);
             
             q.pop();
            row.push_back(data->val);
            count--;
            if(count == 0)
                {ans.push_back(row);row.clear();count = q.size();}
        }
        int n = ans.size();
        int start= 0;
        int end = n-1;
        while(start < end)
        {
            swap(ans[start],ans[end]);
            start++;
            end--;
        }
        return ans;
        
    }
};