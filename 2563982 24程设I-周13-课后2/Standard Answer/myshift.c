#include <stdio.h>
#include <string.h>
#include "myshift.h"

void myshift(char *s){
    int len=strlen(s);
    int len1=0;
    int len2=0;
    char tmp[105];
    for(int i=0;i<len;i++){
        if(i%2==0){
            s[len1]=s[i];
            len1++;
        }
        else{
            tmp[len2]=s[i];
            len2++;
        }
    }
    for(int i=0;i<len2;i++)
        s[i+len1]=tmp[i];
}