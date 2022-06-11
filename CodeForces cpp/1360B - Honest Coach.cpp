#include <bits/stdc++.h>
using namespace std;
int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int N;
        cin >> N;
        int P[N];
        for (int i = 0; i < N; i++)
            cin >> P[i];
        sort(P, P + N);
        vector<int> diff;
        for (int i = 1; i < N; i++)
            diff.push_back(P[i] - P[i - 1]);
        sort(diff.begin(), diff.end());
        cout << diff[0] << endl;
    }
    return 0;
}