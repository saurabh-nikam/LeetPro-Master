class Solution {
public:
    string convertToTitle(int columnNumber) {
        string ans = "";
        int n = columnNumber;
        while(n > 0)
        {
            ans += char((n-1)%26 + 'A');
            n--;
            n = n/26;
        }
         reverse(ans.begin(),ans.end());
        return ans;
        
    }
};