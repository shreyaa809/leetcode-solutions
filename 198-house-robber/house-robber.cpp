class Solution {
public:
    int ans=0;
    int robber(vector<int>& nums,vector<int>& dp,int i)
    {
        if (i>=nums.size())
        return 0;
        if (dp[i]!=-1)
        return dp[i];
        //take
        dp[i]=nums[i]+robber(nums,dp,i+2);
        //not take
        return dp[i]=max(dp[i],robber(nums,dp,i+1));
    }
    int rob(vector<int>& nums) 
    {
        int n=nums.size();
        vector<int>dp(n,-1);
        return robber(nums,dp,0);
    }
};