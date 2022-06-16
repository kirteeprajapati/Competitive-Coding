#include <iostream>
using namespace std;
int main()
{
    string s, ans;
    cin >> s;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == '-' && s[i + 1] == '.')
        {
            cout << '1';
            i++;
        }
        else if (s[i] == '.')
            cout << '0';
        else
        {
            cout << '2';
            i++;
        }
    }
    cout << ans;
    return 0;
}