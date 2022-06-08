#include <iostream>
using namespace std;

int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int N, ma, mi, flag = 1;
        cin >> N;
        int B[N];
        for (int i = 0; i < N; i++)
            cin >> B[i];
        if (B[0] > B[1])
        {
            ma = B[0];
            mi = B[1];
        }
        else
        {
            ma = B[1];
            mi = B[0];
        }
        for (int i = 2; i < N; i++)
        {
            if (B[i] >= ma)
                ma = B[i];
            else if (B[i] <= mi)
                mi = B[i];
            else
                flag = 0;
        }
        if (flag == 0)
            cout << "NO\n";
        else
            cout << "YES\n";
    }
    return 0;
}
