#include <iostream>
using namespace std;
int main()
{
    int a, b;
    cin >> a >> b;
    int hour = a;
    while (a >= b)
    {
        hour += a / b;
        a = a / b + a % b;
    }
    cout << hour;
    return 0;
}