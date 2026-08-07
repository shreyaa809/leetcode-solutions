class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) 
    {
        int n=nums.size();
        sort(nums.begin(),nums.end());
        int i=0;
        int ans=nums[0]+nums[1]+nums[2];
        int diff=INT_MAX;
        while (i<n)
        {
            int j=i+1,k=n-1;
        while (j<k)
        {
            if (nums[i]+nums[j]+nums[k]==target)
            return target;
            else if (nums[i]+nums[j]+nums[k]>target)
            {
                int diff1=abs(target-(nums[i]+nums[j]+nums[k]));
                if (diff1<diff)
                {
                    diff=diff1;
                    ans=nums[i]+nums[j]+nums[k];
                }
                k--;
            }
            else
            {
                int diff1=abs(target-(nums[i]+nums[j]+nums[k]));
                if (diff1<diff)
                {
                    diff=diff1;
                    ans=nums[i]+nums[j]+nums[k];
                }
                j++;
            }
        }
        i++;
        }
        return ans;
    }
};