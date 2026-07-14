class Solution {
public:
    bool isBipartite(vector<vector<int>>& graph) 
    {
        set<int>s1; set<int>s2;
        queue<int>q;
        
        vector<bool>vis(graph.size());
        for (int i=0;i<graph.size();i++)
        {
            if (!vis[i])
            {
            q.push(i);
            if (s1.find(i)==s1.end())
            s1.insert(i);
            else if (s2.find(i)==s2.end())
            s2.insert(i);
            else
            return false;
        while (!q.empty())
        {
            int curr=q.front();
            q.pop();            
                //jiss set mein main hun usmein mera neighbor ni hona chahiye
            
                for (auto &it:graph[curr])
                {
                    if (!vis[it])
                    {
                    q.push(it);
                    vis[it]=true;
                    }
                    if (s1.find(curr)==s1.end())
                    s1.insert(it);
                    else if  (s2.find(curr)==s2.end())
                    s2.insert(it);
                    else
                    return false;
                }
        }
        }
        }
        
        return true;
    }
};