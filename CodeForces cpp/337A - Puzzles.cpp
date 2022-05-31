#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, m;
    cin >> n >> m;
    int s[m];
    for (int i = 0; i < m; i++)
    {
        cin >> s[i];
    }
    sort(s, s + m);
    int min = s[m - 1] - s[0];
    for (int i = 1; i <= m - n; i++)
    {
        if (s[i + n - 1] - s[i] < min)
            min = s[i + n - 1] - s[i];
    }
    cout << min << endl;
    return 0;
}