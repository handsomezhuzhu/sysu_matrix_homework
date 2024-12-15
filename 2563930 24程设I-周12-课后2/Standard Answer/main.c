#include "header.h"
#include <math.h>
#include<stdio.h>

// 注：cmpAsc为值升序函数，cmpDesc为值降序函数

int main() {
    int temps[1000];
    int len;
    int order;
    int (*compare)(const void*, const void*) = NULL;

// 第一行：输入数据个数 
    if (scanf("%d", &len) != 1 || len <= 0 || len > 1000) {
        return 1;
    }

// 第二行：输入数据，空格分割
    for (int i = 0; i < len; i++) {
        int temp;
        if (scanf("%d", &temp) != 1) {
            printf("error\n");
            return 1; //程序终止 
        }
        temps[i] = temp;
    }

// 第三行：选择排序方式 1: 升序, 2: 降序
    scanf("%d", &order);
    compare = (order == 1) ? cmpAsc : cmpDesc;
    sortData(temps, len, compare);

// 输出排序后的数据 
    for (int i = 0; i < len; i++) {
        printf("%d ", temps[i]);
    }
    return 0;
}


