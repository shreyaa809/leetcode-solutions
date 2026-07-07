class Solution {
public:
    int majorityElement(vector<int>& nums) 
    {
        int n=nums.size();
        int el=nums[0]; 
        if (n==1)
        return el;
        if (n==2&&nums[0]==nums[1])
        return el;

        int i=0;
        int cnt=0;
        while (i<n)
        {
            if (cnt<=0)
            {
                el=nums[i];
                cnt=0;
            }
            if (nums[i]==el)
            cnt++;
            if (nums[i]!=el)
            cnt--;
            
            i++;
        }
        return el;
    }
};