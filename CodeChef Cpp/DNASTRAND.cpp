#include <iostream>
using namespace std;

int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        char s;
        for (int i = 0; i < n; i++)
        {
            cin >> s;
            if (s == 'A')
                cout << "T";
            else if (s == 'T')
                cout << "A";
            else if (s == 'C')
                cout << "G";
            else if (s == 'G')
                cout << "C";
        }
        cout << "\n";
    }
}
