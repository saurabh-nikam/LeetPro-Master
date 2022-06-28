class Solution {
public:
    int minPartitions(string n) {
        int ans = 0;
        int k = n.size();
        for(int i = 0;i<k;i++)
        {
            ans  = max(ans,n[i]-'0');
        }
        return ans;
        
    }
};