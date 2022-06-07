#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, k, l, c, d, p, nl, np;
    cin >> n >> k >> l >> c >> d >> p >> nl >> np;
    // glass = (k*l)/nl
    // lemon slice = c*d
    // salt p/np
    cout << min((k * l) / nl, min(c * d, p / np)) / n << endl;
    return 0;
}