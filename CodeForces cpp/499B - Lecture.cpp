#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    string a, b, d;
    map<string, string> mp;
    while (m--)
    {
        cin >> a >> b;
        mp[a] = ((a.size() <= b.size()) ? a : b);
    }
    while (n--)
    {
        cin >> d;
        cout << mp[d] << " ";
    }

    return 0;
}