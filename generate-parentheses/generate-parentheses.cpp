class Solution {//recuursion istalll ho go 
    //aut chioce hogi ki keetni backctets ko cat 1 mer khana ktini ko 2 mei
    //count how n=may are left ( type "n"
    //how nmany are left type ) type "m"
    //if(n== 0 && m == 0) push_back
    
    
public:
    void helper(vector<string>&ans,string s,int open ,int close,int n)
    {
        //alwys base vse forst
        if(open == n && close == n)
            {ans.push_back(s);s = "";return;}
         if(open > n)
            return;
         if(close > n)
            return;
        
        if(open < n)
            helper(ans,s+'(',open+1,close,n);
       
        if(close < open)
            helper(ans,s+')',open,close+1,n);
        
       
        
        
        
        
        
        
    }
    vector<string> generateParenthesis(int n) {
        vector<string>ans;
        helper(ans,"",0,0,n);
        
        return ans;
        
    }
};


//we can also relate this problems as catalan no.
//typical backtracking problems