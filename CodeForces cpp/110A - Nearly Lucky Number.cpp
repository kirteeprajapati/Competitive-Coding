#include <iostream>
using namespace std;

int main()
{
    long long int n;
    int chk = 0;
    cin >> n;
    while (n != 0)
    {
        if (n % 10 == 7 || n % 10 == 4)
            chk++;
        n /= 10;
    }
    if (chk == 4 || chk == 7)
        cout << "YES\n";
    else
        cout << "NO\n";
    return 0;
}
