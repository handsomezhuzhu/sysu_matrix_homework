#include<stdio.h>
int main() {
	double a, b;
	scanf("%lf%lf", &a, &b);
	int aa = (int)a;
	double c = (double)((double)aa + b);
	int d = 4.2*c;
	printf("%.3lf\n-%o", c, -d);
	return 0;
}