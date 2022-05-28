#include <iostream>
using namespace std;
int main()
{
    string q, a;
    cin >> q >> a;
    for (int i = 0; i < q.length(); i++)
    {
        if (q[i] != a[i])
            cout << 1;
        else
            cout << 0;
    }
    return 0;
}