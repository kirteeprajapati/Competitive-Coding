#include <bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int n, k, count = 0;
        cin >> n >> k;
        vector<int> a, b;
        for (int i = 0; i < n; i++)
        {
            int ai;
            cin >> ai;
            a.push_back(ai);
        }
        for (int i = 0; i < n; i++)
        {
            int bi = 0;
            cin >> bi;
            b.push_back(bi);
        }
        sort(a.begin(), a.end());
        sort(b.begin(), b.end(), greater<int>());
        for (int i = 0; i < n; i++)
        {
            if (a[i] < b[i] && i < k)
                swap(a[i], b[i]);
            count += a[i];
        }
        cout << count << endl;
    }
    return 0;
}
