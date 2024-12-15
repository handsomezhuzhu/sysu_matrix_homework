#include <stdio.h>
#include <stdlib.h>
#include "mergeSort.h"

void merge(int *arr, int start, int mid, int end)
{
    int *result = (int*) malloc(sizeof(int) * (end - start + 1));
    int i = start, j = mid+1, k = 0;
    while(i <= mid && j <= end)
    {
        if(*(arr + i) > *(arr + j))
        {
            *(result + k) = *(arr + j);
            j++;
        }
        else
        {
            *(result + k) = *(arr + i);
            i++;
        }
        k++;
    }
    if(i > mid)
    {
        for(; j <= end; j++, k++)
        {
            *(result + k) = *(arr + j);
        }
    }
    if(j > end)
    {
        for(; i <= mid; i++, k++)
        {
            *(result + k) = *(arr + i);
        }
    }
    for(i = start; i <= end; i++)
    {
        *(arr + i) = *(result + i - start);
    }
    free(result);
}

void mergeSort(int *arr, int start, int end)
{
	if (start < end)
    {
        int mid = (start + end) / 2;
        mergeSort(arr, start, mid); 
        mergeSort(arr, mid + 1, end); 
        merge(arr, start, mid, end);
    }
}