#include<math.h>
#include <stddef.h>
char *my_strcpy(char *dest, const char *src){
    for(; *src != '\0'; src++, dest++){
        *dest = *src;
    }
    return dest;
}

char *my_strncpy(char *dest, const char *src, size_t n){
    for(; n > 0 && *src != '\0'; src++, dest++, n--){
        *dest = *src;
    }
    return dest;
}

size_t my_strlen(const char *str){
    size_t count = 0;
    for(; *str != '\0'; str++){
        count++;
    }
    return count;
}

int my_strcmp(const char *str1, const char *str2) {
    while (*str1 && (*str1 == *str2)) {
        str1++;
        str2++;
    }
    
    if (*str1 == '\0' && *str2 == '\0') {
        return 0;
    } else if (*str1 > *str2) {
        
        return 1;
    } else {
       
        return -1;
    }
}

int my_strncmp(const char *str1, const char *str2, size_t n){
    for(; n > 0 && *str1 == *str2 && *str1 != '\0'; str1++, str2++, n--){
          if(*str1 == '\0'){
            return 0;
        }
    }
    return (*str1 - *str2);
    
}

char *my_strcat(char *dest, const char *src){
    dest += my_strlen(dest);
    for(; *src != '\0'; src++, dest++){
        *dest = *src;
    }
    *dest = '\0';
    return dest;
}

char *my_strchr(const char *str, int c){
    for(; *str != '\0'; str++) {
        if (*str == c) {
            return (char *) str;
        }
    }
    return NULL;
}

char *my_strstr(const char *s1, const char *s2){
    if (*s2 == '\0') { 
        return (char *)s1;
    }

    for (; *s1 != '\0'; s1++) { 
        const char *p = s2; 
        const char *s = s1; 

        while (*s != '\0' && *p != '\0' && *s == *p) { 
            s++;
            p++;
        }

        if (*p == '\0') { 
            return (char *)s1; 
        }
    }

    return NULL;
}
int my_atoi(const char *str){

    int sign = 1;
    if (*str == '-' || *str == '+') {
        sign = (*str == '-') ? -1 : 1;
        str++;
    }
    int result = 0;
    for(; *str >= '0' && *str <= '9'; str++){
        result = result * 10 + (*str - '0');
    }
    return sign * result;
}

double my_atof(const char *str) {
    double sign = 1;
    if (*str == '-' || *str == '+') {
        sign = (*str == '-') ? -1 : 1;
        str++;
    }
    double result0 = 0.0;
    for(; *str >= '0' && *str <= '9'; str++){
        result0 = result0 * 10 + (*str - '0');
    }
    str++;
    if(str[0] == '.'){
        str++;
    }
    double result1 = 0.0;
    int count = 0;
    for(; *str >= '0' && *str <= '9'; str++){
        result1 = result1 * 10 + (*str - '0');
        count++;
    }
    return sign * (result0 + result1 / pow(10, count));
    

}