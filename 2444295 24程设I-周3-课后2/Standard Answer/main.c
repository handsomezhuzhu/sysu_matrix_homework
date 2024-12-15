#include <stdio.h>
#include <math.h>
int main(){
	int a,b,c;
    float w1,w2,w3;
	scanf("%f %d %f %d %f %d", &w1,&a, &w2,&b,&w3,&c);
	printf("%.2f\n",(float)(a*w1+b*w2+c*w3));
}
