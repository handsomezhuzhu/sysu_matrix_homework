#include <stdio.h>
#include <math.h>
int main(){
	double a,b;
    scanf("%lf %lf",&a,&b);

    double c=(int)a+b;

    long d=ceil(c*4.2);
    printf("%.3lf\n",c);
    printf("-%lo",-d);
	return 0;
} 