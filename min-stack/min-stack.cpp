class MinStack {

    
public:
    /** initialize your data structure here. */
    stack<int>st;
    stack<int>mini;
    MinStack() {
        
        
    }
    
    void push(int val) {
        st.push(val);
        if(!mini.empty())
        {
            int k = min(mini.top(),val);
            mini.push(k);
        }else
        {
            mini.push(val);
        }
    }
    
    void pop() {
        if(!st.empty())
        {
            st.pop();
            mini.pop();
        }
    }
    
    int top() {
        
        if(!st.empty())
        {
            return st.top();
        }else
            return -1;
    }
    
    int getMin() {
        if(!st.empty())
        {
            return mini.top();
        }
        return -1;
        
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(val);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */