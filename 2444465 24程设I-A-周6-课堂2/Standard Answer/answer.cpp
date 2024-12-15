#include <stdio.h>

int main() {
    long int n;
    scanf("%ld", &n);


    int highestOne = 0; 
    int count = 0;  
    int index = 0;

    while(n) {  //n不为0
        index++;
        if (n & 1) { // 当前位为1 
            highestOne = index;  // 找到最高位 1，索引从 1 开始计数
        } else{ // 当前位为0 
            
            count++;
        }
        n = n>>1;
    }

    printf("%d %d", highestOne, count);

    return 0;
}
