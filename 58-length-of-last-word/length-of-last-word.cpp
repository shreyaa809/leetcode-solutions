class Solution {
public:
    int lengthOfLastWord(string s) 
    {
        int n=s.length();
        int l=0;
        if (n==0)
        return l;
        for (int i=n-1;i>=0;i--)
        {
            if (i==n-1)
            while (s[i]==' ')
            i--;
            if (s[i]==' ')
            return l;
            else
            l++;
        }
        return l;
    }
};