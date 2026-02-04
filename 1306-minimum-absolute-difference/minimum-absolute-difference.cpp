class Solution {
public:
    vector<vector<int>> minimumAbsDifference(vector<int>& nums) 
    {
        int n=nums.size();
        sort(nums.begin(),nums.end());
        int diff=INT_MAX;
        for (int i=0;i<n-1;i++)
        diff=min(diff,abs(nums[i+1]-nums[i]));

        vector<vector<int>>ans;
        
        for (int i=0;i<n-1;i++)
        {
            int difi=nums[i+1]-nums[i];
            if (difi==diff)
            ans.push_back({nums[i],nums[i+1]});
        }
        return ans;

    }
};