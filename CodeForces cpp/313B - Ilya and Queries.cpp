#include <bits/stdc++.h>
using namespace std;

int main()
{
    int dp[100005];
    int t, c = 0, l, r;
    string s;
    cin >> s >> t;
    for (int i = 1; i < s.size(); i++)
    {
        if (s[i] == s[i - 1])
            c++;
        dp[i] = c;
    }
    while (t--)
    {
        cin >> l >> r;
        cout << dp[r - 1] - dp[l - 1] << endl;
    }
}