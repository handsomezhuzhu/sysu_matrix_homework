#include"func.h"
#include<stdio.h>
void reverseArray(int *arr, int size) {
    int *start = arr;
    int *end = arr + size - 1;
    while (start < end) {
        // 交换 *start 和 *end
        int temp = *start;
        *start = *end;
        *end = temp;
        // 移动指针
        start++;
        end--;
    }
}