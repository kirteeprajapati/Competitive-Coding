#include <iostream>
using namespace std;
int main()
{
    int n, index_even, index_odd, even = 0, odd = 0, s;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> s;
        if (s % 2 == 0)
        {
            even++;
            index_even = i;
        }
        else
        {
            odd++;
            index_odd = i;
        }
    }
    if (even == 1)
        cout << index_even;
    else
        cout << index_odd;
    return 0;
}