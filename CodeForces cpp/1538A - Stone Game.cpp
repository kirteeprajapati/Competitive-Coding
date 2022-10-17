#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, mi = INT_MAX, ma = INT_MIN, s, l, a1, b, c, d, e;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            if (a[i] < mi)
            {
                mi = a[i];
                s = i + 1;
            }
            if (a[i] > ma)
            {
                ma = a[i];
                l = i + 1;
            }
        }
        a1 = min(l - 1, n - l);
        b = min(s - 1, n - s);
        c = abs(l - s);
        if (c > a1 && c > b)
            cout << a1 + b + 2 << endl;
        else
        {
            d = min(a1, b);
            e = min(max(a1, b), c);
            cout << d + e + 1 << endl;
        }
    }
    return 0;
}