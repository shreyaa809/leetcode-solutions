class Solution {
public:
    int find(vector<int>&stones,map<int,int>&mpp,vector<vector<int>>&dp,int curr_stone_idx,int prevJump)
    {
        if (curr_stone_idx==stones.size()-1)
        return true;
        if (dp[curr_stone_idx][prevJump]!=-1)
        return dp[curr_stone_idx][prevJump];
        bool result=false;
        for (int nextJump=prevJump-1;nextJump<=prevJump+1;nextJump++)
        {
            if (nextJump>0)
            {
                int nextStone = stones[curr_stone_idx] + nextJump;

                if (mpp.find(nextStone) != mpp.end())
                result=result||find(stones,mpp,dp,mpp[nextStone], nextJump);
            }
        }
        return dp[curr_stone_idx][prevJump]=result;
    }
    bool canCross(vector<int>& stones) 
    {
        if(stones[1]!=1)
        return false;
        
        map<int,int>mpp; //stone,idx
        int n=stones.size();
        for (int i=0;i<n;i++)
        mpp[stones[i]]=i;
       vector<vector<int>> dp(2001, vector<int>(2001, -1));
        
        return find(stones,mpp,dp,0,0);
        
    }
};