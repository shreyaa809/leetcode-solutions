class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) 
    {
        int n=nums.size();
        vector<int>ans;
        int c1=0,c2=0;
        
        if (n==0||n==1)
        return  nums;
        if (n==2&&(nums[0]!=nums[1]))
        return nums;
        else if (n==2&& (nums[0]==nums[1]))
        return {nums[0]};
        int el1=nums[0],el2=nums[1];
        for (int i=0;i<n;i++)
        {
            if (c1==0&& nums[i]!=el2)
            {
            el1=nums[i];
            c1++;
            }
            else if (c2==0&&nums[i]!=el1)
            {
            el2=nums[i];
            c2++;
            }
            else if (nums[i]==el1)
            {
                c1++;
            }
            else if (nums[i]==el2)
            c2++;
            else
            {
                c1--;c2--;
            }
        }
        int cnt1=0,cnt2=0;
        for (int i=0;i<n;i++)
        {
            if (nums[i]==el1)
            cnt1++;
            else if (nums[i]==el2)
            cnt2++;
        }
        if (cnt1>(n/3))
        ans.push_back(el1);
        if (cnt2>(n/3))
        ans.push_back(el2);
        return ans;
    }
};