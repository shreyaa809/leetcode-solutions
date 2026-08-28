class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& nums) 
    {
        vector<vector<int>>ans;
        int n=nums.size();
        bool last_taken=false;
        sort(nums.begin(),nums.end());
        vector<bool>vis(n);
        for (int i=0;i<n-1;i++)
        {
            int start=nums[i][0];
            int end=nums[i][1];
            int idx=i;
            bool change=false;
            while (!vis[idx]&&idx<n&&((nums[idx][1]>=end&&nums[idx][0]<=end)||(nums[idx][1]<end&&nums[idx][0]<end)))
            {
                vis[idx]=true;
                end=max(nums[idx][1],end);
                idx++;
                change=true;
                
            }
            if (change)
            ans.push_back({start,end});
        }
        if (!vis[n-1])
        ans.push_back({nums[n-1][0],nums[n-1][1]});
        return ans;
    }
};