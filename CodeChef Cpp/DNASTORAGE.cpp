#include <iostream>
using namespace std;
int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int N;
        cin >> N;
        char S[N];
        string s = "";
        for (int i = 0; i < N; i += 2)
        {
            cin >> S[i] >> S[i + 1];
            if (S[i] == '0' && S[i + 1] == '0')
                s += "A";
            else if (S[i] == '0' && S[i + 1] == '1')
                s += "T";
            else if (S[i] == '1' && S[i + 1] == '0')
                s += "C";
            else if (S[i] == '1' && S[i + 1] == '1')
                s += "G";
        }
        cout << s << endl;
    }
    return 0;
} 