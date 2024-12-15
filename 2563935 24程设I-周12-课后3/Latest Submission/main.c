#include<stdio.h>
#include <string.h>
#include <math.h>

int huiwen(char s[]) {
    int n = strlen(s);
    for (int i = 0; i < n / 2; i++) {
        if (s[i] != s[n - i - 1]) {
            return 0;
        }
    }
    return 1;
}

int main(){
    char a[10000];
    float count=0;
    scanf("%s",a);
    int len=strlen(a);
    char aa[len+1];
    strcpy(aa,a);

    while(huiwen(aa)==1){
        count++;
        strcpy(aa,aa+len/2);
        len=strlen(aa);
        if(aa[0]=='\0'){
            break;
        }
        if(len==1){
            break;
        }
    }
    printf("%.0lf",pow(2,count));
    return 0;
}