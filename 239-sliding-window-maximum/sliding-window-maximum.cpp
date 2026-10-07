class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) 
    {
        int n=nums.size();
        int left=0;
        deque<int>deq;
        vector<int>result;
        for (int right=0;right<n;right++)
        {
            
            
            //exceed na kre
            while(!deq.empty()&&deq.front()<=right-k)
            deq.pop_front();

            //agar neeche wale chote hain toh ignore
            while (!deq.empty()&&nums[right]>nums[deq.back()])
            deq.pop_back();

            deq.push_back(right);
            if (right>=k-1)
            result.push_back(nums[deq.front()]);
        }
        return result;
    }
};