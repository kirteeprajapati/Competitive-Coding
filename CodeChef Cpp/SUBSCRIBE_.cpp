#include <iostream>
using namespace std;
int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int X, N;
        cin >> N >> X;
        if (N % 6 == 0)
            cout << (N / 6) * X << endl;
        else
            cout << ((N / 6) + 1) * X << endl;
    }
    return 0;
}