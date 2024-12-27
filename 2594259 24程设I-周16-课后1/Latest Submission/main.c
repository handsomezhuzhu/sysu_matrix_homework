#include<stdio.h>
#include <string.h>

void delstr(char str[],int station,int len){
    for(int i=station;i<len;i++){
        str[i]=str[i+1];
    }

}

int main(){
    char str[20000];
    scanf("%s",str);
    for(int i=0;i<strlen(str);i++){
        if(str[i]=='*'){
            if(i==0){
                delstr(str,i,strlen(str));
                continue;
            }
            printf("%c ",str[i-1]);
            delstr(str,i-1,strlen(str));
            i=i-1;
            delstr(str,i,strlen(str));
            i=i-1;
        }
    }
    return 0;
}