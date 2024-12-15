#include <stdio.h>
#include "func.h"

void func(int n,int (*a)[n],int *b,int *c){
    *c--;
    for(int i=0;i<&a[2]-&a[1];i++)
        *a--;
    a[0][0]=0;
    for(int i=1;i<n;i++){
        a[i][0]=b[i];
        a[0][i]=c[i];
    }
    for(int i=1;i<n;i++){
        for(int j=1;j<n;j++){
            a[i][j]=a[i-1][j]-a[i][j-1];
        }
    }
}