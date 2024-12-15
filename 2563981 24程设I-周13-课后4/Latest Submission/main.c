#include<stdio.h>
#include <string.h>
#include <ctype.h>

void reverse(char s[], int start, int end){
    //s[end+1] = '\0';
    while(start < end){
        char temp = s[start];
        s[start] = s[end];
        s[end] = temp;
        start++;
        end--;
    }

}
void reverseWords(char *sentence){
    char *s = sentence;
    //strcspn(s, "\n");
    int n = 0;
    char temp[100][100]={""};
    int j = 0;
    int sum= strlen(s);
    for(int i =0; i < sum; i++){
        if(isspace(s[i])||ispunct(s[i])){
            reverse(temp[n], 0, j-1);
            printf("%s", temp[n]);
            printf("%c", s[i]);
            n++;
            j=0;
            continue;
        }
        temp[n][j] = s[i];
        j++;
    }
    reverse(temp[n], 0, j-1);
    printf("%s", temp[n]);
}
int main(){
    char s[1000];
    gets(s);
    reverseWords(s);
    return 0;
}