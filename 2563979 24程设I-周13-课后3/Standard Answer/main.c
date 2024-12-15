#include <stdio.h>
#include <stdlib.h>
#include "mergeSort.h"

int main(){
	// length of array
	int n;
	scanf("%d",&n);

	// initial array
	int *arr=(int *)malloc(sizeof(int)*(n));
	for(int i = 0; i < n; i++)
		scanf("%d", arr+i);

	// sorting
	mergeSort(arr, 0, n-1);
	
	// print array
	for(int i = 0; i < n; i++)
		printf("%d ", *(arr + i));

	free(arr);
	return 0;
}