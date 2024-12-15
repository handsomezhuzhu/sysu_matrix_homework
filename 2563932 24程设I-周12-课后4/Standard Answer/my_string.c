#include <stddef.h>
#include "my_string.h"


char *my_strcpy(char *dest, const char *src) {
    char *p = dest;
    while ((*p++ = *src++) != '\0') {
        /* nothing */;
    }
    return dest;
}


char *my_strncpy(char *dest, const char *src, size_t n) {
    char *p = dest;
	while (n) {
		if ((*p = *src) != 0) src++;
		p++;
		n--;
	}
    return dest;
}

size_t my_strlen(const char *str) {
    const char *p = str;
    while (*p) {
        p++;
    }
    return (size_t)(p - str);
}

int my_strcmp(const char *str1, const char *str2) {
	unsigned char c1, c2;
	
	while (1) {
		c1 = *str1++;
		c2 = *str2++;
		if (c1 != c2)
			return c1 < c2 ? -1 : 1;
		if (!c1)
			break;
	}
	return 0;
}

int my_strncmp(const char *str1, const char *str2, size_t n) {
	unsigned char c1, c2;

	while (n) {
		c1 = *str1++;
		c2 = *str2++;
		if (c1 != c2)
			return c1 < c2 ? -1 : 1;
		if (!c1)
			break;
		n--;
	}
	return 0;
}

char *my_strcat(char *dest, const char *src) {
    char *p = dest;
	while (*dest)
		dest++;
	while ((*dest++ = *src++) != '\0')
		/* nothing */;
	return p;
}

char *my_strchr(const char *str, int c) {
	for (; *str != (char)c; ++str) {
		if (*str == '\0') return NULL;
	}
	return (char *)str;
}

char *my_strstr(const char *s1, const char *s2) {
	size_t l1, l2;

	l2 = strlen(s2);
	if (!l2)
		return (char *)s1;
	l1 = strlen(s1);
	while (l1 >= l2) {
		l1--;
		if (!my_strncmp(s1, s2, l2))
			return (char *)s1;
		s1++;
	}
	return NULL;
}

int my_atoi(const char *str) {
    int num = 0;
    int sign = 1;
    while (*str == ' ' || *str == '\t') {
        str++;
    }
    if (*str == '+' || *str == '-') {
        sign = (*str == '-') ? -1 : 1;
        str++;
    }
    while (*str >= '0' && *str <= '9') {
        num = num * 10 + (*str - '0');
        str++;
    }
    return sign * num;
}

double my_atof(const char *str) {
    double num = 0.0;
    double divisor = 1.0;
    int sign = 1;
    while (*str == ' ' || *str == '\t') {
        str++;
    }
    if (*str == '+' || *str == '-') {
        sign = (*str == '-') ? -1 : 1;
        str++;
    }
    while (*str >= '0' && *str <= '9') {
        num = num * 10 + (*str - '0');
        str++;
    }
    if (*str == '.') {
        str++;
        while (*str >= '0' && *str <= '9') {
            num = num * 10 + (*str - '0');
            divisor *= 10;
            str++;
        }
    }
    return sign * num / divisor;
}