class Solution
{
public:
    int findDuplicate(vector<int> &nums)
    {
        int n = nums.size(), max_idx = 0, cur_max = 0;
        for (int i = 0; i < n; i++)
            nums[nums[i] % n] += n;
        for (int i = 0; i < n; i++)
        {
            if (nums[i] > cur_max)
            {
                cur_max = nums[i];
                max_idx = i;
            }
            nums[i] %= n;
        }
        return max_idx;
    }
};