class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) 
    {
        int n=nums.size();
        int prod=1;
        int zero=0;
        vector<int>ans(n);
        for (int i=0;i<n;i++)
        {
            if (nums[i]!=0)
            prod=prod*nums[i];
            else
            zero++;
        }
        for (int i=0;i<n;i++)
        {
            if (zero!=0&&nums[i]!=0)
            ans[i]=0;
            else if (zero!=0&&nums[i]==0)
            {
                if (zero==1)
                ans[i]=prod;
                else
                ans[i]=0;
            }
            else
            ans[i]=prod/nums[i];
        }
        return ans;
    }
};