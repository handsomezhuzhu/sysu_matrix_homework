#include <stdio.h>  
#include <stdlib.h>  
#include <string.h>  
#include "func.h"  

int findPermutationDifference(const char *s, const char *t) {  
    int length = strlen(s);  
    int position[26]; // 26个小写字母的位置数组  
    int diff = 0;  

    // 记录 s 中每个字符的位置  
    for (int i = 0; i < length; i++) {  
        position[s[i] - 'a'] = i; // 通过字符的ASCII码计算偏移来存储位置  
    }  

    // 计算排列差  
    for (int i = 0; i < length; i++) {  
        diff += abs(position[t[i] - 'a'] - i); // 计算绝对差并累加  
    }  

    return diff;  
}  