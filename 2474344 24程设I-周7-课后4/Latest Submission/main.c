#include<stdio.h>

int fen(int a){
    if(a%3==0&&a/3>=2){
        a=a/3;
        return 3*fen(a);
    }else if((a-2)%3==0&&(a-2)/3>=2){
        a=(a-2)/3;
        return fen(a)*3+1;
    }else{
        return 1;
    }
}


int main(){
    int n;
    scanf("%d",&n);
    printf("%d",fen(n));
}