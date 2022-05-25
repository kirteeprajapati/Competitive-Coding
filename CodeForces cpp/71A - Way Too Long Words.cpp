#include <iostream>
#include <cstring>
using namespace std;
int main()
{
    int T;
    cin >> T;
    for (int i = 0; i < T; i++)
    {
        string Word;
        cin >> Word;
        int N = Word.length();
        if (N > 10)
        {
            cout << Word[0] << N - 2 << Word[N - 1] << endl;
        }
        else
        {
            cout << Word << endl;
        }
    }
}