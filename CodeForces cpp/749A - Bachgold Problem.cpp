#include <iostream>
using namespace std;
int main()
{
    int n, count = 0;
    cin >> n;
    string s = "";
    while (n)
    {
        if (n == 3)
        {
            n -= 3;
            s += "3";
            count++;
        }
        else
        {
            n -= 2;
            s += "2 ";
            count++;
        }
    }
    cout << count << "\n"<< s;
    return 0;
}