#include <stdio.h>
#include "my_string.h"


int main() {
	int test_num;
	scanf("%d", &test_num);
	if (test_num == 1) {
	    char src[] = "Hello, World!";
	    char dest[50], destcpy[50];
	    
	    // 使用重定向后的函数
	    strcpy(dest, src);
	    printf("strcpy: %s\n", dest);
	    
	    strncpy(destcpy, src, 5);
		destcpy[5] = '\0'; // 确保字符串以空字符结尾
	    printf("strncpy: %s\n", destcpy);
	    
	    printf("strlen: %zu\n", strlen(src));
	    
	    printf("strcmp: %d\n", strcmp(src, "Hello, World!"));
	    printf("strcmp: %d\n", strcmp(src, "Hallo, World!"));
	    
	    strcat(dest, " C Programming");
	    printf("strcat: %s\n", dest);
	    
	    printf("strchr: %s\n", strchr(src, 'o'));
	    
	    printf("strstr: %s\n", strstr(src, "World"));
	    
	    printf("atoi: %d\n", atoi("123"));
	    printf("atoi: %d\n", atoi("-654"));
	    
	    printf("atof: %f\n", atof("123.456"));
	    printf("atof: %f\n", atof("-321.654"));
	}
	else if (test_num == 2) {
		char src[] = "Hello, Universe!";
		char dest[50], destcpy[50];
		
		// 使用重定向后的函数
		strcpy(dest, src);
		printf("strcpy: %s\n", dest);
		
		strncpy(destcpy, src, 12);
		destcpy[12] = '\0'; // 确保字符串以空字符结尾
		printf("strncpy: %s\n", destcpy);
		
		printf("strlen: %zu\n", strlen(src));
		
		printf("strcmp: %d\n", strcmp(src, "Hello, Universe!"));
		printf("strcmp: %d\n", strcmp(src, "Hello, World!"));
		
		strcat(dest, " in C");
		printf("strcat: %s\n", dest);
		
		printf("strchr: %s\n", strchr(src, '!'));
		
		printf("strstr: %s\n", strstr(src, "Universe"));
		
		printf("atoi: %d\n", atoi("1234"));
		printf("atoi: %d\n", atoi("-5678"));
		
		printf("atof: %f\n", atof("123.45"));
		printf("atof: %f\n", atof("-67.89"));
	}
	else if (test_num == 3) {
		char src[] = "C Programming";
		char dest[50], destcpy[50];
		
		// 使用重定向后的函数
		strcpy(dest, src);
		printf("strcpy: %s\n", dest);
		
		strncpy(destcpy, src, 8);
		destcpy[8] = '\0'; // 确保字符串以空字符结尾
		printf("strncpy: %s\n", destcpy);
		
		printf("strlen: %zu\n", strlen(src));
		
		printf("strcmp: %d\n", strcmp(src, "C Programming"));
		printf("strcmp: %d\n", strcmp(src, "C++ Programming"));
		
		strcat(dest, " is fun");
		printf("strcat: %s\n", dest);
		
		printf("strchr: %s\n", strchr(src, ' '));
		
		printf("strstr: %s\n", strstr(src, "Programming"));
		
		printf("atoi: %d\n", atoi("90"));
		printf("atoi: %d\n", atoi("-20"));
		
		printf("atof: %f\n", atof("45.67"));
		printf("atof: %f\n", atof("-23.45"));
	}
    return 0;
}