class Solution {
public:
    bool solve(string s,string p)
    {
        if (p.length()==0)
        {
            if (s.length()==0)
            return true;
            return false;
        }
        if (s.length() == 0)
        {
            if (p.length() >= 2 && p[1] == '*')
                return solve(s, p.substr(2));

            return false;
        }

        if (p.length()>=2&&p[1]=='*')
        {
            bool not_take=solve(s,p.substr(2));
            bool take=(s[0]==p[0]||p[0]=='.')?solve(s.substr(1),p):false;
            return take||not_take;
        }
        else
        {
          
            return (p[0]==s[0]||p[0]=='.')?solve(s.substr(1),p.substr(1)):false;
        }
        return true;
    }
    bool isMatch(string s, string p) 
    {
        return solve(s,p);
    }
};