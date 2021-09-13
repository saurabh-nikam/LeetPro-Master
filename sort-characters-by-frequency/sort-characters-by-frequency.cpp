class Solution {
public:
    string frequencySort(string s) {
        int n = s.size();
        map<char,int>mp;
        for(int i = 0;i<n;i++)
        {
            mp[s[i]]++;
        }
       sort(s.begin(),s.end(),[&](char a,char b)
            {
                return mp[a] > mp[b] || mp[a] == mp[b] && a < b;
            });
        return s;
        
    }
};