class Solution {
public:
    vector<int> missingRolls(vector<int>& rolls, int mean, int n) {
        int m = rolls.size();
        int total = (n+m)*mean;
        int sum = 0;
        for(int i = 0;i<m;i++)
            sum += rolls[i];
        int check = total - sum;
        if(check < n || check > 6*n)
            return {};
        vector<int>ans(n,1);
        int i = 0;
        check = check - n;
        while(check > 0)
        {
            if(check >= 5)
                {ans[i] += 5;check -= 5;}
            else 
            {
                ans[i] += check;
                check = 0;
                break;
            }
            i++;
        }
        return ans;
    }
};