class Solution {
public:
    void findAdj(int n,vector<vector<int>>&edges,vector<int>adj[])
    {
        for (auto it: edges)
        {
            int u=it[0];
            int v=it[1];
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        return;
    }
    bool validPath(int n, vector<vector<int>>& edges, int source, int destination) 
    {
        queue<int>q;
        q.push(source);
        vector<int>adj[n];
        findAdj(n,edges,adj);
        vector<bool>vis(n,false);
        
        while (!q.empty())
        {
            int p=q.front();
            q.pop();
            if (p==destination)
            return true;
            vis[p]=true;
                for (auto neighbour:adj[p])
                {
                    if (!vis[neighbour])
                    {
                        vis[neighbour]=true;
                        q.push(neighbour);
                    }
                }
            
        }
        return false;
    }
};