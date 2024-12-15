void findMaxNumber(char *s, int len, int *start){
    int max = 0;
    for(int i = 0; i < len - 2; i++){
        int t = (s[i] - '0')*100+(s[i+1] - '0')*10+(s[i+2]-'0');
        if(t > max){
            max = t;
            *start = i;
        }
    }
}