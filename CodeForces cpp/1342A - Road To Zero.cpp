#include <iostream>
#define fastread() (ios_base::sync_with_stdio(false), cin.tie(NULL));
#define ll long long
using namespace std;
int main()
{
    fastread();
    int t;
    cin >> t;
    while (t--)
    {
        ll x, y, a, b;
        cin >> x >> y >> a >> b;
        if (x > y)
            swap(x, y);
        ll ans1 = 0, ans2 = 0;
        ans1 = (x + y) * a;
        ans2 = (y - x) * a + x * b;
        cout << min(ans1, ans2) << endl;
    }

    return 0;
}
