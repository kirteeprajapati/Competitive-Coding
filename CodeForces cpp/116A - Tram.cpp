#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int n, a, b, max = 0, curr = 0;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> a >> b;
        curr += (b - a);
        if (curr > max)
            max = curr;
    }
    cout << max << "\n";
    return 0;
}

or

#include <iostream>
#include <cmath>
    using namespace std;
int main()
{
    int n, a, b, max = 0;
    cin >> n;
    int pas[n];
    for (int i = 0; i < n; i++)
    {
        pas[i] = 0;
        cin >> a >> b;
        if (i == 0)
            pas[i] = (b - a);
        else
            pas[i] = pas[i - 1] + (b - a);
        if (pas[i] > max)
        {
            max = pas[i];
        }
    }
    cout << max;
    return 0;
}