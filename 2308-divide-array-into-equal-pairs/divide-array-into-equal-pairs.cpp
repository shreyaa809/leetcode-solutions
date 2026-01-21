class Solution {
public:
    bool divideArray(vector<int>& nums) 
    {
        int n=nums.size();
        unordered_map<int,int>mpp;
        for (int i=0;i<n;i++)
        mpp[nums[i]]=0;
        for (int i=0;i<n;i++)
        {
            mpp[nums[i]]+=1;
        }
        for (int i=0;i<n;i++)
        {
            int k=nums[i];
            if ((mpp[k])%2!=0)
            return false;
        }
        return true;
    }
};