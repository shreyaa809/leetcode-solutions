class Solution {
public:
   
    int rob(vector<int>& nums) 
    {
        int n=nums.size();
       if (n==1)
       return nums[0];

        int prev2=0,prev1=0;
        for (int i=0;i<n-1;i++)
        {
            int curr=max(nums[i]+prev2,prev1);
            prev2=prev1;
            prev1=curr;
        }
        int prevv1=0,prevv2=0;
        for (int i=1;i<n;i++)
        {
            int curr=max(nums[i]+prevv2,prevv1);
            prevv2=prevv1;
            prevv1=curr;
        }
        return max(prev1,prevv1);
    }
};