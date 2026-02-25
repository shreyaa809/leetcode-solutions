class Solution {
public:
    vector<int> sortByBits(vector<int>& arr) 
    {
        vector<int>v;
        int n=arr.size();
        set<int>s;
        sort(arr.begin(),arr.end());
        for (int i=0;i<n;i++)
        {
            int size=__builtin_popcount(arr[i]);
            s.insert(size);
        }
        for (auto x:s)
        {
            for (int i=0;i<n;i++)
            {
                if ((__builtin_popcount(arr[i]))==x)
                v.push_back(arr[i]);
            }
            
        }
        return v;
    }
};