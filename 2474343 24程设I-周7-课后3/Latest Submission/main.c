#include<stdio.h>

int main(){
    int n,i=0;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        int d=1;
        int j=0;
        for(j=0;j<n-i-1;j++){
            printf(" ");

        }
        for(j=0;j<=i;j++){
            if (j>0)
                d=d*((i+1)-j)/j;               
            printf("%d ",d);
        }
    printf("\n");
    }

}