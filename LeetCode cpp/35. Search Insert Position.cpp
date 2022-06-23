class Solution
{
public:
    int searchInsert(vector<int> &nums, int target)
    {
        int n = nums.size(), l = 0, m;
        int r = n - 1;
        if (target < nums[l])
            return 0;
        else if (target > nums[r])
            return n;
        while (l < r)
        {
            m = (r + l) / 2;
            if (nums[m] == target)
                return m;
            else if (nums[m] < target)
                l = m + 1;
            else
                r = m;
        }
        return r;
    }
};