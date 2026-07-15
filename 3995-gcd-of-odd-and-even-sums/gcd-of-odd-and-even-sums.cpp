class Solution {
public:
    int findGcd(int a,int b)
    {
        if (b==0)
        return a;
        return findGcd(b,a%b);


    }
    int gcdOfOddEvenSums(int n) 
    {
        long long sumOdd=0,sumEven=0;
        for (int i=1;i<=2*n;i++)
        {
            if  (i%2!=0)
            sumOdd+=i;
            else sumEven+=i;
        }
        return findGcd(sumOdd,sumEven);
       
    }
};