#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string key, s;
        int b = 0;
        cin >> key >> s;
        char a[27];
        map<char, int> m;
        for (int i = 1; i <= 26; i++)
        {
            m[key[i]] = i;
        }
        for (int i = 1; i < s.size(); i++)
        {
            b += abs(m[s[i]] - m[s[i - 1]]);
        }
        cout << b << endl;
    }
    return 0;
}