#include <bits/stdc++.h>
#define fastread() (ios_base::sync_with_stdio(false), cin.tie(NULL));
using namespace std;

int main()
{
    fastread();
    int s, m;
    cin >> m >> s;
    if (s == 0)
    {
        cout << ((m == 1) ? "0 0" : "-1 -1") << endl;
        return 0;
    }
    string mini = "", maxi = "";
    for (int i = 0; i < m; i++)
    {
        int k = min(9, s);
        maxi.push_back(k + '0');
        s -= k;
    }
    if (s > 0)
    {
        cout << "-1 -1" << endl;
        return 0;
    }
    for (int i = m - 1; i >= 0; i--)
        mini.push_back(maxi[i]);
    int i = 0;
    while (mini[i] == '0')
    {
        i++;
        mini[0]++;
        mini[i]--;
    }
    cout << mini << " " << maxi;
    return 0;
}