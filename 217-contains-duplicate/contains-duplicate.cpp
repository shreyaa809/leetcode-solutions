class Solution {
public:
    bool containsDuplicate(vector<int>& nums) 
    {
        int n=nums.size();
        unordered_set<int>s(nums.begin(),nums.end());
        if (n==s.size())
        return false;
        return true;
    }
};