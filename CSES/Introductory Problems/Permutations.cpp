#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, value = 2;
    cin >> n;
    if (n == 2 || n == 3)
    {
        cout << "NO SOLUTION";
        return 0;
    }
    while (value <= n)
    {
        cout << value << " ";
        value += 2;
    }
    value = 1;
    while (value <= n)
    {
        cout << value << " ";
        value += 2;
    }
    return 0;
}