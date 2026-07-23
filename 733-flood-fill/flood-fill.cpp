class Solution {
public:
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) 
    {
        int startColor=image[sr][sc];
        queue<pair<int,int>>q;
        q.push({sr,sc});
        int n=image.size();
        int m=image[0].size();
        set<pair<int,int>>st;
        while (!q.empty())
        {
            int sizee=q.size();
            for (int k=0;k<sizee;k++)
            {
                int i=q.front().first;
                int j=q.front().second;
                q.pop();
            
                    image[i][j]=color;
                    st.insert({i,j});
                    if (i+1<n &&image[i+1][j]==startColor&&(st.find({i+1,j})==st.end()))
                    {
                        q.push({i+1,j});
                    }
                    if (i-1>=0 &&image[i-1][j]==startColor &&(st.find({i-1,j})==st.end())  )
                    {
                        q.push({i-1,j});
                    }
                    if (j+1<m &&image[i][j+1]==startColor &&(st.find({i,j+1})==st.end())  )
                    {
                        q.push({i,j+1});
                    }
                    if (j-1>=0 &&image[i][j-1]==startColor  &&(st.find({i,j-1})==st.end())  )
                    {
                        q.push({i,j-1});
                    }
            }
        }
        return image;
    }
};