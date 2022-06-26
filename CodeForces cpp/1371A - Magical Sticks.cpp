#include <iostream>
#define fastread() (ios_base::sync_with_stdio(false), cin.tie(NULL));
using namespace std;

int main()
{
    fastread();
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        if (n % 2)
            cout << (n + 1) / 2 << endl;
        else
            cout << n / 2 << endl;
    }

    return 0;
}
