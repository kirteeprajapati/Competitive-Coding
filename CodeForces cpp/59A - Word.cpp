#include <iostream>
using namespace std;

int main()
{
    string s, u;
    int upper = 0, lower = 0, l;
    cin >> s;
    l = s.length();
    for (int i = 0; i < l; i++)
    {
        if (s[i] > 96)
        {               // If lower
            lower++;    // then how many lowercased
            s[i] -= 32; // this converts to uppercase
        }
    }
    upper = l - lower;

    if (lower < upper)
    {
        cout << s;
    }
    else
    {
        for (int j = 0; j < l; j++)
        {
            s[j] += 32;
        }
        cout << s;
    }
    return 0;
}