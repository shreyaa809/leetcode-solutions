class Solution {
public:
    int minBitFlips(int start, int goal) 
    {
        int ans=start^goal;
        int num=0;
        while (ans>0)
        {
            if (ans%2==1)
            num++;
            ans/=2;
        }
        
        return num;
    }
};