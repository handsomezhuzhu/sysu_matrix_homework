#include <stdio.h>

int main() {
    int a, b, c;
    int sum, max, min;
    double average;

    // 输入三个整数
    scanf("%d %d %d", &a, &b, &c);

    // 计算和
    sum = a + b + c;

    // 计算平均值
    average = sum / 3.0;

    // 计算最大值
    if (a >= b && a >= c) {
        max = a;
    } else if (b >= a && b >= c) {
        max = b;
    } else {
        max = c;
    }

    // 计算最小值
    if (a <= b && a <= c) {
        min = a;
    } else if (b <= a && b <= c) {
        min = b;
    } else {
        min = c;
    }

    // 输出结果
    printf("Sum: %d\n", sum);
    printf("Average: %.2f\n", average);
    printf("Max: %d\n", max);
    printf("Min: %d\n", min);

    // 判断是否为有效三角形
    if ((a + b > c) && (a + c > b) && (b + c > a)) {
        printf("Valid Triangle\n");
    } else {
        printf("Invalid Triangle\n");
    }

    return 0;
}