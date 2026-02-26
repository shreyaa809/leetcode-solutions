class Solution {
public:
    string add1(string s)
    {
        int i=s.size()-1;
        while (i>=0&&s[i]=='1')
        {
            s[i]='0';
            i--;
        }
        if (i>=0)
        {
            s[i]='1';
        }
        else
        s='1'+s;

        return s;
    }
    int numSteps(string s) 
    {
        
        int c=0;
        if (s.length()==1&&s[0]=='1')
        return 0;
        while (s.length()>=1)
        {
            
            if (s.back()=='1') //odd
            {
                s=add1(s);
            }
            else //even
            {
                s.pop_back();
            }
            c++;
            
            if (s.length()==1&&s[0]=='1')
            return c;
        }
        return c;
    }
};