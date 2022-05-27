#include <iostream>
using namespace std;
int main()
{
    int n, h, road = 0;
    cin >> n >> h;
    int heights[n];
    for (int i = 0; i < n; i++)
    {
        cin >> heights[i];
        if (heights[i] > h)
        {
            road += 2;
        }
        else
        {
            road++;
        }
    }
    printf("%d", road);
    return 0;
}