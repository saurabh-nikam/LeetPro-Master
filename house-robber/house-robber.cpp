class Solution {
public:
    int rob(vector<int>& nums) {
       //define the dp as 
        //dp[i] = maximun till ith 
        //ans = dp[n-1];
        int n = nums.size();
        if(n <= 1)
            return nums[0];
        vector<int>dp(n+1,0);
        dp[0] = nums[0];
        dp[1] = max(nums[1],nums[0]);
        for(int i = 2;i<n;i++)
        {
            dp[i] = max(dp[i-1],nums[i]+dp[i-2]);
        }
        return max(dp[n-1],dp[n-2]);
        
    }
};