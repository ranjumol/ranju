#include <stdio.h>

int main()
{char a[10000],t;
int i,j;
    scanf("%[^\n]s",a);
    for(i=0;a[i]!='\0';i++)
    {
    	if(a[i]!=' ')
    	{
		
    if(a[i]>='a'&&a[i]<='z')
    a[i]=a[i]-32;
    else
     a[i]=a[i]+32;
 }
    }
printf(" %s",a);
    return 0;
}
