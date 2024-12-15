#include <stdio.h>
#include <string.h>

int main() {
    char str1[201],str2[201];
    scanf("%s\n%s",str1,str2);
    int len1=strlen(str1);
    int len2=strlen(str2);
    int find[len1+1][len2+1];
    int max=0;//The max length
    int end=0;
    for(int i=1;i<=len1;i++){
        for(int j=1;j<=len2;j++){
            if(str1[i-1]==str2[j-1]){
                find[i][j]=find[i-1][j-1]+1;
                if(find[i][j]>max){
                    max=find[i][j];
                    end=i;
                }
            }else{
                find[i][j]=0;
            }

        }
    }
    if(max==0){
        printf("没有公共子串");
    }else{
        char temp[max+1];
        printf("%s",strncpy(temp, str1+end-max, max));
    }
    return 0;
}

