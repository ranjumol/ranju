#include<stdio.h>
void main()
{
	long int m,n,count=0,i,j;
	scanf("%d %d",&m,&n);
	for(i=m;i<=n;i++)
	{
		for(j=2;j<10000;j++)
		{
			if(j*j==i)
			count++;
		}
	}
	printf(" %d",count);
}
