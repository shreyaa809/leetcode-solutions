class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) 
    {
        int n=nums.size();
        vector<vector<int>>ans;
        
        int i=0;
        if (n<4)
        return ans;
        sort(nums.begin(),nums.end());
        while (i<(n-2))
        {
            int j=i+1;
            
            while (j<n-1)
            {
                int k=j+1;
                int l=n-1;
                while (k<l)
                {
                    long sum=nums[i]+nums[j];
                    sum+=nums[k]+nums[l];
                    if (sum==target)
                    {
                      vector<int>v={nums[i],nums[j],nums[k],nums[l]};
                      ans.push_back(v);
                    
                       while (k<l&&nums[k]==nums[k+1])
                       k++;
                       k++;
                       while (k<l && nums[l]==nums[l-1])
                       l--;
                       l--;
                    }
                    else if (sum>target)
                    {
                        while (k<l && nums[l]==nums[l-1])
                       l--;
                       l--;  
                    }
                    else if (sum<target)
                    {
                        while (k<l&&nums[k]==nums[k+1])
                       k++;
                       k++;
                    }
                }
                while (j<n-1 &&nums[j]==nums[j+1])
                j++;
                j++;
            }
            while (i<n-2 &&nums[i]==nums[i+1])
            i++;
            i++;
        }
        return ans;
    }
};