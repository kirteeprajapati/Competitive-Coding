#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int w, h, n, num = 1;
        cin >> w >> h >> n;
        if (n == 1)
        {
            cout << "YES\n";
            continue;
        }
        while (w % 2 == 0)
        {
            num *= 2;
            w /= 2;
        }
        while (h % 2 == 0)
        {
            num *= 2;
            h /= 2;
        }
        if (num >= n)
            cout << "YES" << endl;
        else
            cout << "NO\n";
    }
    return 0;
}