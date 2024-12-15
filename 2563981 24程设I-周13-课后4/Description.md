# 24程设I-周13-课后4

# 题目描述

大宝和阿里正在进行一场有趣的翻转游戏。大宝首先写下一个句子，而阿里的任务是写出这个句子的翻转版本。期待你能和他们成功完成这个有趣的挑战！

设计一个程序实现对输入句子中每个单词的反转功能，句子长度不超过1000。具体要求如下：

1. 编写一个函数 ​`void reverseWords(char *sentence);`​，用于对输入句子中的每个单词进行反转。
2. 在主程序中，接受用户输入的句子，然后调用函数进行单词反转。
3. 输出反转后的句子。

# 示例输入1：

Hello World! Have a nice day.

# 示例输出1：

olleH dlroW! evaH a ecin yad.

# 示例输入2：

ni hao, wo shi SYSU

# 示例输出2：

```
in oah, ow ihs USYS
```

# 提示

使用以下函数需声明`#include <ctype.h>`
函数`isspace(a)`可判断a字符是否为空格，函数`ispunct(a)`可判断a字符是否为标点符号
函数`strcspn(s, "\n")`表示去除数组s中的换行符

