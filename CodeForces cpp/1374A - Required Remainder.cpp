#include <iostream>
using namespace std;

int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        long long int x, y, n;
        cin >> x >> y >> n;
        long long int count = n / x, ans = x * count + y; // range in which divisors of x repeats
        if (ans > n)
            ans -= x;
        cout << ans << endl;
    }
    return 0;
}
