#include <iostream>
using namespace std;

int main()
{
    int T, X;
    scanf("%d", &T);
    for (int i = 0; T > i; i++)
    {
        scanf("%d", &X);
        if (1 <= X && X <= 4)
        {
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }
    }
    return 0;
}
