class Solution {
    //questio n start karne se apahle dp ko define karo
    //dp[i] = distiict ways to reach i-1 position 
    
    //ans will be dp[i-1];
public:
    int climbStairs(int n) {
//alwys define the dp clararly
        
//dp[i] = no of distinct ways to rach end tii index i;
        //valid index i ->   0......i-1;
        vector<int>dp(n+1,0);
        dp[0] = 1;
        dp[1] = 2;
        for(int i = 2;i<n;i++)
        {
            dp[i] = dp[i-1]+dp[i-2];
        }
        
        return dp[n-1];
    }
};