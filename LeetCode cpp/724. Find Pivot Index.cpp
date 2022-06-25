class Solution
{
public:
    int pivotIndex(vector<int> &nums)
    {
        int pre = 0, sum = 0;
        for (int i : nums)
            sum += i;
        for (int i = 0; i < nums.size(); i++)
        {
            if ((sum - pre - nums[i]) == pre)
                return i;
            pre += nums[i];
        }
        return -1;
    }
};