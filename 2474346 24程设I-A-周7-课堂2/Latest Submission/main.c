#include<stdio.h>

int digui(int a){
    int sum=0;
    if(a==1){
        return 1;
    }else if(a==2){
        return 1;
    }else if(a%2==0){
        a=a-1;
        for(int i=a;i>=1;i-=2){
            sum=sum+digui(i);
        }
    }else{
        a=a-1;
        for(int i=a;i>=2;i-=2){
            sum=sum+digui(i);
        }
    }
    return sum;
}

int main(){
    int n;
    scanf("%d",&n);
    printf("%d",digui(n));
}