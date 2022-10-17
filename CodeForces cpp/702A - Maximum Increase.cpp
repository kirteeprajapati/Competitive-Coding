#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, pread, cread;
    cin >> n;
    int clen = 0, mlen = 0;
    cin >> pread;
    for (int i = 1; i < n; i++)
    {
        cin >> cread;
        if (cread > pread)
        {
            clen++;
            mlen = max(clen, mlen);
        }
        else
            clen = 0;
        pread = cread;
    }
    cout << ++mlen;
    return 0;
}

n=8
2
1
4
3
6
5