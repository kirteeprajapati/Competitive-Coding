#include <iostream>
#define fastread() (ios_base::sync_with_stdio(false), cin.tie(NULL));
#define ll long long
using namespace std;
int main()
{
    fastread();
    string s, d;
    cin >> s;
    for (int i = 0; i < 5; i++)
    {
        cin >> d;
        if (d[0] == s[0] || d[1] == s[1])
        {
            cout << "YES\n";
            return 0;
        }
    }
    cout << "NO\n";
}