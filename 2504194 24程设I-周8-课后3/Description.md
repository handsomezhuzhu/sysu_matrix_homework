# 24程设I-周8-课后3

# Description

小G在玩一个游戏，利用字符重复出现的次数，编写一种方法，实现基本的字符串压缩功能。比如，字符串aabcccccaaa会变为a2b1c5a3，假如压缩后的字符串的长度不小于原字符串的长度，则输出原来的字符串。
字符串中只包含小写英文字母（a至z），每个字母的重复次数为1到9次，字符总长度为1~100。

# Hint

strlen()可以用来求一个字符串的长度，需要include头文件<string.h>

# Input

一行，字符串

# Output

输出压缩的字符串或者原字符串

# Sample Input

```
aabcccccaaa
```

# Sample Output

```
a2b1c5a3
```

# Sample Input2

```
abbccd
```

# Sample Output2

```
abbccd
```

(因为压缩后的字符串为a1b2c2d1，长度比原字符串abbccd大，所以输出原字符串)


