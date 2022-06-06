#include <iostream>
using namespace std;
int main()
{
    int T;
    cin >> T;
    for (int i = 0; i < T; i++)
    {
        string b, a;
        cin >> b;
        int k = 0;
        for (int j = 0; j < b.length(); j += 2)
        {
            cout << b[j];
            k++;
        }
        cout << b[b.length() - 1] << endl;
    }
    return 0;
}