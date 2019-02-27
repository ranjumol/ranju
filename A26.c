#include <stdio.h>

int main(void) 
{
	char str[20];
	int a;
	scanf("%[^\n]s",str);
	for(a=0;str[a]!='\0';a++)
	{
		if(str[a]==' ')
		{
			str[a]='$';
			break;
		}
	}
	for(a=0;str[a]!='\0';a++)
	{
		if(str[a]==' ')
		{
			str[a]='+';
		}
	}
	for(a=0;str[a]!='\0';a++)
	{
	if(str[a]=='$')
	{
		str[a]=' ';
	}
	if(str[a]!='+')
	{
	printf(" %c",str[a]);
	}
	}
	return 0;
}
