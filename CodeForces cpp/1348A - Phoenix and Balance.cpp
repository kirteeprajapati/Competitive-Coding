#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, a = 0, b = 0;
        cin >> n;
        a = 2;
        for (int i = 2; i < n; i++)
        {
            if (a > b)
                b += pow(2, i);
            else
                a += pow(2, i);
        }
        cout << abs(a - b) << endl;
    }
    return 0;
}