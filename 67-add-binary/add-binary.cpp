class Solution {
public:
    string addBinary(string a, string b) 
    {
        int n1=a.length();
        int n2=b.length();
        int i=n1-1,j=n2-1;
        int flag=0;
        string s="";

        while (i>=0||j>=0||flag)
        {
            int sum=flag;
            if (i>=0)
            {
            sum+=a[i]-'0';
            i--;
            }
            if (j>=0)
            {
                sum+=b[j]-'0';
                j--;
            }
            s+=(sum%2)+'0';
            flag=sum/2;

        }


        // while (i>=0&&j>=0)
        // {
        //     if (a[i]=='0'&&b[j]=='0')
        //     {
        //     if (flag==0)
        //     s+="0";
        //     else
        //     {
        //     s+="1";
        //     flag=0;
        //     }
        //     }
        //     else if ((a[i]=='0'&&b[j]=='1')||(a[i]=='1'&&b[j]=='0'))
        //     {
        //         if (flag==0)
        //         s+="1";
        //         else
        //         s+="0";
        //     }
        //     else if (a[i]=='1'&&b[j]=='1')
        //     {
        //         if (flag==1)
        //         s+="1";
        //         else
        //         s+="0";
        //         flag=1;
        //     }
            
        //     i--;j--;
        // }
        // while (i>=0)
        // {
        //     if (a[i]=='0'&&flag==0)
        //     s+="0";
        //     else if (a[i]=='0'&&flag==1)
        //     {
        //     s+="1";
        //     flag=0;
        //     }
        //     else if (a[i]=='1'&&flag==0)
        //     s+="1";
        //     else if (a[i]=='1'&&flag==1)
        //     s+="0";
        //     i--;
        // }
        // while (j>=0)
        // {
        //     if (b[j]=='0'&&flag==0)
        //     s+="0";
        //     else if (b[j]=='0'&&flag==1)
        //     {
        //     s+="1";
        //     flag=0;
        //     }
        //     else if (b[j]=='1'&&flag==0)
        //     s+="1";
        //     else if (b[j]=='1'&&flag==1)
        //     s+="0";
        //     j--;
        // }
        // if (flag==1)
        // s+="1";
        reverse(s.begin(),s.end());
        return s;
    }
};