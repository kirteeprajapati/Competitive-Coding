#include <bits/stdc++.h>
#define fastread() (ios_base::sync_with_stdio(false), cin.tie(NULL));
using namespace std;

int main()
{
    fastread();
    int T;
    cin >> T;
    while (T--)
    {
        long long int n, suma = 0, sumb = 0, mina = 1e9 + 1, minb = 1e9 + 1;
        cin >> n;
        long long int a[n], b[n];
        for (int i = 0; i < n; i++)
            cin >> a[i];
        for (int i = 0; i < n; i++)
            cin >> b[i];
        for (int i = 0; i < n; i++)
        {
            mina = min(mina, a[i]);
            minb = min(minb, b[i]);
        }
        long long int final = 0;
        for (int i = 0; i < n; i++)
        {
            suma = a[i] - mina;
            sumb = b[i] - minb;
            final += max(sumb, suma);
        }
        cout << final << endl;
    }

    return 0;
}