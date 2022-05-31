#include <iostream>
using namespace std;
int main()
{
    int T;
    cin >> T;
    for (int i = 0; i < T; i++)
    {
        int n = 0, odd = 0;
        cin >> n;
        long long int s[n];
        for (int j = 0; j < n; j++)
        {
            cin >> s[j];
            if (s[j] % 2 != 0)
                odd++;
        }
        if (odd > n - odd)
            cout << n - odd << endl;
        else
            cout << odd << endl;
    }
    return 0;
}