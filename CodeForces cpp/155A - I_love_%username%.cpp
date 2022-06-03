#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int s;
    cin >> s;
    int best = s, worst = s, amazing = 0;
    while (--n)
    {
        cin >> s;
        if (s > best)
        {
            amazing++;
            best = s;
        }
        else if (worst > s)
        {
            amazing++;
            worst = s;
        }
    }
    cout << amazing << endl;
    return 0;
}