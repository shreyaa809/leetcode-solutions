class Solution {
public:
    int ans=0;
    int robber(vector<int>& nums,vector<int>& dp,int i,int n)
    {
        if (i>=n)
        return 0;
        if (dp[i]!=-1)
        return dp[i];
        //take
        dp[i]=nums[i]+robber(nums,dp,i+2,n);
        //not take
        return dp[i]=max(dp[i],robber(nums,dp,i+1,n));
    }
    int rob(vector<int>& nums) 
    {
        int n=nums.size();
        if (n==1)
        return nums[0];
        vector<int>dp1(n,-1);
        vector<int>dp2(n,-1);
        int left= robber(nums,dp1,0,n-1);
        int right=robber(nums,dp2,1,n);
        return max(left,right);
    }
};