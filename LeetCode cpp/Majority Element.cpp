int Solution::majorityElement(const vector<int> &A)
{
    int candidate = 0, count = 0;
    for (int num : A)
    {
        if (count == 0)
            candidate = num;
        if (num == candidate)
            count++;
        else
            count--;
    }
    return candidate;
}
