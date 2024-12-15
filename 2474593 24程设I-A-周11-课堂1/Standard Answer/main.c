#include "find_last_word_length.h"
#include <stdio.h>

int main() {
    char s[1001];

    scanf("%[^\n]", s);  // 读取包括空格的字符串，直到遇到换行符

    int result = find_last_word_length(s);
    printf("%d\n", result);

    return 0;
}