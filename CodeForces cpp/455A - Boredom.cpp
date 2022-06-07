#include <bits/stdc++.h>
#include <unordered_map>
#include <unordered_set>

using namespace std;
#define int int64_t
int32_t main()
{
    int n;
    cin >> n;
    map<int, int> m;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        m[x]++;
    }
    int dp[(int)1e5 + 100]; // stores the scores he get
    dp[0] = 0;              // 0th place is empty
    dp[1] = m[1];           // first location stores frecuency of first element of map
    for (int i = 2; i <= 1e5; i++)
        dp[i] = max(dp[i - 2] + m[i] * i, dp[i - 1]); // who is big store that
    cout << dp[(int)1e5] << endl;                     // maximum of all will appear at tthe last
    return 0;
}