class Solution {
public:
    int minSwaps(vector<vector<int>>& grid) 
    {
        int n=grid.size();
        vector<int>v(n);
        for (int i=0;i<n;i++)
        {
            int cnt=0;
            for (int j=n-1;j>=0;j--)
            {
               
                if (grid[i][j]==0)
                cnt++;
                else
                break;   
            }
            v[i]=cnt;
        } //counted number of zeros
        int count=0;
        for (int i=0;i<n;i++)
        {
            int req=n-i-1;
            int found=-1;
           
            for (int k=i;k<n;k++)
            {
                if (v[k]>=req)
                {
                    count+=k-i;
                    while (k > i)
                    {
                        swap(v[k], v[k - 1]);
                        k--;
                    }
                    found=1;
                    break;
                }
             }
            if (found==-1)
            return -1;
        }
            
    
    return count;
    }
};


