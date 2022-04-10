class Solution {
public:
    int minOperations(vector<string>& logs) {
        int ans  =0;
        for(auto i : logs)
        {
            if(i == "./")
                continue;
            else if(i == "../" )
                ans = ans > 0? --ans:ans;
            else ans++;
        }
        return abs(ans);
        
    }
};