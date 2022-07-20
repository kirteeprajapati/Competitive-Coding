#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int m, k, n;
        cin >> n >> k >> m;
        if (n % (m * k))
            cout << n / (m * k) + 1 << endl;
        else
            cout << n / (m * k) << endl;
    }
    return 0;
}
