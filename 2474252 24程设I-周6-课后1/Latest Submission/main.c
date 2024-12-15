#include<stdio.h>

int main(){
    int n,b=0;
    scanf("%d",&n);

    for(int i=1;i<n;i++){
        if(i%2!=0){
            if(i%7==0){
                continue;
            }
            printf("%d ",i);
            if(i>(n/2)){
                break;
            }
            //printf("%d ",i);
        }
    }
    
}