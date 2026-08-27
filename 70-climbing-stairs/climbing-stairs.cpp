class Solution {
public:
    int find(int n,vector<int>&dp,int i)
    {
        if (i==1||i==0)
        return 1;
        
        if (dp[i]!=-1)
        return dp[i];
        return dp[i]=find(n,dp,i-1)+find(n,dp,i-2);
    }
    int climbStairs(int n) 
    {
        vector<int>dp(n+1,-1);
        return find(n,dp,n);
    }
};