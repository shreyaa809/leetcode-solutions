class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) 
    {
        int n=arr.size();
        vector<int>ans;
        map<int,int>mpp; //number,rank
        vector<int>v(arr.begin(),arr.end());
        sort (v.begin(),v.end());
        int r=1;
        for (int i=0;i<n;i++)
        {
            if (mpp.find(v[i])==mpp.end())
            {
                mpp[v[i]]=r++;
            }
        }
        for (int i=0;i<n;i++)
        {
            ans.push_back(mpp[arr[i]]);
        }
        return ans;
    }
};