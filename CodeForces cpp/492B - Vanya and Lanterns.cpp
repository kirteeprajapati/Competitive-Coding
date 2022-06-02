#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, l;
    cin >> n >> l;
    int s[n];
    for (int i = 0; i < n; i++)
    {
        cin >> s[i];
    }
    sort(s, s + n);
    int m = 2 * max(l - s[n - 1], s[0]);
    for (int i = 1; i < n; i++)
        if (m < (s[i] - s[i - 1]))
            m = (s[i] - s[i - 1]);

    cout << fixed << setprecision(9) << (double)m / 2 << endl;
    return 0;
}