class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        int ans = 0;
        stack<int>nums;
        // stack<int>op;
        for(auto &i : tokens)
        {
            if(i == "+")
            {
                int a = nums.top();nums.pop();
                int b = nums.top();nums.pop();
                nums.push(a+b);
            }else if(i == "-")
            {
                int a = nums.top();nums.pop();
                int b = nums.top();nums.pop();
                nums.push(b-a);
            }else if(i == "*")
            {
                int a = nums.top();nums.pop();
                int b = nums.top();nums.pop();
                nums.push(a*b);
            }else if(i == "/")
            {
                int a = nums.top();nums.pop();
                int b = nums.top();nums.pop();
                nums.push(b/a);
            }else 
            {
                nums.push(stoi(i));
            }
        }
        return nums.top();
        
        
    }
};