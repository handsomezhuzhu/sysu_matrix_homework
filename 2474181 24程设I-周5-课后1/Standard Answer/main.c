#include <stdio.h>

int main()
{
    int x,y,z,t,m;
    scanf("%d%d%d",&x,&y,&z);
    if (x>y)
    {
        t=x;
        x=y;
        y=t;
    }
    if (x>z)
    {
        t=z;
        z=x;
        x=t;
    }
    if (y>z)
    {
        t=y;
        y=z;
        z=t;
    }
    m = z - x;
    printf("%d\n",x);
    printf("%d\n",m);

}
