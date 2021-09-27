class Solution {
public:
    void backtrack(vector<int>& nums,vector<vector<int>>&ans,vector<int>visited,vector<int>path)
    {
        if(path.size() == nums.size())
            {ans.push_back(path);return;}
        for(int i = 0;i<nums.size();i++)
        {
            if(visited[i] == true)
                continue;
            path.push_back(nums[i]);
            visited[i] = true;
            backtrack(nums,ans,visited,path);
            path.pop_back();
            visited[i] = false;
                
        }
    }
    vector<vector<int>> permute(vector<int>& nums) {
        int n = nums.size();
        vector<vector<int>>ans;
        if(n <= 0)
            return ans;
        //current list size == nums.size() then add the list the
        vector<int>path;
        vector<int>visited(n,0);
        backtrack(nums,ans,visited,path);
        
        return ans;
    }
};

//backtracing and  recursion