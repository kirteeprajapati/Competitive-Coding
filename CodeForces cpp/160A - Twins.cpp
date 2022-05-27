#include <bits/stdc++.h>

using namespace std;
int main()
{
    int n, add = 0, sum = 0, coin = 0;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        sum += a[i];
    }
    sum /= 2;
    sort(a, a + n);
    for (int j = n - 1; j >= 0; j--)
    {
        add += a[j];
        coin++;
        if (add > sum)
        {
            break;
        }
    }
    cout << coin;
    return 0;
}