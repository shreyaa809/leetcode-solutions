class Solution {
public:
    void dfs(vector<vector<int>>& isConnected,vector<bool>&vis,int u)
    {
        vis[u]=true;
        for (int v=0;v<isConnected.size();v++)
        {
            if (!vis[v]&&isConnected[u][v]==1)
            dfs(isConnected,vis,v);
        }
        return;
    }
    int findCircleNum(vector<vector<int>>& isConnected) 
    {
        int n=isConnected.size();
        int cnt=0;
        vector<bool>vis(n);
        for (int i=0;i<n;i++)
        {
            if (!vis[i])
            {
                dfs(isConnected,vis,i);
                cnt++;
            }
        }
        return cnt;
    }
};