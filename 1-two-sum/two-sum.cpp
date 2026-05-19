class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) 
    {
        int n=nums.size();
        int fi,li;
        map<int,int>mpp; //value,index
        for (int i=0;i<n;i++)
        {
            if ((mpp.find(target-nums[i]))!=mpp.end())
            {
                fi=mpp[target-nums[i]];
                li=i;
            }
            mpp[nums[i]]=i;
        }

        return {fi,li};
    }
};