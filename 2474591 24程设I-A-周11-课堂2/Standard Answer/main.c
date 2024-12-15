#include <stdio.h>
#include "findRemovedCharacter.h"

int main() {
    char s[101], t[101];
    scanf("%s %s", s, t);
    char removedChar = findRemovedCharacter(s, t);
    printf("%c\n", removedChar);
    return 0;
}
