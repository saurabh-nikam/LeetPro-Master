class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int n = matrix.size();  //no row prsent
        if(n == 0)
        {
            return;
        }
        int m = matrix[0].size();
        vector<bool>row(n,0);
        vector<bool>col(m,0);
        
        for(int i =0;i<n;i++)
            for(int j  =0;j<m;j++)
            {
                if(matrix[i][j] == 0)
                {
                    row[i] = true;
                    col[j] = true;
                }
            }
        for(int i = 0;i<n;i++)
            for(int j =0;j<m;j++)
            {
                if(row[i] == true || col[j] == true)
                {
                    matrix[i][j] = 0;
                }
            }
        
        return ;
        
    }
};