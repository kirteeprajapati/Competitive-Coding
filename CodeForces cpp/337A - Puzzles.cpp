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
    int min = s[n - 1] - s[0];
    for (int j = 1; j <= m - n; j++)
    {
        if (s[j + n - 1] - s[j] < min)
            min = s[j + n - 1] - s[j];
    }
    cout << min << endl;
    return 0;
}
