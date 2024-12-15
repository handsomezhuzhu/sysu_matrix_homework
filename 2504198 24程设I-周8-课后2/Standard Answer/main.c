#include <stdio.h>
#include <stdlib.h>
#include "solution.h"
int main()
{
    int m,n,i,j;
    scanf("%d%d",&m,&n);
    int **matrix=(int**)malloc(sizeof(int*)*m); 
    for(i=0; i<m; i++)  
        matrix[i]=(int*)malloc(sizeof(int)*n);
    for(i=0; i<m; i++)  
    {
        for(j=0; j<n; j++)  
        {
            scanf("%d",&matrix[i][j]);     
        }
    }
    spiralOrder(matrix,m,n);
    for(i=0; i<m; i++)  
        free(matrix[i]);
 
    free(matrix);
    return 0;
}