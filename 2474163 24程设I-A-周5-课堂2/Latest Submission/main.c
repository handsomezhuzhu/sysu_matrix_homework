#include<stdio.h>

int main(){
    int money,year;
    float lixi=0;
    scanf("%d %d",&money,&year);
    if(money<1000){
        if(year<=1){
            lixi=money*year*0.005;
        }else{
            lixi=money*year*0.01;
            }
    }else if(money<5000&&money>=1000){
        if(year<=1){
            lixi=money*year*0.01;
        }else{
            lixi=money*year*0.02;
            }
    }else{
        if(year<=1){
            lixi=money*year*0.015;
        }else{
            lixi=money*year*0.03;
            }
    }
    printf("%.2f",lixi);
}