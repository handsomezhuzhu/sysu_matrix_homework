#include<stdio.h>
#include <string.h>

void sort(int a[], int n) {
    for (int i = 0; i < n; i++) {
        for (int j = i; j < n; j++) {
            if (a[i] > a[j]) {
                int temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
}


int main(){
    int a1[100]={987654},a2[100]={987654};
    int n1=0,n2=0;
    for(int i=0;i<100;i++){
        scanf("%d",&a1[i]);
        n1++;
        if(getchar()=='\n')
            break;
    }

    for(int i=0;i<100;i++){
        scanf("%d",&a2[i]);
        n2++;
        if(getchar()=='\n')
            break;
    }

    int a[200];
    for(int i=0;i<n1;i++){
        a[i]=a1[i];
    }
    for(int i=n1;i<n1+n2;i++){
        a[i]=a2[i-n1];
    }

    sort(a,n1+n2);
    //int nn=0;
    for(int i=0;i<n1+n2;i++){
        if(a[i]==987654||a[i]==0){
            continue;
        }
        printf("%d ",a[i]);
        //nn++;

    }
    return 0;
}