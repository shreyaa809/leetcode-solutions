class Solution {
public:
    string removeKdigits(string num, int k) 
    {
        int n=num.size();
        if (k==n)
        return "0";
        stack<char>st;

        for (int i=0;i<n;i++)
        {
            if (st.empty())
            st.push(num[i]);
            else
            {
                while (!st.empty()&&k!=0&&num[i]<st.top())
                {
                    k--;
                    st.pop();
                }
                st.push(num[i]);
            }
        }
        while (!st.empty()&&k!=0) // eg num=1234567 k=3
        {
            k--;
            st.pop();
        }
        string ans="";
        while (!st.empty())
        {
            char ch=st.top();
            ans.push_back(ch);
            st.pop();
        }
        reverse(ans.begin(),ans.end());
        ans.erase(0,ans.find_first_not_of('0'));
        if (ans=="")
        ans="0";
        return ans;
    }
};