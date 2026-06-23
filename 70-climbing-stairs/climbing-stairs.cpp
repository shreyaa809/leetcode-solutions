class Solution {
public:
    int solve(int n,vector<int>&arr)
    {
        if (n<0)
        return 0;
        if (arr[n]!=-1)
        return arr[n];
        
        if (n==0)
        return 1;
        int one_step=solve(n-1,arr);
        int two_step=solve(n-2,arr);
        
        return arr[n]=one_step+two_step;
    }
    int climbStairs(int n) 
    {
        vector<int>arr(n+1,-1);
        return solve(n,arr);
    }
};