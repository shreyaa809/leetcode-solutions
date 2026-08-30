class Solution {
public:
    void solve (string digits, unordered_map<char,string>&mpp, int idx,vector<string>&ans,string temp)
    {
        if (idx>=digits.size())
        {
            ans.push_back(temp);
            return;
        }
        char ch=digits[idx];
        string s=mpp[ch];
        for (int i=0;i<s.size();i++)
        {
            temp.push_back(s[i]);
            solve(digits,mpp,idx+1,ans,temp);
            temp.pop_back();
            
        }
        
    }
    vector<string> letterCombinations(string digits) 
    {
        
        vector<string>ans;
        int n=digits.size();
        if (n==0)
        return ans;
        unordered_map<char,string>mpp={{'2',"abc"},{'3',"def"},{'4',"ghi"},{'5',"jkl"},{'6',"mno"},{'7',"pqrs"},{'8',"tuv"},{'9',"wxyz"}};
       
        string temp="";
        solve (digits,mpp,0,ans,temp);
        return ans;
    }
};