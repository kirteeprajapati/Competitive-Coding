#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int N, K, X, Y; // red-X, blue-Y, total-N, must red-K
        cin >> N >> K >> X >> Y;
        if (N == K)
            cout << K * X << endl;
        else
        {
            if (X * (N - K) < Y * (N - K))
                cout << N * X << endl;
            else
                cout << Y * (N - K) + X * K << endl;
        }
    }
    return 0;
}
