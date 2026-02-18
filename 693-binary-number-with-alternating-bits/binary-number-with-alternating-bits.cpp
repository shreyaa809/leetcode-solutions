class Solution {
public:
    bool hasAlternatingBits(int n) 
    {
        int m=n;
        string ans;
        while (m>0)
        {
            ans+=(m%2)+'0';
            m=m/2;
        }
        reverse(ans.begin(),ans.end());
        int s=ans.size();
        for (int i=0;i<s-1;i++)
        {
            if(ans[i]==ans[i+1])
            return false;

        }
        return true;
    }
};