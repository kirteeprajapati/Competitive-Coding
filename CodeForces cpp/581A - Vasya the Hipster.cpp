#include <iostream>
using namespace std;
int main()
{
    int a, b;
    cin >> a >> b;
    int mix = min(b, a);
    int same = (max(a, b) - min(a, b)) / 2;
    cout << mix << " " << same << endl;
    return 0;
}