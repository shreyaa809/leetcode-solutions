class Solution {
public:
    bool hasAllCodes(string s, int k) 
    {
        set<string>st;
        int n=s.length();
        for (int i=0;i<n-k+1;i++)
        {
            st.insert(s.substr(i,k));
        }
        
        return st.size()==(1<<k);
    }
};