// 重定向函数调用
#define strcpy my_strcpy
#define strncpy my_strncpy
#define strlen my_strlen
#define strcmp my_strcmp
#define strncmp my_strncmp
#define strcat my_strcat
#define strchr my_strchr
#define strstr my_strstr
#define atoi my_atoi
#define atof my_atof
#include <stddef.h>

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
