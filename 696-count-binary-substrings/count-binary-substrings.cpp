class Solution {
public:
    int countBinarySubstrings(string s) 
    {
        int n=s.size();
        int n0=0,n1=0;
        int num=0;
        for (int i=0;i<n;i++)
        {
            int j=i;
            if (s[i]=='0')
            {
            while (j<n&&s[j]=='0')
            {
            n0++;
            j++;
            }
            while (j<n&&s[j]=='1')
            {
            n1++;
            j++;
            if(n1==n0)
            {
                num++;
                break;
            }
            }
            
            n0=0,n1=0;
            }
            else if (s[i]=='1')
            {
        
            while (j<n&&s[j]=='1')
            {
            n1++;
            j++;
            }
            while (j<n&&s[j]=='0')
            {
            n0++;
            j++;
            if(n1==n0)
            {
                num++;
                break;
            }
            }
            
            n0=0,n1=0;
            }
        }
        return num;
    }
};