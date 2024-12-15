#include <stdio.h>
int main()
{
	int i,k,m,mm,n,num[100],*p;
	scanf("%d", &n);
	scanf("%d", &mm);
	p = num;
	for(i=0; i<n; i++)
		*(p+i) = i+1;
	i=0;
	k=0;
	m=0;
	while(m < n-1)
	{
		if(*(p+i) != 0) k++;
		if(k==mm)
		{
			*(p+i) = 0;
			k=0;
			m++;

		}
		i++;
		if(i==n) i=0;
	}
	while(*p==0) p++;
	printf("%d", *p);
	return 0;


}
