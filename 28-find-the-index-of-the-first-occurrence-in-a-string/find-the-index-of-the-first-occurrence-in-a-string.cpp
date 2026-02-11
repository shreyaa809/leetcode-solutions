class Solution {
public:
    int strStr(string haystack, string needle) 
    {
        int n1=haystack.size();
        int n2=needle.size();
        int j=0;
        int idx=-1;int st=-1;
        for (int i=0;i<n1;i++)
        {
            st=i;
            int k=i;
            while(j<n2&&k<n1&&haystack[k]==needle[j])
            {
                
                k++;
                j++;
            }
            if (j==n2)
            {
            idx=st;
            return st;
            }
            else
            {
                j=0;
               
            }

        }
        return idx;
    }
};