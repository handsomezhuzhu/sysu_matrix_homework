#include<stdio.h>



double math(double a,double b,char c){
    if(c=='+'){
        return a+b;
    }else if(c=='-'){
        return a-b;
    }else if(c=='*'){
        return a*b;
    }else if(c=='/'){
        return a/b;
    }
}

int main(){
    int c;
    scanf("%d",&c);
    double a[c],b[c];
    char ch[c];

    for(int i=0;i<c;i++){
        scanf("%lf %lf %s",&a[i],&b[i],&ch[i]);
    }
    for(int i=0;i<c;i++){
        if(ch[i]=='/'&&b[i]==0.0){
            printf("除数不能为0\n");
            continue;
        }
        if(ch[i]!='+'&&ch[i]!='-'&&ch[i]!='*'&&ch[i]!='/'){
            printf("无效的操作符\n");
            continue;
        }
        double result=math(a[i],b[i],ch[i]);
        printf("%.2lf\n",result);
    }
}