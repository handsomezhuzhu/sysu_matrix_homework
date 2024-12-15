#include <stdio.h>
int main(){
    float w1,w2,w3,t;
    int a,b,c;
    scanf("%f %d",&w1,&a);
    scanf("%f %d",&w2,&b);
    scanf("%f %d",&w3,&c);
    t=w1*a+w2*b+w3*c;
    printf("%.2f",t);
	return 0;
} 