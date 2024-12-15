#include<stdio.h>

int GCD(int a,int b){
    int c;
    while(a%b!=0){
    c=b;
    b=a%b;
    a=c;
    }
    return b;

}

int pri(int a){
    int b=0;
    for(int i=2;i<a;i++){
        if(a%i==0){
            b=1;
        }
    }
    return b;
}

int main(){
    int a,b,c,n=0,t;
    scanf("%d %d",&a,&b);
    if(a>b){
        t=b;
        b=a;
        a=t;

    }
    for(int i=a;i<=b;i++){
        c=pri(i);
        if(c==0){
            n++;
        }
    }
    printf("%d\n",n);
    for(int j=1;j<=a;j++){
        if(a%j==0&&b%j==0){
            printf("%d ",j);
        }
    }

}