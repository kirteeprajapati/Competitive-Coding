class Solution
{
public:
    void nextPermutation(vector<int> &nums)
    {
        int n = nums.size(), lastInc = -1;
        if (n == 1)
            return;
        for (int i = 1; i < n; i++)
            if (nums[i] > nums[i - 1])
                lastInc = i;
        if (lastInc == -1)
        {
            for (int i = 0; i < n / 2; i++)
                swap(nums[i], nums[n - i - 1]);
            return;
        }
        int index = lastInc;
        for (int i = lastInc; i < n; i++)
            if (nums[i] > nums[lastInc - 1] && nums[i] < nums[index])
                index = i;
        swap(nums[lastInc - 1], nums[index]);
        sort(nums.begin() + lastInc, nums.end());
    }
};