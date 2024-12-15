#include <stdio.h>

#include "func.h"

int main() {
    char first_name[20];
    char last_name[20];
	
	char name[100];
	strcpy(name,"");

    scanf("%99s", first_name); 
    scanf("%99s", last_name); 

    // 格式化 first_name 和 last_name
    formatWord(first_name);
    formatWord(last_name);
    
	// 拼接 first_name 和 last_name 得到完整的名字 name 
	getFullName(name, first_name, last_name); 

	printf("%s", name);

    return 0;
}