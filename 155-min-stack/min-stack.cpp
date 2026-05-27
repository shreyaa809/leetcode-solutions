class MinStack 
{
public:
    stack<long long>st;
    long long mini=LLONG_MAX;

    MinStack() 
    {
        mini=LLONG_MAX;
    }
    
    void push(int val) 
    {
        if (st.empty())
        {
        st.push(val);
        mini=val;
        
        }
        else
        {
            if (val<mini)
            {
                st.push(2LL*val-mini);
                mini=val;
            }
            else
            st.push(val);
        }
    }
    
    void pop() 
    {
        if (st.empty())
        {
        mini=INT_MAX;
        return;
        }
        long long x=st.top();
        st.pop();
        if (x<mini)
        mini=2LL*mini-x;
    }
    
    int top() {
        if (st.empty())
        
        return INT_MIN;
        long long x=st.top();
        if (x<mini)
        {
        
            return mini;
        }
        return x;
    }
    
    int getMin() {
        if (st.empty())
        return INT_MIN;
        return mini;
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