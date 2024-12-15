#include <stdio.h>
extern unsigned int maxNum;
int main(int argc, char *argv[])
{
    
    unsigned int a;
    unsigned int b;

    scanf("%d", &a);
    scanf("%d", &b);

    unsigned int c = maxNum - a + 1;
    unsigned int d = maxNum - b + 1;

    printf("%d\n", c + d);
    return 0;
}