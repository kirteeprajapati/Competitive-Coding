#include <bits/stdc++.h>
using namespace std;
int main()
{
    int s, n; // initial strength and no of dragons
    cin >> s >> n;
    bool flag = true;
    pair<int, int> arr[10000]; // dragon strength and bonus
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i].first >> arr[i].second;
    }
    sort(arr, arr + n);
    for (int i = 0; i < n; i++)
    {
        if (s <= arr[i].first)
        {
            flag = false;
            break;
        }
        s += arr[i].second;
    }
    if (flag)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
    return 0;
}