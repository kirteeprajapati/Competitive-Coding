#include <stdio.h>
using namespace std;
int main(){
    int T;
    scanf("%d", &T);
    int i=0;
    int X, Y;
    while(T>i){
        scanf("%d %d", &X, &Y);
        if (X > Y){
            printf("A\n");
        }
        else{
            printf("B\n");
        }
        T--;
    }
    return 0;
}