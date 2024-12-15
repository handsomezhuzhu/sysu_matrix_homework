#include<stdio.h>

/**
 * @brief 主函数，用于从标准输入读取三个整数，找出其中的最大值和最小值，
 *        并输出最小值以及最大值与最小值的差。
 *
 * @return 返回0，表示程序正常结束。
 */
int main() {
    int a, b, c, max, min;
    // 读取三个整数
    scanf("%d %d %d", &a, &b, &c);

    // 初始化最大值为a
    max = a;
    // 如果b大于当前最大值，则更新最大值
    if (b > max) {
        max = b;
    }
    // 如果c大于当前最大值，则更新最大值
    if (c > max) {
        max = c;
    }

    // 初始化最小值为a
    min = a;
    // 如果b小于当前最小值，则更新最小值
    if (b < min) {
        min = b;
    }
    // 如果c小于当前最小值，则更新最小值
    if (c < min) {
        min = c;
    }

    // 输出最小值
    printf("%d\n", min);
    // 输出最大值与最小值的差
    printf("%d", max - min);


}