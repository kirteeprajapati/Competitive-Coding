#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    unordered_set<char> a;
    getline(cin, s);
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] >= 'a' && s[i] <= 'z')
            a.insert(s[i]);
    }
    cout << a.size();
    return 0;
}