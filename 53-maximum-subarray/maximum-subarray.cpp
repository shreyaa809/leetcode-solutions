class Solution {
public:
    int maxSubArray(vector<int>& nums) 
    {
        int n=nums.size();
        int ans=INT_MIN;
        int summ=0;
        for (int i=0;i<n;i++)
        {
            summ+=nums[i];
            ans=max(ans,summ);
            if (summ<0)
            summ=0;
            

        }
        return ans;

    }
};