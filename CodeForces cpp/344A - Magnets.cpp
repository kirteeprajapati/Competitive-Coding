#include <iostream>
using namespace std;
int main()
{
    int n, temp = 0;
    cin >> n;
    int mag[n];
    for (int i = 0; i < n; i++)
    {
        cin >> mag[i];
    }
    for (int i = 1; i <= n; i++)
    {
        if (mag[i - 1] != mag[i])
        {
            temp++;
        }
    }
    cout << temp;
    return 0;
}