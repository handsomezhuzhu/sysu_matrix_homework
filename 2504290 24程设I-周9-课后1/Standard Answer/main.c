#include<stdio.h>
#include"func.h"

int main() {

    int size;
    scanf("%d", &size);
    int arr[size];
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }
    int max, min;

    find_max_min(arr, size, &max, &min);

    printf("%d\n", max);
    printf("%d\n", min);

    return 0;
}