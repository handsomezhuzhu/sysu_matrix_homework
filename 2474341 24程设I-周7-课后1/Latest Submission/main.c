#include<stdio.h>
#include<math.h>

int num(int a){
    int sum=0;
    while(a!=0){
        a=a/10;
        sum++;
    }
    return sum;
}

int zimi(int n,int a){
    int sum=0;
    for(int i=1;i<=n;i++){
        sum=sum+pow(a%10,n);
        a=a/10;
    }
    return sum;
}

int main(){
    for(int i=0;i<1000;i++){
        int n=num(i);
        if(i==zimi(n,i)){
            printf("%d\n",i);
        }

    }
}