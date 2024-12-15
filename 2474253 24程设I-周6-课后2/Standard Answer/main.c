#include<stdio.h>

int main(){
    int a, b;
    scanf("%d%d", &a, &b);

    int r, n;
    r = a % b;
    n = a * b;
    while(r != 0){
        a = b;
        b = r;
        r = a % b;
    }
    printf("GCD: %d\nLCM: %d", b, n/b);
    return 0;
}