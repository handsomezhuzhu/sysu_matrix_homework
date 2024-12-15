#include <stdio.h>
#include <string.h>

// 字符串比较函数
int string_compare(const char *str1, const char *str2) {
    while (*str1 && (*str1 == *str2)) {
        str1++;
        str2++;
    }
    return (unsigned char)*str1 - (unsigned char)*str2;
}

// 交换函数
void swap(char *str, int i, int j) {
    char temp = str[i];
    str[i] = str[j];
    str[j] = temp;
}

// 实现 qsort 的 partition 和 quicksort
int partition(char arr[], int low, int high) {
    char pivot = arr[high];  // 选择最后一个元素为 pivot
    int i = low - 1;  // i 是较小元素的索引

    for (int j = low; j <= high - 1; j++) {
        // 如果当前元素小于或等于 pivot
        if (string_compare(&arr[j], &pivot) <= 0) {
            i++;
            swap(arr, i, j);
        }
    }
    swap(arr, i + 1, high);
    return i + 1;
}

void quicksort(char arr[], int low, int high) {
    if (low < high) {
        int pi = partition(arr, low, high);  // partition 索引

        quicksort(arr, low, pi - 1);  // 排序左边部分
        quicksort(arr, pi + 1, high);  // 排序右边部分
    }
}

// 递归生成排列的函数
int permute(char *str, int start, int end, char result[][6], int *count) {
    if (start == end) {
        // 检查当前排列是否已存在，避免重复
        for (int i = 0; i < *count; i++) {
            if (string_compare(result[i], str) == 0) {
                return 0;  // 找到重复的排列，返回
            }
        }
        // 将当前排列存储在二维数组中
        strcpy(result[*count], str);
        (*count)++;
        return 1;  // 返回，表示该排列成功加入结果
    }

    int added = 0;  // 标志是否有新的排列加入结果
    for (int i = start; i <= end; i++) {
        // 交换字符
        swap(str, start, i);

        // 递归调用，生成剩余部分的排列
        added += permute(str, start + 1, end, result, count);

        // 回溯，恢复交换前的状态
        swap(str, start, i);
    }
    return added;  // 返回生成的新排列个数
}

// 排序生成的排列结果
void sort_results(char result[][6], int count) {
    for (int i = 0; i < count - 1; i++) {
        for (int j = i + 1; j < count; j++) {
            if (string_compare(result[i], result[j]) > 0) {
                // 如果前一个字符串大于后一个字符串，交换它们
                char temp[6];
                strcpy(temp, result[i]);
                strcpy(result[i], result[j]);
                strcpy(result[j], temp);
            }
        }
    }
}

int main() {
    char str[6];  // 字符串长度不超过 5
    scanf("%s", str);

    int len = strlen(str);

    // 用于存储所有排列，最多 120 个（5! = 120）
    char result[120][6];  // 二维数组存储排列结果
    int count = 0;

    // 对字符串进行排序，确保字典序
    quicksort(str, 0, len - 1);

    // 生成所有排列
    permute(str, 0, len - 1, result, &count);

    // 对结果进行字典序排序
    sort_results(result, count);

    // 输出所有排列
    for (int i = 0; i < count; i++) {
        printf("%s\n", result[i]);
    }

    return 0;
}

