class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) 
    {
        int m=nums1.size(),n=nums2.size();
        vector<int>ans;
        int i=0,j=0;
        while (i<m&&j<n)
        {
            if (nums1[i]>=nums2[j])
            {
                ans.push_back(nums2[j]);
                j++;
            }
            else
            {
                ans.push_back(nums1[i]);
                i++;
            }
        }
        while (i<m)
        {
            ans.push_back(nums1[i]);
            i++;
        }
        while (j<n)
        {
            ans.push_back(nums2[j]);
            j++;
        }
        if (ans.size()%2==0)
        {
            int a=ans.size()/2;
            int b=(ans.size()/2)-1;
            return (ans[a]+ans[b])/2.0;
        }
        return ans[ans.size()/2];
    }
};