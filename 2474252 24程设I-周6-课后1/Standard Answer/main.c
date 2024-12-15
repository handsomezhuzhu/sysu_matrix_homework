#include<stdio.h>

int main(){
    int n;
    scanf("%d", &n);

    for (int i = 1; i < n; i++) {
        if (i % 2 == 0) {
            continue; 
        }

        if (i % 7 == 0) {
            continue; 
        }

        printf("%d ", i);

        if (i > n / 2) {
            break;
        }
    }

    return 0;
}