#include <iostream>
using namespace std;

int main()
{
    int n, t = 1, ml(1);
    cin >> n;
    int s[n];
    for (int i = 0; i < n; i++)
    {
        cin >> s[i];
    }
    for (int i = 1; i < n; i++)
    {
        if (s[i] >= s[i - 1])
        {
            t++;
            ml = max(ml, t); // max of this or that series
        }
        else
            t = 1;
    }
    cout << ml << endl;
    return 0;
}
