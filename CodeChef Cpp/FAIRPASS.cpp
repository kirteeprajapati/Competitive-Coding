#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int N, K;
        cin >> N >> K;
        if (K < N + 1)
            cout << "NO\n";
        else
            cout << "YES\n";
    }
    return 0;
}
