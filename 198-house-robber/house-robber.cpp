class Solution {
public:
    
    int rob(vector<int>& nums) 
    {
        int n=nums.size();
       

        int prev2=0,prev1=0;
       
        for (int i=0;i<n;i++)
        {
            int take=nums[i]+prev2;
            int not_take=prev1;
            int curr=max(take,not_take);
            prev2=prev1;
            prev1=curr;
            
        }
        return prev1;
       
    }
};