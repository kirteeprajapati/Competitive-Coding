#include <iostream>
#include <cmath>
using namespace std;
#define int64_t int

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        if (360 % (180 - n) == 0)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
    return 0;
}