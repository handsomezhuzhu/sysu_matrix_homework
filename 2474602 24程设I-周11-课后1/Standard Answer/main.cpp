#include <stdio.h>
#include <string.h>

// 辅助函数：扩展回文并返回长度
int expandAroundCenter(char *s, int left, int right) {
    while (left >= 0 && right < strlen(s) && s[left] == s[right]) {
        left--;
        right++;
    }
    return right - left - 1;
}

// 查找最长回文子串
void longestPalindrome(char *s, char *result) {
    int start = 0, maxLen = 0;
    int len = strlen(s);
    
    for (int i = 0; i < len; i++) {
        int len1 = expandAroundCenter(s, i, i);     // 以单个字符为中心
        int len2 = expandAroundCenter(s, i, i + 1); // 以两个字符之间为中心
        int curLen = len1 > len2 ? len1 : len2;
        
        if (curLen > maxLen) {
            maxLen = curLen;
            start = i - (curLen - 1) / 2;
        }
    }
    
    strncpy(result, s + start, maxLen);
    result[maxLen] = '\0';  // 确保结果字符串以 '\0' 结尾
}

int main() {
    char input[101];
    char result[101];
    
    scanf("%100s", input);  // 读取最多100个字符，避免溢出

    longestPalindrome(input, result);
    printf("%s\n", result);
    
    return 0;
}
