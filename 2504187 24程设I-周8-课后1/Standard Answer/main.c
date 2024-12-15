#include<stdio.h>
#include "header.h"
int main()
{
    int a[100];
    int len;
    scanf("%d", &len);
    int i;
    for(i=0; i<len; i++){
    	scanf("%d", &a[i]);
	}
	printf("%d", maxFood(a, len));
    return 0;
}

