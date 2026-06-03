class Solution {
public:
    vector<int>leftmax(vector<int>& height)
    {
        int n=height.size();
        int maxi=height[0];
        vector<int>nums(n);
        for (int i=0;i<n;i++)
        {
            maxi=max(maxi,height[i]);
            nums[i]=maxi;
        }
        return nums;
    }
    vector<int>rightmax(vector<int>& height)
    {
        int n=height.size();
        int maxi=height[n-1];
        vector<int>nums(n);
        for (int i=n-1;i>=0;i--)
        {
            maxi=max(maxi,height[i]);
            nums[i]=maxi;
        }
        return nums;
    }
    int trap(vector<int>& height) 
    {
        int n=height.size();
        int total=0;
        vector<int>lm=leftmax(height);
        vector<int>rm=rightmax(height);
        for (int i=0;i<n;i++)
        {
            total+=min(lm[i],rm[i])-height[i];
        }
        return total;
    }
};