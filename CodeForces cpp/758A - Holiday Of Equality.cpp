#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, ma = 0, count = 0;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    sort(a, a + n);
    ma = a[n - 1];
    for (int i = 0; i < n - 1; i++)
    {
        count += (ma - a[i]);
    }
    cout << count << endl;
    return 0;
}