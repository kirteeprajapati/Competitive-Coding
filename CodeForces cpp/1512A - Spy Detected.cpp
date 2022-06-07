#include <bits/stdc++.h>
using namespace std;

int main()
{
    int T, ans;
    cin >> T;
    while (T--)
    {
        int n;
        cin >> n;
        int a[n];
        for (int j = 0; j < n; j++)
        {
            cin >> a[j];
        }
        for (int j = 0; j < n; j++)
        {
            if (a[0] != a[1] && a[0] != a[2])
            {
                ans = 0 + 1;
                break;
            }
            else
            {
                for (int k = 0; k < n; k++)
                {
                    if (a[k] != a[0])
                    {
                        ans = k + 1;
                        break;
                    }
                }
            }
        }
        cout << ans << endl;
    }
    return 0;
}