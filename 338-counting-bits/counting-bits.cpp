class Solution {
public:
    vector<int> countBits(int n) 
    {
        vector<int>ans(n+1);
        ans[0]=0;
        for (int i=1;i<ans.size();i++)
        {
            ans[i] = ans[i & (i-1)] + 1;       
        }
        return ans;
    }
};