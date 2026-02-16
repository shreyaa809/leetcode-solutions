class Solution {
public:
    int reverseBits(int n) 
    {
        int num=0;
        for (int i=0;i<32;i++)
        {
            int r=n%2;
            num=num*2+r;
            n=n/2;
        }
        return num;
    }
};