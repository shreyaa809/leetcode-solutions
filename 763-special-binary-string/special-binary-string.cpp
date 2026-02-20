class Solution {
public:
    string makeLargestSpecial(string s) 
    {
        // concept yeh h ki 1 is treated as open paranthesis(+1)and 0 as closed(-1) 
        int n=s.size();
        int sum=0;
        int start=0;
        vector<string>ans;
        for (int i=0;i<n;i++)
        {
            sum+=s[i]=='1'?1:-1;
            if (sum==0)
            {
                string new1=makeLargestSpecial(s.substr(start+1,i-start-1));
                ans.push_back('1'+new1+'0');
                start=i+1;
            }
        }
        sort(ans.begin(),ans.end(),greater<string>());
        string res="";
        for (auto it:ans)
        res+=it;
        return res;
    }
};