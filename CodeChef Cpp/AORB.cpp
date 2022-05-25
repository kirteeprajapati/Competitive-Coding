#include <iostream>
using namespace std;

int main()
{
    int T, X, Y;
    cin >> T;
    for (int i = 0; i < T; i++)
    {
        cin >> X >> Y;
        if (((X + Y) * 2) + (Y * 4) < (X * 2) + ((Y + X) * 4))
        {
            cout << 1500 - (((X + Y) * 2) + (Y * 4)) << endl;
        }
        else
        {
            cout << 1500 - (((X)*2) + ((Y + X) * 4)) << endl;
        }
    }
    return 0;
}
