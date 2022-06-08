#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    int q, k;
    cin >> q;
    sort(a, a + n);
    while (q--)
    {
        cin >> k;
        int ans = upper_bound(a, a + n, k) - a;
        cout << ans << endl;
    }
    return 0;
}