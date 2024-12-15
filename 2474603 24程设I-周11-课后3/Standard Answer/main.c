#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char* longestCommonSubstring(const char* str1, const char* str2) {
    int len1 = strlen(str1);
    int len2 = strlen(str2);
    
    if (len1 == 0 || len2 == 0) {
        return "";  // 如果其中一个字符串为空，返回空字符串
    }

    static char longestCommon[200];  
    longestCommon[0] = '\0';  

    for (int r = len1; r > 0; r--) { 
        for (int i = 0; i <= len1 - r; i++) {  
            char sub[r + 1];
            strncpy(sub, str1 + i, r); 
            sub[r] = '\0';  

           
            if (strstr(str2, sub) != NULL) {
                strcpy(longestCommon, sub); 
                return longestCommon;  
            }
        }
    }
    
    return "";  
}

int main() {
    char str1[200], str2[200];

    scanf("%s %s", str1, str2);

    char* commonSubstring = longestCommonSubstring(str1, str2);

    if (strlen(commonSubstring) > 0) {
        printf("%s\n", commonSubstring);
    } else {
        printf("没有公共子串\n");
    }

    return 0;
}




