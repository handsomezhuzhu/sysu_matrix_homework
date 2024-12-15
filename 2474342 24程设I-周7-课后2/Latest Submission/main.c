#include<stdio.h>

int main(){
    int k,temp1,temp2;
    long int a=1,b=2,c=3;
    scanf("%d",&k);
    if(k==1){
        printf("%d",a%32767);
    }else if(k==2){
        printf("%d",b%32767);
    }else if(k==3){
        printf("%d",c%32767);
    }else{
        for(int i=3;i<k;i++){
        
            temp1=c;
            temp2=b;
            c=2*c+a;
            b=temp1;
            a=temp2;
        }
            int e=c%32767;
            printf("%d",e);
    }
}