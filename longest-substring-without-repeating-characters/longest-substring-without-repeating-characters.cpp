class Solution {
public:
    // int lengthOfLongestSubstring(string s) {
      int lengthOfLongestSubstring(string s) {
        int n  = s.size();
        
       vector<int>mp(256,-1);
        
        char cur;int ans = 0 ;int start = 0;
        for(int i = 0;i<n;i++)
        {
            // cur = s[i];
            
            start = max(start,mp[s[i]]+1);  //take care of the base case
            //
            //
            
            mp[s[i]] = i;
            
           ans = max(ans,i-start+1);
        }
        
        return ans;
      }
};