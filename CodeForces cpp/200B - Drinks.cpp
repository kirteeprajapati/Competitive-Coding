#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, temp = 0;
    cin >> n;
    double p = 0.;
    for (int i = 0; i < n; i++)
    {
        cin >> temp;
        p += temp;
    }
    cout << fixed << setprecision(12) << p / n;
    return 0;
}