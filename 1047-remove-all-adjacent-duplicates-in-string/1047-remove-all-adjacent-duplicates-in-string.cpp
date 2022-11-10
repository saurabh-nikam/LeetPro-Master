// class Solution {
// public:
//     string removeDuplicates(string s) {
//         stack<char>st;
//         int n = s.size();
//         string res = "";
//         if(n <= 1)
//             return s;
//         st.push(s[0]);
//         for(int i = 1;i<n;i++)
//         {
//             if(!st.empty()&&st.top() == s[i]  )
//             {
//                 st.pop();
//             }else
//             {
//                 st.push(s[i]);
//             }
//         }
//         while(!st.empty())
//         {
//             res += st.top();
//             st.pop();
//         }
//         int i = 0; n = res.size()-1;
//         while(i < n)
//         {
//             swap(res[i],res[n]);
//             i++;
//             n--;
//         }
//         return res;
//     }
// };
class Solution {
public:
    string removeDuplicates(string S) {
        string a;
        for (auto& c : S) 
            if (a.size() && a.back() == c) a.pop_back();
            else a.push_back(c);
        return a;
    }
};