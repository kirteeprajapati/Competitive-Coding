#include <iostream>
using namespace std;
int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int N, K, batches = 0, start = 0, flag = 1;
        cin >> N >> K;
        if (N > 5)
        {
            if (N % 5 == 0)
                batches = N / 5;
            else
                batches = N / 5 + 1;
        }
        else
            flag = 0;
        if (K % 5 == 0 && K >= 5)
            start = K / 5;
        else if (K % 5 != 0 && K > 5)
            start = K / 5 + 1;
        else if (K < 5)
            start = 1;

        if (flag)
            cout << batches - start << endl;
        else
            cout << '0' << endl;
    }
    return 0;
}