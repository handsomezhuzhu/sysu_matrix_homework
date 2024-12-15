#include <stdio.h>
#include <stdlib.h>

//函数声明
void sortData(int data[], int len, int (*cmp)(const void*, const void*));
int cmpAsc(const void* a, const void* b);
int cmpDesc(const void* a, const void* b);

extern int temps[1000];// 全局变量声明