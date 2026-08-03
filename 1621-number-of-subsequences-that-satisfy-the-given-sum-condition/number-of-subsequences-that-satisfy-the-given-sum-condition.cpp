#define MOD 1000000007
class Solution {
public:
    int numSubseq(vector<int>& nums, int target) 
    {
        int n=nums.size();
        int left=0,right=n-1;
        sort(nums.begin(),nums.end());
        int ans=0;
        vector<int>power(n);
        power[0]=1;
        for (int i=1;i<n;i++)
        {
            power[i]=(2*power[i-1])%MOD;
        }
        while (left<=right)
        {
            if ((nums[left]+nums[right])<=target)
            {
                ans=(ans+power[right-left])%MOD;
                left++;
            }
            else
            right--;
        }
        return ans;
    }
};