class Solution {
public:
    int minimumDeletions(string s) 
    {
        int n=s.size();
       
        int count=0,res=0;
        for (int k=0;k<n;k++)
        {
            if (s[k]=='b')
            count++;
            else if (s[k]=='a')
            {
                if (count>0)
                {
                    res++;
                    count--;
                }
            }
        }
        return res;
    }
};