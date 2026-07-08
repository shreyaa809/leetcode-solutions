class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) 
    {
        int n=nums.size();
        int i=0;
        sort(nums.begin(),nums.end());
        vector<vector<int>>ans;
        while (i<n)
        {
            int j=i+1; 
            int k=n-1;
            while (j<k)
            {
                
                if (nums[i]+nums[j]+nums[k]==0)
                {
                    ans.push_back({nums[i],nums[j],nums[k]});
                    

                while (j<k&&nums[j]==nums[j+1])
                j++;
                while (k>j&&nums[k]==nums[k-1])
                k--;
                j++;k--;
                }

                else if (nums[i]+nums[j]+nums[k]>0)
                k--;
                else if (nums[i]+nums[j]+nums[k]<0)
                j++;
               

            }
            while (i<n-1&&nums[i]==nums[i+1])
                i++;
            i++;
        }
        return ans;
    }
};