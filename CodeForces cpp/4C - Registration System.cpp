#include <iostream>
#include <string>
#include <map>
using namespace std;

int main()
{
    int T;
    cin >> T;
    map<string, int> database;
    string s;

    for (int i = 0; i < T; i++)
    {
        cin >> s;
        if (database.count(s) == 0)
        {
            cout << "OK" << endl;
            database[s] = 1;
        }
        else
        {
            cout << s << database[s] << endl;
            database[s] += 1;
        }
    }

    return 0;
}