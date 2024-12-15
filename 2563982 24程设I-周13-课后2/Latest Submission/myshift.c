void myshift(char *s) {
    int len = strlen(s);
    char temp[1001];
    int j = 0;

    for (int i = 0; i < len; i += 2) {
        temp[j++] = s[i];
    }


    for (int i = 1; i < len; i += 2) {
        temp[j++] = s[i];
    }

    temp[j] = '\0'; 
    for (int i = 0; i < j; i++) {
        s[i] = temp[i];
    }
    
}