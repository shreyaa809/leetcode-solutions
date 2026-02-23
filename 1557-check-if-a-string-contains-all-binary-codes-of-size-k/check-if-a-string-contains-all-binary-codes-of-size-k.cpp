class Solution {
public:
    bool hasAllCodes(string s, int k) 
    {
        int n = s.length();
        if (k > n) return false;

        unordered_set<int> seen;
        int num = 0;

        for (int i = 0; i < n; i++)
        {
            num = ((num << 1) & ((1 << k) - 1)) | (s[i] - '0');

            if (i >= k - 1)
                seen.insert(num);
        }

        return seen.size() == (1 << k);
    }
};