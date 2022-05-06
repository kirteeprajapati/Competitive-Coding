#include <stdio.h>
#include <iostream>
using namespace std;

int main(){
    int T, i=0;
    scanf("%d", &T);
    while(T>i){
        int X, Y, Z;
        scanf("%d %d %d", &X, &Y, &Z);
        printf("%d\n", X*Y*Z);
        T--;
    }
    return 0;
}