#include <iostream>
#include <map>
using namespace std;

int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++)
            cin >> a[i];
        map<int, int> cnt;
        int mx_cnt = 0;
        for (auto it : a)
        {
            cnt[it]++;
            mx_cnt = max(mx_cnt, cnt[it]);
        }
        cout << n - mx_cnt << endl;
    }
    return 0;
}
