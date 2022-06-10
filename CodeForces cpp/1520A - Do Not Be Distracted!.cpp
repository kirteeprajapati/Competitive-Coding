#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, flag = 1;
        cin >> n;
        string s;
        cin >> s;
        int a[26] = {0};
        for (int i = 0; i < n; i++)
        {
            a[s[i] - 'A']++;
            if (a[s[i] - 'A'] > 1 && s[i] != s[i - 1])
            {
                flag = 0;
                break;
            } 
        }
        if (flag == 1)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
    return 0;
}
