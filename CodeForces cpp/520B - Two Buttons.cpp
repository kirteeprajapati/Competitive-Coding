#include <iostream>
using namespace std;

int main()
{
    int n, m, a = 0;
    cin >> n >> m;
    while (n < m)
    {
        if (m % 2)
            m++;
        else
            m /= 2;
        a++;
    }
    a += n - m;
    cout << a << endl;
    return 0;
}
