class Solution {
public:
    bool isValid(string s) {
        int n = s.size();
        bool flag = true;
        stack<char>st;
        for(int i = 0;i<n;i++)
        {
            if(s[i] == '(' || s[i] == '[' || s[i] == '{')
               { st.push(s[i]);
                    continue;
                
               }
            char temp = st.top();
            if(st.empty() == true)
            {
                flag = false;
                return false;
            }
            if(temp == '(' && s[i] == ')')
                st.pop();
            else if(temp == '[' && s[i] == ']')
                st.pop();
            else if(temp == '{' && s[i] == '}')
                st.pop();
            else
            {
               flag = false;
                return false;
                
            }
        }
        if(st.empty() == true && flag)
            return true;
        else
            return false;
        
        
        
    }
};