#include <stdio.h>
#include <string.h>
#include <stdlib.h>

// 实现大数乘法
char* multiplyLargeNumbers(const char *num1, const char *num2) {
    int len1 = strlen(num1);
    int len2 = strlen(num2);
    static char resultStr[400]; 
    int result[400] = {0};

    if (len1 == 0 || len2 == 0){
        strcpy(resultStr, "0");
        return resultStr;
    }

    for (int i = len1 - 1; i >= 0; i--) {
        for (int j = len2 - 1; j >= 0; j--) {
            int mul = (num1[i] - '0') * (num2[j] - '0');
            int p1 = i + j, p2 = i + j + 1;
            int sum = mul + result[p2];

            result[p1] += sum / 10;  
            result[p2] = sum % 10;   
        }
    }

    int k = 0;
    while (k < len1 + len2 && result[k] == 0) k++; // 跳过前导0

    if (k == len1 + len2){
        strcpy(resultStr, "0");
        return resultStr;
    }

    int pos = 0;
    for (; k < len1 + len2; k++) {
        resultStr[pos++] = result[k] + '0';
    }
    resultStr[pos] = '\0';

    return resultStr;
}

int main() {
    char num1[200], num2[200];
    
    scanf("%s%s", num1, num2);  
    
    char *product = multiplyLargeNumbers(num1, num2);
    printf("%s\n", product);

    return 0;
}
