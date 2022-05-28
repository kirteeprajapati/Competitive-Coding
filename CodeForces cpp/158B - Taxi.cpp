#include <iostream>
using namespace std;
int main()
{
    int n, mem = 0, a = 0, b = 0, c = 0, d = 0;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> mem;
        if (mem == 1)
            a++;
        else if (mem == 2)
            b++;
        else if (mem == 3)
            c++;
        else
            d++;
    }
    int taxi = d;
    if (b > 0)
    {
        taxi += b / 2;
        b = b % 2;
    }
    if (c >= a)
    {
        taxi += a;
        c = c - a;
        a = 0;
    }
    else if (c < a)
    {
        taxi += c;
        a -= c;
        c = 0;
    }
    if (c > 0)
    {
        taxi += c;
        c = 0;
    }
    int left = a + 2 * b;
    if (left <= 4 && left > 0)
        taxi++;
    else if (left % 4 != 0)
        taxi += (left / 4) + 1;
    else
        taxi += left / 4;
    cout << taxi;
    return 0;
}