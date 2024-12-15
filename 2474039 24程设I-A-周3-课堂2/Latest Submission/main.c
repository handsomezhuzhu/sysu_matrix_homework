#include <stdio.h>
int main(){
    char SECRET_1[256];
    scanf("%s",SECRET_1);
    extern char SECRET_2[];
    extern char SECRET_3[];
    printf("%s%s%s",SECRET_1,SECRET_2,SECRET_3);
	return 0;
} 