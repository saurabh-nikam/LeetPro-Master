class Solution {
public:
    int numSquares(int n) {
        vector<int>coin;
        coin.push_back(1);
        for(int i = 2;i*i<=n;i++)
        {
            coin.push_back(i*i);
        }
        vector<int>dp(n+1,n+1);
        dp[0] = 0;
        for(int i = 1;i<=n;i++)
        {
            for(int k = 0;k<coin.size();k++)
            {
                if(i-coin[k] >= 0)
                dp[i] = min(dp[i],dp[i-coin[k]] + 1);
            }
        }
        if(dp[n] == n+1)
            return -1;
        else
            return dp[n];
        
    }
};
//minimum coin sum problme he ye