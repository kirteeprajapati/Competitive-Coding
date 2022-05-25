#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int X, Y, pos;
    for (int i = 1; i <= 5; i++)
    {
        for (int j = 1; j <= 5; j++)
        {
            cin >> pos;
            if (pos == 1)
            {
                cout << abs(i - 3) + abs(j - 3) << endl;
            }
        }
    }
    return 0;
}