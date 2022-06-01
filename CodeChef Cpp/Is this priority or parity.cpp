#include <iostream>
using namespace std;

bool odd(long long int x)
{
    return x & 1;
}
int main()
{
    int T;
    cin >> T;
    for (int i = 0; i < T; i++)
    {
        long long int N, K;
        
        cin >> N >> K;
        if (K == 1)
        {
            if (odd(N))
                cout << "ODD" << endl;
            else
                cout << "EVEN" << endl;
        }
        else if (K == 2)
        {
            cout << "ODD" << endl;
        }
        else
        {
            cout << "EVEN" << endl;
        }
    }
    return 0;
}
