class Solution {
public:
    bool hasAllCodes(string s, int k) 
    {
        set<int>st;
        int n=s.length();
        for (int i=0;i<n-k+1;i++)
        {
            st.insert(stoi(s.substr(i,k),nullptr,2));
        }
        for (int i=0;i<(pow(2,k));i++)
        {
            int j=i;
            string res="";
            while (j>1)
            {
                res+=j%2+'0';
                j=j/2;
            }
            if (j==1) res+='1';
            reverse(res.begin(),res.end());
            if (res=="")
            res+='0';
            int bin=stoll(res,nullptr,2);
            if (st.find(bin)==st.end())
            return false;
        }
        return true;
    }
};