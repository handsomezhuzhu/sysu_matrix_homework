#include <stdio.h>

int main() {
    int a[101];
    for(int i = 0; i < 101; i++){
        scanf("%d", &a[i]);
    }
    int k=a[100];
    int max=100-k+1;
    int site;
    for(int i = 0; i < 100; i++){
        if(a[i] == max){
            site=i+1;
            break;
        }
    }
    printf("第%d大的数是%d\n",k,max);
    printf("位置是%d",site);

    return 0;
}
