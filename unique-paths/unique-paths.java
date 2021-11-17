class Solution {
    
    //dp[0][0] = 0;
    //dp[1][0] = 1 0r dp[0][1] = 1 asked why?
    //then dp[i][j] = dp[i-1][j] + dp[i][j-1] ;
    //alwyas define dp[i][j] n0 of sisdtinc tways to reach the i,j
    //final ans would be dp[m][n]   ans dp[1][1] = 1 ; obivisoly
    public int uniquePaths(int m, int n) {
        int[][] dp = new int[m+1][n+1];
        dp[1][1] = 1;
        dp[1][0] = 1;
        for(int i = 1;i<=m;i++)
            for(int j = 1;j<=n;j++)
            {
                dp[i][j] = dp[i-1][j]+dp[i][j-1];
            }
        
        return dp[m][n];
                
        
    }
}