#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

#define MAX_LEN 6

void swap(char *x, char *y) {
    char temp = *x;
    *x = *y;
    *y = temp;
}

bool isDuplicate(char *str, int start, int curr) {
    for (int i = start; i < curr; i++) {
        if (str[i] == str[curr]) {
            return true;
        }
    }
    return false;
}

void permute(char *str, int start, int end, char **result, int *count) {
    if (start == end) {
        result[*count] = (char *)malloc((end + 2) * sizeof(char));
        strcpy(result[(*count)++], str);
        return;
    }

    for (int i = start; i <= end; i++) {
        // 避免重复排列
        if (isDuplicate(str, start, i)) {
            continue;
        }
        swap(&str[start], &str[i]);
        permute(str, start + 1, end, result, count);
        swap(&str[start], &str[i]); // 回溯
    }
}

int compareStrings(const void *a, const void *b) {
    return strcmp(*(char **)a, *(char **)b);
}

int main() {
    char str[MAX_LEN];
    scanf("%s", str);

    int len = strlen(str);
    int maxPermutations = 1;
    for (int i = 0; i < len; i++) {
        maxPermutations *= (i + 1);
    }

    char **result = (char **)malloc(maxPermutations * sizeof(char *));
    int count = 0;

    permute(str, 0, len - 1, result, &count);

    // 按字典序排序
    qsort(result, count, sizeof(char *), compareStrings);

    // 输出结果
    for (int i = 0; i < count; i++) {
        printf("%s\n", result[i]);
        free(result[i]); // 释放之前分配的内存
    }
    free(result); // 释放结果数组的内存

    return 0;
}