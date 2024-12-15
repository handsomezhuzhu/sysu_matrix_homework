#include <stdio.h>
#include <string.h>
#include <ctype.h>

// 函数用于反转单个单词
void reverseWord(char *start, char *end) {
    char temp;
    while (start < end) {
        // 交换首尾字符
        temp = *start;
        *start = *end;
        *end = temp;

        // 移动指针
        start++;
        end--;
    }
}

// 函数用于反转句子中的每个单词
void reverseWords(char *sentence) {
    int length = strlen(sentence);
    int start = 0;

    // 遍历整个句子
    for (int i = 0; i <= length; i++) {
        // 当遇到空格或者标点符号时，反转当前单词
        if (isspace(sentence[i]) || ispunct(sentence[i]) || sentence[i] == '\0') {
            reverseWord(&sentence[start], &sentence[i - 1]);
            start = i + 1; // 下一个单词的起始位置
        }
    }
}

int main() {
    // 定义一个足够大的数组来存储用户输入的句子
    char sentence[1000];

    // 提示用户输入句子
    //printf("请输入句子: ");
    // 使用 fgets 函数接收用户输入，更安全（注意：fgets 会包含换行符，需要处理）
    fgets(sentence, sizeof(sentence), stdin);

    // 移除换行符
    sentence[strcspn(sentence, "\n")] = '\0';

    // 调用函数反转单词
    reverseWords(sentence);

    // 输出反转后的句子
    printf("%s", sentence);

    return 0;
}
