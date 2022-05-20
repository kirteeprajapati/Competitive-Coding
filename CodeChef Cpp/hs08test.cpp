#include <bits/stdc++.h>
using namespace std;

int main()
{
    int x;
    float y;
    scanf("%d %f", &x, &y);
    if (x % 5 == 0 && y >= x + 0.50)
    {
        printf("%f", y - x - 0.50);
    }
    else
    {
        printf("%f", y);
    }

    return 0;
}
