#include <iostream>
using namespace std;
int main()
{
    int n, k, Q = 0;
    cin >> n >> k;
    int ct = 60 * 4 - k, t = 0;
    for (int i = 1; i <= n; i++)
    {
        t += 5 * i;
        if (t > ct)
            break;
        Q++;
    }
    cout << Q << endl;
    return 0;
}