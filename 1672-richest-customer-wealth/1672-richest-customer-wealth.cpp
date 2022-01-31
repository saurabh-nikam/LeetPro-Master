class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int count = 0;int maxxi = 0;
        int n = accounts.size();
        for(int i = 0;i<n;i++)
        {
            count = 0;
            for(int j = 0;j<accounts[i].size();j++)
            {
                count += accounts[i][j];
            }
            maxxi = max(count,maxxi);
                
        }
        
        return maxxi;
        
    }
};