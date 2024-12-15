#include <stdio.h>

long long cow(long long n){
	if(n % 3 == 0 && n / 3 >= 2) return 3*cow(n / 3);
	else if((n - 2) % 3 == 0 && (n - 2) / 3 >= 2) return 3*cow((n - 2) / 3) + 1; // 注意要加1群 
	else return 1; 
}

int main() {
	long long n;
	scanf("%lld", &n);
	printf("%lld\n", cow(n));
	
	return 0;
}