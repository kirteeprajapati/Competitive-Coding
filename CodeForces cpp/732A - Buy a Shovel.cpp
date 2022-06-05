#include <iostream>
using namespace std;
int main()
{
    int r, k;
    bool b = true;
    cin >> k >> r;
    int i = 0;
    while (b)
    {
        i++;
        if ((k * i) % 10 == 0 || (k * i) % 10 == r)
            b = false;
    }
    cout << i;
    return 0;
}