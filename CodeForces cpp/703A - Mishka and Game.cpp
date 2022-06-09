#include <iostream>
using namespace std;

int main()
{
    int n, Mishka = 0, Chris = 0;
    cin >> n;
    while (n--)
    {
        int a, b;
        cin >> a >> b;
        if (a > b)
            Mishka++;
        else if (a < b)
            Chris++;
    }
    if (Chris < Mishka)
        cout << "Mishka\n";
    else if (Chris == Mishka)
        cout << "Friendship is magic!^^\n";
    else
        cout << "Chris\n";
    return 0;
}
