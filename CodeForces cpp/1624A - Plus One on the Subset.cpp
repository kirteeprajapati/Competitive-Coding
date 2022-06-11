#include <bits/stdc++.h>
using namespace std;
#define int64_t as int
void solve()
{
    int n;
    cin >> n;
    long long int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    sort(a, a + n);
    int count = a[n - 1] - a[0];
    cout << count << endl;
    return;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}
