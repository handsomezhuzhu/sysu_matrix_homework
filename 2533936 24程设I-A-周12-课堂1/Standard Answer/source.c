#include<string.h>
#include "source.h"

int indexOf(const char *s1, const char *s2)
{
    int len1 = strlen(s1);
    int len2 = strlen(s2);

    for(int i=0; i<len2-len1+1; ++i){
        int issubstr = 1;
        for(int j=0; j<len1; ++j)
            if(s1[j] != s2[i+j]){
                issubstr = 0;
                break;
            }
        if(issubstr)
            return i;              
    }
    return -1;
}
