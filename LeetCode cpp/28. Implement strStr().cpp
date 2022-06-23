class Solution
{
public:
    int strStr(string haystack, string needle)
    {
        if (needle.size() > haystack.size())
            return -1;
        for (int j = 0; j <= (haystack.size() - needle.size()); j++)
        {
            if (string(haystack.begin() + j, haystack.begin() + j + needle.size()) == needle)
                return j;
        }
        return -1;
    }
};