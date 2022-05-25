#include <iostream>
using namespace std;
int main()
{
    string name;
    int count, distinct = 0;
    cin >> name;
    for (int i = 0; i < name.size(); i++)
    {
        for (int j = 0; j < i; j++)
        {
            if (name[i] == name[j])
            {
                count++;
            }
            if (count == 0)
            {
                distinct++;
            }
        }
    }
    if ((distinct % 2) == 0)
    {
        cout << "CHAT WITH HER!";
    }
    else
    {
        cout << "IGNORE HIM!";
    }
    return 0;
}