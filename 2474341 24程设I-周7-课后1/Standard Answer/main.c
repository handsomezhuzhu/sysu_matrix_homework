#include <stdio.h>
#include <math.h>

int main() {
    int r = 999;

    for (int i = 0; i <= r; i++) {
        int val = i, n = 0, result = 0;

        // 特判0
        if (i == 0) {
            printf("0\n");
            continue;
        }
        // 计算数字的位数
        while (val) {
            val /= 10;
            n++;
        }
        val = i;
        // 计算各位数字的n次方和
        while (val != 0) {
            int num = val % 10;
            result += (int)pow(num, n);
            val /= 10;
        }
        // 输出结果
        if (result == i) {
            printf("%d\n", i);
        }
    }
    
    return 0;
}