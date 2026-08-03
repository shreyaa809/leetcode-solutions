class Solution {
public:
    int maxProduct(vector<int>& nums) 
    {
        int n=nums.size();
        //trying brute solution
        int prod=INT_MIN;
        for (int i=0;i<n;i++)
        {
            int prod1=1;
            int j=i;
            while (j<n)
            {
                prod1=prod1*nums[j];
                prod=max(prod,prod1);
                j++;
            }
        }
        return prod;
    }
};