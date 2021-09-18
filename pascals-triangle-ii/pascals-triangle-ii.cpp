class Solution {
public://implmeataion questions
    
    vector<int> getRow(int rowIndex) {
       vector<int>ans;
        ans.resize(rowIndex+1,0);int n = rowIndex;
        ans[0] = 1; //base case
        for(int i = 0;i<n;i++)
        {
            for(int j = i+1;j>=1;j--)
                ans[j] += ans[j-1];
        }
        return ans;
    }
};