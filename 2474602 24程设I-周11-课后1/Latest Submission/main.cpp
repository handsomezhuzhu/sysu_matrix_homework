#include <stdio.h>
#include <string.h>

int huiwen(char s[]) {
    int n = strlen(s);
    for (int i = 0; i < n / 2; i++) {
        if (s[i] != s[n - i - 1]) {
            return 0;
        }
    }
    return 1;
}

int main() {
    char a[101];
    scanf("%s", a);
    int n = strlen(a);
    int maxlen = 0;
    char max[101] = ""; 

    for (int i = 0; i < n; i++) {
        for (int j = i; j < n; j++) {
            int len = j - i + 1;
            char t[len + 1]; 
            strncpy(t, a + i, len); 
            t[len] = '\0'; 

            if (huiwen(t) && len > maxlen) {
                maxlen = len;
                strcpy(max, t);
            }
        }
    }

    printf("%s", max); 
    return 0;
}