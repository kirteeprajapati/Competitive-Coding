#include <iostream>
using namespace std;

int main()
{
    int n, k, count = 0;
    cin >> n >> k;
    int parti[n + 1];
    for (int i = 1; i < n + 1; i++)
    {
        cin >> parti[i];
        if (parti[i] <= 5 - k)
        {
            count++;
            parti[i] += k;
        }
        continue;
    }
    cout << (count / 3) << endl;
    return 0;
}