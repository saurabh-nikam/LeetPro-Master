class Solution {
public:int i= 0;
    
    void helper(vector<vector<int>>&ans,vector<int>&nums,int index,vector<int>temp)
    {
        
        if(nums.size() == index)
        {
            ans.push_back(temp);
            return;
        }
        
        
        helper(ans,nums,index+1,temp);
        temp.push_back(nums[index]);
        helper(ans,nums,index+1,temp);
        }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>>ans;
        vector<int>temp;
        sort(nums.begin(),nums.end());
        helper(ans,nums,0,temp);
        return ans;
        
    }
};