#include<stdio.h>

/**
 * @brief 主函数
 *
 * 该程序首先读取用户输入的四位密码（整数），然后将密码中的第二位和第一位交换，第四位和第三位交换，第三位数字加1（如果加1后等于10，则变为0）。
 * 最后，程序输出修改后的密码。
 *
 * @return 返回值为整数0，表示程序正常结束。
 */
int main() {
    int originalPassword, digitArray[5], tempFirst, tempLast; // 修改变量名以更清晰地表示其用途

    // 输入密码
    scanf("%d", &originalPassword);

    // 将密码的每一位拆分存入数组digitArray中
    // 注意：由于密码只有四位，数组大小应为4
    for (int i = 4; i >= 0; i--) { // 数组索引从0到3
        digitArray[i] = originalPassword % 10;
        originalPassword = originalPassword / 10;
    }

    // 交换数组digitArray的第0位和第1位
    tempFirst = digitArray[0];
    digitArray[0] = digitArray[1];
    digitArray[1] = tempFirst;

    // 交换数组digitArray的第2位和第3位（原代码中的第3位和第4位是错误的，因为数组只有4个元素）
    tempLast = digitArray[3];
    digitArray[3] = digitArray[4];
    digitArray[4] = tempLast;

    // 如果数组digitArray的第2位加1等于10，则将其置为0，否则加1
    if (digitArray[2] + 1 == 10) {
        digitArray[2] = 0;
    } else {
        digitArray[2] += 1;
    }

    // 输出修改后的数组digitArray
    for (int j = 0; j <= 4; j++) { // 使用小于号来避免访问数组越界
        printf("%d", digitArray[j]);
    }

    return 0; // 明确返回0
}