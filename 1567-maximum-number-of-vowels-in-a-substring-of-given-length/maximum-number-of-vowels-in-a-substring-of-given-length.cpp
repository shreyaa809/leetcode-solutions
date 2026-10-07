class Solution {
public:
    int maxVowels(string s, int k) 
    {
        int n=s.length();
        int v_count=0;
        int left=0;
        map<int,int>mpp; //index,count till that idx
        
        if (s[0]=='a'||s[0]=='e'||s[0]=='i'||s[0]=='o'||s[0]=='u'||s[0]=='A'||s[0]=='E'||s[0]=='I'||s[0]=='O'||s[0]=='U')
        mpp[0]=1;
        else
        mpp[0]=0;
        int ans=mpp[0];
        int st,end;
        for (int right=0;right<n;right++)
        {
            char ch=s[right];
            if (ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U')
            mpp[right]=mpp[right-1]+1;
            else
            mpp[right]=mpp[right-1];
            if (right-left+1==k)
            {
                if (left == 0)
        {
        if (mpp[right] > ans)
        {
        ans = mpp[right];
        st = left;
        end = right;
        }
        }
    else
    {
    if (mpp[right] - mpp[left-1] > ans)
    {
        ans = mpp[right] - mpp[left-1];
        st = left;
        end = right;
    }
}
                
                
                left++;
            }
        }
        cout<<"left: "<<st<<"right: "<<end;
        return ans;
    }
};