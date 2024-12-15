#include <stdio.h>
#include <string.h>
#include "myshift.h"

int main(){
    char s[105];
    scanf("%s",s);
    myshift(s);
    printf("%s",s);
    return 0;
}