#include <iostream>
using namespace std;

int main()
{
    int T, sum1, sum2;
    cin >> T;
    while (T--)
    {
        int n;
        cin >> n;
        sum1 = sum2 = 0;
        if (n % 4 != 0)
            cout << "NO\n"; // if not divisible to 4 we can't devide it further or even pair
        else
        {
            cout << "YES\n";
            for (int i = 2; i <= n; i += 2)
            {
                cout << i << " "; // all the odds summing up to n/2
                sum1 += i;        // gives n/2 on adding
            }
            for (int j = 1; j < n - 2; j += 2)
            {
                cout << j << " "; // gives all the odd pairs
                sum2 += j;
            }
            cout << sum1 - sum2 << endl; // gives the left over part in od section
        }
    }
    return 0;
}