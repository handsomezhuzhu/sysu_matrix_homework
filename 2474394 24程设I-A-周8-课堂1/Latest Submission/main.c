#include<stdio.h>

double ex(double a[],int n){
    double sum=0.0;
    for (int i = 0; i < n; i++) {
        sum=sum+a[i];
    }
    return sum/n;
}

double dx(double a[],int n){
    double sum=0.0;
    for (int i = 0; i < n; i++) {
        sum=sum+(a[i]-ex(a,n))*(a[i]-ex(a,n));
    }
    return sum/n;
}

int main() {
    int n;
    scanf("%d",&n);
    double a[n];
    for (int i = 0; i < n; i++) {
        scanf("%lf",&a[i]);
    }
    printf("%.2lf\n",ex(a,n));
    printf("%.2lf",dx(a,n));
    return 0;
}


