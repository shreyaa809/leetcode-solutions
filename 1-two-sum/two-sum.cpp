class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) 
    {
        int n=nums.size();
        int i=1;
        map<int,int>mpp; //sum,idx
        mpp.insert({nums[0],0});
        while (i<n)
        {
            int reqd=target-nums[i];
            if (mpp.find(reqd)!=mpp.end())
            return {mpp[reqd],i};
            mpp.insert({nums[i],i});
            i++;
        }
        return {};
    }
};