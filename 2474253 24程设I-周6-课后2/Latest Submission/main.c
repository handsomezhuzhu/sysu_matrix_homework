#include<stdio.h>

int GCD(int a, int b){
    int c;
    while(a%b!=0){
        c=b;
        b=a%b;
        a=c;
    }
    return b;
}

int LCM(int a,int b){
    int lcm=(a*b)/GCD(a,b);
    return lcm;
}



int main(){
    int a,b;
    scanf("%d %d",&a,&b);
    printf("GCD: %d\n",GCD(a,b));
    printf("LCM: %d",LCM(a,b));
}