class Solution {
public:

    vector<int>psee(vector<int>&nums)
    {
        int n=nums.size();
        stack<int>st;
        vector<int>p(n);
        for (int i=0;i<n;i++)
        {
            while(!st.empty()&&nums[i]<nums[st.top()])
            st.pop();
            p[i]=st.empty()?-1:st.top();
            st.push(i);
        }
        return p;
    }
    vector<int>nse(vector<int>&nums)
    {
        int n=nums.size();
        stack<int>st;
        vector<int>p(n);
        for (int i=n-1;i>=0;i--)
        {
            while(!st.empty()&&nums[i]<=nums[st.top()])
            st.pop();
            p[i]=st.empty()?n:st.top();
            st.push(i);
        }
        return p;
    }
    
    int largestRectangleArea(vector<int>& heights) 
    {
        int n=heights.size();
        
        vector<int>left=psee(heights);
        vector<int>right=nse(heights);
        
        long long ans=0;
        for (int i=0;i<n;i++)
        {
            long long area=(right[i]-left[i]-1)*1LL*heights[i];
            ans=max(area,ans);
        }
        return ans;
    }
};