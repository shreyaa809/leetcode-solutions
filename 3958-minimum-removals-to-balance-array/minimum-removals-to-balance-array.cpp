class Solution {
public:
    int minRemoval(vector<int>& nums, int k) 
    {
        int n=nums.size();
        if (n==1)
        return 0;
        sort(nums.begin(),nums.end());
        int i=0;
        int l=1;
        for (int j=1;j<n;j++)
        {
            while (nums[i]*(long long)k<nums[j])
            i++;
            l=max(l,j-i+1);
            
        }
        return n-l;
        
    }
};