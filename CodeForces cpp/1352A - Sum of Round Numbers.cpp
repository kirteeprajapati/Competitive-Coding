#include <iostream>
using namespace std;
int main()
{
    int T;
    cin >> T;
    for (int i = 0; i < T; i++)
    {
        int n;
        cin >> n;
        int arr[6];
        int elem = 0, m = 1;
        for (int i = 1; i < 6; i++)
        {
            arr[i] = n % 10;
            n = n / 10;
            if (arr[i] != 0)
                elem++;
        }
        cout << elem << endl;
        for (int i = 1; i < 6; i++)
        {
            if (arr[i] != 0)
                cout << arr[i] * m << " ";
            m = m * 10;
        }
        cout << endl;
    }
    return 0;
}