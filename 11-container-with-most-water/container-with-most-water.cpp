class Solution {
public:
    int maxArea(vector<int>& arr) 
    {
        int n=arr.size();
        long long area=0;

        int i=0,j=n-1;
        while (i<j)
        {
            area=max(area,(min(arr[i],arr[j])*1LL*(j-i)));
            if (arr[i]<arr[j])
            i++;
            else if (arr[i]>arr[j])
            j--;
            else
            {
                i++;j--;
            }
        }
        return area;

    }
};