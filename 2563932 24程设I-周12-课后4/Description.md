# 24程设I-周12-课后4

# 描述

在学习了字符串与函数指针后，John对 `string.h` 中常用的字符串操作很感兴趣，因此他想自己实现这些操作，但他对C语言指针的操作不是很熟悉，想要请你帮他实现这些函数。

主函数与头文件已给出，请在 `my_string.c` 中实现以下字符串操作函数：

```
/**
 * my_strcpy - Copy string
 * @dest: Destination string
 * @src: Source string
 * Returns: Pointer to the destination string
 */
char *my_strcpy(char *dest, const char *src);

/**
 * my_strncpy - Copy part of a string
 * @dest: Destination string
 * @src: Source string
 * @n: Maximum number of characters to copy
 * Returns: Pointer to the destination string
 */
char *my_strncpy(char *dest, const char *src, size_t n);


/**
 * my_strlen - Calculate the length of a string
 * @str: The string to measure
 * Returns: The length of the string
 */
size_t my_strlen(const char *str);

/**
 * my_strcmp - Compare two strings in ASCII order.
 *    If two strings are equal, return 0; 
 *    If str1 is greater than str2, return 1;
 *    If str1 is less than str2, return -1;
 * @str1: One string
 * @str2: Another string
 */
int my_strcmp(const char *str1, const char *str2);

/**
 * strncmp - Compare the first n pos of two strings in ASCII order.
 *    If two strings are equal, return 0; 
 *    If str1 is greater than str2, return 1;
 *    If str1 is less than str2, return -1;
 * @str1: One string
 * @str2: Another string
 * @n: The maximum number of bytes to compare
 */
int my_strncmp(const char *str1, const char *str2, size_t n);

/**
 * my_strcat - Concatenate two strings
 * @dest: Destination string
 * @src: Source string
 * Returns: Pointer to the destination string
 */
char *my_strcat(char *dest, const char *src);

/**
 * strchr - Find the first occurrence of a character in a string
 * @str: The string to be searched
 * @c: The character to search for
 * Returns: Pointer to the first occurrence character, return a NULL pointer when result cannot be found.
 * Note that the %NUL-terminator is considered part of the string, and can be searched for.
 */
char *my_strchr(const char *str, int c);

/**
 * strstr - Find the first substring in a %NUL terminated string
 * @s1: The string to be searched
 * @s2: The string to search for
 * Returns: Pointer to the first character of the substring, return a NULL pointer when result cannot be found.
 * Note that the %NUL-terminator is considered part of the string, and can be searched for.
 */
char *my_strstr(const char *s1, const char *s2);

/**
 * my_atoi - Convert a string to an integer
 * @str: The string to convert
 * Returns: The integer value of the string
 */
int my_atoi(const char *str);

/**
 * my_atof - Convert a string to a double
 * @str: The string to convert
 * Returns: The double value of the string
 */
double my_atof(const char *str);
```

# 输入

测试样例编号。

# 输出

参考输出示例。

# 输入示例

```
1
```

# 输出示例

```
strcpy: Hello, World!
strncpy: Hello
strlen: 13
strcmp: 0
strcmp: 1
strcat: Hello, World! C Programming
strchr: o, World!
strstr: World!
atoi: 123
atoi: -654
atof: 123.456000
atof: -321.654000
```

# Hint

1. 使用 `size_t` 类型请引头文件 `stddef.h`

2. 函数功能的详细描述参考：[cppreference.com](https://en.cppreference.com/w/)


