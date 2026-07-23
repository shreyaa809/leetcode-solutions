class Solution {
public:
    void dfs(vector<vector<int>>& ans, int sr, int sc, int color,int start)
    {
        if (sr<0||sc<0||sr>=ans.size()||sc>=ans[0].size()||ans[sr][sc]==color||ans[sr][sc]!=start)
        return;
        ans[sr][sc]=color;
        dfs(ans,sr-1,sc,color,start);
        dfs(ans,sr+1,sc,color,start);
        dfs(ans,sr,sc-1,color,start);
        dfs(ans,sr,sc+1,color,start);
    }
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) 
    {
        vector<vector<int>>ans=image;
        int start=image[sr][sc];
        dfs(ans,sr,sc,color,start);
        return ans;
    }
};