class Solution {
public:
    bool isValid(string s) 
    {
        int n=s.size();
        stack<int>st;
        for (int i=0;i<n;i++)
        {
            char ch=s[i];
            if (ch=='('||ch=='{'||ch=='[')
            st.push(ch);
            else
            {
                if (!st.empty()&&(ch==')'&&st.top()=='('||ch=='}'&&st.top()=='{'||ch==']'&&st.top()=='['))
                {
                    st.pop();
                    continue;
                }
                else
                return false;
                
            }
        }
        return (st.empty());
         
    }
};