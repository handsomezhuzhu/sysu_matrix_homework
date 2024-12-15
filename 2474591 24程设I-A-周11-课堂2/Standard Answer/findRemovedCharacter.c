#include <string.h>

char findRemovedCharacter(char* s, char* t) {
    int charCount[26] = {0};
    int len1 = strlen(s);
    int len2 = strlen(t);

    // 统计字符串s中每个字母的出现次数
    for (int i = 0; i < len1; ++i) {
        charCount[s[i] - 'a']++;
    }
    
    // 统计字符串t中每个字母的出现次数并减去
    for (int i = 0; i < len2; ++i) {
        charCount[t[i] - 'a']--;
    }

    // 找到出现次数不为0的字母
    for (int i = 0; i < 26; ++i) {
        if (charCount[i] != 0) {
            return 'a' + i;
        }
    }
    return '\0';
}