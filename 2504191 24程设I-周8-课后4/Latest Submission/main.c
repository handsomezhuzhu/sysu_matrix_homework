#include <stdio.h>
#include <string.h>



void digits(char a, char b, char *result, int *c) {
    int sum = (a - '0') + (b - '0') + *c;
    *c = sum / 10;
    *result = (sum % 10) + '0';
}

// 大数相加函数
void numbers(char *num1, char *num2, char *result) {
    int len1 = strlen(num1);
    int len2 = strlen(num2);
    int c = 0;
    int i, j, k;

    // 从低位到高位逐位相加
    for (i = len1 - 1, j = len2 - 1, k = 0; i >= 0 || j >= 0 || c; i--, j--, k++) {
        char digit1 = (i >= 0) ? num1[i] : '0';
        char digit2 = (j >= 0) ? num2[j] : '0';
        digits(digit1, digit2, &result[k], &c);
    }

    // 结果字符串是反向的，需要反转
    result[k] = '\0';
    for (int start = 0, end = k - 1; start < end; start++, end--) {
        char temp = result[start];
        result[start] = result[end];
        result[end] = temp;
    }
}

int main() {
    char num1[101], num2[101], result[101 + 1];  // +1 for possible carry

    // 输入两个大数
    //printf("请输入第一个非负整数（长度不超过100位）：");
    scanf("%s", num1);
    //printf("请输入第二个非负整数（长度不超过100位）：");
    scanf("%s", num2);

    // 计算和
    numbers(num1, num2, result);

    // 输出结果
    printf("%s\n", result);

    return 0;
}