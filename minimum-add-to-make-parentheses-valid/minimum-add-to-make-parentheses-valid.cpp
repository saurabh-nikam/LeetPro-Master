class Solution {
public:
    int minAddToMakeValid(string s) {
        stack<char>st;
        for(auto i : s)
        {
            if(i == '(')
                st.push(i);
            else if(!st.empty() &&i == ')')
                {
                if(st.top() == '(')
                    st.pop();
                else
                    st.push(i);
            }else
                st.push(i);
        }
        if(st.empty())
            return 0;
        else 
            return st.size();
    }
};