#include "source.h"
#include <stdio.h>
#include <string.h>

int main()
{
    char s1[80];
    scanf("%s",s1);
    char s2[80];
    scanf("%s",s2);
    printf("%d\n", indexOf(s1, s2));
    return 0;
}
