#include<stdio.h>


int main() {
    int n,t;
    scanf("%d",&n);
    int a[n];
    for (int i = 0; i < n; ++i) {
        scanf("%d ",&a[i]);
    }
    int del;
    scanf("%d",&del);
    if(del<0||del>=n){
        for (int i = 0; i < n; ++i) {
            printf("%d ",a[i]);
        }
    }else{
        for (int i = del; i < n; ++i) {
            a[i]=a[i+1];
        }
        for (int i = 0; i < n-1; ++i) {
            printf("%d ",a[i]);
        }
    }
    return 0;
}


