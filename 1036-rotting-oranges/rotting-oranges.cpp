class Solution {
public:
    int orangesRotting(vector<vector<int>>& grid) 
    {
        int n=grid.size();
        int m=grid[0].size();
        queue<pair<int,int>>q;
        int freshOrange=0;
        for (int i=0;i<n;i++)
        {
            for (int j=0;j<m;j++)
            {
                if (grid[i][j]==2)
                q.push({i,j});
                if (grid[i][j]==1)
                freshOrange++;
            }
        }
        int ans=0;
        while (!q.empty())
        {
            int a=q.size();
            bool change=false;
            for (int k=0;k<a;k++)
            {
                int i=q.front().first;
                int j=q.front().second;
                q.pop();
                
                if (grid[i][j]==2)
                {

                    if (j+1<m && grid[i][j+1]==1)
                    {
                        grid[i][j+1]=2;
                        change=true;
                        q.push({i,j+1});
                        freshOrange--;
                    }
                    if (j>0&&grid[i][j-1]==1)
                    {
                    grid[i][j-1]=2;
                    change=true;
                    q.push({i,j-1});
                    freshOrange--;
                    }
                    if (i<n-1&&grid[i+1][j]==1)
                    {
                    grid[i+1][j]=2;
                    change=true;
                    q.push({i+1,j});
                    freshOrange--;
                    }
                    if (i>0&&grid[i-1][j]==1)
                    {
                    grid[i-1][j]=2;
                    change=true;
                    q.push({i-1,j});
                    freshOrange--;
                    }


                }
            }
            if (change)
            ans++;
        }
        if (freshOrange!=0)
        return -1;
        return ans;
    }
};