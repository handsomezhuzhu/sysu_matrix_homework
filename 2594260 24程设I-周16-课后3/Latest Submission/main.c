#include<stdio.h>
#include <string.h>

int chongfu(char str[]){
    for(int i=0;i<strlen(str);i++){
     if(str[i]==str[i+1]){
         return 1;
     }
    }
    return 0;
}

int chongfu_site(char str[]){
    for(int i=0;i<strlen(str);i++){
        if(str[i]==str[i+1]){
            return i;
        }
    }
    return 0;
}
void delstr(char str[],int station,int len){
    for(int i=station;i<len;i++){
        str[i]=str[i+1];
    }

}
int main(){
    char str[20000];
    scanf("%s",str);
    while (chongfu(str)==1){
        int station=chongfu_site(str);
        delstr(str,station,strlen(str));
        delstr(str,station,strlen(str));
    }
    printf("%s",str);
    return 0;
}