#include <iostream>
using namespace std;
int main()
{
    string s;
    cin >> s;
    bool flag = true;
    int i = 0;
    for (i = 0; i < s.length(); i++)
    {
        if (s[i] == 'W' && s[i + 1] == 'U' && s[i + 2] == 'B')
        {
            i += 2;
            if (!flag)
            {
                cout << " ";
            }
            continue;
        }
        else
        {
            cout << s[i];
            flag = false;
        }
    }

    return 0;
}