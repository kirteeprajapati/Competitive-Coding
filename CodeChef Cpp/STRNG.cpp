#include <iostream>
#include <algorithm>
#include <vector>
#define fastread() (ios_base::sync_with_stdio(false), cin.tie(NULL));
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, strongElements = 0;
        cin >> n;
        vector<int> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        vector<int> prefixGCD(n);
        prefixGCD[0] = v[0];
        for (int i = 0; i < n; i++)
            prefixGCD[i] = __gcd(prefixGCD[i - 1], v[i]); //__gcd -> O(log(N))

        vector<int> sufixGCD(n);
        sufixGCD[n - 1] = v[n - 1];
        for (int i = n - 2; i >= 0; i--)
            sufixGCD[i] = __gcd(sufixGCD[i + 1], v[i]);
        for (int i = 0; i < n; i++)
        {
            if (i == 0 && prefixGCD[1] > 1)
                strongElements++;
            else if (i == n - 1 && sufixGCD[n - 2] > 1)
                strongElements++;
            else if (__gcd(prefixGCD[i - 1], sufixGCD[i + 1]) > 1)
                strongElements++;
        }

        cout << strongElements << endl;
    }
    return 0;
}