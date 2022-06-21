#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, one = 0, two = 0, sum = 0, n;
        cin >> n;
        for (int i = 0; i < n; i++)
        {
            cin >> a;
            if (a == 1)
                one++;
            else
                two++;
            sum += a;
        }
        if (sum % 2 || two % 2 && !one)
            cout << "NO\n";
        else
            cout << "YES\n";
    }
    return 0;
}
