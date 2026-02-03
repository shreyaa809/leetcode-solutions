class Solution {
public:
    bool isTrionic(vector<int>& nums) 
    {
        int n = nums.size();
        if (n < 4) return false;

        int p = -1, q = -1;
        int flag = 0; 

        for (int i = 0; i < n - 1; i++)
        {
            int diff = nums[i + 1] - nums[i];

            if (diff == 0)
                return false;

            if (flag == 0)
            {
                if (diff > 0) continue;
                p = i;
                flag = 1;
            }
            else if (flag == 1)
            {
                if (diff < 0) continue;
                q = i;
                flag = 2;
            }
            else
            {
                if (diff <= 0)
                    return false;
            }
        }

        if (flag == 2 && q == -1)
            q = n - 2;

        if (p <= 0) return false;
        if (q <= p) return false;
        if (q >= n - 1) return false;

        return true;
    }
};
