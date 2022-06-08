#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, chk = 0;
    cin >> n;
    int arr[14] = {4, 44, 444, 7, 77, 777, 744, 474, 447, 774, 747, 477, 47, 74};
    for (int i = 0; i < 14; i++)
    {
        if (n % arr[i] == 0)
            chk = 1;
    }
    if (chk == 1)
        cout << "YES\n";
    else
        cout << "NO\n";
    return 0;
}
