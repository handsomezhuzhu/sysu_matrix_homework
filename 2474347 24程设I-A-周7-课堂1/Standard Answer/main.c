#include<stdio.h>
#include"func.h"
int main(){
    int a1,a2;
    int b1,b2;
    scanf("(%d,%d) (%d,%d)",&a1,&a2,&b1,&b2);
    print_add(a1,a2,b1,b2);
    print_minus(a1,a2,b1,b2);
    print_mul(a1,a2,b1,b2);
    return 0;
}