#include <iostream>
using namespace std;
int main()
{
    string s;
    cin >> s;
    bool YorN = true;
    int l = s.length();
    for (int i = 1; i < l; i++)
    {
        if (s[i] > 91)
        {
            YorN = false;
        }
    }
    if (YorN)
    {
        for (int j = 0; j < l; j++)
        {
            if (s[j] > 96)
                s[j] -= 32;
            else
                s[j] += 32;
        }
    }
    cout << s;
    return 0;
}