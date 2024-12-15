#include<stdio.h>

     

int main(){
    int a,b,c,d;
    scanf("%d.%d.%d.%d",&a,&b,&c,&d);
    long int num=((unsigned int)a << 24) | ((unsigned int)b << 16) | ((unsigned int)c << 8) | (unsigned int)d; 
    printf("%ld",num);

}