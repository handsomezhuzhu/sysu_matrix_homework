#include <string.h>
int indexOf(const char *s1, const char *s2){

    char *pos = strstr(s2, s1);
    if (pos != NULL) {
        return pos - s2;
    } else {
        return -1;
    }
}