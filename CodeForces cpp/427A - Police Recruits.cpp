#include <iostream>
using namespace std;
int main()
{
    int n, crime = 0, police = 0, untreated = 0;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int m;
        cin >> m;
        if (m < 0 && police == 0)
            untreated++;
        else if (m < 0 && police >= m)
            police += m;
        else if (m > 0)
            police += m;
        else
            untreated += m;
    }
    cout << untreated << endl;
    return 0;
}