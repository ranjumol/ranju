#include<stdio.h>
void main()
{
	int n,r,sum=0;
	printf("Enter the Number:");
	scanf("%d",&n);
	while(n!=0)
	{
		r=n%10;
		r=r*r;
		sum=sum+r;
		n=n/10;
	}
	printf("\nThe Sum of Square of Digits is %d",sum);
}
