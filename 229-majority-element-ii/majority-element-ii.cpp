class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) 
    {
        int n=nums.size();
        if (n==1)
        return nums;
        int el1=nums[0],el2=nums[1];
        int cnt1=0,cnt2=0;

        int i=0;
        while (i<n)
        {
            if (nums[i]==el1)
            cnt1++;
            else if (nums[i]==el2)
            cnt2++;
            else if (cnt1==0)
            {
            el1=nums[i];
            cnt1++;
            }
            else if (cnt2==0)
            {
            el2=nums[i];
            cnt2++;
            }
            else{
                cnt1--; cnt2--;
            }
            i++;
        }
        cnt1=0,cnt2=0;
        for (int i=0;i<n;i++)
        {
            if (nums[i]==el1)
            cnt1++;
            if (nums[i]==el2)
            cnt2++;
        }
        vector<int>ans;
        if (cnt1>n/3)
        ans.push_back(el1);
        if (cnt2>n/3&&el2!=el1)
        ans.push_back(el2);
        return ans;
    }
};