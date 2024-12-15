#include<stdio.h>

double factorial(int i) //定义阶乘 
{
	double k = 1;
	for(int f = 1; f <= i; f++)
		k = k*f;
	return k;
}

double C(int i,int f) //定义组合函数C 
{
	double k;
	k = factorial(f) / (factorial(i) * factorial(f-i));
	return k;
}

int main()
{
	int i=0;
	scanf("%d", &i);
	for(int a = 0; a < i; a++){
		for(int b = 1; b < i - a; b++)
			printf(" ");
		for(int c = 0; c <= a; c++){
			printf("%.0f", C(c,a));
			if(c != a) printf(" ");
		}
		printf("\n");
	}
	
	return 0;
} 