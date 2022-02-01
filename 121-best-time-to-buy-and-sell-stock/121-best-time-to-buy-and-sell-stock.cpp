class Solution {
    
    //need more thinking here by order of o(n) expected here only
    //try more sample test cases
    //
public:
    int maxProfit(vector<int>& nums) {
        //conside 0(n2)sotuion
        //in worst case profit become 0;
        //lets define dp[i] maximum profit till i days
        //ans = dp[n-1]
        int n = nums.size();
        int profit = 0;
        int minii = nums[0];
        for(int i = 1;i<n;i++)
        {
            if(nums[i] > minii)
            {
                profit = max(profit,nums[i]-minii);
            }
            
            minii = min(minii,nums[i]);
        }
        return profit;
        
//         int n = prices.size();
//         vector<int>dp(n+1,0);
//         dp[0] = 0;
        
//         int profit = 0;
        
//         for(int i = 1;i<(n);i++)
//         {
            
//         }
//         return dp[n-1];
    }
};