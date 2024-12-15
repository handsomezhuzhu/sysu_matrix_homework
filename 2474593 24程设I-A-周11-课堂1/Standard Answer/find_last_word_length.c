#include <string.h>
int find_last_word_length(char *s) {
    int len = strlen(s);
    int last_word_length = 0;
    int in_word = 0;

    // 从字符串末尾开始遍历
    for (int i = len - 1; i >= 0; i--) {
        if (s[i] != ' ') {
            in_word = 1; // 正在单词内
            last_word_length++;
        } else if (in_word) {
            // 如果已经遇到了单词，且遇到了空格，说明统计完毕
            break;
        }
    }

    return last_word_length;
}
