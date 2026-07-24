class Solution {
public:
    vector<vector<int>> updateMatrix(vector<vector<int>>& mat) 
    {
        int n=mat.size();
        int m=mat[0].size();
        //min dist->bfs (not dfs)
        queue<pair<int,int>>q;
        vector<vector<int>>ans(n,vector<int>(m,-1));
        vector<vector<int>>directions={{1,0},{-1,0},{0,1},{0,-1}};
        for (int i=0;i<n;i++)
        {
            for (int j=0;j<m;j++)
            {
                if (mat[i][j]==0)
                {
                q.push({i,j});
                ans[i][j]=0;
                }
            }
        }
        
        while (!q.empty())
        {
            
                int i=q.front().first;
                int j=q.front().second;
                q.pop();
                
                for (auto &it:directions)
                {
                    int new_i=i+it[0];
                    int new_j=j+it[1];
                    if (new_i>=0&&new_j>=0&&new_i<n&&new_j<m&&ans[new_i][new_j]==-1)
                    {
                      ans[new_i][new_j]=1+ans[i][j];
                      q.push({new_i,new_j});
                    }
                }
            
        }
        return ans;
    }
};