class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) 
    {
        int n=nums.size();
        int left=0;
        double sum=0;
        double ans=INT_MIN;
        for (int right=0;right<n;right++)
        {
            sum+=nums[right];
            if (right-left+1==k)
            {
                double avg=sum/(k*1.0);
                if (avg>ans)
                ans=avg;
                
                sum=sum-nums[left];
                left++;
            }
        }
        return ans; 
    }
};