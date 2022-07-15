#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, j, count = 0;
        cin >> n;
        for (int i = 0; i < 2 * n; i++)
        {
            cin >> j;
            if (j % 2 == 0)
                count++;
        }
        cout << ((count == n) ? "YES\n" : "NO\n");
    }
    return 0;
}
