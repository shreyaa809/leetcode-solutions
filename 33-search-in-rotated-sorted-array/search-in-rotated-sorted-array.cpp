class Solution {
public:
    int search(vector<int>& nums, int target) 
    {
         int n=nums.size();
        int low=0,high=n-1;
        if (n==1)
        if (nums[0]==target)
        return 0;
        else return -1;
        while (low<=high)
        {
            int mid=(low+high)/2;
            if (nums[mid]==target)
            return mid;
            if (nums[mid]<nums[high])
            {
                if (target>nums[mid]&&target<=nums[high])
                low=mid+1;
                else
                high=mid;
            }
            else
            {
                if (nums[low]<=target&&target<=nums[mid])
                high=mid;
                else 
                low=mid+1;
            }
        }
        return -1;
    }
};