class Solution {
public:
    void getSum(vector<int>&nums,int target,int& count,long long i,long long currSum)
    {
        if (i>=nums.size())
        {
        if (currSum==target)
        count+=1;
        return;
        }
        getSum(nums,target,count,i+1,currSum+nums[i]);
        getSum(nums,target,count,i+1,currSum-nums[i]);
        return;
    }
    int findTargetSumWays(vector<int>& nums, int target) 
    {
        long long i=0;
        int count=0;
        long long currSum=0;
        getSum(nums,target,count,i,currSum);
        return count;
    }
};