class Solution {
public:
    int myAtoi(string s) {
        int n=s.length();
        int sign=1;
        int i=0;
        long long num=0;
        while (s[i]==' ')
        i++;
        if (s[i]=='-')
        {
            sign=-1;
            i++;
        }
        else if(s[i]=='+')
        i++;
        
        for (int j=i;j<n;j++)
        {
            char ch=s[j];
            if (!isdigit(ch))
            break;
            int n=ch-'0';
            if (num > INT_MAX / 10 || num == INT_MAX / 10 && n > INT_MAX % 10)
            return sign == 1 ? INT_MAX : INT_MIN;

            num=num*10+n;
        }
        num=num*sign;
        if (num>INT_MAX)
        return INT_MAX;
        else if (num<INT_MIN)
        return INT_MIN;
        return (int)num;
        
    }
};