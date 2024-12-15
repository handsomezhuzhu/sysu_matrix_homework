# 24程设I-周14-课后2

### 题目描述：

小明是图书馆的管理员需要管理图书信息，每一本书的的属性包含书名、作者、出版日期、价格，现在小明需要实现如下功能，输入n(n的范围是1-10)本书的信息，按照每本书的价格从低到高规格化输出。

注意，书名最多有40个字符，作者最多有20个字符(包含空格)。

##### 示例：

输入：

```
3
C Programming K&R
Brian W. Kernighan
1978 2 15
45.00
Data Structures Yedidyah
Yedidyah S. Langsam
2000 9 30
50.00
Algorithm Design Kleinberg
Jon Kleinberg
2012 3 10
60.00
```

输出:

```
Title                                    Author                    Publish Date    Price     
C Programming K&R                        Brian W. Kernighan        1978-02-15      45.00     
Data Structures Yedidyah                 Yedidyah S. Langsam       2000-09-30      50.00     
Algorithm Design Kleinberg               Jon Kleinberg             2012-03-10      60.00
```

##### 输入描述：

第一行输入多少本书
第一本书的书名
第一本书的作者
第一本书的发布日期
第一本书价格
第二本书的书名
第二本书的作者
第二本书的发布日期
第二本书价格
.....(以此类推)

##### 输出描述

输出第一行为Title Author Publish Date Price四个标题
后面的具体信息全部与第一行左对齐
Tittle占40个字符
Author占25个字符
Date占15个字符
Price占10个字符
日期格式为XXXX-XX-XX
价格保留两位小数
占多少字符指的是数据本身所占字符与空白部分的字符总和，以保证规格化输出。

