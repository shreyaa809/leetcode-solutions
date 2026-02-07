class Solution {
public:
    int minimumDeletions(string s) 
    {
        int n=s.size();
        int i=0;
        int min_del=INT_MAX;
        int del=0;
        while (s[i]=='b')
        i++;
        if (i==n)
        return 0; //all b's
        i=0;
        while (s[i]=='a')
        i++;
        if (i==n)
        return 0;  //all a's
        i=0;
        vector<int>b_bef(n);
        vector<int>a_after(n);
        i=0;
        int j=n-1;
        int b=0,a=0;
        while (i<n)
        {
            b_bef[i]=b;
            if (s[i]=='b')
            b++;
            i++;
        }
        while (j>=0)
        {
            a_after[j]=a;
            if (s[j]=='a')
            a++;
            j--;
        }
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