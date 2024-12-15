#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "findMaxNumber.h"

char s[MAX_SIZE];

void removeNumber(char *s, int len, int start) {
    for (int i = start; i < len - 2; i++) {
        s[i] = s[i + 3];
    }
    s[len - 2] = '\0';
}

int main() {
    scanf("%s", s);

    int len = strlen(s);
    int start = 0;
    findMaxNumber(s, len, &start);
    removeNumber(s, len, start);

    printf("%s\n", s);

    return 0;
}