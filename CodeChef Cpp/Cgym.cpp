#include <stdio.h>
using namespace std;

int main()
{
    int T;
    scanf("%d", &T);
    for (int i = 0; T > i; i++)
    {
        int X, Y, Z;
        scanf("%d %d %d", &X, &Y, &Z);
        if (0 <= Z && Z < X)
        {
            printf("0\n");
        }
        else if (X <= Z && Z < (X + Y))
        {
            printf("1\n");
        }
        else if ((Y + X) <= Z)
        {
            printf("2\n");
        }
    }
    return 0;
}