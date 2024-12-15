#include <stdio.h>
int main(){
    char a1[5],a2[256],a3[9],a4[256],a5[4095];
    scanf("%s",&a1);
    scanf("%s",&a2);
    scanf("%s",&a3);
    scanf("%s",&a4);
    scanf("%s",&a5);
    printf("%s %s %s\r\n",a1,a2,a3);
    printf("Host:%s\r\n",a4);
    printf("\r\n");
    printf("%s",a5);
	return 0;
} 