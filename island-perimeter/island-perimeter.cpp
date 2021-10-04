class Solution {
public:
    int islandPerimeter(vector<vector<int>>& grid) {
        int n = grid.size();
        int m = grid[0].size();
        int ans = 0;
        
        for(int i = 0;i<n;i++)
            for(int j = 0;j<m;j++)
            {
                if(grid[i][j] == 1)
                {
                    ans += (i == 0 ||grid[i-1][j] == 0 ? 1 : 0); 
                    ans += (i == n-1 ||grid[i+1][j] == 0 ? 1 : 0);
                    ans += (j == 0 ||grid[i][j-1] == 0 ? 1 : 0);
                    ans += (j == m-1 ||grid[i][j+1] == 0 ? 1 : 0);
                }
            }
        return ans;
        
    }
};