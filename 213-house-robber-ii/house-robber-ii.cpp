class Solution {
public:
    int robber(int idx,vector<int>&nums,vector<int>&dp,int n)
    {
        if (idx>=n)
        return 0;
        if (dp[idx]!=-1)
        return dp[idx];
        int left=nums[idx]+robber(idx+2,nums,dp,n);
        int right=robber(idx+1,nums,dp,n);
        return dp[idx]=max(left,right);

    }
    int rob(vector<int>& nums) 
    {
        int n=nums.size();
        vector<int>dp(n+1,-1);
        vector<int>dp1(n+1,-1);
        if (n<=3)
        {
            int maxi=nums[0];
            for (auto it:nums)
            if (it>maxi)
            maxi=it;
            return maxi;
        }
        return max(robber(0,nums,dp,n-1),robber(1,nums,dp1,n));

    }
};