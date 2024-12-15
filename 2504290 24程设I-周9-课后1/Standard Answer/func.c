#include"func.h"
#include<stdio.h>
void find_max_min(int *arr, int size, int *max,int *min)
{
    *max = *min = arr[0];
    for(int i=1; i < size; i++)
    {
        if(arr[i] > *max)
        {
            *max = arr[i];
        }
        if(arr[i] < *min)
        {
            *min = arr[i];
        }
    }

}


