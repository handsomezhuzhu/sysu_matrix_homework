#include<stdio.h>




int main(){
    int n,s0=0,b=0,site=0;
    scanf("%d",&n);
    if(n==0){
        b=1;     
    }
    while(b==0){

        if((n&1)==0){
            n>>=1;
            s0++;
            site++;
        }else{
            n>>=1;
            site++;

        }
        if(n==0){
            b=1;
        }
    }
    printf("%d %d",site,s0);





    

}