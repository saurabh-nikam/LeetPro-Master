class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& str) {
        vector<vector<string>>ans;
        unordered_map<string,vector<string>>mp;
        int n = str.size();
        for(int i = 0;i<n;i++)
        {
            string t = str[i];
            sort(t.begin(),t.end());
            mp[t].push_back(str[i]);
        }
        for(auto it: mp)
        {
            ans.push_back(it.second);
        }
        return ans;
        
    }
};