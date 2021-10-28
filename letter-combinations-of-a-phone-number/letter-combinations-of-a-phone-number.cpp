class Solution {
public:
     vector<string>mp = {"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
   
        
    
    void per(vector<string>&ans,string p,string up)
    {
        if(p.size() == 0)
        {
            ans.push_back(up);
            return;
        }
        int  ch = p[0]-'0';
        if(ch >= 0 && ch <= 9)
       { string temp = mp[ch];
        for(int i = 0;i<temp.size();i++)
        {
            per(ans,p.substr(1),up+temp[i]);
        }}
    }
    vector<string> letterCombinations(string digits) {
        int n = digits.size();
        vector<string>ans;
        if(n == 0)
            return ans;
       
        per(ans,digits,"");
        return ans;
        
             
        
    }
};