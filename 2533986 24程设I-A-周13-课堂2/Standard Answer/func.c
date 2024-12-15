#include "func.h"


void formatWord(char *str) {
    char *ptr = str; // 指向首字母位置 
   	int newWord = 1; // 用于标记单词的开始

    while (*ptr) {
        if (newWord) {
        	if(*ptr >= 'a' && *ptr <= 'z'){
        		*ptr -= 32; // 转换为大写
			}
            newWord = 0; // 当前单词的首字母已处理
        } else if (!newWord) {
        	if(*ptr >= 'A' && *ptr <= 'Z'){
        		*ptr += 32; // 转换为小写
			}
        }
        ptr++;
    }
}

void getFullName(char *name, char *first_name, char *last_name){
	strcat(name, first_name);
	strcat(name, " ");
	strcat(name, last_name);
}