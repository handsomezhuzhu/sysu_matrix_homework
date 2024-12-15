#include <stdio.h>  
#include <stdlib.h>  
#include <string.h>  
#include "func.h"  

int main() {  
    char s[100]; 
    char t[100];  
    
    scanf("%s", s);  
    scanf("%s", t);  
    
    int result = findPermutationDifference(s, t);  
    printf("%d", result); 

    return 0;  
} 