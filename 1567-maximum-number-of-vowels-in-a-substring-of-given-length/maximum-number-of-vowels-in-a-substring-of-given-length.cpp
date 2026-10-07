class Solution {
public:
    bool isVowel(char ch)
    {
        if (ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U')
        return true;
        return false;
    }
    int maxVowels(string s, int k) 
    {
        int n=s.size();
        int left=0;
        int v_count=0;
        int ans=0;
        for (int right=0;right<n;right++)
        {
            if (isVowel(s[right]))
                v_count++;
            if (right-left+1==k)
            {
                if (v_count>ans)
                ans=v_count;
                if (isVowel(s[left]))
                v_count-=1;

                left++;
            }
        }
        return ans;
    }
};