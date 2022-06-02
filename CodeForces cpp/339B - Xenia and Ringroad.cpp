#include <iostream>

using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    int nowon = 1;
    long long int t = 0;
    for (int i = 0; i < m; i++)
    {
        int newloc;
        cin >> newloc;
        if (newloc >= nowon)
            t += (newloc - nowon);
        else
            t += n - (nowon - newloc);
        nowon = newloc;
    }
    cout << t << endl;
    return 0;
}