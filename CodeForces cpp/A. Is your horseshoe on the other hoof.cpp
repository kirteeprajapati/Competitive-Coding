#include <bits/stdc++.h>
using namespace std;
int main()
{
    int s[4];
    int count = 3;
    for (int i = 0; i < 4; i++)
    {
        cin >> s[i];
    }
    sort(s, s + 4);
    for (int j = 0; j < 3; j++)
    {
        if (s[j] != s[j + 1])
            count--;
    }
    cout << count;
    return 0;
}