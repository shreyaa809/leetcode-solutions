class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) 
    {
        int n=nums.size();
        int prod=1;
        int zero=0;
     
        for (int i=0;i<n;i++)
        {
            if (nums[i]!=0)
            prod=prod*nums[i];
            else
            zero++;
        }
        for (int i=0;i<n;i++)
        {
            int num=nums[i];
            if (zero!=0&&nums[i]!=0)
            nums[i]=0;
            else if (zero!=0&&num==0)
            {
                if (zero==1)
                nums[i]=prod;
                else
                nums[i]=0;
            }
            else
            nums[i]=prod/num;
        }
        return nums;
    }
};