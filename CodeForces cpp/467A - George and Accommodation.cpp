#include <iostream>
using namespace std;
int main()
{
    int p, q, T, count = 0;
    cin >> T;
    for (int i = 0; i < T; i++)
    {
        cin >> p >> q;
        if (q - p >= 2)
        {
            count++;
        }
    }
    cout << count;
    return 0;
}