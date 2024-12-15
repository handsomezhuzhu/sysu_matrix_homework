#include <stdio.h>

int main() {
    int num1, num2;
    int primeCount = 0;

    scanf("%d %d", &num1, &num2);

    if (num1 > num2) {
        int temp = num1;
        num1 = num2;
        num2 = temp;
    }

    // 计算素数个数
    for (int i = num1; i <= num2; i++) {
        int isPrime = 1;
        for (int j = 2; j <= i/2; ++j) { 
            if (i % j == 0) {
                isPrime = 0;
                break;
            }
        }
        if (isPrime) {
            primeCount++;
        }
    }

    printf("%d\n", primeCount);

    // 输出公因数
    for (int i = 1; i <= num1 && i <= num2; i++) {
        if (num1 % i == 0 && num2 % i == 0) {
            printf("%d ", i);
        }
    }
    printf("\n");

    return 0;
}
