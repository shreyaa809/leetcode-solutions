// class Solution {
// public:
//     int cnt=0;
//     bool divisorGame(int n) 
//     {
//         cnt++;
//         for (int i=1;i<n;i++)
//         {
//         if (n%i==0 && n!=1)
//         return divisorGame(n-i);
        
//         }
        
//         if (n==1&&cnt%2==0)
//         return true;
//         return false;
//     }
// };
class Solution {
public:
    
    bool divisorGame(int n) 
    {
        return n%2==0;
    }
};