class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) 
    {
        int n=nums.size();
        set<vector<int>>trip;
        sort(nums.begin(),nums.end());
        for (int i=0;i<n-2;i++)
        {
            int j=i+1,k=n-1;
            while (j<k)
            {
                int summ=nums[i]+nums[j]+nums[k];
                if (summ==0)
                {
                trip.insert({nums[i],nums[j],nums[k]});
                j++;
                k--;
                }
                else if (summ>0)
                {
                    while (j<k&&nums[i]+nums[j]+nums[k]>0)
                    k--;
                }
                else if (summ<0)
                {
                    while (j<k&&nums[i]+nums[j]+nums[k]<0)
                    j++;

                }
            }
        }
        vector<vector<int>>ans(trip.begin(),trip.end());
        return ans;
    }
};