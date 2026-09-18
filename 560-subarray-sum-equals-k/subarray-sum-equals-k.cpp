class Solution {
public:
    int subarraySum(vector<int>& nums, int k) 
    {
        int n=nums.size();
        map<int,int>mpp;  //sum,freq
        mpp[0]=1;
        long long sum=0;
        int cnt=0;
        for (int i=0;i<n;i++)
        {
            sum+=nums[i];
            int reqd=sum-k;
            if (mpp.find(reqd)!=mpp.end())
            cnt+=mpp[reqd];
            mpp[sum]++;
            
        }
        
       
        return cnt;        
    }
};