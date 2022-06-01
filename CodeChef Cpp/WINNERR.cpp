#include <bits/stdc++.h>
using namespace std;
int main()
{
    int T;
    cin >> T;
    for (int i = 0; i < T; i++)
    {
        int Pa, Pb, Qa, Qb;
        cin >> Pa >> Pb >> Qa >> Qb;
        if (max(Pa, Pb) > max(Qa, Qb))
            cout << "Q" << endl;
        else if (max(Pa, Pb) < max(Qa, Qb))
            cout << "P" << endl;
        else if (max(Pa, Pb) == max(Qa, Qb))
            cout << "TIE" << endl;
    }
    return 0;
}