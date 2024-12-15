#include<stdio.h>

#define N 25

int main() {
    int n;
    double E=0, D=0, A[N];
    scanf("%d", &n);
    for(int i = 0; i < n; ++i)
        scanf("%lf", &A[i]);
    for(int i = 0; i < n; ++i)
        E += A[i];
    E /= n;
    for(int i = 0; i < n; ++i)
        D += (A[i] - E) * (A[i] - E);
    D /= n;
    printf("%.2lf\n%.2lf", E, D);
    return 0;
}