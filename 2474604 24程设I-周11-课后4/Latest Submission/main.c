#include<stdio.h>
#include <string.h>


int main(){
    char str1[201],str2[201];
    scanf("%s",str1);
    scanf("%s",str2);
    int len1 = strlen(str1);
    int len2 = strlen(str2);
    int istr1[len1];
    int istr2[len2];
    for(int i=len1-1;i>=0;i--){
        istr1[len1-1-i] = str1[i]-'0';
    }
    for(int i=len2-1;i>=0;i--){
        istr2[len2-1-i] = str2[i]-'0';
    }

    int sum[len1+len2+2];
    for(int i=0;i<len1+len2+2;i++){
        sum[i] = 0;
    }
    for(int i=0;i<len1;i++){
        for(int j=0;j<len2;j++){
            sum[i+j] += istr1[i]*istr2[j];
        }
    }
    for(int i=0;i<len1+len2+1;i++){
        if(sum[i]>=10){
            sum[i+1]+= sum[i]/10;
            sum[i]=sum[i]%10;
        }
    }
    int start = len1+len2+1;
    while (start >= 0 && sum[start] == 0) {
        start--;
    }
    if(start>=0) {
        for (int i = start; i >= 0; i--) {
            printf("%d", sum[i]);
        }
    }else{
        printf("0");
    }
    return 0;
}