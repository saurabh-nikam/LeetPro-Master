class Solution {
public:
    int minSteps(string s, string t) {
        int n = s.size();
        unordered_map<char,int>mp;
        for(auto c:s)
            mp[c]++;
        for(auto c:t)
            mp[c]--;
        int ans = 0;
        for(auto it : mp)
            if(it.second < 0)
                ans += abs(it.second);
        
        return ans;
        
    }
};