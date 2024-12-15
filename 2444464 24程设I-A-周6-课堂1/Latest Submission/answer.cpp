#include<stdio.h>

int main(){
    int a[100];
    double ema=0;
    for(int i=0;i<100;i++){
        scanf("%d",&a[i]);
        if(a[i]==0){
            
            break;
        }
    }
    ema=a[0];
    for(int i=1;i<100;i++){
        if(a[i]==0){
            break;
        }

        ema=ema*0.9+a[i]*0.1;
    }
    printf("%.2lf",ema);
}