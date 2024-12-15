#include<stdio.h>

#define N 15


int main() {
    int n, k;
    int a[N];
    scanf("%d", &n);
    for(int i = 0; i < n; ++i)
        scanf("%d", &a[i]);
    scanf("%d", &k);
    if(k >= 0 && k < n) {
        for(int i = k; i < n - 1; ++i)
            a[i] = a[i + 1];
        --n;
    }
    for(int i = 0; i < n ; ++i)
        printf("%d ", a[i]);
    return 0;
}