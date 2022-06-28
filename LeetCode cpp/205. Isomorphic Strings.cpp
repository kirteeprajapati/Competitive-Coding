class Solution
{
public:
    bool isIsomorphic(string s, string t)
    {
        int len = s.size();
        unordered_map<char, char> mapping;
        unordered_set<char> storedto;
        for (int i = 0; i < len; i++)
        {
            if (mapping.count(s[i]) == 0 && storedto.count(t[i]) == 0)
            {
                mapping[s[i]] = t[i];
                storedto.insert(t[i]);
            }
            else if (mapping.count(s[i]) == 0 && storedto.count(t[i]))
                return false;
            else if (mapping[s[i]] != t[i])
                return false;
        }
        return true;
    }
};