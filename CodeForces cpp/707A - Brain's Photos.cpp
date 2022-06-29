#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m, color = 0;
    cin >> n >> m;
    while (n--)
    {
        for (int i = 0; i < m; i++)
        {
            char c;
            cin >> c;
            if (c == 'C' || c == 'Y' || c == 'M')
            {
                color = 1;
                break;
            }
        }
        if (color)
            break;
    }
    if (color)
        cout << "#Color\n";
    else
        cout << "#Black&White\n";

    return 0;
}