#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s1, s2, s, L;
    cin >> s1 >> s2;
    s = s1 + s2;
    cin >> L;
    sort(s.begin(), s.end());
    sort(L.begin(), L.end());
    if (s == L)
        cout << "YES";
    else
        cout << "NO";
    return 0;
}