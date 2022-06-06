#include <bits/stdc++.h>
using namespace std;
int main()
{
    int T, count = 0;
    cin >> T;
    while (T--)
    {
        int a, b;
        cin >> a >> b;
        int rem = abs(a - b);
        for (int i = 10; i >= 1; i--)
        {
            count += (rem / i);
            rem = (rem % i);
        }
        cout << count << endl;
        count = 0;
    }

    return 0;
}