#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b, c, t;
    cin >> t;
    while (t--)
    {
        cin >> a >> b >> c;
        if (2 * (max(max(a, b), c)) == a + b + c)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}