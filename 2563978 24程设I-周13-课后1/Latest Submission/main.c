#include<stdio.h>
#include <string.h>

int maxstrlength_no(char s[], char t[]){
    int sn=strlen(s);
    int tn=strlen(t);
    int sum=0;
    int maxsum=0;
    int start=0;
    int count=0;
    for(int i=0;i<sn;i++) {
        for(int j=0;j<tn;j++) {
            if(j+i>sn-1) {
                break;
            }
            if(s[j+i]==t[j]) {
                count++;
                sum++;
                if(sum>maxsum) {
                    maxsum=sum;
                }
            }else{
                count=0;
                sum=0;
                break;
            }
            if(count==tn) {
                count=0;
                if(i+tn<=sn) {
                    i=i+tn-1;

                }
            }


        }

    }
    return maxsum;
}

int maxstrlength_yes(char s[], char t[]){
    int sn=strlen(s);
    int tn=strlen(t);
    int sum=0;
    int maxsum=0;
    int start=0;
    int count=0;
    for(int i=0;i<sn-tn+1;i++) {
        for(int j=0;j<tn;j++) {
            if(j+i>sn-1) {
                break;
            }
            if(s[j+i]==t[j]) {
                count++;
                sum++;
                if(sum>maxsum) {
                    maxsum=sum;
                }
            }else{
                count=0;
                sum=0;
                break;
            }
            if(count==tn&&i+tn<sn) {
                i=i+tn-1;
            }

        }

    }
    return maxsum;
}
int main(){
    int n;
    scanf("%d", &n);
    char s[2*n][10001];
    for(int i=0;i<2*n;i++){
        scanf("%s", s[i]);
    }
    for(int i=0;i<2*n-1;i+=2){
        if(strlen(s[i])==strlen(s[i+1])) {
            printf("%d\n", maxstrlength_yes(s[i], s[i + 1]));
        }else {
            printf("%d\n", maxstrlength_no(s[i], s[i + 1]));
        }
    }
    return 0;
}