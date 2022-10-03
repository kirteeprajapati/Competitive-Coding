#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m, q;
    cin >> n >> m;
    int a[n], result[n + 1];
    set<int> dis;
    for (int i = 0; i < n; i++)
        cin >> a[i];
    for (int j = n - 1; j >= 0; j--)
    {
        dis.insert(a[j]);
        result[j] = dis.size();
    }
    while (m-- >= 1)
    {
        cin >> q;
        cout << result[q - 1] << endl;
    }
    return 0;
}