#include <bits/stdc++.h>
using namespace std;
int main()
{
    int T;
    scanf("%d", &T);
    int i = 0;
    while (i<T)
    {
        int X, Y;
        scanf("%d %d", &X, &Y);
        int sum = X+Y;
        printf("%d\n", sum);
        T-- ;
    }
    return 0;
}
