#include <iostream>
using namespace std;
int main()
{
    long int x, y = 0;
    cin >> x;
    if (x % 5 != 0 && x > 5)
        cout << x / 5 + 1;
    else if (x % 5 == 0)
        cout << x / 5;
    else
        cout << 1;
    return 0;
}