#include <stdio.h>
#include <string.h>
#include "findMaxNumber.h"

// 函数用于从字符串中找到最大的连续三位数的起始位置 
void findMaxNumber(char *s, int len, int *start) {
    int max = -1;
    for (int i = 0; i <= len - 3; i++) {
        int num = (s[i] - '0') * 100 + (s[i+1] - '0') * 10 + (s[i+2] - '0');
        if (num > max) {
            max = num;
            *start = i;
        }
    }
}