#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        string s;
        cin >> n;
        cin >> s;
        map<char, int> m;
        int b = 0;
        for (int i = 0; i < n; i++)
        {
            m[s[i]]++;
            if (m[s[i]] == 1)
            {
                b += 2;
            }
            else if (m[s[i]] > 1)
                b++;
        }
        cout << b << endl;
    }
    return 0;
}