#include <stdio.h>

int xsequence(int n){
	if(n == 1 || n == 2 || n == 3) return n;
	else return (2 * xsequence(n-1) + xsequence(n-3)) % 32767;//注意取余操作的位置对结果的影响
}

int main(){
	int n;
	scanf("%d", &n);
	printf("%d\n", xsequence(n));
    
	return 0;
}