class Solution {
public:
    int maxProfit(vector<int>& prices) 
    {
        int n=prices.size();
        int buy=INT_MAX,sell=INT_MIN;
        int profit=0;
        for (int i=0;i<n;i++)
        {
            bool sold=false;
            if (prices[i]<buy)
            {
                buy=prices[i];
            }
            else if (prices[i]>buy)
            {
            sell=prices[i];  
            sold=true;
            }
            if (sold)
            profit=max(profit,sell-buy);
        }
        return profit;
    }
};