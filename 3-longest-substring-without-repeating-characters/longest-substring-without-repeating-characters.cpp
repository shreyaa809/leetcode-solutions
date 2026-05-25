class Solution {
public:
    int lengthOfLongestSubstring(string s) 
    {
        int n=s.length();
        if (n==1||n==0)
        return n;
        map<char,int>mpp;
        int count=0,c=0;
        int i=0,j=i;
        while (i<n&&j<n)
        {
            if (mpp.find(s[j])==mpp.end())
            {
                mpp[s[j]]=j;
                c++;
                j++;

            }
            else
            {
                if (mpp[s[j]]<i)
                {
                    c++;
                    mpp[s[j]]=j;
                    j++;
                    
                    continue;
                }
                count=max(count,c);
                c=j-mpp[s[j]];
                i=mpp[s[j]]+1;
                mpp[s[j]]=j;
                j++;
            
            }
        }
        //if whole string unique
        count=max(count,c);
        return count;
    }
};