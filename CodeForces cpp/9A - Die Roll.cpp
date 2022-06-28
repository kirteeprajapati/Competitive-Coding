#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int y, w, ans = 0;
    cin >> y >> w;
    const string probability[7] = {"", "1/1", "5/6", "2/3", "1/2", "1/3", "1/6"};
    cout << probability[max(y, w)] << endl;
    return 0;
}