#include<stdio.h>


int main(){
    extern unsigned int maxNum;
    unsigned int a,b;
    scanf("%d",&a);
    scanf("%d",&b);
    int x=maxNum-a+1;
    int y=maxNum-b+1;
    printf("%d",x+y);
}