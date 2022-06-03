#include <bits/stdc++.h>
using namespace std;
#define int int64_t    // int here is of 64 bit type
int ar[(int)1e6 + 10]; // array of 1e6+10 size
set<int> tprime;       // declared a set to store all the prime no till square root of range that is sqrt(1e12)
void t_primes()
{                     // finction to insert no inside tprime set which finds in log(N) time
    tprime.insert(4); // array starts from 3 so square of 2 inserted
    for (int i = 3; i < (int)1e6 + 1; i += 2)
    {
        if (ar[i] == 0)
        {                                    // not in the set
            tprime.insert(i * i);            // inserts square of the prime no
            for (int j = i; j < 1e6; j += i) // all the no divisible by i gets replaced by 1 in the set
            {
                ar[j] = 1; //{0, 0, 0, 1, 4, 0, 0, 1, 0, 0, 9, 0, 0, 1, 0, 0, 1, 0, 0, 1, 0, 0, 1......} for i=3}
            }
        }
    }
}
int32_t main()
{
    int n;
    cin >> n;
    t_primes(); // called so it gets executed -->we got all the Tprimes stored in it
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        if (tprime.find(x) != tprime.end())
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}