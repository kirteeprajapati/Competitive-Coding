#include <iostream>
using namespace std;
int main()
{
    int T;
    cin >> T;
    for (int i = 0; i < T; i++)
    {
        int X = 0, Y = 0, Z = 0;
        cin >> X >> Y >> Z;
        cout << (X * 5 + Y * 10) / Z << endl;
    }
    return 0;
}