class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& nums) 
    {
        vector<vector<int>>ans;
        int n=nums.size();
        sort(nums.begin(),nums.end());
        for (int i=0;i<n;i++)
        {
            int start=nums[i][0];
            int end=nums[i][1];
            int idx=i+1;
            
            while (idx<n&&nums[idx][0] <= end)
            { 
                end=max(nums[idx][1],end);
                idx++;
                              
            }
            i=idx-1;
            ans.push_back({start,end});
        }
        
        return ans;
    }
};