#include <iostream>
using namespace std;
int main()
{
    long long int n, pay = 0;
    int k, w;
    cin >> k >> n >> w;
    for (int i = 1; i <= w; i++)
    {
        pay += i * k;
    }
    if (pay > n)
    {
        cout << pay - n << endl;
    }
    else
    {
        cout << 0;
    }
    return 0;
}