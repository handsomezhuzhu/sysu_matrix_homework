#include<stdio.h>

int main(){
    float high,weight,IBM;
    scanf("%f %f",&high,&weight);
    IBM=weight/(high*high);
    if(IBM>=18.5&&IBM<=25){
        printf("您的体重正常");
    }else{
        printf("您的体重偏离正常范围");
    }


}