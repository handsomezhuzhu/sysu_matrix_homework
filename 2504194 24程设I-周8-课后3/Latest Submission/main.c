#include<stdio.h>
#include <string.h>


int main(){
    char a[100],b[100],cc;

    scanf("%s",a);
    int n=strlen(a);
    int c=1;
    int i=0;
    for (int j = 0; j < n; j++) {
        if (j + 1 < n && a[j] == a[j + 1]) {
            c++;
        } else {
            b[i]=a[j];
            cc=c+'0';
            b[i+1]=cc;
            c=1;
            i=i+2;
        }
    }


    if(strlen(a)< strlen(b)){
        printf("%s",a);

    }else{
        printf("%s",b);
    }
}