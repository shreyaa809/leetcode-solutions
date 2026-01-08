class Solution {
public:
    int majorityElement(vector<int>& nums) 
    {
        int n=nums.size();
        int k=n/2;
        int a=nums[0];
        int c=1;
        for (int i=1;i<n;i++)
        {
            if (nums[i]==a)
            c++;
            else
            c--;
            if (c<=0 && i!=n-1)
            a=nums[i+1];
        }
        int cnt=0;
        for (int i=0;i<n;i++)
        {
            if (nums[i]==a)
            cnt++;
        }
        if (cnt>=k)
        return a;
        return -1;

    }
};