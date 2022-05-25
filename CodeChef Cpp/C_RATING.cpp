#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    float T, X, Y;
    cin >> T;
    for (int i = 0; i < T; i++)
    {
        cin >> X >> Y;
        cout << ceil((Y - X) / 8) << endl;
    }
    return 0;
}
