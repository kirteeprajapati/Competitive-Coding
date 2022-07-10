#include <iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, x;
        cin >> n >> x;
        if (n > x)
        {
            if ((n - x) % 4)
                cout << (n - x) / 4 + 1 << endl;
            else
                cout << (n - x) / 4 << endl;
        }
        else
            cout << 0 << endl;
    }
    return 0;
}
