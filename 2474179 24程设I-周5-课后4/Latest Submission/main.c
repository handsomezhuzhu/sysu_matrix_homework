#include<stdio.h>

/**
 * @brief 主函数，用于计算三个整数的和、平均值、最大值、最小值，并判断是否能构成三角形
 *
 * 该程序首先通过标准输入接收三个整数，并计算它们的和、平均值、最大值和最小值。
 * 然后，它计算剩余的两个数之和，并与最大值进行比较，以判断这三个数是否能构成一个三角形。
 * 如果能构成三角形，则输出"Valid Triangle"；否则，输出"Invalid Triangle"。
 *
 * @return 总是返回0，表示程序正常结束
 */
int main() {
    int a, b, c, max, min;
    // 读取三个整数
    scanf("%d %d %d", &a, &b, &c);
    // 计算三个数的和
    int sum = a + b + c;
    // 计算平均值
    double av = sum / 3.0;
    // 初始化最大值和最小值为第一个数
    max = a;
    // 如果b比当前最大值大，则更新最大值
    if (b > max) {
        max = b;
    }
    // 如果c比当前最大值大，则更新最大值
    if (c > max) {
        max = c;
    }
    // 初始化最小值为第一个数
    min = a;
    // 如果b比当前最小值小，则更新最小值
    if (b < min) {
        min = b;
    }
    // 如果c比当前最小值小，则更新最小值
    if (c < min) {
        min = c;
    }
    // 输出和
    printf("Sum: %d\n", sum);
    // 输出平均值
    printf("Average: %.2lf\n", av);
    // 输出最大值
    printf("Max: %d\n", max);
    // 输出最小值
    printf("Min: %d\n", min);


    // 计算中间值
    int mid = sum - max - min;
    // 判断是否能构成三角形
    if (max < mid + min) {
        // 能构成三角形
        printf("Valid Triangle");
    }
    else {
        // 不能构成三角形
        printf("Invalid Triangle");
    }

}