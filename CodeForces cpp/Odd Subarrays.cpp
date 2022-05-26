#include <iostream>
using namespace std;
int main()
{
    int T, n, sum = 0, count = 0, start, end;
    cin >> T;
    for (int i = 0; i < T; i++)
    {
        cin >> n;
        int arr[n], ind[n];
        for (int j = 0; j < n; j++)
        {
            cin >> arr[j];
        }
        for (int j = 0; j < n; j++)
        {
            for (int k = j; k < n; k++)
            {

                if (arr[j] >= arr[k] && j < k)
                {
                    ind[count] = j;
                    count++;
                }
            }
        }
        if (count % 2 != 0)
            cout << ind[0] - ind[count] << endl;
        else
            cout << ind[0] - ind[count - 1] << endl;
    }

    return 0;
}