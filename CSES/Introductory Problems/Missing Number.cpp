#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int n, sum = 0, ele;
    cin >> n;
    for (int i = 1; i < n; i++)
    {
        cin >> ele;
        sum += ele;
    }
    cout << n * (n + 1) / 2 - sum;
    return 0;
}

or

#include <bits/stdc++.h>
    using namespace std;

int main()
{
    int n, ele;
    cin >> n;
    int a[n + 1];
    for (int i = 1; i <= n; i++)
    {
        cin >> ele;
        a[ele] = -1;
    }
    for (int i = 1; i <= n; i++)
        if (a[i] != -1)
            ele = i;
    cout << ele;
    return 0;
}