class Solution {
public:
    vector<int> nextGreater(vector<int>nums2)
    {
        int n=nums2.size();
        int nG=-1;
        vector<int>ng(n);
        stack<int>st;
        for (int i=n-1;i>=0;i--)
        {
            if (st.empty())
            ng[i]=-1;
            
            
            while (!st.empty()&&st.top()<=nums2[i])
            st.pop();
            
            if (st.empty())                
            ng[i]=-1;
            else
            {
            ng[i]=st.top();
            }
            st.push(nums2[i]);
        }
        return ng;
    }
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) 
    {
        vector<int>ng=nextGreater(nums2);
        vector<int>ans(nums1);
        for (int i=0;i<nums1.size();i++)
        {
            for(int j=0;j<nums2.size();j++)
            {
                if (nums1[i]==nums2[j])
                ans[i]=ng[j];
            }
        }
        return ans;
    }
};