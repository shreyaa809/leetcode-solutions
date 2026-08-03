class Solution {
public:
    int findMax(int idx,vector<int>&nums,vector<int>&dp)
    {
        if (idx>=nums.size())
        return 0;
        if (dp[idx]!=-1)
        return dp[idx];
        
        
        int left=nums[idx]+findMax(idx+2,nums,dp);
        
        
        int right=findMax(idx+1,nums,dp);
        return dp[idx]=max(left,right);
    }
    int rob(vector<int>& nums) 
    {
        //basically n+2 krna hai
        
       
        int n=nums.size();
        vector<int>dp(n+1,-1);
        return findMax(0,nums,dp);

    }
};