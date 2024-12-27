#include<stdio.h>


void quchu(int* s, int len, int size_x) {
    for (int i = size_x; i < len - 1; i++) {
        s[i] = s[i + 1];
    }
}

void charu(int* s, int len, int size_y, int x) {
    for (int i = len; i > size_y; i--) {
        s[i] = s[i - 1];
    }
    s[size_y] = x;
}

void move_1(int s[],int len,int x,int y){//移动盒子编号 X 到盒子编号 Y 的左边（如果 X 已经在 Y 的左边则忽略该操作）
    int size_x,size_y;
    int jc1=0,jc2=0;
    for (int i = 0; i < len; i++) {
        if (s[i] == x) {
            size_x = i;
            jc1=1;
        }
        if (s[i] == y) {
            size_y = i;
            jc2=1;
        }
        if(jc1==1&&jc2==1){
            break;
        }
    }
    if(size_x==size_y-1){
        return;
    }else if(size_x<size_y){
        quchu(s,len,size_x);
        charu(s,len+1,size_y-1,x);
    }else{
        quchu(s,len,size_x);
        charu(s,len+1,size_y,x);

    }
}

void move_2(int s[],int len,int x,int y) {//移动盒子编号 X 到盒子编号 Y 的右边（如果 X 已经在 Y 的右边则忽略该操作）
    int size_x, size_y;
    int jc1=0,jc2=0;
    for (int i = 0; i < len; i++) {
        if (s[i] == x) {
            size_x = i;
            jc1=1;
        }
        if (s[i] == y) {
            size_y = i;
            jc2=1;
        }
        if(jc1==1&&jc2==1){
            break;
        }
    }
    if (size_x == size_y + 1) {
        return;
    } else if(size_x<size_y){
        quchu(s, len, size_x);
        charu(s, len + 1, size_y, x);
    }else{
        quchu(s, len, size_x);
        charu(s, len + 1, size_y, x);
    }
}

void move_3(int s[],int len,int x,int y){
    // 交换盒子编号 X 与盒子编号 Y 的位置
    int size_x,size_y;
    int jc1=0,jc2=0;
    for (int i = 0; i < len; i++) {
        if (s[i] == x) {
            size_x = i;
            jc1=1;
        }
        if (s[i] == y) {
            size_y = i;
            jc2=1;
        }
        if(jc1==1&&jc2==1){
            break;
        }
    }
    int temp=x;
    s[size_x]=y;
    s[size_y]=temp;


}

int sumodd(int s[],int len){
    int sum=0;
    for(int i=0;i<len;i=i+2){
        sum+=s[i];

    }
    return sum;
}
int main(){
    int sum,n;

    scanf("%d %d",&sum,&n);
    int s[sum];
    int move[n],x[n],y[n];
    for(int i=0;i<n;i++){
        scanf("%d %d %d",&move[i],&x[i],&y[i]);
    }
    for(int i=0;i<sum;i++){
        s[i]=i+1;
    }
    for(int i=0;i<n;i++){
        if(move[i]==1){
            move_1(s,sum,x[i],y[i]);
        }else if(move[i]==2){
            move_2(s,sum,x[i],y[i]);
        }else{
            move_3(s,sum,x[i],y[i]);
        }
    }
    printf("%d\n",sumodd(s,sum));
    return 0;
}