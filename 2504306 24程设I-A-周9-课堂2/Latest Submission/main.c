#include<stdio.h>
#include"func.h"
int main(){
    int n;
	scanf("%d",&n);
	int a[n][n],b[n],c[n];
    for(int i=1;i<n;i++)scanf("%d",&b[i]);
    for(int i=1;i<n;i++)scanf("%d",&c[i]);
	func(n,&a[1],b,&c[1]);//注意调用的区别
    for(int j=0;j<n;j++){
        for(int i=0;i<n;i++)printf("%d ",a[i][j]);
        printf("\n");
    } 
    return 0;
}