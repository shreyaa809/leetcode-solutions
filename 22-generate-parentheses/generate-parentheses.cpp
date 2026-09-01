class Solution {
public:
    void solve(int s,int e,vector<string>&ans,string temp)
    {
        if (s==0)
        {
            if (e!=0)
            {
                while (e!=0)
                {
                    temp.push_back(')');
                    e--;
                }
            }
            ans.push_back(temp);
            return;
        }
        if (s>0)
        {
        temp.push_back('(');
        solve(s-1,e,ans,temp);
        temp.pop_back();
        }
        if (e>s)
        {
        temp.push_back(')');
        solve(s,e-1,ans,temp);
        temp.pop_back();
        }
        
    }
    vector<string> generateParenthesis(int n) 
    {
        vector<string>ans;
        solve(n,n,ans,"");
        return ans;
    }
};