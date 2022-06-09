#include <iostream>
using namespace std;

int main()
{
    int n, t;
    cin >> n >> t;
    int a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    int pos = 1, next;
    while (pos < t)
    {
        next = pos + a[pos - 1]; // at index pos -1 starting from 0
        pos = next;
    }
    if (pos == t)
        cout << "YES\n";
    else
        cout << "NO\n";
    return 0;
}
