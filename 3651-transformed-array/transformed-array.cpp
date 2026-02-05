class Solution {
public:
    int moveleft(int i,int k, int n)  //which index u land at if u move k indices left
    {
        while (k>0)
        {
            if (i==0)
            i=n-1;
            else
            i--;
            k--;
        }
        if (i<0)
        return n-1;
        return i;
    }
    int moveright(int i,int k,int n)
    {
        while (k>0)
        {
            if (i==n-1)
            i=0;
            else
            i++;
            k--;
        }
        if (i>=n)
        return 0;

        return i;
    }
    vector<int> constructTransformedArray(vector<int>& nums) 
    {
        int n=nums.size();
        vector<int>result(n);
        for (int i=0;i<n;i++)
        {
            int k=(nums[i])%n;
            if (nums[i]>0)
            result[i]=nums[moveright(i,k,n)];
            else if (nums[i]==0)
            result[i]=nums[i];
            else
            result[i]=nums[moveleft(i,abs(k),n)];

        }
        return result;
    }
};