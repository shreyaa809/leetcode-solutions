class Solution {
public:
    int concatenatedBinary(int n) 
    {
        if (n==1)
        return 1;
        
        long long res=1;
        const long long Mod=1e9+7;
        int digits=1;
        for (int num=2;num<=n;num++)
        {
            if ((num&(num-1))==0)
            digits++;
            res=(((res<<digits)%Mod)+num)%Mod;
        }
        return (int)res;
    }
};