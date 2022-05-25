#include <iostream>
using namespace std;

int main()
{
    int N, count = 0, X, Y, Z;
    cin >> N;
    for (int i = 0; i < N; i++)
    {
        cin >> X >> Y >> Z;
        if (X + Y + Z >= 2)
        {
            count++;
        }
    }
    cout << count << endl;
    return 0;
}