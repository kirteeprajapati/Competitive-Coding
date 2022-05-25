#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    string s;
    char arr[100];
    cin >> s;
    int count = 0;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] != '+')
        {
            arr[count] = s[i];
            count++;
        }
    }
    sort(arr, arr + count);
    for (int i = 0; i < count; i++)
    {
        if (i == count - 1)
            cout << arr[i] << endl;
        else
            cout << arr[i] << "+";
    }
    return 0;
}