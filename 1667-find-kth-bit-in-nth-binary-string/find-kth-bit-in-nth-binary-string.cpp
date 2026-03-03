class Solution {
public:

    string invertbit(string res)
    {
        for (int i=0;i<res.size();i++)
        {
            if (res[i]=='1')
            res[i]='0';
            else if (res[i]=='0')
            res[i]='1';
        }
        return res;
    }
    char findKthBit(int n, int k) 
    {
        string res="";

        res= '0';
        for (int i=2;i<=n;i++)
        {
            string ress=res;
            string inv=invertbit(ress);
            reverse(inv.begin(),inv.end());
            res=ress+'1'+inv;
        }
       cout<<res;
       if ((k-1)<res.size())
       return res[k-1];
       return '0';
        
    }
};