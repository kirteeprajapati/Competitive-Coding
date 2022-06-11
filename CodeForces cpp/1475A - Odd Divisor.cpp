
#include <iostream>
using namespace std;
#define int64_t as int
void solve()
{
    long long int n;
    cin >> n;
    if (n % 2)
    {
        cout << "YES\n";
        return;
    }
    while (n % 2 == 0)
        n /= 2;
    if (n > 1)
        cout << "YES\n";
    else
        cout << "NO\n";
}
int main()
{
    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}
