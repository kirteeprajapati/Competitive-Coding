#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long int n;
        cin >> n;
        double final = log(n + 1) / log(2);
        for (int k = 2; k < final + 1; k++)
        {
            double x = (n * 1.0) / ((long long int)pow(2, k) - 1);
            long long y = n / ((long long int)pow(2, k) - 1);
            if (x == y && x > 0)
            {
                cout << y << endl;
                break;
            }
        }
    }
    return 0;
}
