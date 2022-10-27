#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, flag = 1;
        string a, b;
        cin >> n >> a >> b;
        for (int i = 0; i < n; i++)
        {
            if ((a[i] != 'R' && b[i] == 'R') || (b[i] != 'R' && a[i] == 'R'))
            {
                flag = 0;
                break;
            }
        }
        if (flag)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}