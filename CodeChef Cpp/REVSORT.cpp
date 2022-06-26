
#include <iostream>
#define fastread() (ios_base::sync_with_stdio(false), cin.tie(NULL));
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int b = 1, x;
        cin >> x;
        long long int A[x];
        for (int i = 0; i < x; i++)
            cin >> A[i];
        for (int i = 1; i < x; i++)
        {
            if (A[i] < A[i - 1] && A[i] + A[i - 1] <= X)
                swap(A[i], A[i - 1]);
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