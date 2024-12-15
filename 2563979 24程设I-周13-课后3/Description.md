# 24程设I-周13-课后3

# 相关知识介绍

**归并排序**是建立在归并操作上的一种有效、稳定的排序算法，该算法是采用分治法的一个非常典型的应用。将已**有序**的子序列**合并**，得到完全**有序**的序列；即先使每个子序列有序，再使子序列段间有序。若将两个有序表合并成一个有序表，称为二路归并。下面是一个简单的例子：

![Mergesort.png](/api/users/image?path=100240039/images/1701243297809.png)

如上图所示，二路归并排序使用分治思想，在每一层递归上主要有三个步骤：

- 分解：将n个元素分成2个含n/2个元素的子序列；
- 递归排序：调用归并排序函数`mergeSort`分别对2个子序列进行排序；
- 合并：调用合并函数`merge`合并2个已排序的子序列，得到排序结果。

# 题目描述

请根据主函数和头文件提示，编写子函数

```
void merge(int *arr, int start, int mid, int end);
void mergeSort(int *arr, int start, int end);
```

以实现归并排序。

1. `void merge(int *arr, int start, int mid, int end);` ：将两个已排序的子数组进行合并，第一个子数组从下标`start`开始到下标`mid`结束，第二个子数组从下标`mid+1`开始到下标`end`结束。
2. `void mergeSort(int *arr, int start, int end);`： 输入数组`arr`、起始下标`start`和结束下标`end`，将`arr`中从下标`start`到下标`end`的子数组进行排序。

**Hint**：`void mergeSort(int *arr, int start, int end);`是一个递归函数，当`start<end`时，会计算`mid=(start+end)/2`，然后分别调用`mergeSort(arr, start, mid)`和`mergeSort(arr, mid+1, end)`将数组分成两个子数组分别排序，之后再调用`merge(arr, start, mid, end)`将两个有序的子数组合并成一个有序的数组。

# 输入格式

第一行输入一个`int`类型变量 n，表示输入的数组长度，0<n<=10000；
第二行输入 n 个`int`类型的数组元素。

# 输出格式

按**从小到大**排好序的数组。

# 输入样例1

```
8
10 6 3 4 5 6 7 8
```

# 输出样例1

```
3 4 5 6 6 7 8 10
```

# 输入样例2

```
10
9 8 7 6 5 4 3 2 1 0
```

# 输出样例2

```
0 1 2 3 4 5 6 7 8 9
```

