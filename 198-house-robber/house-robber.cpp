class Solution {
public:
    
    int robber(vector<int>&dp,vector<int>&nums,int idx)
    {
        if (idx>=nums.size()) 
        return 0;
        //take

        if (dp[idx]!=-1)
        {
            return dp[idx];
        }
        dp[idx]=nums[idx]+robber(dp,nums,idx+2);
        //not take
        return dp[idx]=max(dp[idx],robber(dp,nums,idx+1));
    }
    int rob(vector<int>& nums) 
    {
        int n=nums.size();
        vector<int>dp(n,-1);
        return robber(dp,nums,0);
       
    }
};