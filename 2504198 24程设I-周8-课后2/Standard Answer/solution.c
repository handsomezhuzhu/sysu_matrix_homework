#include<stdio.h>
int min(int a, int b)
{
    if(a<b)
    return a;
    else
    return b;
}
void spiralOrder(int **matrix, int m, int n)
{
        int left=0,right=n,up=0,down=m;
        for(int qq=0;qq<(min(m,n)+1)/2;++qq){
             for(int i=left;i<right;++i){//左右
                 printf("%d ", matrix[up][i]);
             }
            for(int j=up+1;j<down;++j){//上下
                printf("%d ", matrix[j][right-1]);
            }
            if(down-up!=1)for(int k=right-2;k>=left;--k){//右左
                printf("%d ", matrix[down-1][k]);
            }
            if(right-left!=1)for(int l=down-2;l>up;--l){//下上
                printf("%d ", matrix[l][left]);
            }
            left++;right--;up++;down--;
        }
        return;
}

