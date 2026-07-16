class Solution {
public:
    long long findGcd(int a,int b)
    {
        if (b==0)
        return a;
        return findGcd(b,a%b);
        
    }
    long long gcdSum(vector<int>& nums) 
    {
        int n=nums.size();
        int max_num=INT_MIN;
        vector<long long>gcd;
        
        for (int i=0;i<n;i++)
        {
            if (nums[i]>max_num)
            {
                max_num=nums[i];
            }
            gcd.push_back(findGcd(max_num,nums[i]));
        }
        sort(gcd.begin(),gcd.end());
        int i=0,j=n-1;
        long long ans=0;
        while (i<j)
        {
            ans=ans+findGcd(gcd[i],gcd[j]);
            i++;
            j--;
        }
        return ans;
    }
};