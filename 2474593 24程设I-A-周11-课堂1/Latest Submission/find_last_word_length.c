int find_last_word_length(char *s){
    int cnt=0;
    int n=strlen(s);
    if(n==0){
        return 0;
    }
    for(int i=0;i<n;i++){
       
        cnt++;
        if(s[i]==' '){
            cnt=0;
        }
        
    }
    return cnt;
}