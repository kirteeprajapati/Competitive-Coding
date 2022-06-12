#include <bits/stdc++.h>
#define fastread() (ios_base::sync_with_stdio(false), cin.tie(NULL));
using namespace std;

int main()
{
    fastread();
    int T;
    cin >> T;
    while (T--)
    {
        string x;
        cin >> x;
        if (x.size() == 4)
            cout << (x[0] - '0') * 10 << endl;
        else if (x.size() == 3)
            cout << (x[0] - 49) * 10 + 6 << endl;
        else if (x.size() == 2)
            cout << (x[0] - 49) * 10 + 3 << endl;
        else if (x.size() == 1)
            cout << (x[0] - 49) * 10 + 1 << endl;
    }
    return 0;
}