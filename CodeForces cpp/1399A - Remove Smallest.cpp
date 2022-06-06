#include <bits/stdc++.h>
using namespace std;
int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        if (n == 1)
        {
            cout << "YES\n";
            continue;
        }
        sort(a, a + n);
        vector<int> v;
        for (int j = 1; j < n; j++)
        {
            v.push_back(abs(a[j] - a[j - 1]));
        }
        sort(v.begin(), v.end(), greater<int>());
        if (v[0] > 1)
            cout << "NO\n";
        else
            cout << "YES\n";
    }

    return 0;
}