class Solution {
public:
    vector<int>ithRow(int i)
    {
        vector<int>ans;
        long long res=1;
        ans.push_back(1);
        for (int k=1;k<i;k++)
        {
            res=res*(i-k);
            res=res/(k);
            ans.push_back(res);
        }
        return ans;
    }
    vector<vector<int>> generate(int numRows) 
    {
        vector<vector<int>>ans;
        for (int i=0;i<numRows;i++)
        {
            if (i==0)
            ans.push_back({1});
            else{
                ans.push_back(ithRow(i+1));
            }
        }
        return ans;
    }
};