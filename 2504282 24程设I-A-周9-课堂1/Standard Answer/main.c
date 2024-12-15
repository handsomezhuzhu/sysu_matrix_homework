#include <stdio.h>
#include <stdlib.h>
 
int compare(const void *a, const void *b) {
    return *(int*)a - *(int*)b;
}
 
int main() {
    int arr[100]={0};
    for(int j=0;j<100;j++)scanf("%d",&arr[j]);
    int arr1[sizeof(arr)],t;
    for (t = 0; t < sizeof(arr); t++) {
        arr1[t] = arr[t];
    }
    int n = sizeof(arr) / sizeof(arr[0]);        // 数组长度
    int k,i=0;                                       // 要找的第k大数
    scanf("%d", &k);                             // 输入k的值
 
    // 对数组进行排序,此处看学生用自己的任意方法排序都可
    qsort(arr, n, sizeof(arr[0]), compare);
    
    while(1){
        if(arr[n-k]==arr1[i])break;
        else i++;
    }

    // 输出第k大的数及其位置
    printf("第%d大的数是%d\n位置是%d\n", k, arr[n - k], i+1);
 
    return 0;
}