#include <iostream>
using namespace std;
int main()
{
    int n, A = 0, D = 0;
    string s;
    cin >> n >> s;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == 'A')
            A++;
        else
            D++;
    }
    if (A > D)
        cout << "Anton";
    else if (D > A)
        cout << "Danik";
    else
        cout << "Friendship";
    return 0;
}