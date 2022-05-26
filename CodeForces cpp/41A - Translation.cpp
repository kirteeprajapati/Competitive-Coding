#include <iostream>
using namespace std;
int main()
{
    string s, t;
    char temp;
    cin >> s >> t;
    int sL = s.length(), tL = t.length();
    if (sL == tL)
    {
        for (int i = 0; i < sL / 2; i++)
        {
            if (i != sL - 1 - i)
            {
                temp = s[i];
                s[i] = s[sL - i - 1];
                s[sL - i - 1] = temp;
            }
        }
    }
    if (s == t)
        cout << "YES";
    else
        cout << "NO";
    return 0;
}