class Solution {
public:
    int fun(vector<int>& coins, int amount,vector<vector<int>>&dp,int i)
    {
        if (i==0)
        {
            if (amount%coins[i]==0)
            return amount/coins[i];
            return 1e9;
        }
        if (dp[i][amount]!=-1)
        return dp[i][amount];
        int not_take=0+fun(coins,amount,dp,i-1);
        int take=INT_MAX;
        if (coins[i]<=amount)
        {
            take=1+fun(coins,amount-coins[i],dp,i);
        }
        return dp[i][amount]=min(take,not_take);
    }
    int coinChange(vector<int>& coins, int amount) 
    {
        int n=coins.size();
        vector<vector<int>>dp(n,vector<int>(amount+1,-1));

        int ans=fun(coins,amount,dp,n-1);
        if (ans>=1e9)
        return -1;
        return ans;
    }
};