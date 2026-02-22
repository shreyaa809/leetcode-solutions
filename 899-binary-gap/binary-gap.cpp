class Solution {
public:
    int binaryGap(int n) 
    {
        int num=__builtin_popcount(n);
        if(num==0||num==1)
        return 0;

        int dis=INT_MIN;
        int a=n;
        string res="";
        while (a>1)
        {
            res+=(a%2)+'0';
            a=a/2;
        }
        if (a==1)
        res+='1';
        reverse(res.begin(),res.end());


        int st=0;
        int found_1=-1;
        for (int i=0;i<res.length();i++)
        {
            if (found_1==-1&&res[i]=='1')
            {
                st=i;
                found_1=0;
            }
            else if (res[i]=='1')
            {
                dis=max(dis,i-st);
                st=i;
            }
        }
        return dis;
    }
};