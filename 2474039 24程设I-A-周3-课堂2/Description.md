# 24程设I-A-周3-课堂2

# 情报拼接

小洛是组织中的情报汇总负责人，负责将线人提供的情报碎片拼接后交给上级组织。线人一般将情报分成三份，第一份将在此次接头时给出，第二份和第三份已经按照约定存放在 `SECRET_2` 和 ` SECRET_3`中了。而你将帮助小洛进行此次接头并合并情报碎片。

## 题目要求

从标准输入中读取一个字符串作为第一份碎片，然后与**隐藏文件**的字符串全局变量中的`SECRET_2`和`SECRET_3`一起按顺序输出。

其中`SECERT_2` 和 `SECRET_3`均为字符串。

## 问题输入

一个长度不超过255的字符串。

## 问题输出

一个字符串。

## 输入输出样例

当 `SECRET_2 = " is a system"`， `SECRET_3 = " developed by SYSU"`时，有以下输入输出样例。

### 样例一

输入：

```
Matrix
```

输出：

```
Matrix is a system developed by SYSU
```

### 样例二

输入：

```
CMS
```

输出：

```
CMS is a system developed by SYSU
```

## 提示

1、用`extern char SECRET_2[];`来引用 **字符串类型** 的全局变量SECRET_2，以此类推。
2、定义字符串类型的变量`SECRET_1`，并接收输入为其赋值的代码如下：

```
char SECRET_1[256];
scanf("%s",SECRET_1);
```

