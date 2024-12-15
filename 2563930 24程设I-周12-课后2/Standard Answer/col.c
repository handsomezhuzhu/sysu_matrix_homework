#include "header.h"

// 比较函数: 值升序
int cmpAsc(const void *a, const void *b) {
    return *(int*)a - *(int*)b;
}

// 比较函数: 值降序
int cmpDesc(const void *a, const void *b) {
    return *(int*)b - *(int*)a;
}

// 排序函数
void sortData(int data[], int len, int (*cmp)(const void*, const void*)) {
    qsort(data, len, sizeof(int), cmp);
}
