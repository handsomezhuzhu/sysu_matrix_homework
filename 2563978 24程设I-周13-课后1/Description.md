# 24程设I-周13-课后1

# Description

现在给定两条字符串，如“abcdabc”和"abc"，要求字符串"abc"在"abcdabc"的最大字符串长度。最大字符串长度指的是"abc"在"abcdabc"连续出现的长度，当匹配的次数大于等于1的时候，不要求"abc"在后面也要保持完整。如"abcab"和“abc”的最大字符串长度为5。<br/>字符串长度不大于$10000$。<br/>

# Input

输入的第一个数字 $N$ 代表测试样例数目，接下来有 $2*N$ 行字符串。<br/>每两行字符串的第一个字符串为待匹配的字符串，第二个字符串为要匹配的字符串。

# Output

题意要求的最大字符串匹配长度。

# Sample Input

```
2
abcdabc
abc
abcdabcd
abcd
```

# Sample Output

```
3
8
```



