#include <stdio.h>

int main()
{
    int x,y;
    scanf("%d%d",&x,&y);
    int z = x*y;

    scanf("%d%d",&x,&y);
    int m = x*y;
    printf("%d\n", m+z);
    return 0;
}