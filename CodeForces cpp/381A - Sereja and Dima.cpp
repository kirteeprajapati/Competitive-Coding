#include <bits/stdc++.h>
#define fastread() (ios_base::sync_with_stdio(false), cin.tie(NULL));
using namespace std;

int main()
{
    fastread();
    int T;
    cin >> T;
    int arr[T];
    for (int i = 0; i < T; i++)
        cin >> arr[i];
    int i = 0, j = T - 1, Sereja = 0, Dima = 0, z = 0;
    while (i <= j)
    {
        if (z % 2 == 0)
        {
            if (arr[i] > arr[j])
            {
                Sereja += arr[i];
                i++;
            }
            else
            {
                Sereja += arr[j];
                j--;
            }
        }
        else
        {
            if (arr[i] > arr[j])
            {
                Dima += arr[i];
                i++;
            }
            else
            {
                Dima += arr[j];
                j--;
            }
        }
        z++;
    }
    cout << Sereja << " " << Dima << endl;
    return 0;
}