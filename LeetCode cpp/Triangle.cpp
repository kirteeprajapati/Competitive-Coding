class Solution
{
public:
    int minimumTotal(vector<vector<int>> &triangle)
    {
        int n = triangle.size();
        vector<int> minlen(triangle.back()); // store the last row
        for (int i = n - 2; i >= 0; i--)
        {                                                                   // no of levels in triangle
            for (int j = 0; j <= i; j++)                                    // elements in each level
                minlen[j] = min(minlen[j], minlen[j + 1]) + triangle[i][j]; // sum of current element with min of row below
        }
        return minlen[0];
    }
};