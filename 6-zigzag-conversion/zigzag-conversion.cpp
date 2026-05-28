class Solution {
public:
    string convert(string s, int numRows) 
    {
        int n=s.length();
        if (n==0||n==1||numRows==1)
        return s;
        string ans="";
        for (int i=0;i<numRows;i++)
        {
            int idx=i;
            int south=2*(numRows-i-1);
            int north=2*i;
            bool goingSouth=true;
            while(idx<n)
            {
                ans+=s[idx];
                if (i==0)
                idx+=south;
                else if (i==numRows-1)
                idx+=north;
                else
                {
                    if (goingSouth)
                    idx+=south;
                    else
                    idx+=north;
                }
                goingSouth=!goingSouth;
            }

        }
        return ans;
        
    }
};