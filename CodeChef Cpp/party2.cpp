#include <iostream>
using namespace std;

int main()
{
    int T, N, X, K;
    scanf("%d", &T);
    for (int i = 0; i < T; i++)
    {
        scanf("%d %d %d", &N, &X, &K);
        if (N * X > K)
        {
            printf("NO\n");
        }
        else
        {
            printf("YES\n");
        }
    }
    return 0;
}
