class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c) {
        int row = mat.size();
        int col = mat[0].size();
        
        if(r*c != col* row)
            return  mat;
        
        vector<vector<int>>ans(r,vector<int>(c,0));
        int count = 0;int l =0;
        for(int i = 0;i<row;i++)
            for(int j = 0;j<col;j++)
            {
               if(count%c == 0)
               {
                   l = 0;
               }
                ans[count/c][l++] = mat[i][j];
                    count++;
            }
        
        return ans;
        
    }
};