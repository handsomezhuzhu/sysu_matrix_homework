#include<stdio.h>
int digui(int x){
    if(x==1){
        return 1;
    }
    x-=1;
    int ret=0;
    while(x>0)
    {
        ret+=digui(x);
        x-=2;
    }
    return ret;
}
int main(){
    int x;
    scanf("%d",&x);
    printf("%d",digui(x));
    return 0;
}
