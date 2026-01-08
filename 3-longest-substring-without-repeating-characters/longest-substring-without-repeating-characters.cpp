class Solution {
public:
    int lengthOfLongestSubstring(string s) 
    {
        int n=s.length();
        map<char,int>mpp;
        int last_rem=-1; //last index removed
        int l=0,lmax=0;
        for (int i=0;i<n;i++)
        {
            char c=s[i];
            if (mpp.find(c)==mpp.end())
            {
                l++;
                lmax=max(l,lmax);
                mpp[c]=i;
            }
            else
            {
                if ((mpp[c])>last_rem)
                {
                l=l-(mpp[c]+1)+last_rem+1;
                last_rem=mpp[c];
                }
                l++;
                mpp[c]=i;
                lmax=max(l,lmax);
            }

        }
        return lmax;
    }
};