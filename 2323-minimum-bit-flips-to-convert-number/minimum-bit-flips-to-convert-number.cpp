class Solution {
public:
    int minBitFlips(int start, int goal) 
    {
        int ans=start^goal;
        int num=__builtin_popcount(ans);
        return num;
    }
};