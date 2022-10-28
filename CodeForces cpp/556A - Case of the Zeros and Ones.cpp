#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, j = 0;
    string s;
    cin >> n >> s;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == '0')
        {
            j++;
        }
    }
    cout << n - (2 * min(j, n - j)) << endl;
    return 0;
}