#include <iostream>
using namespace std;

int main()
{
    int A, B, X;
    scanf("%d", &X);
    scanf("%d %d", &A, &B);
    if (A + B > X)
    {
        printf("NO");
    }
    else
    {
        printf("YES");
    }
    return 0;
}
