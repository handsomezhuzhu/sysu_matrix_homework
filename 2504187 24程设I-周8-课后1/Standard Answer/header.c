#include "header.h"
int maxFood(int a[], int len){
	int ans = 0;
	int temp = 0;
	int i;
	for(i=0; i<len; i++){
		temp = (temp+a[i])> 0?(temp+a[i]):0;
		ans = ans>temp?ans:temp;
	}
	return ans;
}