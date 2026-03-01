class Solution {
public:
    string addBinary(string a, string b) 
    {
        int n1=a.size();
        int n2=b.size();
        string res="";
        int i=n1-1,j=n2-1;
        int carry=0;
        while (i>=0&&j>=0)
        {
            if (a[i]=='1'&&b[j]=='1')
            {
                if (carry==0)
                {
                res='0'+res;
                carry=1;
                }
                else
                res='1'+res;
            }
            else if((a[i]=='0'&&b[j]=='1')||(a[i]=='1'&&b[j]=='0'))
            {
                if (carry==1)
                res='0'+res;
                else
                res='1'+res;
            }
            else
            {
                if (carry==1)
                {
                    res='1'+res;
                    carry=0;
                }
                else
                res='0'+res;
            }
            i--;
            j--;
        }
        while (i>=0)
        {
            if (a[i]=='1')
            {
                if (carry==0)
                res='1'+res;
                else
                res='0'+res;
            }
            else
            {
                if (carry==0)
                res='0'+res;
                else
                {
                    res='1'+res;
                    carry=0;
                }
            }
            i--;
        }
        while (j>=0)
        {
            if (b[j]=='1')
            {
                if (carry==0)
                res='1'+res;
                else
                res='0'+res;
            }
            else
            {
                if (carry==0)
                res='0'+res;
                else
                {
                    res='1'+res;
                    carry=0;
                }
            }
            j--;
        }
        if (carry==1)
        res='1'+res;
        return res;
    }
};