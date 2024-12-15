#include <stdio.h>

int main() {
    char op;
    double num1, num2, result;
    int i, n;

    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        scanf("%lf %lf %c", &num1, &num2, &op);

        switch (op) {
            case '+':
                result = num1 + num2;
                printf("%.2f\n", result);
                break;
            case '-':
                result = num1 - num2;
                printf("%.2f\n", result);
                break;
            case '*':
                result = num1 * num2;
                printf("%.2f\n", result);
                break;
            case '/':
                if (num2 != 0) {
                    result = num1 / num2;
                    printf("%.2f\n", result);
                } else {
                    printf("除数不能为0\n");
                }
                break;
            default:
                printf("无效的操作符\n");
        }
    }

    return 0;
}
