#include <iostream>
using namespace std;
int main()
{
    int n, count = 0;
    cin >> n;
    string s;
    cin >> s;
    for (int j = 65; j < 91; j++)
    {
        for (int i = 0; i < n; i++)
        {
            if (s[i] == j || s[i] == j + 32)
            {
                count++;
                break;
            }
        }
    }
    if (count == 26)
        cout << "YES";
    else
        cout << "NO";
    return 0;
}