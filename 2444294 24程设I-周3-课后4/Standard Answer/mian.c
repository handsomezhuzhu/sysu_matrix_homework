#include<stdio.h>
int main() {
	double i, j;
	scanf("%lf%lf", &i, &j);
	int a = (int)i;
	int b = (int)j;
	printf("%X\n", a*b);
	printf("%.4lf", (double)a/b);
	return 0;
}