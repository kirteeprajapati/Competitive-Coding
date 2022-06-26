
#include <iostream>
#define fastread() (ios_base::sync_with_stdio(false), cin.tie(NULL));
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int b = 1, x, n;
        cin >> n >> x;
        long long int A[n];
        for (int i = 0; i < n; i++)
            cin >> A[i];
        for (int i = 0; i < n - 1; i++)
        {
            if (A[i] > A[i + 1])
                if (A[i] + A[i + 1] <= x)
                    swap(A[i], A[i + 1]);

                else
                {
                    b = 0;
                    break;
                }
        }
        if (b)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
    return 0;
}