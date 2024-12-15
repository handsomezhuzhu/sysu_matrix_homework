#include <stdio.h>
#include <string.h>

#define MAX_LENGTH 10005

// 递归函数，用于计算反对称子串的数量
int pbreak(char s[], int len) {
    if (len == 1) return 1;
    int half_len = len / 2;
    char s1[MAX_LENGTH], s2[MAX_LENGTH];
    int s1_len = 0, s2_len = 0;

    // 复制前半部分到s1
    for (int i = 0; i < half_len; i++) {
        s1[s1_len++] = s[i];
    }
    s1[s1_len] = '\0'; // 确保字符串以空字符结尾

    // 复制后半部分到s2，并逆序
    for (int i = len - 1; i >= half_len; i--) {
        s2[s2_len++] = s[i];
    }
    s2[s2_len] = '\0'; // 确保字符串以空字符结尾

    // 检查s1和s2是否相等
    if (strcmp(s1, s2) == 0) {
        return 2 * pbreak(s1, half_len);
    } else {
        return 1;
    }
}

int main() {
    char s[MAX_LENGTH];
    scanf("%s", s);

    int len = strlen(s);
    printf("%d\n", pbreak(s, len));
    return 0;
}