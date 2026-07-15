class Solution {
public:
    // int findGcd(int a,int b)
    // {
    //     if (a==1||b==1)
    //     return 1;
    //     retur


    // }
    int gcdOfOddEvenSums(int n) 
    {
        long long sumOdd=0,sumEven=0;
        for (int i=1;i<=2*n;i++)
        {
            if  (n%2!=0)
            sumOdd+=i;
            else sumEven+=i;
        }
        // return findGcd(sumOdd,sumEven);
        return n;
    }
};