#include <stdio.h>

int main() {
    int size;
    scanf("%d", &size);
    int arr[size];
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }
    int *p = arr;                       // 指向数组的指针
    int sum = 0;                        // 用于存储总和
    
    // 使用指针遍历数组并计算总和
    for (int i = 0; i < size; i++) {
        sum += *(p + i);                // 解引用指针获取数组元素值
    }
    
    // 输出结果
    printf("%d\n", sum);
    
    return 0;
}
