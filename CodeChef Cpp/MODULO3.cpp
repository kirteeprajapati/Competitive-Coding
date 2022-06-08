#include <iostream>
using namespace std;

int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int A, B, ans = 0;
        cin >> A >> B;
        if (A % 3 == 0 && B % 3 == 0)
            ans = 0;
        else if (A % 3 == 1)
        {
            if (B % 3 == 1)
                ans = 1;
            else if (B % 3 == 2)
                ans = 2;
        }
        else if (A % 3 == 2)
        {
            if (B % 3 == 1)
                ans = 2;
            else if (B % 3 == 2)
                ans = 1;
        }
        cout << ans << endl;
    }

    return 0;
}
