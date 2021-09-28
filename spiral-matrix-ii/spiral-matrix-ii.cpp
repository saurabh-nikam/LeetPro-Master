class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        int row  = n;
        int col = n;
        
        vector<vector<int>>ans(n,vector<int>(n));
        //shrink the bounds
        int top = 0;
        int down = row-1;
        int left  = 0;
        int right = col -1;
        int dir = 0;
        int id = 1;
        while(top <= down && left <= right)
        {
            if(dir == 0)
            {
                for(int i = left;i<= right;i++)
                {
                        ans[top][i] = id++;
                }
                
                top++;
            }else if(dir == 1)
            {
                for(int i = top;i<=down;i++)
                    ans[i][right] = id++;
                right--;
            }else if(dir == 2)
            {
                for(int i = right;i>= left;i--)
                    ans[down][i] = id++;
                down--;
            }else if(dir == 3)
            {
                for(int i = down;i>= top;i--)
                    ans[i][left] = id++;
                left++;
            }
            
            dir++;
            dir = dir%4;
        }
        return ans;
          
    }
    
};