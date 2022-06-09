#include <bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int n, evenIndex = 0, oddIndex = 0;
        cin >> n;
        vector<int> a;
        for (int i = 0; i < n; i++)
        {
            int ai;
            cin >> ai;
            a.push_back(ai);
            if (ai % 2 != 0 && i % 2 == 0)
                evenIndex++;
            else if (ai % 2 == 0 && i % 2 != 0)
                oddIndex++;
        }
        if (evenIndex == oddIndex)
            cout << evenIndex << endl;
        else
            cout << "-1\n";
    }
    return 0;
}
