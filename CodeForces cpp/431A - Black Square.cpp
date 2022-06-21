#include <iostream>
using namespace std;

int main()
{
    int a[4], count = 0;
    for (int i = 0; i < 4; i++)
        cin >> a[i];
    char s;
    while (cin >> s)
    {
        if (s == '1')
            count += a[0];
        else if (s == '2')
            count += a[1];
        else if (s == '3')
            count += a[2];
        else
            count += a[3];
    }
    cout << count << endl;
    return 0;
}
