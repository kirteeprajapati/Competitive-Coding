#include <iostream>
using namespace std;
void run_case()
{
    int n, sum = 0;

    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        sum += arr[i];
    }
    for (int i = 0; i < n; i++)
    {
        if (sum - arr[i] == arr[i] * (n - 1))
        {
            cout << "YES" << endl;
            return;
        }
    }
    cout << "NO" << endl;
}
signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int T = 1;
    cin >> T;
    while (T--)
        run_case();

    return 0;
}